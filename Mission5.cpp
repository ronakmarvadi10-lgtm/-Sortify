#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter array size: ";
    cin >> n;

    int arr[100];
    int even[100], odd[100];

    int evenCount = 0;
    int oddCount = 0;

    cout << "Enter array elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (arr[i] % 2 == 0)
        {
            even[evenCount] = arr[i];
            evenCount++;
        }
        else
        {
            odd[oddCount] = arr[i];
            oddCount++;
        }
    }

    // Sort even numbers in ascending order
    for (int i = 0; i < evenCount - 1; i++)
    {
        for (int j = 0; j < evenCount - i - 1; j++)
        {
            if (even[j] > even[j + 1])
            {
                int temp = even[j];
                even[j] = even[j + 1];
                even[j + 1] = temp;
            }
        }
    }

    // Sort odd numbers in descending order
    for (int i = 0; i < oddCount - 1; i++)
    {
        for (int j = 0; j < oddCount - i - 1; j++)
        {
            if (odd[j] < odd[j + 1])
            {
                int temp = odd[j];
                odd[j] = odd[j + 1];
                odd[j + 1] = temp;
            }
        }
    }

    cout << "\nSorted Even Numbers: ";

    for (int i = 0; i < evenCount; i++)
    {
        cout << even[i] << " ";
    }

    cout << "\nSorted Odd Numbers: ";

    for (int i = 0; i < oddCount; i++)
    {
        cout << odd[i] << " ";
    }

    cout << "\nMerged Array: ";

    for (int i = 0; i < evenCount; i++)
    {
        cout << even[i] << " ";
    }

    for (int i = 0; i < oddCount; i++)
    {
        cout << odd[i] << " ";
    }

    return 0;
}