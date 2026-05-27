#include<stdio.h>
 
void PrintEven(int iNo)
{

    if(iNo <= 0)
    {
        return;
    }
     int i =0;
     int iEven = 2;

    for(i = 1; i <= iNo; i++)
    {
        printf("%d\t",iEven);
        iEven = iEven + 2;

    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    PrintEven(iValue);

    return 0;
}