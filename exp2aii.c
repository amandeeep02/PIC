#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Name: Amandeep Singh\nRoll No: 16010123036\n");
    printf("Enter Three Integers: ");
    scanf("%d %d %d",&a,&b,&c);
    int max=0;
    if(a>b&&a>c)
    {
        max=a;
    }
    else if (b>a&&b>c)
    {
        max=b;
    }
    else
    {
        max=c;
    }
    printf("The maximum value is (using If -Else if-Else): %d\n",max);
}