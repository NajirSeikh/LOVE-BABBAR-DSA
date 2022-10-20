#include <iostream>
using namespace std;

int firstOcc(int arr[], int size, int key){

    int start = 0, end = size - 1;
    int mid = start + (end - start)/2;
    int ans = -1;
    while (start<=end)
    {
        if (arr[mid] == key)
        {
            /* code */
            ans = mid;
            end = mid -1;
        }
        else if (key > arr[mid])
        {
            /* code */
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            /* code */
            end = mid -1;
        }

        mid = start + (end - start)/2;           
    }

    return ans;
}

int lastOcc(int arr[], int size, int key){

    int start = 0, end = size - 1;
    int mid = start + (end - start)/2;
    int ans = -1;
    while (start<=end)
    {
        if (arr[mid] == key)
        {
            /* code */
            ans = mid;
            start = mid + 1;
        }
        else if (key > arr[mid])
        {
            /* code */
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            /* code */
            end = mid - 1;
        }

        mid = start + (end - start)/2;           
    }

    return ans;
}

int main()
{
    int even[10] = {1,2,3,3,3,3,3,3,3,5};
    
    cout << "First occurence of 3 is at index " << firstOcc(even, 10, 3) << endl;
    cout << "Last occurence of 3 is at index " << lastOcc(even, 10, 3) << endl;


return 0;
}