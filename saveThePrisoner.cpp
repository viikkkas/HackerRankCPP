#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n,m,s;
        cin >> n >> m >> s;
        long long k;
        k=m%n;
        if(k==0)
        k=n;
      //cout << k<<endl;
       k=k+s-1;
       if(k>n)
       {
           k=k-n;
       }
       
       cout << k << endl;
    }
}
