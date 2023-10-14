#include "question3.h"

bool test_config()
{
    return true;
}

int get_fib_sequence(int num)
{

    if(num == 0){ return 0;}
    else if(num == 1){ return 1;}
    else{

        //num is the number of the sequence we are returning
        //initialize first two numbers
        int a = 0;
        int b = 1;
        //initialize sum of previous numbers
        int c;

        //since we know the first 2 numbers of the sequence, the loop will start on the 3rd number in the sequence
        for(int i = 2; i <= num; i++)
        {
            //add previous two numbers in sequence
            c = a + b;
            
            //reset the previous numbers 
            a = b;
            b = c;
        }
        return c;
    }
}