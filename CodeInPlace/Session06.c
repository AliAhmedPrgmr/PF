#include <stdio.h>

int main () 
{
/*	int n1=0,n2=1,n3=0;
	while (n3<301)
	{
		if(n3%5!=0 || n3==0)
		printf(" %d",n3);
		n3=n1+n2;
		n1=n2;
		n2=n3;
		
		
	}
*/
//Question 2
int p=0,f=0,s,c=0,d;
printf("Please enter student marks: ");
scanf("%d",&s);

while (s!=-1)
{
	if (s>=50)
	{
	++p;
	d=0; }
	else
	{
	++f;
	d=1; }
	if (d==1)
	++c;
	else
	c=0;
	if (c==3)
	break;
	printf("Please enter student marks: ");
	scanf("%d",&s);
}
printf("The number of passing students is: %d\n",p);
printf("The number of failing students is: %d",f);

}