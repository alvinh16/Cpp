#include <iostream>
#include <string>
using namespace std;

    const float bar2psi = 14.503773773;
    const float bar2kpa = 100;
    const float kpa2psi = 0.1450377377;

// This function accepts bar
// & returns psi & kpa
float barto (float bar)
{
    cout << bar << " bar is equivalent to ";
    cout << bar * bar2psi << " psi or ";
    cout << bar * bar2kpa << " kpa. \n";
    return 0;
}

// This function accepts kpa
// & returns psi & bar
float kpato (float kpa)
{
    cout << kpa << " kpa is equivalent to ";
    cout << kpa / bar2kpa << "bar or ";
    cout << kpa * kpa2psi << " psi. \n";
    return 0;
}

// This function accepts psi
// & returns kpa & bar
float psito (float psi)
{
    cout << psi << " psi is equivalent to ";
    cout << psi / bar2psi << " bar or ";
    cout << psi / kpa2psi << " kpa. \n";
    return 0;
}

int main()
{
//    const float bar2psi = 14.503773773;
//    const float bar2kpa = 100;
//    const float kpa2psi = 0.1450377377;

    float op1;
    char pu;

     cout << "Would you like to convert from (b)ar or (p)si or (k)pa? \n";
     cin >> pu;
     cout << endl << "Please give number of units ";
     cin >> op1;

     if (pu == 'b')
        barto(op1); 
     else if (pu == 'p')
        psito(op1);
     else if (pu == 'k')
        kpato(op1);
    else
        cout << "Invalid input. Please try again \n";
     
     return 0;

}
