#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements in the array: " << endl;
    cin >> n;

    int arr[n];
cout<<"Enter elements of the array:" << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++)
    {
        int sum = 0;

        for(int j = i; j < n; j++)
        {
            sum = sum + arr[j];

            cout << "Subarray: ";

            for(int k = i; k <= j; k++)
            {
                cout << arr[k] << " ";
            }

            cout << " | Current Sum = " << sum << endl;
        }
    }

    return 0;
}