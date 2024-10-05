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

template <typename T> vector<T> getEll(int n){
    vector<T> v;
    for(int i=0;i<n;i++){
        T x;
        cin>>x;
        v.push_back(x);
    }
    return v;
}

template <typename T> void display(vector<T> v){
    for(auto x: v){
        cout<<x<<" ";
    }
    cout<<endl;
}

void testCase(){

}

int main(){
    ll t;
    cin>>t;
    while(t--){
        testCase();
    }
    return 0;
}