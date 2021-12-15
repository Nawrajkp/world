//vowel or consonent program

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
