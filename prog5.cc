#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
   double ctof;  // equivalent Celsius temperature
   double ftoc;  // equivalent Fahrenheit temperature.
 
   int fah = 56;  //declare and initialize at the same time - page 48
   int cel = 20;

   ctof = 9/5  * cel + 32;
   ftoc = 5/9 * (fah -32);

   cout << cel << " degrees Celsius in Fahrenheit is " << ctof << endl;
   cout << fah << " degrees Fahrenheit in Celsius is " << ftoc << endl;

   return (EXIT_SUCCESS);
}
