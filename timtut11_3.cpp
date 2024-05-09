#include <iostream>
#include <string>
using namespace std;

// barto is a dummy subroutine name
int showarr (int kitchensize)
{
    // u may return a value or 0 if nothing 2 return
    return 0;
}

int main()
{

// dummy operand op1
    int arrsize = 7;
    int element;
    string kitchen[] = {"table",
    "chair",
    "spoon",
    "fork",
    "knife",
    "cup",
    "plate"};

//dummy operation, every program will need cout to output 2 screen
     cout << "give a number 0 - 6 :";
     cin >> element; 
     cout << endl;
     cout << "you just entered " << element << endl;
     cout << element << " has " << kitchen[element] << " in it." <<endl;
     
     return 0;

}
