#include<stdio.h>
main()
{
   float c;
   printf("Enter The Temperature\n");
   scanf("%f",&c);

   if(c<0)
    {
        printf("Freezing Weather");
    }
    else if(c>=0 && c<=10)
    {
        printf("Very Cold Weather");
    }
    else if(c>=11 && c<=20)
    {
        printf("Cold Weather");
    }
    else if(c>=21 && c<=30)
    {
        printf("Normal Temperature");
    }
    else if(c>=31 && c<=40)
    {
        printf("It's hot");
    }
    else if(c>40)
    {
        printf("It's very hot");
    }
    return 0;
}
