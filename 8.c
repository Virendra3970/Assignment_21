//Write a program to store the information of 10 students and display them using structure.
#include<string.h>
#include<stdio.h> 
struct student
{
  int roll;
  char name[30];
  int class;
};

int main()
{
  struct student s[10];
  int i;
  for(i=0;i<10;i++)
  {
    fflush(stdin);
    printf("\nEnter student\'s name: ");
    fgets(s[i].name,30,stdin);
    s[i].name[strlen(s[i].name)-1]='\0';
    printf("\nEnter student\'s roll number: ");
    scanf("%d",&s[i].roll);
    printf("\nEnter student\'s class: ");
    scanf("%d",&s[i].class);
  }
  for(i=0;i<10;i++)
  {
    printf("\n%s %d %d",s[i].name,s[i].roll,s[i].class);
  }
  return 0;
}
