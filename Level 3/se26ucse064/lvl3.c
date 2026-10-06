#include <stdio.h>
int main (void)
{
    int num1 ,num2;
    char operator;
    printf("Enter 2 numbers: ");
    scanf("%d %d",&num1,&num2);
    printf("Enter operator: \n");
    printf("(+ addition, - subtraction, * multiplication, / division)\n");
    scanf(" %c",&operator);
    switch(operator)
    {
        case '+':
            printf("%d + %d = %d",num1,num2,num1+num2);
            break;
        case '-':
            printf("%d - %d = %d",num1,num2,num1-num2);
            break;
        case '*':
            printf("%d * %d = %d",num1,num2,num1*num2);
            break;
        case '/':
            if(num2==0)
                printf("Error! Division by zero.");
            else
                printf("%d / %d = %d",num1,num2,num1/num2);
            break;
        default:
            printf("Error! operator is not correct");
    }
}