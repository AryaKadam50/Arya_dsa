class Solution {
public:
    int drow[4]={0,0,-1,1};
    int dcol[4]={-1,1,0,0};

    void dfs(vector<vector<char>>& grid, int i, int j){
        grid[i][j]='0';

        for(int x=0; x<4; x++){
            int newRow= i +drow[x];
            int newCol= j+ dcol[x];

            if(newRow>=0 && newRow<grid.size() && newCol>=0 && newCol<grid[0].size()){
                if(grid[newRow][newCol]=='1'){
                    dfs(grid, newRow, newCol);
                }
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int num=0;

        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[0].size(); j++){
                if(grid[i][j]=='1'){
                    num++;
                    dfs(grid, i, j);
                }
            }
        }
        return num;
    }
};