#include <iostream>
using namespace std;

bool search(int arr[], int size, int key){
    for (int i = 0; i < key; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;    
}

int main()
{
    int arr[5] = {5,7,6,9,7};
    int key;
    cout<<"Enter the element to search for "<<endl;
    cin>>key;

    bool found = search(arr, 5, key);

    if (found)
    {
        cout<<"Key is present." <<endl;
    }
    else{
        cout<<"Key is absent." <<endl;

    }
    
return 0;
}