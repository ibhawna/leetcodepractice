// Time Complexity: O(m * n)
// Space Complexity: O(n)
class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        int n = grid.size(); // row
        int m = grid[0].size(); // col
        vector<int> ans;
        for (int col = 0; col < m; col++) {
            int curr_col = col;
            for (int curr_row = 0; curr_row < n; curr_row++) {
                int nextcol = curr_col + grid[curr_row][curr_col];
                if (nextcol < 0 or nextcol >= m or (grid[curr_row][curr_col] ^ grid[curr_row][nextcol])) {
                    curr_col = -1;
                    break;
                }
                curr_col = nextcol;
            }
            ans.push_back(curr_col);
        }
        return ans;
    }
};