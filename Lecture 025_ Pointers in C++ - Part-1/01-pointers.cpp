#include <iostream>
using namespace std;

int main()
{

  /*
    int num = 5;

    // Address of operator - &

    cout << "The address of num is : " << &num << endl;

    int *ptr = &num;

    cout << "The address " << ptr << endl;
    cout << "The value " << *ptr << endl;

    double d = 4.3;
    double *ptr2 = &d;

    cout << "The address of d is " << ptr2 << endl;
    cout << "The value " << *ptr2 << endl;

    cout << "Size of integer is " << sizeof(num) << endl;
    cout << "Size of pointer is " << sizeof(ptr) << endl;

    cout << "Size of double is " << sizeof(d) << endl;
    cout << "Size of pointer is " << sizeof(ptr2) << endl;

    // pointer to int is created, and pointing to some garbage address
    // int &p = 0;
    // cout << *p << endl;

    int i = 5;
    int *q = &i;
    cout << q << endl;
    cout << *q << endl;

    int *p = 0;
    p = &i;

    cout << p << endl;
    cout << *p << endl;


  int num = 5;
  int a = num;
  cout << "Before a " << num << endl;
  a++;
  cout << "After a " << num << endl;

  int *p = &num;
  cout << "Before " << num << endl;
  (*p)++;
  cout << "After " << num << endl;

  // copying a pointer
  int *q = p;
  cout << p << " - " << q << endl;
  cout << *p << " - " << *q << endl;

  // pointer arithmetic - important concept
  int i = 3;
  cout << i << endl;
  int *t = &i;
  cout << ++(*t) << endl;
  *t = *t + 1;
  cout << *t << endl;
  cout << "Before t " << t << endl;
  t = t + 1;
  cout << "After t " << t << endl;
  */

  int firstvalue = 5, secondvalue = 15;
  char thirdvalue = 'a';
  int *p1, *p2;
  char *p3;
  p1 = &firstvalue;  // p1 = address of firstvalue
  p2 = &secondvalue; // p2 = address of secondvalue
  p3 = &thirdvalue;  // p3 = address of thirdvalue
  *p1 = 10;          // value pointed to by p1 = 10
  *p2 = *p1;         // value pointed to by p2 = value pointed to by p1
  p1 = p2;           // p1 = p2 (value of pointer is copied)
  *p1 = 20;          // value pointed to by p1 = 20
  *p3 = 'b';         // value pointed to by p3 = ‘b ’
  cout << "firstvalue is " << firstvalue << endl;
  cout << "secondvalue is " << secondvalue << endl;
  cout << "thirdvalue is " << thirdvalue << endl;

  return 0;
}