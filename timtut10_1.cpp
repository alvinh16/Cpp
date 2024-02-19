#include <iostream>
#include <string>
using namespace std;

string chick ()
{
    return "chicken";
}

string pork ()
{
    return "weinerschnitzel";
}

string vegetarian ()
{
    return "soup & salad";
}

string seafood ()
{
    return "fish & chips";
}

string beef ()
{
    return "roast beef sandwhich";
}

string mutton ()
{
    return "mutton chop";
}


int main()
{

    int op1;
    string choice;

     cout << "What would u like? enter a number " << endl;
     cout << "1 chicken" << endl;
     cout << "2 pork" << endl;
     cout << "3 seafood" << endl;
     cout << "4 beef" << endl;
     cout << "5 mutton" << endl;
     cout << "6 vegetarian (default)" << endl;
     cin >> op1;
     switch (op1) {
        case 1: choice = chick();
                  break;
        case 2: choice = pork();
                  break;
        case 3: choice = seafood();
                  break;
        case 4: choice = beef();
                  break;
        case 5: choice = mutton();
                  break;
        default: choice = vegetarian();
     }
     cout << "you asked for " << choice << endl;
     
     return 0;

}
