//kadanes algorithm

#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

void maxSubarraySum(int *arr, int n)
{
    int maxSum = INT_MIN;
    int currSum = 0;

    for(int i = 0; i < n; i++)
    {
        currSum += arr[i];

        maxSum = max(currSum, maxSum);

        if(currSum < 0)
        {
            currSum = 0;
        }
    }

    cout << "Maximum Subarray Sum = " << maxSum << endl;
}

int main()
{
    int n;

    cout << "Enter array size: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    maxSubarraySum3(arr, n);

    return 0;
}