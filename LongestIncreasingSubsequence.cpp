#include <bits/stdc++.h>

using namespace std;

int max(int a, int b)
{
    return a>b?a:b;
}

// Complete the longestIncreasingSubsequence function below.
int longestIncreasingSubsequence(vector<int> arr) {
    int maxNum=0;
    vector<int> len;
    for(int i=0; i<arr.size(); i++)
        len.push_back(1);

    for(int i=1; i<arr.size(); i++){
        for(int j=0; j<i; j++)
        {
            if(arr[j]<arr[i])
            {
                len[i] = max(len[j]+1,len[i]);
            }
        }
        maxNum = max(maxNum,len[i]);
    }
    return maxNum;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item;
        cin >> arr_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        arr[i] = arr_item;
    }

    int result = longestIncreasingSubsequence(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
