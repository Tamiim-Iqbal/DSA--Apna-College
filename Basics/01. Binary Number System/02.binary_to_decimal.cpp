#define _Alignof alignof       // ignore this : its just for the compiler

#include<bits/stdc++.h>
using namespace std;

// Function to convert binary to decimal 
int binaryToDecimal(int BinNum)
{
    int ans = 0, power = 1;    // 2^0
    while (BinNum > 0)
    {
        int remainder = BinNum % 10;   // Get the last digit
        BinNum /= 10;

        ans += remainder * power;
        power *= 2;     
    }

    return ans;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;
    int binaryNum = binaryToDecimal(n);
    cout << binaryNum << endl;
    
    return 0;
}