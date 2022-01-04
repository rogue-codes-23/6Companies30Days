#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this function */

string encode(string src)
{     
  //Your code here 
  string s="";
  int count=0;
  int i=0,j=1,k=0;
  while(j<=src.size()){
      count++;
      if(src[i]!=src[j]){
          s.push_back(src[k]);
          s.append(to_string(count));
          k = j;
          count=0;
      }
      i++;j++;
  }
  return s;
}     
 
