#include <iostream>
using namespace std;

int getSum(int arr[], int n){

    int sum = 0;
    //printing the array
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;

}

int main()
{
    int arr[100];
    int size;
    cout << "Enter the lenght of a array " << endl;

    cin>>size;

    cout << "Enter the element of the array " << endl;

    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    
    cout << "Sum of the given array is " << getSum(arr, size) << endl;

       

return 0;
}