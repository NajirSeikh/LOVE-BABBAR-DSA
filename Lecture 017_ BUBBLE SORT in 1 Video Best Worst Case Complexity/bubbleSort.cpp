#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{  
    bool swapped = false;
    for(int i = 1; i < n; i++){
        for(int j = 0; j < n-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false)
            break;
    }
}


void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[6] = {6, 2, 8, 4, 10};

    bubbleSort(arr, 5);

    print(arr, 5);

return 0;
}