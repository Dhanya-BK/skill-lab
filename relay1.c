#include<stdio.h>
#include<stdlib.h>
void main()
{
int n=4,i,sum=0,num,total[5];
int a[4];
printf("Enter the total number of teams\n");
scanf("%d",&num);
printf("The race begins\n");
for(int j=1;j<=num;j++)
{
printf("\n The time taken %d team\n",j);
for(i=1;i<=n;i++)
{

printf("The player %d is holding the baton\n",i);
a[i]=rand()%4;
printf("The time taken by the player %d is %d\n",i,a[i]);
sum=sum+a[i];
}
total[j]=sum;


printf("The total time taken by the team %d is %d\n",j,total[j]);
sum=0;
}
}



