class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> need, window;

        // Step 1: store required frequencies
        for (char c : t) need[c]++;

        int formed = 0;                 // how many chars are satisfied
        int required = need.size();     // total unique chars

        int l = 0;
        int minLen = INT_MAX;
        int start = 0;

        for (int r = 0; r < s.size(); r++) {
            char c = s[r];
            window[c]++;

            // Step 2: check if this char just got satisfied
            if (need.count(c) && window[c] == need[c]) {
                formed++;
            }

            // Step 3: try shrinking when valid
            while (formed == required) {

                // update answer
                if (r - l + 1 < minLen) {
                    minLen = r - l + 1;
                    start = l;
                }

                char leftChar = s[l];
                window[leftChar]--;

                // Step 4: check if we broke a requirement
                if (need.count(leftChar) && window[leftChar] < need[leftChar]) {
                    formed--;
                }

                l++;
            }
        }

        return minLen == INT_MAX ? "" : s.substr(start, minLen);
    }
};