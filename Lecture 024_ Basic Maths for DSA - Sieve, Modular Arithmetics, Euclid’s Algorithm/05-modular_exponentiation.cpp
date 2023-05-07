#include <bits/stdc++.h>
using namespace std;

int modularExponentiation(int x, int n, int m)
{
  int res = 1;
  while (n > 0)
  {
    if (n & 1)
    {
      //  odd
      res = (1LL * (res) * (x) % m) % m;
    }
    x = (1LL * (x) % m * (x) % m) % m;
    n = n >> 1;
  }
  return res;
}

int main()
{
  int x, n;
  int m = 1e9 + 7;

  cout << "Enter the value of x & n : ";
  cin >> x >> n;

  cout << "x^n = " << modularExponentiation(x, n, m) << endl;
  return 0;
}