#include<bits/stdc++.h>
using namespace std;

void lastit(int n, int m, int k){
    cout<< (k + (m-1)) % n;
}

int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    lastit(n,m,k);
}
