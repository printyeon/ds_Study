#include<stdio.h>

void quickSort(int a[], int left, int right)
{
	int i = left, j = right, pivot = a[left], temp;

	
	if (left < right) {
		while (i < j)
		{
			while (pivot >= a[i] && i < right)
				i++;
			while (pivot <= a[j] && j > left)
				j--;

			if (i < j)
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
		a[left] = a[j];
		a[j] = pivot;
		quickSort(a, left, j - 1);
		quickSort(a, j + 1, right);
	}
}

int main(void) {

	int a[] = { 45,7,20,69,15,83,26,38,40,1,6,245 };
	int n = sizeof(a) / sizeof(int);

	quickSort(a, 0, n-1 );
	printf("Äü Á¤·Ä : ");
	for (int i = 0; i < n; i++)
		printf("%4d", a[i]);
	printf("\n");

	return 0;
}