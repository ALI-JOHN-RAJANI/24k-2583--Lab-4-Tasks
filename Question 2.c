#include <stdio.h>
int main() {
    int num1,num2;
    int operand;
    printf("Enter the number 1: ");
    scanf("%d",&num1);
    printf("Enter the number 2: ");
    scanf("%d",&num2);
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplaction\n");
    printf("4.Division\n\n");
    
    printf("Enter The Operator: ");
    scanf("%d",&operand);
    switch(operand){
        case 1:
            printf("The sum of the numbers is: %d",num1+num2);
            break;
        case 2:
            printf("The difference of the numbers is: %d",num1-num2);
            break;
        case 3:
            printf("The product of the numbers is: %d",num1*num2);
            break;
        case 4:
            if (num2==0){
                printf("Number 2 should not be zero");
            }else{
            printf("The division of the numbers is: %d",num1/num2);   
            }
            break;
        default:
            printf("invalid operator");
    }
    
    
    return 0;
}