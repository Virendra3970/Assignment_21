//Write a function to display the employee data

#include<stdio.h>
#include<string.h>

struct Employee     //Here Employee is a userdefined Data Type which contains three predefined data types
{
 int Id;
 char name[20];     // These three are the member variables of Employee DataType
 int salary;
};		    //Ending of the structure

struct Employee input();
void display(struct Employee);

int main()
{
 struct Employee e1; int i;
 e1=input();
 display(e1);
 return 0;
}

//Input Function
struct Employee input()
{
 struct Employee e;
 printf("\nEnter employee name: ");
 fgets(e.name,20,stdin);
 e.name[strlen(e.name)-1]='\0';
 printf("\nEnter employee id: ");
 scanf("%d",&e.Id);
 printf("\nEnter employee salary: ");
 scanf("%d",&e.salary);
 return e;
}

//Display function
void display(struct Employee y)
{
  printf("\n%d %s %d\n",y.Id,y.name,y.salary);
}
