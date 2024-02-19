#include <iostream>
#include <string>
using namespace std;

// barto is a dummy subroutine name
void findrange (int top, int bottom)
{
    int j;
    for (j=bottom; j<top; j++)
        cout << "the value of j is " << j << endl;
    cout << endl;
}

int main()
{

    const int top = 10;
    int i, bottom;

bottom = 0;
while (top > bottom){
     findrange(top, bottom);
     bottom++;
}
     return 0;

}
