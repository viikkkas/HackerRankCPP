#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {
    int ctr;
    for(int i=0;i<n;i++)
    {
        ctr = n-(i+1);
        while(ctr>0)
        {
            cout<<" ";
            ctr--;
        }
        for(int j=0;j<=i;j++)
        {
            cout<<"#";
        }
        cout<<"\n";
    }

}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}
