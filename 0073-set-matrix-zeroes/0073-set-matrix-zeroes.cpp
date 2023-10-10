class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> z_index_row;
        vector<int> z_index_col;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                if(matrix[i][j]==0){
                    z_index_row.push_back(i);
                    z_index_col.push_back(j);
                }
            }
        }

        int i=0,j=0;
        while(i<z_index_row.size() && j<z_index_col.size())
        {
            int row=z_index_row[i];
            int col=z_index_col[j];
            int c=0;
            while(c<matrix[row].size())
            {
                matrix[row][c]=0;
                c++;
            }
            int r=0;
            while(r<matrix.size())
            {
                matrix[r][col]=0;
                r++;
            }
            i++;
            j++;
        }
    }
};