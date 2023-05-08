// https://www.codingninjas.com/codestudio/problems/print-like-a-wave_893268?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_6

#include <bits/stdc++.h>
using namespace std;
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
  // Write your code here
  vector<int> ans;
  for (int col = 0; col < mCols; col++)
  {
    if (col & 1)
    {
      // odd Index --> Bottom to Top
      for (int row = nRows - 1; row >= 0; row--)
      {
        ans.push_back(arr[row][col]);
      }
    }
    else
    {
      // odd Index --> Bottom to Top
      for (int row = 0; row < nRows; row++)
      {
        ans.push_back(arr[row][col]);
      }
    }
  }
  return ans;
}

int main()
{
  int row, col;
  vector<vector<int>> arr;

  cout << "Enter the number of row & col : ";
  cin >> row >> col;

  cout << "Enter the elements of array : \n";
  for (int i = 0; i < row; i++)
  {
    vector<int> temp;
    for (int j = 0; j < col; j++)
    {
      int t;
      cin >> t;
      temp.push_back(t);
    }
    arr.push_back(temp);
  }

  vector<int> wave = wavePrint(arr, row, col);

  cout << "Wave print of array : ";
  for (int i : wave)
  {
    cout << i << " ";
  }

  return 0;
}
