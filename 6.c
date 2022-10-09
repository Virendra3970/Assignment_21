//Write a function to sort employees according to their names.
#include<stdio.h>
#include<string.h>
struct Employee
{
  int Id;
  char name[30];
  int salary;
};
int main()
{
 struct Employee e[5],temp;
 int i,j;
 for(i=0;i<5;i++)
 {
   printf("\nEnter employee\'s name: ");
   fflush(stdin);
   fgets(e[i].name,30,stdin);
   e[i].name[strlen(e[i].name)-1]='\0';
   printf("\nEnter employee\'s Id: ");
   scanf("%d",&e[i].Id);
   printf("\nEnter employee\'s salary: ");
   scanf("%d",&e[i].salary);
 }
 for(i=0;i<4;i++)
 {
   for(j=i;j<5;j++)
   {
     if(strcmp(e[i].name,e[j].name)>0)
     {
       temp=e[i];
       e[i]=e[j];
       e[j]=temp;
     }
   }
 }
 for(i=0;i<5;i++)
 {
   printf("\n Name- %s Id- %d Salary- %d\n",e[i].name,e[i].Id,e[i].salary);
 }
 return 0;
}
