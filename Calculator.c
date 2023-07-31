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

int n;
int i3 = 3;
int count;
int c;

const double PI =  3.1415926;

double Dnum1;
double result2;

double x;
double result;

double value; 
double result3;

double value2;
double result4;

double value3;
double result5;

double value4;
double result6;

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
printf("Enter Q to display Prime Numbers:\n");
printf("Enter S to find Square a number:\n");
printf("Enter C to find Cube of a number:\n");
printf("Enter s to find Square Root of a number:\n");
printf("Enter c to find Cube Root of a number:\n");
printf("Enter I to find Sine of a number:\n");
printf("Enter N to find ArcSine of a number:\n");
printf("Enter R to Round a number upward to its nearest integer:\n");
printf("Enter r to Round a number downward to its nearest integer:\n");
printf("Enter T to find Tangent of a number:\n");
printf("Enter U to find Arctangent of a number:\n");
printf("Enter W to find Power of a number:\n");
printf("Enter A to find the Absolute Value of a number:\n");
printf("Enter K to find Cosine of a number:\n");
printf("Enter O to find ArcCosine of a number in radiants:\n");
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
	    
	    
	case 'Q':
	
	    printf("\nYou have chosen to display Prime Numbers. \n");
	    
	    printf("\nEnter the number of prime numbers to print:\n");
	    scanf("%d", &n);

        if (n >= 1){
        	
        printf("\n\nFirst %d prime numbers are:\n\n",n);
        printf("2\n");
        
        }

        for (count = 2; count <= n;){
        	
        for (c = 2; c <= i3 - 1; c++){
        	
        if (i3%c == 0)
        
        break;
        
        }
        
        if (c == i3){
        	
      printf("%d\n", i3);
      
      count++;
      
      }
      
      i3++;
      
      }
	    
	  break;  
	    
    case 'S':    
        
        printf("\nYou have chosen to Square a number. \n");
        
        printf("\nEnter the Number you want to square: \n");
        scanf("%d", &Num1);
        
        printf("\n\n%d", Num1 * Num1);
        
        break;
        
        
    case 'C':    
        
        printf("\nYou have chosen to Cube a number. \n");
        
        printf("\nEnter the Number you want to cube: \n");
        scanf("%d", &Num1);
        
        printf("\n\n%d", Num1 * Num1 * Num1);
        
        break;
        
        
    case 's':    
        
        printf("\nYou have chosen to find Square Root of a number. \n");
        
        printf("\nEnter the Number you want to find the square root of: \n");
        scanf("%f", &Fnum1);
        
        printf("\n\n%.16Sf", sqrt(Fnum1));
        
        break;
        
        
    case 'c':
    	
    	printf("\nYou have chosen to find Cube Root of a number. \n");
    	
    	printf("\nEnter the Number you want to find the cube root of: \n");
    	scanf("%f", &Fnum1);
    	
    	printf("\n\n%.16f", cbrt(Fnum1));
    	
    	break;
    	
    	
    case 'I':
    	
    	printf("\nYou have chosen to find Sine of a number. \n");
    	
    	printf("\nEnter the Number you want the sine of: \n");
	    scanf("%lf", &Dnum1);
		
		result2 = sin(Dnum1);
		
		printf("\n\n sin(%.2lf) = %lf\n", Dnum1, result2);
		
		break;
		
		
	case 'N':
	
		printf("\nYou have chosen to find Arcsine of a number. \n");
		
		printf("\nEnter the Number you want the arcsine of: \n");
		scanf("%lf", &value2);
		
		result4 = asin(value2);
		
		printf("\nThe arc cosine of %lf is %lf", value2, result4);
		
		break;
		
		
    case 'R':	
    	
    	printf("\nYou have chosen to Round a number upwards. \n");
    	
    	printf("\nEnter the Number you want to round: \n");
    	scanf("%f", &Fnum1);
    	   	
    	printf("\n\n%f", ceil(Fnum1));   	
    	
		break;
	
	
	case 'r':
		
		printf("\nYou have chosen to Round a number downwards. \n");
		
		printf("\nEnter the Number you want to round: \n");
		scanf("%f", &Fnum1);
		
		printf("\n\n%f", floor(Fnum1));
   	    
   	    break;
   	    
   	    
   	case 'T':
	   
	    printf("\nYou have chosen to find Tangent of a number. \n");    
   	    
   	    printf("\nEnter the Number you want the tangent of: \n");
   	    scanf("%lf", &value3);
   	    
   	    result5 = tan(value3);
   	    
   	    printf("\n\nTangent of %lf is %lf", value3, result5);
   	    
   	    break;
   	    
   	    
   	case 'U':
	   
	    printf("\nYou have chosen to find Arctangent of a number. \n");   
   	    
   	    printf("\nEnter the Number you want the Arctangent of: \n");
   	    scanf("%lf", &value4);
   	    
   	    result6 = atan(value4);
   	    
   	    printf("\n\nArctangent of %lf is %lf", value4, result6);
   	    
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
	
		printf("\nYou have chosen to find Arccosine of a number. \n");
		
		printf("\nEnter the Number you want the arccosine of: \n");
		scanf("%d", Num1);
		
		printf("\n\n%d", acos(Num1));
    	
    	break;
    	
    	
    case 'K':
    	
    	printf("\nYou have chosen to find Cosine of a number. \n");
    	
    	printf("\nEnter the Number you want the cosine of: \n");
    	scanf("%lf", &value);
    	
    	result3 = cos(value);
    	
    	printf("\n\nThe cosine of %lf is %f\n", value, result3);
    	
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
