#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i, L, N, x[100], temp;
	printf("Enter N = "); 
	scanf_s("%d", &N);
	for (i = 1; i <= N; i++) {
		printf("x[%d] = ", i); 
		scanf_s("%d", &x[i]);
	}
	for (L = 1; L <= N - 1; L++)
		for (i = 1; i <= N - L; i++)
			if (x[i] > x[i + 1]) {
				temp = x[i];
				x[i] = x[i + 1];
				x[i + 1] = temp;
			}
	for (i = 1; i <= N; i++)  	
	printf("%d, ", x[i]);
	printf("\n\n");
}