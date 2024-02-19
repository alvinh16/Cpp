#include <iostream>
#include <string>
using namespace std;

// barto is a dummy subroutine name
int plus3 (int currloc)
{
    return currloc + 3;
}

int main()
{

    int lockernumber, howmany, i;

     cout << "What is your locker number?" << endl;
     cin >> lockernumber;
     cout << "How many lockers do you need?" << endl;
     cin >> howmany;
     cout << "you r at locker number " << lockernumber << endl;
     cout << "& u need " << howmany << " lockers." << endl;

i=0;
int current = lockernumber;
    while (i < howmany){
          cout << "locker number " << current << endl;
          current = plus3(current);
          i++;
    } 
     return 0;

}
