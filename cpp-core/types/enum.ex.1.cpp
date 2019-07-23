#include <iostream>
using namespace std;

// main() is where program execution begins.
int main()
{
  enum color
  {
    red,
    green,
    blue
  } c;
  c = blue;

  cout << c;
  
  return 0;
}