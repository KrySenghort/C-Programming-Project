#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
struct login{
	int password[30];
	int phone[30];
};//*************************************************************************
struct DATA{
	char name[50];
	int ID;
	char sex;
	int age;
	char position[50];
	int salary;
	int food;
	int travel; 
};//************************************************************************
void ATTENDANCE(int i, int x){
			for(i=1;i<=30;i++){
			printf("\tEnter name#%d: ",i);
			scanf("%s",&name);
			printf("\tEnter 1/0/0.5: ");
			scanf("%d",&x);}
			for(j=1;j<=30;j++){
			FILE *f = fopen("Attendance List.txt","a");
			printf("%s\t\t%d",name,x);		
			printf("it is the attendance result of employee for one month");}
}//**************************************************************************
int main(){
	int j;
	for(j=0;j<1;j++){
	printf("==================================>Please login form<=======================================\n");
		struct login st[2];
		int k;
	for(k=0;k<=1;k++){
		printf("Enter your username: ");	scanf("%s",&st[k].name);
		printf("Enter your password: ");	scanf("%d",&st[k].password);
		printf("Enter your email: ");		scanf("%s",&st[k].email);
		printf("Enter your phone: ");		scanf("%d",&st[k].phone);
	if(strcmp(st[k].password,"0801020974554582")==0 && strcmp(st[k].phone,"011462700")==0)
		//if(strcmp(st[k].password,"1979")==0 && strcmp(st[k].phone,"4582")==0)
		printf("please wait.........\n");
		sleep(0.5);
		printf("your login is sucessful\n"); 
	else 
	printf("sorry please try again\n"); break; break; } }
	system("cls");
    printf("*****************************Hello welcome to our employee list management system*****************************\n");	
	printf("\t[1]. Personal Information List\n");
	printf("\t[2]. Attendance List\n");
	printf("\t[3]. Food Payment List\n");
	printf("\t[4]. Employment Result Table List\n");
	printf("\t[5]. Bonus Payment");
	printf("\t[6]. Deleted Data");
	int choice;
	printf("Enter your choice: 1,2,3,4,5,6,7: ");
	fflush(stdin);
	gets(choice);
	switch(1){
		case '1':
			struct DATA dt[6];
			int n,k;
			printf("Enter number of employee"); scanf("%d",&n);
			for(k=1;k<=n;k++){
			printf("***********Welcome to Personal Information List****************");
			printf("\tEnter name: ");  scanf("%s",&name);
			printf("\tEnter ID: ");  scanf("%d",&ID);
			printf("\tEnter sex: ");  scanf("%c",&sex);
			printf("\tEnter age: ");  scanf("%d",&age);
			printf("\tEnter position: ");  scanf("%s",&position);
			printf("\tEnter salary: ");  scanf("%d",&salary);}
			for(k=1;k<=n;k++){
			FILE *f = fopen("Personal Information List.txt","a");
			printf("Name\tID\tSex\tAge\tPosition\tSalary");
			printf("%s\t\t%d\t%c\t%d\t%s\t%d",dt[k].name,dt[k].ID,dt[k].sex,dt[k].age,dt[k].position,dt[k].salary); }
		case '2':
			printf("***********Welcome to Attendance List****************");
			int x,y;
			int A=void ATTENDANCE(x,y);
			printf("%d",A);
		case '3':
  			printf("***********Welcome to Food Payment List****************");
			struct DATA ft[6];
			for(i=0;i<=30){
			printf("Enter food payment#%d: ",i);   scanf("%s",&ft[i].food);
			printf("Enter travel cost: ");	       scanf("%d",&ft[i].travel);
		}	for(i=0;i<=30){
			FILE *f = fopen("Food and travel payment List.txt","a");
			printf("the food and travel payment have data as following: ");
			printf("food payment\travel payment");
			printf("%d\t%d",ft[i].food,ft[i].travel);
		}
		case '4':
			printf("***********Welcome to Employement Result Table List*******************");
			FILE *f = fopen("Attendance List.txt","r");
			if(name==)
}

	
	return 0;
}
















