//Write a function to take input employee data from user. 

#include<stdio.h>
#include<string.h>
struct Employee
{
  int Id;
  char name[20];
  int salary;
}; 
 
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
 
int main()
{
 struct Employee e;
 e=input();
 printf("\n%d %s %d\n",e.Id,e.name,e.salary);
 return 0;
}
