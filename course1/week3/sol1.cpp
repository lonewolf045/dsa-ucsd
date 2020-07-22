#include<iostream>
using namespace std;

int main() {
    int m;
    cin>>m;
    int tens = m / 10;
    m = m % 10;
    int fives = m / 5;
    m = m % 5;
    int ones = m / 1;
    m = m % 1;
    cout<< tens + fives + ones; 
}