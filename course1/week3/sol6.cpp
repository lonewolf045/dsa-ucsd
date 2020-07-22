#include<iostream>
#include<vector> 
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector <int> perm;
    for(int i = 1; i <= n; i++) {
        if(i*2 < n) {
            perm.push_back(i);
            n = n - i;
        }
        if(i == n) {
            perm.push_back(i);
            break;
        }
    }
    cout<<perm.size()<<endl;
    for(int i = 0; i < perm.size() ; i++) {
        cout<<perm[i]<<" ";
    }
}