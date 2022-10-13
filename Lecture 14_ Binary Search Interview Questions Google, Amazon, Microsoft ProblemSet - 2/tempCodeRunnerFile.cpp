#include <iostream>
using namespace std;

long long int binarySearch(int num){

    int start = 0, end = num;

    long long int mid = (start + end) / 2;

    long long int ans = -1;
    while (start <= end)
    {
        long long int square = mid * mid;
        if (square == num)
        {
            return mid;
        }
        // go to right part
        if (square < num)
        {
            ans = mid;
            start = mid + 1;
        }
        // go to left part
        else{
            end = mid - 1;
        }
        mid = (start + end)/2;
    }
    return ans;
}

int main()
{
    cout << binarySearch(987654201) << endl;

return 0;
}