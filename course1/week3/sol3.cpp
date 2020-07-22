#include<iostream>
#include<vector> 
#include<bits/stdc++.h>
using namespace std;

int main() {
    int d,m,n,k;
    cin>>d>>m>>n;
    vector <int> stop;
    stop.push_back(0);
    for(int i = 0; i < n; i++) {
        cin>>k;
        stop.push_back(k);
    }
    stop.push_back(d);
    // for(int i = 0; i < stop.size(); i++) {
    //     cout<<stop[i]<<" ";
    // }
    int totalFills = 0 , currentFills = 0 , prevFills;
    while(currentFills <= n) {
        //cout << 1 << endl;
        prevFills = currentFills;
        while(currentFills <= n) {
            if(stop[prevFills] + m >= stop[currentFills + 1] ) {
                
                currentFills += 1;
                //cout<<stop[currentFills]<<endl;
            } else {
                break;
            }
        }
        //cout << 2 <<endl;
        if(prevFills == currentFills) {
            cout<< -1 << endl;
            return 0;
        }
        if(currentFills <= n) {
            totalFills += 1;
        }
    }
    cout<<totalFills<<endl;
}