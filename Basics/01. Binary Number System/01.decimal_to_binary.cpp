#define _Alignof alignof       // ignore this : its just for the compiler

#include<bits/stdc++.h>
using namespace std;

// Function to convert decimal to binary
int decimalToBinary(int decNum)
{
    int ans = 0, power = 1;   // 10^0
    bool isNegative = false;
    if (decNum < 0)
    {
        isNegative = true;
        decNum = abs(decNum);
    } 
    while (decNum > 0)
    {
        int remainder = decNum % 2;    
        decNum /= 2;

        ans += remainder * power;
        power *= 10;     
    }
    int negAns = ans + (1 * power);    // To handle the case of negative binary representation
    return isNegative ? negAns : ans;  // Return negative binary if input was negative
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;
    int binaryNum = decimalToBinary(n);
    cout << binaryNum << endl;

    return 0;
}