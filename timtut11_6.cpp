#include <iostream>
#include <string>
using namespace std;

// showarr : prints out all the elements in the array
int showarr (int kitchensize, string kitchen[])
{
    for (int i = 0; i < kitchensize ; i++){
        cout << "element in position " << i << " is " << kitchen[i] << endl;
    }

    // u may return a value or 0 if nothing 2 return
    return 0;
}

int main()
{

// all my variables
    int element;
    // with or w/o "=" makes no diff
    string kitchen[] {"table",
    "chair",
    "spoon",
    "fork",
    "knife",
    "cup",
    "plate"};

    int arrsize = sizeof(kitchen) / sizeof(kitchen[0]); 

// Heres where the program begins
     cout << "give a number 0 - " << arrsize - 1 << " : ";
     cin >> element; 
     cout << endl;
     cout << "you just entered " << element << endl;
     cout << element << " has " << kitchen[element] << " in it." <<endl;
     cout << "The length of the array is " << arrsize << " " << endl;

showarr (arrsize, kitchen);
     
     return 0;

}
