#include <iostream>
using namespace std;

int pivotIndexArray(int arr[], int size){
    int leftSum = 0, rightSum = 0;

    for (int i = 0; i < size; i++)
    {
        /* code */
        rightSum += arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        /* code */
        rightSum -= arr[i];
        
        if (leftSum == rightSum)
        {
            /* code */
            return i;
        }
        leftSum += arr[i];
    }

    return -1;
} 

int main()
{
    int arr[6] = {1,7,3,6,5,6};

    cout << "The pivot index of the arry is " << pivotIndexArray(arr, 6) << endl;

return 0;
}