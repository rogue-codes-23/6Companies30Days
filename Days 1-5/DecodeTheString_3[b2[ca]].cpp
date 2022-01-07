#include <bits/stdc++.h>
using namespace std;

string dec(string &s, int &i){
	string res="";
	while(i<s.size() && s[i]!=']'){
		if(isdigit(s[i])){
			int k=0;
			while(i < s.size() && isdigit(s[i]))
				k = 10*k + s[i++] - '0';
			i++;
			string r = dec(s,i);
			while(k-- > 0)
				res +=r;
			i++;
		}else{
			res += s[i++];
		}
	}
	return res;
}

void decode(string str, int i){
	cout << dec(str, i);
}

int main()
{
	string str = "3[b2[ca]]";
	decode(str, 0);
}
