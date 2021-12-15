/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char c;
    printf("enter a character= ");
    scanf("%c",&c);
    if(c=='a'|| c=='e'|| c=='i' ||c=='o'|| c=='u')
    {
        printf("vowel");
    }
    else{
    printf("consonent");
}
    return 0;
}
