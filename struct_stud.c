#include<stdio.h>

struct stud
{
	char name [25];
	int roll;
	int m1,m2,m3,m4,m5,a1,a2,a3,a4,a5;
}s[100];

int main()

{

int n,i, tot;
float I1,I2,I3,I4,I5,avg;

printf("Enter number of student\n");
scanf("%d",&n);

for(i=0;i<n;i++)
{
	printf("Enter student name\n");
	scanf("%s",s[i].name);

	printf("Enter rollnumber\n");
	scanf("%d",&s[i].roll);

	printf("Enter 5 subject mark for 100\n");
	scanf("%d %d %d %d %d", &s[i].m1,&s[i].m2,&s[i].m3,&s[i].m4,&s[i].m5);

	printf("Enter 5 assignment mark for 10\n");
	scanf("%d %d %d %d %d",&s[i].a1,&s[i].a2,&s[i].a3,&s[i].a4,&s[i].a5);

}

for(i=0;i<n;i++)
   {
	I1 = (s[i].m1 * .07) + (s[i].a1 * .3);
	I2 = (s[i].m2 * .07) + (s[i].a2 * .3);
	I3 = (s[i].m3 * .07) + (s[i].a3 * .3);
	I4 = (s[i].m4 * .07) + (s[i].a4 * .3);
	I5 = (s[i].m5 * .07) + (s[i].a5 * .3);



	printf("student name :- %s\n",s[i].name);
	printf("student roll number :- %d\n",s[i].roll);

	printf("internal mark for \nsubject1 = %.0f\nsubject2 = %.0f\nsubject3 = %.0f\nsubject4 = %.0f\nsubject5 = %.0f\n",I1,I2,I3,I4,I5);

	tot = s[i].m1 + s[i].m2 + s[i].m3 + s[i].m4 + s[i].m5;

	avg = tot / 5.0;
	
	printf("total = %d \naverage = %.2f\n",tot,avg);


   }
	return 0;

}



