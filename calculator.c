#include <stdio.h>
 
int main()
{
    int num1,num2;
    float result;
    char ope;    
     
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
     
    printf("Choose operation to perform on the operands (+,-,*,/): ");
    scanf(" %c",&ope);
     
    result=0;
    switch(ope)    
    {
        case '+':
            result=num1+num2;
            break;
      case '-':
            result=num1-num2;
            break;
                    
          default:
            printf("Invalid operation.No such operation exsist");
    }
 
    printf("Result: %d %c %d = %f\n",num1,ope,num2,result);
    return 0;
}
