#include <iostream>
#include <string>
using namespace std;

// place holder for subroutine
int showarr (int kitchensize)
{
    // u may return a value or 0 if nothing 2 return
    return 0;
}

int main()
{

// all my variables
    int arrsize = 7;
    int element;
    // with or w/o "=" makes no diff
    string kitchen[] {"table",
    "chair",
    "spoon",
    "fork",
    "knife",
    "cup",
    "plate"};

// Heres where the program begins
     cout << "give a number 0 - 6 :";
     cin >> element; 
     cout << endl;
     cout << "you just entered " << element << endl;
     cout << element << " has " << kitchen[element] << " in it." <<endl;
     cout << "The length of the array is " << sizeof(kitchen) / sizeof(kitchen[0]) << " " << endl;
     
     return 0;

}
