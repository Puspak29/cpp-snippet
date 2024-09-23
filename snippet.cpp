#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define max LLONG_MAX
#define min LLONG_MIN

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

void testCase(){

}

int main(){
    ll t;
    cin>>t;
    while(t>0){
        testCase();
        t--;
    }
    return 0;
}