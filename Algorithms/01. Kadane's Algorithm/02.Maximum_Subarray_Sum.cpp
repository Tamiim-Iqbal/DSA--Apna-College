#define _Alignof alignof       // ignore this : its just for the compiler

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n = 7;
    int arr[7] = {3, -4, 5, 4, -1, 7, -8};

    

    int maxSum = INT_MIN;     // Initialize to the smallest possible integer
    for(int start = 0; start < n; start++)
    {
        int currentSum = 0;   // Reset current sum for each starting point
        for(int end = start; end < n; end++)
        {
            currentSum += arr[end];   // Add the current element to the current sum
            maxSum = max(maxSum, currentSum);  // Update max_sum if current_sum is greater
        }
    }
    cout << "Maximum Subarray Sum: " << maxSum << endl;  // Output the result
    return 0;
}