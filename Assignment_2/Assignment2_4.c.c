#include<stdio.h>

int Display(int iNo , int iFrequency)
{
    int i = 0;
    
    //write updater
    for(i = 1;i<=iFrequency;i++)
    {
        printf("%d",iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    printf("Enter frequency :");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;
}