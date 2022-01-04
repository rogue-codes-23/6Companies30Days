// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends


class Solution{
  public:
    int countSubArrayProductLessThanK(vector<int> &arr, int n, long long k){
        if(n==1){
            if(arr[0]<k) return 1;
            else return 0;
        }
    
        int i=0,j=0;
        long long prod = 1;
        long count=0;
        while(j<n){
            prod *= arr[j];
    
            while(prod>=k && i<=j){
                prod /= arr[i];
                i++;
            }
    
            count += (j-i+1);
            j++;
        }
    
        return (int)count;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}
  // } Driver Code Ends
