//Leetcode - Special Positions in a Binary Matrix - Easy
//https://leetcode.com/problems/special-positions-in-a-binary-matrix/

class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        int count=0;
        vector<int> row(m,0);
        vector<int> col(n,0);
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                row[i]+=mat[i][j];
                col[j]+=mat[i][j];
            }
        }
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(mat[i][j]==1)
                {
                    if(row[i]==1&&col[j]==1)
                    {
                        count++;
                    }
                }
            }
        }
        return count;
        
    }
};
