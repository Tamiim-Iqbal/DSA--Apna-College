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
    int currentSum = 0;       // Initialize current sum to 0
    for(int i = 0; i < n; i++)
    {
        currentSum += arr[i];   // Add the current element to the current sum
        maxSum = max(maxSum, currentSum);  // Update max_sum if current_sum is greater
        
        if(currentSum < 0)       // If current sum becomes negative, reset it to 0
            currentSum = 0;
    }
    cout << "Maximum Subarray Sum: " << maxSum << endl;  // Output the maximum subarray sum
    return 0;
}