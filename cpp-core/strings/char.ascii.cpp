#include <cctype>
#include <iostream>

int main()
{
  for (int a = 0; a < 256; ++a)                      // use int (big enough for 256)
    if (std::isprint(a))                             // check if printable
      std::cout << a << ' ' << char(a) << std::endl; // print it as a char
    else
      std::cout << a << " not printable" << std::endl;
}
