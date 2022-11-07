#include <iostream>
using namespace std;

// to print row wise sum
void printRowSum(int arr[][4], int row, int col)
{
    cout << "Printing Row Sum --> " << endl;
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 4; col++)
        {
            sum += arr[row][col];
        }
        cout << sum << endl;
    }
}

// to find largest row sum
int largestRowSum(int arr[][4], int row, int col)
{
    int maxi = INT32_MIN;
    int rowIndex = -1;

    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 4; col++)
        {
            sum += arr[row][col];
        }

        if (sum > maxi)
        {
            maxi = sum;
            rowIndex = row;
        }
    }
    cout << "The maximum row sum is " << maxi << endl;

    return rowIndex;
}

int main()
{
    // create 2D array
    int arr[3][4];

    cout << "Enter the array[3][4] elements: " << endl;
    // taking input -> row wise
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cin >> arr[row][col];
        }
    }

    cout << "Printing the array " << endl;
    // Printing array
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << arr[row][col] << ' ';
        }
        cout << endl;
    }

    // print row wise sum
    printRowSum(arr, 3, 4);

    // print largest row sum
    cout << "Largest row sum is at index " << largestRowSum(arr, 3, 4) << endl;
    ;

    return 0;
}