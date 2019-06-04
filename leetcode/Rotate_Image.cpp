//思路：
/*
先沿对角线做翻转
再每行沿中线做翻转即可
*/

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size(), m = matrix[0].size();
        for(int i = 0; i<=n; i++)
        {
            for(int j = i; j<m; j++)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j < m/2; j++)
            {
                swap(matrix[i][j], matrix[i][m-j-1]);
            }
        }
    }
};
