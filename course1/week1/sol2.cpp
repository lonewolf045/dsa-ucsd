#include<iostream>
#include<vector>

using namespace std;

long long maxProduct(const vector<int> & arr) {
    int n = arr.size();
    long long max = 0, secMax = -1;
    for(int i = 0; i < n; i++) {
        if(arr[i] >= max) {
            secMax = max;
            max = arr[i];
        } else {
            if(secMax < arr[i]) {
                secMax = arr[i];
            }
        }
    }
    //cout<<max<<" "<<secMax;
    return max * secMax;
}

int main() {
    int n;
    cin>>n;
    vector <int> arr(n);
    for(int i = 0; i < n; i++) {
        cin>> arr[i];
    }
    cout<<maxProduct(arr);
    return 0;
}
