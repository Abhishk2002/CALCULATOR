#include<stdio.h>
#include <math.h>
int sum(int a, int b)
{
  //calculating sum
return a+b;
}
int diff (int a, int b)
{
  //calculating difference
  return a-b;
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

}

int remainder(int a, int b)
{
       //calculating remainder
         return a%b;
}

int quotient(int a, int b)
{
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
             printf("%d",sum(a,b));
}
