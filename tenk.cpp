#include<iostream>
using namespace std;

string fOne()
{
  return "I am C Plus Plus Function One";
}

string fTwo()
{
  return "I am C Plus Plus Function Two";
}

string fThree()
{
  return "I am C Plus Plus Function Three";
}
int main()
{
  cout << fOne() << endl;
  cout << fTwo() << endl; 
  cout << fThree() << endl;
  return 0;
}
