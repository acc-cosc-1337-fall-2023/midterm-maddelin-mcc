#include"question1.h"
using std::cout; 
using std::cin;
using std::string;

int main()
{
    int num;
    char selection = 'Y';
    do{
        cout<<"\nEnter a number in base 10: ";
        cin>>num;
        while(num < 1 || num > 512 )
        {
            cout<<"Please enter a number between 1 and 512: ";
            cin>>num; 
        }
        string result = decimal_to_hex(num);
        cout<<"\nResult: "<<result<<"\n\nEnter 'Y' to run again or 'N' to exit: ";
        cin>>selection;
    }
    while(selection != 'N' && selection != 'n');
    return 0;
}