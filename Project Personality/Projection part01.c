////
//#include <stdio.h>
//void main()
//{
//   int i,n,sum=0;
//   printf("Input Value of terms : ");
//   scanf("%d",&n);
//   printf("\nThe first %d natural numbers are:\n",n);
//   for(i=1;i<=n;i++)
//   {
//     printf("%d ",i);
//     sum+=i;
//   }
//   printf("\nThe Sum of natural numbers upto %d terms : %d \n",n,sum);
//
//}
//#include<stdio.h>
// int main()
// {
// 	double d;
// 	printf("(double) d / 3 + 4");
// 	return 0;
// }
/*#include<stdio.h>
int main()
{
	int i,j;
	for(i=0;i<15;i++)
	{
		if(i<8)
		{
			for(i=2;i<8;i++)
			printf("*");
			for(i=1;i<8;i--)
			printf("$");
			printf("\n");	
		}
	}
}*/
	/*	else
		{
			for(3)
			printf("$");
			for(4)
			printf("*");
			printf("\n");
		}
	}
	return 0;
}
*/
/*#include<stdio.h>
int main()
{
	int n;
	printf("1. [G]reen tea\n");
	printf("2. [L]atte\n");
	printf("3. [E]spresso\n");
	printf("4. [C]appuccino\n");
	printf("Enter your order: ");
	scanf("%d",&n);
	if(n==1)
	{
		printf("you ordered green tea with charge 6000 Riel!");
	}
	else if(n==2)
	{
		printf("you ordered latte with charge 8000 Riel!!");
	}
	else if(n==3)
	{
		printf("you ordered expresso with charge 5000 Riel!!");

	}
	else if(n==4)
	{
		printf("you ordered cappucino with charge 7000 Riel!!");

	}
	else
	{
		printf("Invalid order !!");
	}
	return 0;
}
*/

/*#include<stdio.h>
int main()
{
	int base_salary,quantity,bonus_rate,price,commission_rate,Gross_salary;
	printf("Enter base salary: ");
	scanf("%d",&base_salary);
	printf("Enter quantity: ");
	scanf("%d",&quantity);
	printf("Enter bonus rate: ");
	scanf("%d",&bonus_rate);
	printf("Enter price: ");
	scanf("%d",&price);
	printf("Enter commission rate: ");
	scanf("%d",&commission_rate);
	Gross_salary = base_salary + (quantity*bonus_rate) + (quantity*price)*commission_rate;
	printf("the Gross salary is equal %d",&Gross_salary);
	return 0;
}
*/
#include<stdio.h>
int main()
{
	int n,sum;
	printf("Enter n: ");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("the sum of even number is %d",n);
	}
	else
	{
		printf("the sum of odd number is %d",2*n-1);
	}
	return 0;
	
}































