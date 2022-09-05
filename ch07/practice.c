#include <stdio.h>
int i = 1;
void HanoiTower(int n, char a, char b, char c) {
	if (n == 1) printf("%d		원판 %d, %c -> %c\n", i++, n, a, c);
	else {
		HanoiTower(n - 1, a, c, b);
		printf("%d		원판 %d, %c -> %c\n",i++, n, a, c);
		HanoiTower(n - 1, b, a, c);
	}
}

int main(void) {
	int n = 5;
	HanoiTower(n, 'A', 'B', 'C');

	return 0;
}
