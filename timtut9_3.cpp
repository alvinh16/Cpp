#include <iostream>
#include <string>
using namespace std;

// barto is a dummy subroutine name
int addin (int x, int add2) 
{
    return x + add2;
}

int main()
{

    int add2, x = 10;

do {
     cout << "Please enter add to x value : " << endl;
     cin >> add2;
    x = addin(x, add2);
     cout << "x is now : " << x << endl;
}
while (x < 10);
     
     return 0;

}
