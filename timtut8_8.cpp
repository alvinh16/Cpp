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
cout << endl;
}

string * swapspace (string items[], int src, int dest)
{
     string tempstr;

     tempstr = items[src];
     items[src] = items[dest];
     items[dest] = tempstr;

return items;
}

int main()
{

    const int housesize = 10;
    int i, j, bottom;
    string household[housesize];
    string* phouse;

for (i=0; i < housesize; i++)
    household[i] = element(i);

displayhouse(household, housesize);
// phouse = swapspace(household, 3, 4);
// displayhouse(household, housesize);
bottom = 0;

while (bottom < housesize){
    cout << "the value of bottom is " << bottom << endl;
    bottom++;

}
     return 0;
}
