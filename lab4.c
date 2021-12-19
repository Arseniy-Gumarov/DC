#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(void)
{
	// Task 1
	printf("Task 1: \n");
	int left_v = 23;
	int right_v = 45;
	printf("Enter the number: \n");
	int x;
	scanf_s("%d", &x);
	int result = left_v <= x && x <= right_v;
	printf("%d\n", result);

	//Task 2
	printf("Task 2: \n");
	printf("Enter the number: \n");
	int z;
	scanf_s("%d", &z);
	bool b = ((1 << 4)  &  z);
	printf("%d", b);
	scanf_s("%d", &z);
	return 0;
}