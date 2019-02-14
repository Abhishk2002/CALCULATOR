#include<stdio.h>

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
     //recursive function to generate the factorial
     //of a number
      if(n==0) return 1;
     //using recursive definition
      return n*fact(n-1);
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


int main()
{
             scanf("%d %d",&a,&b);
             printf("%d",sum(a,b));
}
