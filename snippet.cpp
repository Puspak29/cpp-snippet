#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define max LLONG_MAX
#define min LLONG_MIN
#define tt template <typename T>

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

tt void getEll(vector<T> &v,int n){
    for(int i=0;i<n;i++){
        T x;
        cin>>x;
        v.push_back(x);
    }
}

tt void display(vector<T> v){
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