#include<bits/stdc++.h>
using namespace std;
int suruse(int n,int p)
{
    int count=0;
    for(int i=1; i<=n; i=i+2)
    {
        if(i==p || i-1==p)
        break;
        count+=1;
    }
    return count;
}
int pichese(int n,int p)
{
    int count=0;
    if(n%2!=0)
    {
        for(int i=n; i>=1; i=i-2)
        {
            if(i==p || i-1==p)
                break;
            count++;
        }
    }
    else
    {
        if(n==p)
            return 0;
        for(int i=n-1; i>=1; i=i-2)
        {
            count++;
            if(i==p || i-1==p)
                break;
            
        }
    }
    return count;
}
int main(){
    int n,p;
    cin >> n >> p;
    int ans1 = suruse(n,p);
    int ans2 = pichese(n,p);
    cout << min(ans1,ans2)<<endl;
    return 0;
}
