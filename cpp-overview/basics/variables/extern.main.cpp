#include <iostream>
using namespace std;

#include "extern.file.1.cpp"
int count;
extern void write_extern();

main()
{
  count = 5;
  write_extern();
}