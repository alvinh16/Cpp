#include <iostream>
#include <string>
using namespace std;

// subroutine to return the larger of 2 strings
string comparison (string x, string y)
{
    if (x > y)
         return x;
    else
         return y;
}

int main()
{

// Program to accept 2 strings,
// do a comparison &
// spit out the larger string

    string comp1, comp2, bigger; 

     cout << "please enter string 1 : ";
     getline(cin, comp1);
     cout << endl;
     cout << "please enter string 2 : ";
     getline(cin, comp2);
     cout << endl;

     bigger = comparison (comp1, comp2);
     cout << "The larger string is, " << bigger << endl;
     return 0;

}
