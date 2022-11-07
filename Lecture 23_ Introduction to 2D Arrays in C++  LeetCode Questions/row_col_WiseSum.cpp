#include <iostream>
using namespace std;

// to print row wise sum
void printRowSum(int arr[][4], int row, int col)
{
    cout << "Printing Sum --> " << endl;
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 4; col++)
        {
            sum += arr[row][col];
        }
        cout << sum << ' ';
    }
    cout << endl;
}

// to print col wise sum
void printColSum(int arr[][4], int row, int col)
{
    cout << "Printing Sum --> " << endl;
    for (int col = 0; col < 4; col++)
    {
        int sum = 0;
        for (int row = 0; row < 3; row++)
        {
            sum += arr[row][col];
        }
        cout << sum << ' ';
    }
    cout << endl;
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

    // print col wise sum
    printColSum(arr, 3, 4);

    return 0;
}