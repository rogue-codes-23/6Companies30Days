// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    bool canPair(vector<int> x, int k) {
        // Code here.
        unordered_map<int, int> m;
    	for(auto a: x) m[(a%k+k)%k]++;
    	if(m[0]%2!=0) return 0;
    	for(int i=1;i<k;i++){
    		if(m[i]!=m[k-i]) return 0;
    	}
	    return 1;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}  // } Driver Code Ends
