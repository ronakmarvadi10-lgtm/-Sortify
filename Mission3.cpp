#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter array size: ";
    cin >> n;

    int arr[100];

    cout << "Enter array elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Bubble Sort - Ascending Order
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "\nAscending Order: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\nDescending Order: ";

    for (int i = n - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }

    return 0;
}