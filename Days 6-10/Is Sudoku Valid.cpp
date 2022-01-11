//https://practice.geeksforgeeks.org/problems/is-sudoku-valid4820/1/#

// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    bool canFill(vector<vector<int>> &board, int row, int col, int value){
        for(int i=0;i<9;i++){
            if(board[row][i]==value)
                return false;
                
            if(board[i][col]==value)
                return false;
                
            if(board[3 * (row/3) + i/3][3 * (col/3) + i%3]==value)
                return false;
        }
        return true;
    }
    
    bool check(vector<vector<int>> &mat){
        for(int i = 0;i < mat.size(); i++){
            for(int j = 0; j < mat[0].size(); j++){
                
                if(mat[i][j] == 0){
                    
                    for(int k=1;k<=9;k++){
                        if(canFill(mat,i,j,k)){
                            mat[i][j] = k;
                        
                        if(check(mat) == true) return true;
                        else mat[i][j] = 0;
                        }
                    }
                    
                    return false;
                }
            }
        }
        return true;
    }

    int isValid(vector<vector<int>> mat){
        // code here
        return check(mat);
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        vector<vector<int>> mat(9, vector<int>(9, 0));
        for(int i = 0;i < 81;i++)
            cin>>mat[i/9][i%9];
        
        Solution ob;
        cout<<ob.isValid(mat)<<"\n";
    }
    return 0;
}  // } Driver Code Ends
