#include<stdio.h>

#include<stdio.h>
#define SIZE 6

int cqueue[SIZE] = { 0 };
int rear = -1;
int front = 0;
int cnt = 0;

int add(int data)
{
	if (cnt == SIZE) {
		printf("cQueue Overflow!\n");
		return -1;
	}
	cqueue[++rear%SIZE] = data;
	cnt++;
	return 0;
}

int delete(void)
{
	if (cnt ==0 ) {
		printf("cQueue Underflow!\n");
		return -1;
	}
	cnt -- ;
	return cqueue[front++%SIZE];

}

int main(void) {

	add(10);
	add(20);
	add(30);
	printf("%d\n", delete()); //10
	printf("%d\n", delete()); //20
	printf("%d\n", delete()); //30
	printf("%d\n", delete()); //underflow


	add(40);
	add(50);
	add(60);
	add(70);
	printf("%d\n", delete()); //40
	printf("%d\n", delete()); //50
	printf("%d\n", delete()); //60
	printf("%d\n", delete()); //70

	return 0;

}
