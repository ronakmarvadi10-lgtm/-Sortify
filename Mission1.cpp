#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter array size: ";
    cin >> n;

    int arr[100], unique[100];
    int count = 0;

    cout << "Enter array elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Remove duplicate elements
    for (int i = 0; i < n; i++)
    {
        bool found = false;

        for (int j = 0; j < count; j++)
        {
            if (arr[i] == unique[j])
            {
                found = true;
                break;
            }
        }

        if (found == false)
        {
            unique[count] = arr[i];
            count++;
        }
    }

    // Display unique elements
    cout << "\nArray after removing duplicates: ";

    for (int i = 0; i < count; i++)
    {
        cout << unique[i] << " ";
    }

    return 0;
}
