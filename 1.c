#include<stdio.h>
main()
{
    char x;
    printf("Enter your Character\n");
    scanf("%c", &x);
    if (x>='A' && x<='Z' || x>='a' && x<='z')
    {

                if (x>='A' && x<='Z' )
                {
                    printf("CAPITAL LETTER");
                }
            else
                {
                printf("small letter");
                }
    }
        else
    {
            printf("not alphabet");
    }
    return 0;
}
