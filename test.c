#include <stdio.h>
#define MAX_LENGTH 100
void selection_sort(int a[], int n);
int main() {
	int i, n, a[MAX_LENGTH], j = 0;
	printf("Enter list of integers to be sorted (enter -1 to end):\n");
	for (i = 0, n = 0; i < MAX_LENGTH && j != -1; i++) {
		scanf("%d", &j);
		if (j != -1) {
			a[i] = j;
			n++;
		}
	}
	selection_sort(a, n);
	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
}
	return 0;
}
void selection_sort(int a[], int n){
	if (n == 0) return;
	int i, j, max_idx, temp;
	max_idx = 0;
	for (i = 0; i < n; i++) {
		if (a[i] > a[max_idx])
			max_idx = i;

	}
	temp = a[max_idx];
	a[max_idx] = a[n-1];
	a[n-1] = temp;
	selection_sort(a, n -1);
}

