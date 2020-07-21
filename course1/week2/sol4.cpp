#include<iostream>
using namespace std;

long long greatestCommonDivisor (long long a , long long b) {
    if(b == 0)
        return a;
    return greatestCommonDivisor(b , a % b);
}

int main() {
    long long a , b;
    cin>>a>>b;
    cout<<(a * b)/(greatestCommonDivisor(a,b));
}