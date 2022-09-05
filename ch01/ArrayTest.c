#include<stdio.h>

int main(void)
{

	char a[] = {'P','r','a','c','t','i','c','e',' ','m','a','k','e','s',' ','p','e','r','f','e','c','t','.','\0'};
	
	char b[5][10] = { 
		{' ',' ',' ',' ','A','\0'},
		{' ',' ',' ','A','B','C','\0'},
		{' ',' ','A','B','C','D','E','\0'},
		{' ','A','B','C','D','E','F','G','\0'},
		{'A','B','C','D','E','F','G','H','I','\0'}
	};

	printf("%s\n", a);

	for (int i = 22; i>=0; i--)
	{
		printf("%c", a[i]);
	}
	printf("\n");

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 10; j++) {
			if(b[i][j] != ' ')
				printf("%c", b[i][j]);
		}
		printf("\n");
	}

	printf("\n");

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 10; j++) {
			if (j==4)
				printf("%c", b[i][j]);
			else
				printf(" ");
		}
		printf("\n");
	}

	printf("\n");

	for (int i = 0; i < 10; i++) {//0123456789
		for (int j = 4; j>=0; j--) { //01234
				printf("%c", b[j][i]);
		}
		printf("\n");
	}


		return 0;

}