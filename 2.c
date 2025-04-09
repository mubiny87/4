#include<stdio.h>
main()
{
    int a,b,c;
    printf("Enter the Three angles for the triangle\n");
    printf("Enter 1st angle\n");
    scanf("%d",&a);
    printf("Enter 2nd angle\n");
    scanf("%d",&b);
    printf("Enter 3rd angle\n");
    scanf("%d",&c);

    if (a+b+c == 180)
    {
        printf("The triangle is valid");
    }
  else
  {
      printf("invalid");
  }

}
