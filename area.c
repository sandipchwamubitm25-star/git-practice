#include <stdio.h>
int main() {
	int area, length, breadth;
	printf("Enter Lenght and Breadth:\n");
	scanf("%d %d", &length, &breadth);
	area = length * breadth;
	printf("\nArea = %d", area);
	return 0;
}