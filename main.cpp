#include<stdio.h>
#include <math.h>
int sum(int a, int b)
{
  //calculating the addition of the numbers
return a+b;
}
int diff (int a, int b)
{
  //calculating difference
  return a-b;
  //returning the difference
}

int factorial(int n)
{

     //using loops to generate factorial
     int fact = 1;
     while(n)
     {
     	fact = fact*n;
     	n--;
	 }
	 return fact;
	 //returning the value
	 /*
             if(n==1 || n==0) return 1;
             else return fact(n-1)*n; 
	 */

}

int remainder(int a, int b)
{
       //calculating remainder
         return a%b;
} //calculating quotient

int quotient(int a, int b)

{
	    if(b==0) return -1; //not possible
         return a/b;

}

int power(int a, int b)
{
	return pow(a,b);
}

int main()
{
             int a,b;
			 scanf("%d %d",&a,&b);
			      printf("%d",diff(a,b));
             printf("%d",sum(a,b));
	     printf("%d",diff(a,b));
	printf("%d",power(a,b));
	     
}
