#include<iostream>
#include<vector>
using namespace std;
vector <int> large;
int pisanoPeriod (long long m) {
    int prev = 0;
    int curr = 1;
    large.push_back(0);
    large.push_back(1);
    int temp;
    int i;
    for (i = 1; i <= m * m; i++) {
        temp = prev;
        prev = curr;
        curr = (curr + temp) % m;
        if(prev == 0 && curr == 1){
            return i;
        } else {
            large.push_back(curr);
        }
    }
    return 0;
}

// long long Fib(long long n , vector<long long> fibo, long long k) {
//     if(fibo[n] != -1)
//         return fibo[n];
//     if( n <= 1) {
//         fibo[n] = n;
//     } else {
//         fibo[n] = (Fib(n-1 , fibo , k) + Fib(n-2 , fibo, k))%k;
//     }
//     return fibo[n];
// }

int main() {
    long long n,m;
    cin>>n>>m;
    long long k = pisanoPeriod(m);
    // vector <long long> fibo(k+1 , -1);
    //cout<<k;
    cout<<large[n%k];
    return 0;
}