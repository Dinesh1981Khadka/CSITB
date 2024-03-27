/*WAP to read records of N students and then display it in tabular format. Suppose records 
of following fields roll, name, gender, marks in computer and marks in English.
*/
#include<stdio.h>
#include<conio.h>
struct student
{
	int roll;
	char name[25];
	char gender[7];
	float mc;
	float eng;
};

void main()
{
	int n,i;
	struct student s[10];
	printf("How many students? ");
	scanf("%d",&n);
	printf("Enter detail of %d students\n",n);
	for(i=0;i<n;i++)
	{
		printf("For student%d\n",i+1);
		printf("Roll = ");
		scanf("%d",&s[i].roll);
		fflush(stdin);
		printf("Name = ");gets(s[i].name);
		printf("Gender = ");scanf("%s",s[i].gender);
		printf("Marks in CS = ");scanf("%f",&s[i].mc);
		printf("Marks in English = ");scanf("%f",&s[i].eng);
	}
		printf("After  Detail of students are\n");
	printf("------------------------------------------------------\n");
	printf("Roll Name                Gender Computer English\n");
	printf("------------------------------------------------------\n");
	for(i=0;i<n;i++)
	{
		
	printf("%-5d%-20s%-7s%-9.2f%.2f\n",s[i].roll,s[i].name,s[i].gender,s[i].mc,s[i].eng);	
		
	}
	printf("------------------------------------------------------\n");
	
	getch();
}
