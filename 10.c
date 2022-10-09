// Write a program to enter the marks of 5 students in Chemistry, Mathematics, Physics(each out of 100) using structure named Marks having elements roll no., name, chem_marks, math_marks and phys_marks and them display the percentage of each student.

#include<stdio.h>
#include<string.h>

//Globally declaration of the structure

struct Marks
{
 char name[20];
 int rollNo;
 int Phy_Marks;
 int Chem_Marks;
 int Math_Marks;
};

//Declaration of input and display functions
struct Marks input()
{
 struct Marks m;
 printf("\nEnter student\'s name, roll and marks(Physics, Chemistry and Math): ");
 fflush(stdin);
 fgets(m.name,20,stdin);
 m.name[strlen(m.name)-1]='\0';
 scanf("%d",&m.rollNo);
 scanf("%d",&m.Phy_Marks);
 scanf("%d",&m.Chem_Marks);
 scanf("%d",&m.Math_Marks);
 return m;
}

void display(struct Marks s)
{
 printf("%s %d %d %d %d \n",s.name,s.rollNo,s.Phy_Marks,s.Chem_Marks,s.Math_Marks);
}

void percentage(struct Marks e[],int size)
{
  printf("\nPercentage of students: ");
  int i; float sum=0;
  for(i=0;i<size;i++)
  {
    sum=e[i].Phy_Marks+e[i].Chem_Marks+e[i].Math_Marks;
    printf(" %s- %f",e[i].name,sum/3);
  }
}
 
int main()
{
  struct Marks S[5];
  int i;
  for(i=0;i<5;i++)
    S[i]=input();
  for(i=0;i<5;i++)
     display(S[i]);
  percentage(S,5);
  return 0;
  
}


