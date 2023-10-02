//Topic 01: C Basic Declarations and Expressions:

//program 01: Write a C program to printf your name, date of birth and mobile number.
//#include<stdio.h>
//
//int main()
//{
//	char characterName[] = "Alexandra";
//	int characterAge = 1975;
//	int number = "99-9999999999";
//	int x = 14;
////	printf("Name	: Alexandra Abramov\n");
////	printf("DOB     : July 14, 1975\n");
////	printf("Mobile	: 99-9999999999\n");
//	printf("Name	: %s\n",characterName);
//	printf("DOB     : July %d, %d\n",x,characterAge);
//	printf("Mobile	: %s\n",number);
//	return 0;
//}


//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


//program 02: Write a C program to get the C version you are using. Go to the editor
/*#include <stdio.h> 

int main(int argc, char** argv) 
{
#if __STDC_VERSION__ >=  201710L
{
  printf("We are using C18!\n");
}
#elif __STDC_VERSION__ >= 201112L
{
  printf("We are using C11!\n");
}
#elif __STDC_VERSION__ >= 199901L
{
  printf("We are using C99!\n");
}
#else
{
  printf("We are using C89/C90!\n");
}
#endif

  return 0;
}

Output: we are using C89/C90.

*/


//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


//program 03: 3. Write a C program to print a block F using hash (#), 
//where the F has a height of six characters and width of five and four characters.
//And also to print a big 'C'. Go to the editor
/*#include<stdio.h>
int main()
{
	printf("######\n");
	printf("#\n\#\n");
	printf("#####\n");
	printf("#\n\#\n\#\n");
	printf("\n");
	printf("    ######\n");
	printf("  ##      ##\n");
	printf("#\n\#\n\#\n\#\n\#\n");
	printf("  ##      ##\n");
	printf("    ######\n");
	return 0;
}*/

/*Expected Output:

######
#
#
#####
#
#
#
    ######
  ##      ##
 #
 #
 #
 #
 #
  ##      ##
    ######
*/


//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


//program 04: Write a C program to print the following characters in a reverse way. Go to the editor
/*#include<stdio.h>

int main()
{
	char character1 = 'X';
	char character2 ='M';
	char character3 ='L';
	printf("The reverse of %c%c%c is %c%c%c",character1,character2,character3,character3,character2,character1);
	return 0;
}*/
/*Test Characters: 'X', 'M','L';
Expected Output:
The reverse of XML is LMX*/


//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


//program 05: Write a C program to compute the perimeter and area of a rectangle with a height of 7 inches.
// and width of 5 inches.
/*#include<stdio.h>
#include<math.h>

int main()
{
	int height= 7,width= 5;
	int perimeter,area;
	perimeter=2*(height+width);
	area=height*width;
	printf("Perimeter of the rectangle = %d inches\n", perimeter);
	printf("Area of the rectangle = %d inches\n",area);
	return 0;
	
}*/

/*Expected Output:
Perimeter of the rectangle = 24 inches
Area of the rectangle = 35 square inches
*/


//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


//************Learning about condition******************** 
//program 01: Write a C program to accept two integers and check whether they are equal or not
/*#include<stdio.h>
int main()
{
	int i,j;
	printf("Enter num1: ");
	scanf("%d",&i);
	printf("Enter num2: ");
	scanf("%d",&j);
	if(i==j)
	{
		printf("they are equal");
	}
	else if(i<j)
	{
		printf("they are not equal");
	}
	else
	{
		printf("they are not equal");
	}
	return 0;
}*/


//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


//program 02:  Write a C program to check whether a given number is even or odd. 
/*#include<stdio.h>
int main()
{
	int i;
	printf("Enter number: ");
	scanf("%d",&i);
	if(i%2==0)
	{
		printf("it is even number");
	}
	else
	{
		printf("it is odd number");
	}
	return 0;
}*/


//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


//program 03: Write a C program to check whether a given number is positive or negative.
/*#include<stdio.h>
	int main()
	{
		int i;
		printf("Enter number: ");
		scanf("%d",&i);
		if(i>0)
		{
			printf("it is positive number");
		}
		else
		{
			printf("it is negative number");
		}
	return 0;	
	}*/


//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


//program 04: Write a C program to find whether a given year is a leap year or not.
/*#include<stdio.h>
int main()
{
	int year;
	printf("Enter year: ");
	scanf("%d",&year);
	if(year%400==0)
	{
		printf("it is a leap year");
	}
	else if(year%100==0)
	{
		printf("it is not a leap year");
	}
	else if(year%4==0)
	{
		printf("it is a leap year");
	}
	else
	{
		printf("it is not a leap year");
	}
	return 0;
}*/


//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

//program 05: Write a C program to read the age of a candidate and determine whether it is eligible for casting his/her own vote. 
//Congratulation! You are eligible for casting your vote.
/*#include<stdio.h>

int main()
{
	int age;
	printf("Enter age: ");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("you are eligible to vote");
	}
	else
	{
		printf("you are not eligible to vote");
	}
	return 0;	
}*/


//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


//program 06: Write a C program to read the value of an integer m and display the value of n is 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0.
/*#include<stdio.h>
int main()
{
	int m;
	printf("Enter m: ");
	scanf("%d",&m);
	if(m>0)
	{
		printf("the value n = 1");
	}
	else if(m==0)
	{
		printf("the value n = 0");
	}
	else
	{
		printf("the value n = -1");
	}
	
	return 0;
}*/


//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


//program 07: Write a C program to accept the height of a person in centimeter and categorize the person according to their height. Go to the editor

/*#include<stdio.h>

int main()
{
	 float height;
 
    printf("Enter the height of the person (in centimetres) :");
    scanf("%f", &height);
    if (height < 150.0)
        printf("The person is Dwarf. \n");//Dwarf mean that short//
    else if ((height >= 150.0) && (height < 165.0))
        printf("The person is  average heighted. \n");
    else if ((height >= 165.0) && (height <= 195.0))
        printf("The person is taller. \n");
    else
        printf("Abnormal height.\n");
        return 0;
}*/


//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


//program 08:  Write a C program to find the largest of three numbers
/*#include<stdio.h>
int main()
{
	int i,j,k;
	printf("Enter i: ");
	scanf("%d",&i);
	printf("Enter j: ");
	scanf("%d",&j);
	printf("Enter k: ");
	scanf("%d",&k);
	if(j>=i && j>=k)
	{
		printf("the largest number is %d",j);
	}
	else if(i>=j && i>=k)
	{
		printf("the largest number is %d",i);
	}
	else
	{
		printf("the largest number is %d",k);
	}
	return 0;
	
}*/



//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


//program 09: Write a C program to accept a coordinate point in a XY coordinate system and determine in which quadrant the coordinate point lies.
/*#include<stdio.h>
int main()
{

	double x,y;
	printf("Enter x: ");
	scanf("%lf",&x);
	printf("Enter y: ");
	scanf("%lf",&y);
	if(x>0&&y>0)
	{
		printf("the coordinate is in first quadrant");
	}
	else if(x>0&&y<0)
	{
		printf("the coordinate is in fourth quadrant");
	}
	else if(x<0&&y<0)
	{
		printf("the coordinate is in third quadrant");
	}
	else
	{
		printf("the coordinate is in second quadrant");
	}
	
	return 0;
}*/


//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


//program 10:  Write a C program to find the eligibility of admission for a professional course based on the following criteria:  
//Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks in Chem>=50 
// Total in all three subjects >=190 
// Total in Maths and Physics >=140 
// Input the marks obtained in Physics :65 
//Input the marks obtained in Chemistry :51 
//Input the marks obtained in Mathematics :72 
//Total marks of Maths, Physics and Chemistry :188 
//Total marks of Maths and Physics : 137 The candidate is not eligible.
/*#include<stdio.h>
int main()
{
	int math,physic,chemistry,total,Total;
	printf("Enter math: ");
	scanf("%d",&math);
	printf("Enter physic: ");
	scanf("%d",&physic);
	printf("Enter chemistry: ");
	scanf("%d",&chemistry);
	total=math+physic;
	Total=math+physic+chemistry;
	printf("the total is %d\n",total);
	printf("the Total is %d\n",Total);
	if(total>140&&Total>190)
	{
		printf("Candidate is eligible");
	}
	else if(total==140&&Total==190)
	{
		printf("Candidate is eligible");
	}
	else if(total<140&&Total<190)
	{
		printf("Candidate is not eligible");
	}
	else
	{
		printf("Candidate is not eligible");
	}
	return 0;
	
}*/


//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


//program 11:  Write a C program to calculate the root of a Quadratic Equation: *********** ax^2 + bx + c = 0 **********
/*#include<stdio.h>
#include<math.h>

int main()
{
	double root1,root2,delta,a,b,c;
	printf("Enter a: ");
	scanf("%lf",&a);
	printf("Enter b: ");
	scanf("%lf",&b);
	printf("Enter c: ");
	scanf("%lf",&c);
	delta=pow(b,2)-4*a*c;
	root1=(-b+sqrt(delta))/2*a;
	root2=(-b-sqrt(delta))/2*a;
	if(delta>=0)
	{
		printf("there are two roots such that: \n root1=%lf\n root2=%lf\n",root1,root2);
	}
	else
	{
		printf("the roots are imaginary number");
	}
	return 0;
}*/


//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


//********* Using loop **************
//Program 01 : Write a program in C to display the first 10 natural numbers.
/*#include<stdio.h>
int main()
{*/
	/*int i=1;
	for(i=1;i<=10;i++)
	{
		printf("  %d",i);
	}*/
/*	while(i<=10)
	{
		printf(" %d",i);
		i++;
	}
	return 0;
}*/


//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


//program 02:  Write a C program to find the sum of first 10 natural numbers.
/*#include<stdio.h>
int main()
{
	  int  j, sum = 0;

    printf("The first 10 natural number is :\n");
 
    for (j = 1; j <= 10; j++)
    {
        sum = sum + j;
        printf(" %d ",j);    
    }
    printf("\nThe Sum is : %d\n", sum);
    
	return 0;
}*/































