#include<stdio.h>
main()
{
    char x;
    printf("input your alphabet\n");
    scanf("%c",&x);

    if (x>='A' && x<='Z' || x>='a' && x<='z')
    {
            if (x=='a' || x=='e' || x=='i'|| x=='o'|| x=='u'|| x=='A' || x=='E' || x=='I' || x=='O' || x=='U')
                {
                    printf("This is a vowel");
                }
                else
                {
                    printf("This is a consonant");
                }
    }

    else {
            printf("not an alphabet");
            }
}
