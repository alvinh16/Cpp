#include <iostream>
#include <string>
using namespace std;

// barto is a dummy subroutine name
string element (int objref)
{
    string sentence;
    
    cout << "Please enter object " << objref << " : ";
    getline (cin, sentence);
    cout << endl;
    return sentence;
}

void displayhouse (string items[], int size)
{
     for (int i=0; i < size; i++)
         cout << items[i] << endl;
}

int main()
{

    const int housesize = 10;
    int i, j;
    string household[housesize];

for (i=0; i < housesize; i++)
    household[i] = element(i);

displayhouse(household, housesize);

     return 0;
}
