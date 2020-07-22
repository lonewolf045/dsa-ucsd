#include<iostream>
#include<vector> 
#include<bits/stdc++.h>
using namespace std;

bool compareSort (string a , string b) {
    string ab = a.append(b);
    string ba = b.append(a);
    return ab.compare(ba) > 0 ? true : false;
}

int main() {
    vector <string> digits;
    string k;
    int n;
    cin>>n;
    for(int i = 0; i < n ; i++) {
        cin>>k;
        digits.push_back(k);
    }
    sort(digits.begin(),digits.end(),compareSort);
    for(int i = 0; i < n ; i++) {
        cout<<digits[i];
    }
}