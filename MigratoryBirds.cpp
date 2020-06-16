#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int* arr = new int[n];
    for(int j=0;j<n;j++)
    {
        cin >> arr[j];
    }
    int A[6];
    for(int i=0;i<6;i++)
    A[i] = 0;
    for(int j=0; j<n; j++)
    {
        int a = arr[j];
        A[a] += 1;
    }
    int maxans=INT_MIN;
    int x;
    for(int i=0;i<6;i++)
    {
        if(A[i]>maxans)
        {
            maxans = A[i];
            x=i;
        }
    }
    cout << x;
}
