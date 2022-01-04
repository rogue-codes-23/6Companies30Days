class Solution {
public:
    int gcdF(int n, int m){
        if(m==0) return n;
        int ans = gcdF(m, n%m);
        return ans;
    }
    
    string gcdOfStrings(string str1, string str2) {
        if(str1+str2!=str2+str1) return "";
        else return str1.substr(0,gcdF(str1.size(),str2.size()));
    }
};
