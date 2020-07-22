#include<iostream>
#include<vector> 
#include<bits/stdc++.h>
using namespace std;

bool sortBySec (const pair <int , int> &a , const pair <int , int> &b) {
    return (a.second < b.second);
}

int main() {
    int n,c,k;
    cin>>n;
    vector <pair<int,int>> segs;
    for(int i = 0; i < n; i++) {
        cin>>c>>k;
        segs.push_back(make_pair(c,k));
    }
    sort(segs.begin(),segs.end(),sortBySec);
    k = segs[0].second;
    vector <int> answer;
    answer.push_back(k);
    while(segs.size()) {
        if(k >= segs[0].first)
            segs.erase(segs.begin());
        else {
            k = segs[0].second;
            answer.push_back(k);
            segs.erase(segs.begin());
        }
    }
    cout<<answer.size()<<endl;
    for(int i = 0; i < answer.size(); i++) {
        cout<<answer[i]<<" ";
    }
}