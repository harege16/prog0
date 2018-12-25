#include<iostream>
using namespace std;

int main()
{
  int a = -1, b = 1, c ,len = 0, count = 1;
  cout << endl;
  cout <<"       Fibonacci sequence generator" << endl;
  cout <<"       Enter length of the sequence: ";
  cin >> len;
  cout <<"       ";
  while(len)
  {
    c = a + b;
    cout << c <<" ";
    a = b;
    b = c;
    --len;
    ++count;
    if(!(count % 8)) cout << endl <<"       ";
  }
  cout << endl;
  cout << endl;
  return 0;
}
