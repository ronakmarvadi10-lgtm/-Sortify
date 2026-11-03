#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter array size: ";
    cin >> n;

    int arr[100];
    int positive = 0;
    int negative = 0;
    int zero = 0;

    cout << "Enter array elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Count positive and negative numbers
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            positive++;
        }
        else if (arr[i] < 0)
        {
            negative++;
        }
        else
        {
            zero++;
        }
    }

    cout << "\nPositive numbers: " << positive;
    cout << "\nNegative numbers: " << negative;
    cout << "\nZero numbers: " << zero;

    return 0;
}