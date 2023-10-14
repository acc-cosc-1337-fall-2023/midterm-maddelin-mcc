#include<iostream>
#include"question4.h"
using std::cout;

int main()
{

    //initialize two integers to 0
    int num1 = 0;
    int num2 = 0;

    cout<<"num1 = "<<num1<<"\nnum2 = "<<num2<<"\n";

    param_function(num1,num2);

    cout<<"After running param_function:\nnum1 = "<<num1<<"\nnum2 = "<<num2;

    cout<<"\npassing the reference parameter for num2 allowed param_function() to change the value of num2, ";
    cout<<"\nbut passing the value parameter of num1 meant that the value of the variable could not change, since it was only stored in stack memory\n";

    return 0;
}