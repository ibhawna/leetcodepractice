// https://leetcode.com/problems/valid-sudoku/description/
class Solution {
public:
    int solve(int i, int j){
        return i/3 * 3 + j/3;
    };
    
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<set<char>> rows(9), cols(9), grids(9);
        
        pair<set<char>::iterator, bool> num;
        
        for(int i = 0; i < 9; ++i){
            for(int j = 0; j < 9; ++j){
                char c = board[i][j];
                if(c == '.') continue;

                int index = solve(i, j);

                num = rows[i].insert(c);

                if(!num.second) {
                    return false;
                }

                num = cols[j].insert(c);

                if(!num.second) {
                    return false;
                }

                num = grids[index].insert(c);

                if(!num.second){
                     return false;
                }
            }
        }
        
        return true;
    }
};
