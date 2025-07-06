/** Combinations Calculator **/

#include<stdlib.h>

int main()

{
	int i, n, r, ncr, nf=1, rf=1, nrf=1;
	printf("Enter values of n and r:");
	scanf("%d%d", &n, &r);
	// system("cls");
	for(i=n;i>=1;i--)
	{
		nf=nf*i;
	}
	for(i=r;i>=1;i--)
	{
		rf=rf*i;
	}
	for(i=n-r;i>=1;i--)
	{
		nrf=nrf*i;
	}
	ncr=nf/(nrf*rf);
	printf("%dC%d= %d", n, r, ncr);

	return 0;
}
