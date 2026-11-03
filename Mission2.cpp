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

    int largest = arr[0];
    int secondLargest = -1;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > secondLargest)
        {
            secondLargest = arr[i];
        }
    }

    cout << "Largest element: " << largest << endl;

    if (secondLargest == -1)
    {
        cout << "Second largest element does not exist";
    }
    else
    {
        cout << "Second largest element: " << secondLargest;
    }

    return 0;
}
