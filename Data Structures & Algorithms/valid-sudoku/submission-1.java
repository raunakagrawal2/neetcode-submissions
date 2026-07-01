class Solution {
    public boolean isValidSudoku(char[][] board) {
        Set<Character>[] rows = new HashSet[9];
        Set<Character>[] cols = new HashSet[9];
        Set<Character>[][] box = new HashSet[3][3];

        for(int i =0;i<9;i++){
            rows[i] = new HashSet<>();
            cols[i] = new HashSet<>();
        }
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                box[i][j] = new HashSet<>();
            }
        }

        for(int i =0;i<9;i++){
            for(int j=0;j<9;j++){
                char c = board[i][j];
                if(c=='.'){
                    continue;
                }
                if(rows[i].contains(c) || cols[j].contains(c) || box[i/3][j/3].contains(c)){
                    return false;
                }

                rows[i].add(c);
                cols[j].add(c);
                box[i/3][j/3].add(c);
            }
        }
        return true;
        
    }
}
