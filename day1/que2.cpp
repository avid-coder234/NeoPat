#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    long long pair = (long long)n * (n - 1) / 2;
    cout << pair;
    return 0;
}