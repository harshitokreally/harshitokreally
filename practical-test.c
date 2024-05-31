#include<stdio.h>
int main()
{
  /* Question 1
  int n;
  int t=1;
  printf("Enter the value of factorial to be calculated\n");
  scanf("%d",&n);
  printf("Factorial of !%d\n",n); 
  while(n>0)
  {
    t=t*n;
    n--;
  }
  printf("is %d\n",t);
  */
  /* Question 2 
  int m,a,n=1;
  printf("Enter the value of number for which table is to be calculated\n");
  scanf("%d",&a);
  printf("The table is \n");
  while(n<10)
  {
    m=a*n;
    printf("%d times %d is %d\n",a,n,m);
    n++;
  }
  */
  /* Question 3
  int a=0,b=1;
  int n1,c;
  printf("Enter the times you want to print the fibonacci series \n");
  scanf("%d",&n1);
  printf("%d-%d-",a,b);
  for(int i=0;i<n1;i++)
  {
    c=a+b;
    a=b;
    b=c;
    printf("%d-",c);
  }
  */
  /* Question 4
  int n,rem,sum=0;
  printf("Enter the number to calculate the sum:\n");
  scanf("%d",&n);
  while(n>0)
  {
    rem=n%10;
    sum=sum+rem;
    n/=10;
  }
  printf("The sum is %d",sum);
  */
  /* Question 5
  float n,t=1,upon,sum=0;
  printf("Calculate the sum of series such as 1/1+1/2+...1/n\n");
  printf("Enter the value of n\n");
  scanf("%f",&n);
  printf("%d",0);
  while(t<=n)
  {
    upon=(1/t);
    sum+=upon;
    t++;
    printf("+%f",upon);
  }
  printf("=");
  printf("\nThe sum is:%f",sum);
  */
  /* Question 6
  int a;
  for(int i=1;i<1000;i++)
  {
    
    for(int j=2;j<=i/2;j++)
    {
      a=1;
      if(i%j==0)
      {
        a=0;
        break;
      }
    }
    if(a!=0)
    {
    printf("%d ",i);
    }
  }
  */
  /* Question 7
  int sum=0;
  for(int i=1;i<=20;i++)
  {
    if(i%2==0)
    {
      sum+=i;
      printf(" %d ",i);
    }
  }
  printf("\nThe sum is :%d",sum);
  */
  return 0;
/*
*/
}