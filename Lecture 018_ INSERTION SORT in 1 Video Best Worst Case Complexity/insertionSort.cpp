#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{  
    for(int i = 1; i < n; i++){
        int temp = arr[i];
        int j = i-1;
        for(; j >=0; j--){
            
            if(arr[j] > temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
    }
}


void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[5] = {4,12,11,20,5};

    insertionSort(arr, 5);

    print(arr, 5);

return 0;
}