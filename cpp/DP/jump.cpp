/*You are given an array. Each element represents the maximum number of steps you can jump forward from that position.
You start at index 0. Your task is to check whether you can reach the last index.*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool canJump(vector<int>& a)
{
    int maxReach = 0;

    for(int i = 0; i < a.size(); i++)
    {
        if(i > maxReach)
            return false;

        maxReach = max(maxReach, i + a[i]); 

        if(maxReach >= a.size() - 1)
            return true;
    }

    return true;
}

int main()
{
    int n;

    cout << "Enter array size: ";
    cin >> n;

    vector<int> a(n);

    cout << "Enter array elements: ";

    for(int i = 0; i < n; i++)
        cin >> a[i];

    if(canJump(a))
        cout << "Can reach last index: true";
    else
        cout << "Can reach last index: false";

    return 0;
}