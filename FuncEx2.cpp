#include <iostream>
#include <string>
using namespace std;

int addition(int x1, int x2)
{
    return (x1 + x2);
}

int dif (int x1, int x2)
{
    return (x1 - x2);
}

int prod (int x1, int x2)
{
    return (x1 * x2);
}
int quot(int x1, int x2)
{
    return (x1 / x2);
}

int main()
{
//    int op1, op2, sum, difference, product, quotient;
    int op1, op2; 


     cout << "Please give 1st operand, \n";
     cin >> op1;
     cout << "Please give 2nd operand, \n";
     cin >> op2;
     cout << "The 2 operands are " << op1 << " and " << op2 << endl;
//    sum = addition(op1, op2);
//     difference = dif(op1, op2);
//     product = prod(op1, op2);
//     quotient = quot(op1, op2);
     cout << "the sum of the 2 operands is " << addition(op1, op2) <<endl;
     cout << "the difference of the 2 operands is " << dif(op1, op2) <<endl;
     cout << "the product of the 2 operands is " << prod(op1, op2) <<endl;
     cout << "the integer quotient of the 2 operands is " << quot(op1, op2) <<endl;
     return 0;

}
