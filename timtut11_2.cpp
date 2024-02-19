#include <iostream>
#include <string>
using namespace std;

string bartender (string newdrink)
{
    newdrink = "bloody mary";
    return newdrink;
}

int main()
{

    int op1;
    int &op2=op1;
    string drink = "long island iced tea";
    string &newdrink = drink;

     cout << "you asked for " << drink << endl;
     cout << "& the lady also wants " << newdrink << endl;
     newdrink = bartender (newdrink);
     cout << "but shes changed her mind. she now wants " << newdrink << endl;
     cout << "u too want " << drink << endl;
     
     return 0;

}
