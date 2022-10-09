//Write a function to sort the employees according to their salries.

#include<stdio.h>
#include<string.h>
struct Employee     
{
 int id;
 char name[20];      
 int salary;
};		    

struct Employee input();
void display(struct Employee);
void hsEmployee(struct Employee *, int);

int main()
{
 struct Employee e1[3];
 int i;
 for(i=0;i<3;i++)
  e1[i]=input();
 hsEmployee(e1,3);
 for(i=0;i<10;i++)
  display(e1[i]);
 
  return 0;
}

struct Employee input()
{
  struct Employee x;
  int i;
  printf("\nEnter name, id and salary of Employee: ");
  fflush(stdin);
  fgets(x.name, 20, stdin);
  scanf("%d",&x.salary);
  scanf("%d",&x.salary);
  return x;
}

void display(struct Employee y)
{
 int i;
  printf(" %s\t",y.name);
  printf(" %d\t",y.id);
  printf(" %d\t",y.salary);
}

void hsEmployee(struct Employee e[], int size )
{
  int i,j,t=0;
  for(i=0;i<size-1;i++)
  {
   for(j=i+1;j<size;j++)    
   {
     if(e[i].salary>e[j].salary)
     {
      t=e[i].salary;
      e[i].salary=e[j].salary;
      e[j].salary=t;
     }
   }
  } 
}

