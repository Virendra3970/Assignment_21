//Write a program to store the information of n students and display them by using structure.

#include<stdio.h>
#include<string.h>
struct student 
{
  int class;
  int roll;
  char name[20];
  char stream[10];
};
int main()
{ 
  int i,n;
  printf("\nEnter the number of students: ");
  scanf("%d",&n);
  struct student s[n];
  for(i=0;i<n;i++)
  {
    printf("\nEnter student\'s stream: ");
    fflush(stdin);
    
    fgets(s[i].stream,10,stdin);
    s[i].stream[strlen(s[i].stream)-1]='\0';
    printf("\nEnter student\'s name: ");
    fflush(stdin);
    fgets(s[i].name,20,stdin);
    s[i].name[strlen(s[i].name)-1]='\0';
    printf("\nEnter student\'s roll number: ");
    scanf("%d",&s[i].roll);
    printf("\nEnter student\'s class: ");
    scanf("%d",&s[i].class);
  }
  printf("\nStudents details are: Name Roll_Number Class Stream \n");
  for(i=0;i<n;i++)
  {
    printf(" %s %d %d %s \n",s[i].name,s[i].roll,s[i].class,s[i].stream);
  }
  return 0;
}
