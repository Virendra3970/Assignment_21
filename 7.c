//Write a program to calculate the difference between two time periods

#include<stdio.h>
struct Time
{
  int hour;
  int min;
  int sec;
};

int main()
{ 
  struct Time t1,t2;
  int s,m,h,key;
  printf("\n\t\t\t\t!!!!!Time Diffeerenciator!!!!!\n");
  printf("\n1. Time Formate 24 hours\n ");
  printf("\n2. Time Formate 12 hours\n ");
  printf("\nSelect your choice: ");
  scanf("%d",&key);
  switch(key)
  {
    case 1:
     printf("\nEnter start time period: ");
     scanf("%d %d %d",&t1.hour,&t1.min,&t1.sec);
     if(t1.hour<=12 && t1.min<=60 && t1.sec<=60)
        printf("\nstart Time Period- %d : %d : %d\n",t1.hour,t1.min,t1.sec);
     else
        {printf("\nPlease enter Time in selected formate\n "); break;}
     printf("\nEnter stop time period: ");
     scanf("%d %d %d",&t2.hour,&t2.min,&t2.sec);
     if(t2.hour<=12 && t2.min<=60 && t2.sec<=60)
        printf("\nstop Time Period- %d : %d : %d\n",t2.hour,t2.min,t2.sec); 
     else
        {printf("\nPlease enter Time in selected formate\n "); break;}
     if(t1.sec>t2.sec)
     {
       t2.sec=t1.sec+60;
       t2.min-=1;
     }
     s=t2.sec-t1.sec;
     if(t1.min>t2.min)
     {
       t2.min=t2.min+60;
       t2.hour-=1;
     }
     m=t2.min-t1.min;
     if(t2.hour<t1.hour)
	h=-(t2.hour-t1.hour);
     else
        h=t2.hour-t1.hour;
     printf("\nTotal Time %d : %d : %d\n",h,m,s);
      break;
      
    case 2:
     printf("\nEnter start time period: ");
     scanf("%d %d %d",&t1.hour,&t1.min,&t1.sec);
     if(t1.hour<24 && t1.min<=60 && t1.sec<=60)
        printf("\nstart Time Period- %d : %d : %d\n",t1.hour,t1.min,t1.sec);
     else
        {printf("\nPlease enter Time in selected formate\n "); break;}
     printf("\nEnter stop time period: ");
     scanf("%d %d %d",&t2.hour,&t2.min,&t2.sec);
     if(t2.hour<=24 && t2.min<=60 && t2.sec<=60)
        printf("\nstop Time Period- %d : %d : %d\n",t2.hour,t2.min,t2.sec); 
     else
        {printf("\nPlease enter Time in selected formate\n "); break;}
     if(t1.sec>t2.sec)
     {
       t2.sec=t1.sec+60;
       t2.min-=1;
     }
     s=t2.sec-t1.sec;
     if(t1.min>t2.min)
     {
       t2.min=t2.min+60;
       t2.hour-=1;
     }
     m=t2.min-t1.min;
     if(t2.hour<t1.hour)
	h=-(t2.hour-t1.hour);
     else
        h=t2.hour-t1.hour;
     printf("\nTotal Time %d : %d : %d\n",h,m,s);
        break;  
      
     default: 
       printf("\nPlease select a valid selection:\n");
  }
  
  return 0;
  
}
