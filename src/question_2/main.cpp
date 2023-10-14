#include<question2.h>
using std::cout; using std::cin;

int main()
{
    char selection = 'Y';
    do{
        int res = roll_die();
        cout<<"\nDie roll result: "<<res<<"\n\nEnter 'Y' to roll again or 'N' to exit: ";
        cin>>selection;
    }
    while(selection != 'N' && selection != 'n');
    return 0;
}