#include <stdio.h>
#include <math.h>


int main(){

char op;

int Num1;
int Num2;
int Num3;
int Num4;

int t1 = 0;
int t2 = 1;
int nextTerm = 0;

int i;

int i2;
int range;

const double PI =  3.1415926;

double Dnum1;
double result2;

double x;
double result;

double value; 
double result3;

unsigned long long fact = 1;

float Fnum1;
float Fnum2;

printf("Choose an operator:\n\n");
printf("Enter + for Addition:\n");
printf("Enter - for Subtraction:\n");
printf("Enter * for Multiplication:\n");
printf("Enter / for Division:\n");
printf("Enter F to display Fibonacci Sequence:\n");
printf("Enter M to display Multiplication Tables of a given number:\n");
printf("Enter P to display the value of PI:\n");
printf("Enter E to display the value of e:\n");
printf("Enter S to find Square a number:\n");
printf("Enter C to find Cube of a number:\n");
printf("Enter s to find Square Root of a number:\n");
printf("Enter c to find Cube Root of a number:\n");
printf("Enter I to find Sine of a number:\n");
printf("Enter R to Round a number upward to its nearest integer:\n");
printf("Enter r to Round a number downward to its nearest integer:\n");
printf("Enter W to find Power of a number:\n");
printf("Enter A to find the Absolute Value of a number:\n");
printf("Enter K to find Cosine of a number: (WIP)\n");
printf("Enter O to find Arc Cosine of a number in radiants:\n");
printf("Enter ! to find Factorial of a number: \n\n");

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
        
        
    case 'F':
	
	    printf("\nYou have chosen to view the Fibonacci Sequence. \n");
        
        printf("\nEnter a positive number: \n");
        scanf("%d", &Num1);
        
        printf("\nFibonacci Sequence: %d, %d, ", t1, t2);
        nextTerm = t1 + t2;
        
        while(nextTerm <= Num1){
        	
          printf("%d, ", nextTerm);	
          t1 = t2;
		  t2 = nextTerm;
		  	 
          nextTerm = t1 + t2;        
			
		}
        
        break;
        
        
    case 'M':
	
	    printf("\nYou have chosen to view the Mulitiplication Table. \n");    
        
        printf("\nEnter a Number: \n");
        scanf("%d", &Num1);
        
        do{
        	
          printf("Enter the range(positive integer): ");	
          scanf("%d", &range);
		  
	    } while(range <= 0);
	    
	    for (i2 = 1; i2 <= range; ++i2) {
	      printf("%d * %d = %d \n", Num1, i2, Num1 * i2);	
	    	
		}
        
        break;
        
        
    case 'P':
	
	    printf("\nYou have chosen to view the value of PI. \n");    
        
        printf("\n3.1415926535897932384626433\n");
        
        break;
        
    
	case 'E':
	
	    printf("\nYou have chosen to view the value of e. \n");
	    
	    printf("\n2.71828182845904523536028747135266249775724709369995\n");
	    
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
        
        printf("\nYou have chosen to find Square Root of a number. \n");
        
        printf("\nEnter the Number you want to find the Square Root of: \n");
        scanf("%f", &Fnum1);
        
        printf("\n\n%.16Sf", sqrt(Fnum1));
        
        break;
        
        
    case 'c':
    	
    	printf("\nYou have chosen to find Cube Root of a number. \n");
    	
    	printf("\nEnter the Number you want to find the Cube Root of: \n");
    	scanf("%f", &Fnum1);
    	
    	printf("\n\n%.16f", cbrt(Fnum1));
    	
    	break;
    	
    	
    case 'I':
    	
    	printf("\nYou have chosen to find Sine of a number. \n");
    	
    	printf("\nEnter the Number you want the Sine of: \n");
	    scanf("%lf", &Dnum1);
		
		result2 = sin(Dnum1);
		
		printf("\n\n sin(%.2lf) = %lf\n", Dnum1, result2);
		
		break;
		
		
    case 'R':	
    	
    	printf("\nYou have chosen to Round a number upwards. \n");
    	
    	printf("\nEnter the Number you want to Round: \n");
    	scanf("%f", &Fnum1);
    	   	
    	printf("\n\n%f", ceil(Fnum1));   	
    	
		break;
	
	
	case 'r':
		
		printf("\nYou have chosen to Round a number downwards. \n");
		
		printf("\nEnter the Number you want to Round: \n");
		scanf("%f", &Fnum1);
		
		printf("\n\n%f", floor(Fnum1));
   	    
   	    break;
   	    
   	    
    case 'W':
	
	    printf("\nYou have chosen to find Power of a number. \n");     
	 	
    	printf("\nEnter the Number you want the power of: \n");
    	scanf("%f", &Fnum1);
    	
    	printf("\nEnter the Exponent: \n");
    	scanf("%f", &Fnum2);
    	
    	printf("\n\n%.0f", pow(Fnum1, Fnum2));
    	
    	break;
    	
    	
    case 'A':
	
	    printf("\nYou have chosen to find the Absolute Value of a number. \n");
			
		printf("\nEnter the Number you want the absolute value of: \n");	
    	scanf("%d", Num1);
    	
    	printf("\n\n%d", abs(Num1));
    	
    	break;
    	
    	
    case 'O':
	
		printf("\nYou have chosen to find Arc Cosine of a number. \n");
		
		printf("\nEnter the Number you want the arc cosine of: \n");
		scanf("%d", Num1);
		
		printf("\n\n%d", acos(Num1));
    	
    	break;
    	
    	
    case 'K':
    	
    	printf("\nYou have chosen to find Cosine of a number. \n");
    	
    	printf("\nEnter the Number you want the cosine of: \n");
    	scanf("%.2lf", &value);
    	
    	result = cos(value);
    	
    	printf("\n\nThe cosine of %f is %f\n", value, result3);
    	
    	break;
    	
    	
    case '!':	
    	
    	printf("\nYou have chosen to find Factorial of a number. \n");
    	
    	printf("\nEnter the Number you want the factorial of: \n");
    	scanf("%d", &Num1);
    	
    	if(Num1 < 0)
    	   printf("Error! Factorial of a negative number doesn't exist.");
    	
    	else{
    		
    	    for(i = 1; i <= Num1; ++i){
    	    	fact *= i;
    	    	
			} 
			
			printf("\nFactorial of %d = %llu", Num1, fact);
			
		   }
    	
    }

}
