#include<stdio.h>

long factorial(int n)
{
    if(n<=1)
      return 1;
    return n*factorial(n-1);
}
long power(int x,int n)
{
    if(n==0)
      return 1;
    return x*power(x,n-1);
}
int gcd(int a,int b)
{
    while(b!=0)
    {
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int main(void)
{
  int choice,a,b,n,x;
  do
  {
    printf("1.gcd\n2.lcm\n3.factorial(recursion)\n");
    printf("4.xraised to n(recursion)\n5.exit\n");
    printf("enter choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
          printf("enter two non-negative integers:");
          scanf("%d%d",&a,&b);
          printf("gcd=%d\n",gcd(a,b));
          break;
        
        case 2:
          printf("enter two positive integers:");
          scanf("%d%d",&a,&b);
          if(a>0&&b>0)
            printf("lcm=%d\n",(a/gcd(a,b))*b);
          else
            printf("enter posuitive integers.\n");
          break;

        case 3:
          printf("enter n(0 to 20):");
          scanf("%d",&n);
          if(n>=0 && n<=20)
            printf("factorial=%lld\n",factorial(n));
          else 
            printf("enter n between 0 and 20.\n");
          break;

        case 4:
          printf("enter x and non-negative power n:");
          scanf("%%d",&x,&n);
          if(n>=0)
            printf("power=%d||d\n",power(x,n));
          else
            printf("power n must be non-negative.\n");
          break;

        case 5:
          printf("exiting...\n");
          break;
        default:
                 printf("invalid choice.\n");
    }
  }
  while (choice !=5);
  return 0;
}

