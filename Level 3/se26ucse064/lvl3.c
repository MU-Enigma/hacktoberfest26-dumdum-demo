#include <stdio.h>
int main (void)
{
    float num1 ,num2;
    char operator;
    printf("Enter 2 numbers: ");
    scanf("%f %f",&num1,&num2);
    printf("Enter operator: \n");
    printf("(+ addition, - subtraction, * multiplication, / division)\n");
    scanf(" %c",&operator);
    switch(operator)
    {
        case '+':
            printf("%f + %f = %f",num1,num2,num1+num2);
            break;
        case '-':
            printf("%f - %f = %f",num1,num2,num1-num2);
            break;
        case '*':
            printf("%f * %f = %f",num1,num2,num1*num2);
            break;
        case '/':
            if(num2==0)
                printf("Error! Division by zero.");
            else
                printf("%f / %f = %f",num1,num2,num1/num2);
            break;
        default:
            printf("Error! operator is not correct");
    }
}