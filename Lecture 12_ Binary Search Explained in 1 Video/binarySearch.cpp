#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){

    int start = 0, end = size - 1;

    int mid = (start + end) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        // go to right part
        if (key > arr[mid])
        {
            /* code */
            start = mid + 1;
        }
        // go to left part
        else{
            end = mid - 1;
        }
        mid = (start + end)/2;
    }
    return -1;
}

int main()
{
    int even[6] = {2,4,6,8,12,18};
    int odd[5] = {3,8,11,14,16};

    int enevIndex = binarySearch(even, 6, 12);

    cout << "Index of 12 is " << enevIndex << endl;

    int oddIndex = binarySearch(odd, 6, 14);

    cout << "Index of 14 is " << oddIndex << endl;

return 0;
}