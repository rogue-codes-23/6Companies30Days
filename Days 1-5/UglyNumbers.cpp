// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    // code here
	    ull arr[n];
	    arr[0] = 1;
	    int p2=0,p3=0,p5=0;
	    int count=1;
	    while(count<n){
	        ull next2 = 2*arr[p2];
	        ull next3 = 3*arr[p3];
	        ull next5 = 5*arr[p5];
	        ull next_num = min({next2,next3,next5});
	        
	        if(next_num==next2) p2++;
	        if(next_num==next3) p3++;
	        if(next_num==next5) p5++;
	        
	        arr[count] = next_num;
	        count++;
	    }
	    return arr[n-1];
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.getNthUglyNo(n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends
