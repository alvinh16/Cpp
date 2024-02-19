#include <iostream>
#include <string>
using namespace std;

// fizzle a subroutine to determine if divisible by 1 or both
string fizzle (int target)
{
    if ( (target % 3 == 0) && (target % 5 == 0)){
         return "fizz buzz"; }
    else if (target % 3 == 0)
         return "fizz";
    else if (target % 5 == 0)
         return "buzz";
    else
         return " ";
}

int main()
{

// dummy operand op1
    int op1;
    string pu;

//dummy operation, every program will need cout to output 2 screen
     cout << "test operand" << endl;
     cin >> op1;
     cout << "you just entered " << op1 << endl;
//     pu = fizzle(op1);
//     cout << pu << endl;
     cout << fizzle(op1) << endl;
     return 0;

}
