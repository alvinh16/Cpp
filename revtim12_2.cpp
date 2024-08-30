#include <iostream>
#include <string>
using namespace std;

int printoper (int iter)
{
     cout << "The current iteration is " << iter << endl;
    return 0;
}

int main()
{

    for (int i=0; i < 10; i++){
         printoper (i);
} 
     return 0;

}
