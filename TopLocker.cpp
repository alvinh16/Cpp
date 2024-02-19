#include <iostream>
#include <string>
using namespace std;

bool height (int locker, int bottom)
{
    
    if (locker % bottom == 1)
         return true;
    else 
       return false;
}

int main()
{
// the 1st locker is no. 1
// we r trying to determine 
// if the curr locker no. is 
// a top level locker
    const int starting=1;
    const int bottom=3;
    int curr, last;
    bool top;

last = 87;
for (curr = 1; curr < (last+1); curr++){
//     cout << curr << endl;
//      top = height(curr, bottom);
       if (height(curr, bottom))
           cout << curr << endl;
     }
}