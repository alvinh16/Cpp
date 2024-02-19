#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int square (int op1)
{
return (pow(op1, 2));
}

int main()
{
    int i=0;
     while ( i<3 )
     {
     cout << "the value of i is " << i << endl;
     cout << "the square of i is " << square(i) << endl;
     i++;
     }
     return 0;

}
