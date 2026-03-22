#include <stdio.h>
int main()
{
	int n,r,s=0,z;
	printf("Enter any Number: ");
	scanf("%d", &n);
	z=n;
	while (n!=0)
	{
		r = n % 10;
		s = s*10 + r;
		n = n / 10;
	}
	if (s == z) {
		printf("%d is palindrome", z);
	}
	else {
		printf("%d is not palindrome", z);
	}
	return 0;
}