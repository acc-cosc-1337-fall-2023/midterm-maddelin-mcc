#include"question3.h"
using std::cout;
using std::cin;

int main()
{

    int num;
    int result;
    char selection = 'Y';
    do{
        cout<<"Please enter a number: ";
        cin>>num;
        while(num < 1 || num > 15 )
        {
            cout<<"Please enter a number between 1 and 15: ";
            cin>>num; 
        }
        result = get_fib_sequence(num);
        cout<<"\nThe fibonocci number is: "<<result<<"\n\nEnter 'Y' to run again or 'N' to exit: ";
        cin>>selection;
    }
    while(selection != 'N' && selection != 'n');
    
    return 0;
}