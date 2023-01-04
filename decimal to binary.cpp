#include <stdio.h>
#include <conio.h>
int main()
{
	int n;
	int i=-1;
	printf("Jep nr:");
	scanf("%d",&n);
	int v[n];
	if(n==0)
	{
		printf("Ne binar eshte: 0");
	}
	while(n!=0)
	{
		i++;
		if(n%2==1)
		{
			v[i]=1;
			n=n/2;
		}
		else
		{
			v[i]=0;
			n=n/2;
		}
	}
	printf("Ne binar eshte: ");
	for(i=i;i>=0;i--)
	{
		printf("%d",v[i]);
	}
	

	getch ();
	return 0;
}
