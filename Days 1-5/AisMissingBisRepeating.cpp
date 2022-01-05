// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        int hash[99999]={0};
        for(int i=0;i<n;i++){
            hash[arr[i]]++;
        }
        int rep;
        for(int i=0;i<99999;i++){
            if(hash[i]>=2){
                rep = i;
            }
        }
        int mis;
        for(int i=1;i<=n;i++){
            if(hash[i]==0){
                mis = i;
            }
        }    
        
        int *ans = new int[2];
        ans[0] = rep; ans[1] = mis;
        return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends
