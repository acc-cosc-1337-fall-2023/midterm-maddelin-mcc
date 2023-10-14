#include "question1.h"

bool test_config()
{
    return true;
}


/*
Write a string value return function decimal_to_hex 
with an int parameter. 
*/

std::string decimal_to_hex(int num)
{
    //hex is 0 1 2 3 4 5 6 7 8 9 A  B  C  D  E  F 
    //dec is 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15
    //initialize quotient
    int q = num;
    //initialize remainder
    int r;
    //initialize string
    std::string str = "";

    //Loop until quotient <= 0
    //calculate q/16, use the remainder to map hex value
    //once q is less than 16, then we can map q to its hex value

    while (q > 0)
    {
        if(q < 16){
            r = q;
            q = 0; //ends the loop
        }
        else{
            q = q/16;
            r = num%16;
            num = q;
        }
        
        //use switch to pick char to use
        switch(r)
        {
            case 0:
                str.push_back('0');
                break;
            case 1:
                str.push_back('1');
                break;
            case 2:
                str.push_back('2');
                break;
            case 3:
                str.push_back('3');
                break;
            case 4:
                str.push_back('4');
                break;
            case 5:
                str.push_back('5');
                break;
            case 6:
                str.push_back('6');
                break;
            case 7:
                str.push_back('7');
                break;
            case 8:
                str.push_back('8');
                break;
            case 9:
                str.push_back('9');
                break;
            case 10:
                str.push_back('A');
                break;
            case 11:
                str.push_back('B');
                break;
            case 12:
                str.push_back('C');
                break;
            case 13:
                str.push_back('D');
                break;
            case 14:
                str.push_back('E');
                break;
            case 15:
                str.push_back('F');
                break;
        }
    }
//Since we have been adding chars to the end of the string, we need to flip it, because the correct order would 
//be for the last remainder to be at the beginning of the hex number
//i.e. dec(16) = "10" but the above loop will return "01"
std::string res;
int len = str.length();
for(int i = 1; i <= len; i++){
    res.push_back(str[len - i]);
}
return res;
}