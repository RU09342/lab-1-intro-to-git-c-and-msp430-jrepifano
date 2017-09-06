#include <math.h>

float result;

float math(int num1, int num2, char Operator)
{
    switch(Operator) {

       case '+'  :

           result = num1 + num2;
           return result;

       case '-'  :

           result = num1 - num2;
           return result;

       case '*'  :

            result = num1 * num2;
            return result;

       case '/'  :

           result = num1 / num2;
           return result;

       case '%'  :

           result = num1 % num2;
           return result;

       /* you can have any number of case statements */
       default : /* Optional */
       return 0;
    }
}
