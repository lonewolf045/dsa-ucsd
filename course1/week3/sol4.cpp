#include<iostream>
#include<vector> 
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector <int> a;
    vector <int> b;
    int ai, bi;
    for(int i = 0; i < n ; i++) {
        cin>>ai;
        a.push_back(ai);
        //b.push_back(bi);    
    }
    for(int i = 0; i < n ; i++) {
        cin>>bi;
        //a.push_back(ai);
        b.push_back(bi);    
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    long long total = 0;
    for(int i = 0; i < n ; i++) {
        total += ((long long)a[i]*b[i]);
    }
    cout << total << endl;
}