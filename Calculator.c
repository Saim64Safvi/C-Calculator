#include <stdio.h>
#include <math.h>

int main(){

char op;

int Num1;
int Num2;

float Fnum1;
float Fnum2;

printf("Choose an operator:\n\n");
printf("Enter + for Addition:\n");
printf("Enter - for Subtraction:\n");
printf("Enter * for Multiplication:\n");
printf("Enter / for Division:\n");
printf("Enter S to find Square a number:\n");
printf("Enter C to find Cube of a number:\n");
printf("Enter s to find Square Root of a number:\n");
printf("Enter c to find Cube Root of a number:\n");
printf("Enter R to Round a number upward to its nearest integer:\n");
printf("Enter r to Round a number downward to its nearest integer:\n");
printf("Enter P to find Power of a number:\n\n");

scanf("%c", &op);


switch(op){

    case '+':

        printf("\n\nYou have chosen Addition. \n");
        
        printf("\nEnter the first Number: \n");
        scanf("%d", &Num1);
        printf("\nEnter the second Number: \n");
        scanf("%d", &Num2);

        printf("\n\n%d + %d = %d", Num1, Num2, Num1 + Num2);
        
        break;


    case '-':
    	
    	printf("\nYou have chosen Subtraction. \n");
    	
    	printf("\nEnter the first Number: \n");
    	scanf("%d", &Num1);
    	printf("\nEnter the second Number: \n");
    	scanf("%d", &Num2);
    	
    	printf("\n\n%d - %d = %d", Num1, Num2, Num1 - Num2);
        
        break;
        
        
    case '*':    
        
        printf("\nYou have chosen Multiplication. \n");
        
        printf("\nEnter the first Number: \n");
        scanf("%d", &Num1);
        printf("\nEnter the second Number: \n");
        scanf("%d", &Num2);
        
        printf("\n\n%d * %d = %d", Num1, Num2, Num1 * Num2);
        
        break;
        
        
    case '/':    
        
        printf("\nYou have chosen Division. \n");
        
        printf("\nEnter the first Number: \n");
        scanf("%d", &Num1);
        printf("\nEnter the second Number: \n");
        scanf("%d", &Num2);
        
        printf("\n\n%d / %d = %d", Num1, Num2, Num1 / Num2);
        
        break;
        
        
    case 'S':    
        
        printf("\nYou have chosen to Square a number. \n");
        
        printf("\nEnter the Number you want to Square: \n");
        scanf("%d", &Num1);
        
        printf("\n\n%d", Num1 * Num1);
        
        break;
        
        
    case 'C':    
        
        printf("\nYou have chosen to Cube a number. \n");
        
        printf("\nEnter the Number you want to Cube: \n");
        scanf("%d", &Num1);
        
        printf("\n\n%d", Num1 * Num1 * Num1);
        
        break;
        
        
    case 's':    
        
        printf("\nYou have chosen to find Square Root of a Number. \n");
        
        printf("\nEnter the Number you want to find the Square Root of: \n");
        scanf("%f", &Fnum1);
        
        printf("\n\n%.16Sf", sqrt(Fnum1));
        
        break;
        
        
    case 'c':
    	
    	printf("\nYou have chosen to find Cube Root of a Number. \n");
    	
    	printf("\nEnter the Number you want to find the Cube Root of: \n");
    	scanf("%f", &Fnum1);
    	
    	printf("\n\n%.16f", cbrt(Fnum1));
    	
    	break;
    	
    	
    case 'R':	
    	
    	printf("\nYou have chosen to Round a number upwards: \n");
    	
    	printf("\nEnter the Number you want to Round: \n");
    	scanf("%f", &Fnum1);
    	   	
    	printf("\n\n%f", ceil(Fnum1));   	
    	
		break;
	
	
	case 'r':
		
		printf("\nYou have chosen to Round a number downwards: \n");
		
		printf("\nEnter the Number you want to Round: \n");
		scanf("%f", &Fnum1);
		
		printf("\n\n%f", floor(Fnum1));
   	    
   	    break;
   	    
   	    
    case 'P':
	
	    printf("\nYou have chosen to find Power of a Number: \n");     
	 	
    	printf("\nEnter the Number you want the power of: \n");
    	scanf("%f", &Fnum1);
    	
    	printf("\nEnter the Exponent: \n");
    	scanf("%f", &Fnum2);
    	
    	printf("\n\n%.0f", pow(Fnum1, Fnum2));
    	
    	break;
    	
    }

}
