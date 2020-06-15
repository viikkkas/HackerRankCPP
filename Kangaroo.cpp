#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1,v1,x2,v2;
    cin>>x1>>v1>>x2>>v2;
    if(x1>x2)
    {
        swap(x1,x2);
        swap(v1,v2);
    }
    int c1=x1,c2=x2,ans=0;

    while(c1<=c2)
    {
        if(c1 == c2)
        {
            ans = 1;
        }


        c1 += v1;
        c2 += v2;
    }
    if(ans == 1)
    cout << "YES"<<endl;
    else
    cout << "NO"<<endl;
}
