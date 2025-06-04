#define _Alignof alignof       // ignore this : its just for the compiler

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};

    for(int start = 0; start < n; start++)
    {
        for(int end = start; end < n; end++)
        {
            for(int i = start; i <= end; i++)
            {
                cout << arr[i];
            }
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}