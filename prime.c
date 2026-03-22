#include <stdio.h>
int main()
{
	int i,n,c=0;
	printf("Enter any Number: ");
	scanf("%d", &n);
	for (i=n;i>=1;i--)
	{
		if (n % i == 0)
		{
			c = c+1;
		}
	}
	if (c==2) {
		printf("\nProvided Number is Prime Number");
	}
	else if (c>2) {
		printf("\nProvided Number is Composite Number");
	}
	else {
		printf("\nError!");
	}
	return 0;
}