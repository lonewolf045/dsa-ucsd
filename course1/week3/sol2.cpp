#include<iostream>
#include<vector> 
#include<bits/stdc++.h>
using namespace std;

// struct triplet {
//     float first,second;
//     int third;
// };

int main() {
    vector <pair<float , pair<float,int>>> knapsack;
    int n , W;
    cin>>n>>W;
    float c,v;
    int k;
    for(int i = 0; i < n; i++) {
        cin>>c>>k;
        v = c/k;
        knapsack.push_back(make_pair(v , make_pair(c, k)));
    }
    sort(knapsack.rbegin(),knapsack.rend());
    // for(int i = 0; i < n; i++) {
    //     cout<<knapsack[i].first<<" "<<knapsack[i].second.first<<" "<<knapsack[i].second.second<<endl;
    // }
    double total = 0;
    int w = W;
    int i = 0;
    while(w && i != n) {
        if(knapsack[i].second.second > w) {
            // cout<<"First"<<endl;
            total += knapsack[i].first*w;
            w = 0;
        } else {
            // cout<<"Second"<<endl;
            total += knapsack[i].first * knapsack[i].second.second;
            w = w - knapsack[i].second.second;
        }
        // cout << w<<endl;
        i++;
    }
    cout<<fixed<<setprecision(3)<<total;
    //cout<<total;
    return 0;
}