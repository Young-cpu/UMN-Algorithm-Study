class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int num_squares = 0, col_length = matrix[0].size(), row_length = matrix.size();
        
        for (int col = 0; col < col_length; col++){
            if(matrix[0][col] == 1){
                num_squares++;
            }
        }
        
        for(int row = 1; row < row_length; row++){
            if(matrix[row][0] == 1){
                num_squares++;
            }
        }
        
        for(int row = 1; row < row_length; row++){
            for(int col = 1; col < col_length; col++){
                if(matrix[row][col] != 0){
                    int squares = 1 + min(min(
                        matrix[row][col-1], matrix[row-1][col]), matrix[row-1][col-1]);
                    num_squares += squares;
                    matrix[row][col] = squares;
                }
            }
        }
        
        return num_squares;
        
    }
};
