// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
		unsigned long long CountWays(string str){
		    // Code here
		   unsigned long long n = str.size();
		   if(str[0]=='0' || n==0) return 0;
		   if(n==1) return 1;
		   unsigned long long count1 = 1;
		   unsigned long long count2 = 1;
		   unsigned long long i = 1;
		   for(; i<n ; ++i){
	
		       int d = str[i] - '0';
		       int td = 10*(str[i-1] - '0') + d;
		       unsigned long long count = 0;
		       
		       if(d > 0) count += count2;
		       if(td>=10 && td<=26) count += count1;
		       
		       
		       count1 = count2;
		       count2 = count;
		   }
		   return count2;
		}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.CountWays(str);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends
