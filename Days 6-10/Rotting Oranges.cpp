//https://leetcode.com/problems/rotting-oranges/

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        if(grid.empty()) return 0;
        queue<pair<int ,int>> rotten;
        int m = grid.size(), n = grid[0].size(), cnt=0;
        for(int i=0; i<m; ++i){
            for(int j=0; j<n; ++j){
                
                if(grid[i][j]!=0) cnt++;
                if(grid[i][j]==2) rotten.push({i,j});
            }
        }
        
        int dx[4] = {0,0,1,-1};
        int dy[4] = {1,-1,0,0};
        
        int k = 0;
        int counter=0;
        while(!rotten.empty()){
            int size = rotten.size();
            k += size;
            while(size--){
                int x = rotten.front().first, y = rotten.front().second;
                rotten.pop();
                for(int i=0; i<4; i++){
                    int nx = x + dx[i];
                    int ny = y + dy[i];
                    if(nx < 0 || ny < 0 || nx >= m || ny >= n || grid[nx][ny] != 1) continue;
                    grid[nx][ny] = 2;
                    rotten.push({nx,ny});
                }
            }
            
            if(!rotten.empty()) counter++;
        }
        
        return (cnt==k)?counter:-1;
        
    }
};
