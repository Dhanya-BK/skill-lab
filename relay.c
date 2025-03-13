#include<stdio.h>
#include<stdlib.h>
void main()
{
int n=4,i,sum=0,num;
int a[4];

printf("The race begins\n");

for(i=1;i<=n;i++)
{

printf("The player %d is holding the baton\n",i);
a[i]=rand()%8;
printf("The time taken by the player %d is %d\n",i,a[i]);
sum=sum+a[i];
if(a[i]<=2)
{
printf("The player is running very fast\n");
}
else
printf("THe player is running very slow\n");
}
printf("The total time taken by the team is %d\n",sum);

if(sum<=10)
printf("The team won gold medal\n");
else if(sum>10 && sum<=20)
printf("The team won silver medal\n");
else
printf("The team won bronze medal\n");
}





