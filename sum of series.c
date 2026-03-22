#include <stdio.h>
int main()
{
	int i, s=0;
	printf("Series:\t");
	for (i=1;i<=10;i++)
	{
		printf("%d\t", i);
		s = s + i;
	}
	printf("\nSum of Series = %d", s);
	return 0;
}