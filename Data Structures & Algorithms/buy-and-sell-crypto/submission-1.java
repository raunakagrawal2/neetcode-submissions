class Solution {
    public int maxProfit(int[] prices) {
        int len = prices.length;
        int[] min = new int[len];
        int[] max = new int[len];
        min[0] = prices[0];
        max[len-1] = prices[len-1];
        int lmin = min[0];
        int lmax = max[len-1];
        for(int i=1;i<len;i++){
            if(prices[i]<lmin){
                lmin = prices[i];
            }
            if(prices[len-1-i]>lmax){
                lmax = prices[len-1-i];
            }
                min[i] = lmin;
                max[len-1-i] = lmax;
        }
        int ans = 0;
        for(int i=0;i<len;i++){
            ans = Math.max(ans,max[i]-min[i]);
        }
        return ans;
    }
}
