
#include <stdio.h>
#include <math.h>

int main(){
	float num1;
	char op;
	float num2;
	float result;
	 printf("enter 1st  num:");
	 scanf("%f",&num1);
	 printf("enter operation:");
	 scanf(" %c",&op);
	 printf("enter 2nd num:"); 
	 scanf("%f",&num2);
	 
	 switch(op){
	 	
	 	case '+':
	 	result=num1+num2;
	 	printf("%f",result);
	 	break;
	 	
	 	case '-':
	 	result=num1-num2;
	 	printf("%f",result);
	 	break;
	 	
	 	case '*':
	 	result=num1*num2;
	 	printf("%f",result);
	 	break;
	 	
	 	case'/':
	 	result=num1/num2;
	 	printf("%f",result);
          if(num2==0);
	 	printf("  cant divide with zero");
	 	break;
	 	           
	 	default:
	 	printf("operatore  not valid");
	 	break;
	 	}
	return 0;
}