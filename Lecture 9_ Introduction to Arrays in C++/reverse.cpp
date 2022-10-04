#include <iostream>
using namespace std;

void reverse(int arr[], int n){
    int start = 0;
    int end = n-1;
    while(start <= end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr1[6] = {1,5,6,3,7,8};
    int arr2[5] = {9,5,7,6,4};
    
    cout<<"Printing array before reverse"<<endl;
    printArray(arr1, 6);
    printArray(arr2,5);

    reverse(arr1, 6);
    reverse(arr2, 5);

    cout<<"Printing array after reverse"<<endl;
    printArray(arr1, 6);
    printArray(arr2,5);

return 0;
}