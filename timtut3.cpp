#include <iostream>
#include <string>
using namespace std;

// barto is a dummy subroutine name
int equation (int x, int y)
{
    cout << "you entered " << x << " & " << y;
    // u may return a value or 0 if nothing 2 return
    return 2*x + y;
}

int main()
{

// dummy operand op1
    int op1, op2, result;
//    char pu;

//dummy operation, every program will need cout to output 2 screen
     cout << "What are your 2 operands?";
     cin >> op1 >> op2;
     cout << "you just entered " << op1 << " & " << op2 << endl;
     result = equation (op1, op2);
     cout << "The result of the equation is, " << result << endl;
     return 0;

}
