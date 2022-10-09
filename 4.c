//Write a funtion to find the highest salary employee from a given array of 3 employees.

#include<stdio.h>
#include<string.h>

struct Employee
{
  char name[20];
  int Id;
  int salary;
};
struct Employee input();
void display(struct Employee b);
void highestSalaryEmployee(struct Employee e[], int size);

int main()
{
  struct Employee E[3];
  int i;
  for(i=0;i<3;i++)
    E[i]=input();
  highestSalaryEmployee(E,3);
  return 0;
}

struct Employee input()
{
  struct Employee e;
  printf("\nEnter Name, Id and salary: ");
  fflush(stdin);
  fgets(e.name,20,stdin);
  e.name[strlen(e.name)-1]='\0';
  scanf("%d %d",&e.Id,&e.salary);
  return e;
}

void highestSalaryEmployee(struct Employee e[],int size)
{
  int i,j,t=0;
  struct Employee temp;
  for(i=0;i<size-1;i++)
  {
   for(j=i;j<size;j++)
   {
    if(e[i].salary>e[j].salary)
    {
     temp=e[j];
     e[j]=e[i];
     e[i]=temp;
    }
   }
  }
  printf("\nHighest Paid Employee is: %s\n",e[2].name);
}






















