#https://leetcode.com/problems/longest-mountain-in-array/

class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n = arr.size();
        if(n<=2) return 0;
        int res=0,down=0,up=0;
        for(int i=1;i<n;i++){
            if(down && arr[i]>arr[i-1] || arr[i]==arr[i-1]) up=down=0;
            up += arr[i]>arr[i-1];
            down += arr[i]<arr[i-1];
            if(up && down) res = max(res,up+down+1);
        }
        return res;
    }
};
