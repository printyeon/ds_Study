#include < stdio.h>

//n 원판갯수, a 출발, b 경유지, c 도착지

void HanoiTower(int n, char a, char b, char c) {
	if (n == 1) printf("원판 %d, %c -> %c\n", n, a, c);//1번 이동
	else {
		HanoiTower(n - 1, a, c, b);//(n-1)개를 출발지 -> 경유지
		printf("원판 %d, %c -> %c\n", n, a, c);
		HanoiTower(n - 1, b, a, c);
	}
}

int main(void) {
	int n = 4;
	HanoiTower(n, 'A', 'B', 'C');

	return 0;
}