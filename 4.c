#include<stdio.h>
main()
{

    float a,b;
    printf("enter your unit usage:");
    scanf("%f",&a);

    if (a<=50)
    {
        printf("PRIMARY BILL: %f",(a*0.50)*1.2);
    }
    else if(a<=150)
    {
        printf("PRIMARY BILL: %f", (25+(a-50)*0.75)*1.2);
    }
  else if(a<=250)
    {
        printf("PRIMARY BILL: %f", (100+(a-150)*1.20)*1.2);
    }
else if(a>250)
    {
        printf("PRIMARY BILL: %f", (220+(a-150)*1.50)*1.2);
    }











    return 0;
}
