#include<stdio.h>
int main()
{

float invest,rate,add;
int year;
float start,end,interest;
printf("Enter initial investment amount: ");
scanf("%f",&invest);
while(invest<0)
{
printf("Invalid data entered!! Enter again(>=0): ");
scanf("%f",&invest);

}

printf("Enter total years: ");
scanf("%d",&year);
while(year<=0)
{
printf("Invalid data entered!! Enter again(>0): ");

scanf("%d",&year);

}

printf("Enter return rate: ");
scanf("%f",&rate);
while(rate<0)
{
printf("Invalid data entered!! Enter again(>=0): ");
scanf("%f",&rate);

}

printf("Enter additional contribution per year: ");
scanf("%f",&add);
while(add<0)
{
printf("Invalid data entered!! Enter again(>=0): ");
scanf("%f",&add);

}
printf("%-10s","Year");
printf("%-20s","Start Balance");
printf("%-20s","Interest");
printf("%-20s","End Balance");
printf("\n**************************************************************************\n");
start=invest;
for(int i=1;i<=year;i++)
{


interest=start*rate/100;
end=start+interest;
printf("%-10d",i);
printf("%-20.2f",start);
printf("%-20.2f",interest);
printf("%-20.2f",end);
printf("\n");
start=end+add;

}

return 0;
}