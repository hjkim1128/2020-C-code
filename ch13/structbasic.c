#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct accont
{
	char name[12];
	int actnum;
	double balance;
};


int main (void)
{
	struct accont mine = { "홍길동", 1001, 300000 };
	struct accont yours;

	strcpy(yours.name, "이동원");
	yours.actnum = 1002;
	yours.balance = 500000;

	printf("구조체크기: %d\n", sizeof(mine));
	printf("%s %d %.2f\n", mine.name, mine.actnum, mine.balance);
	printf("%s %d %.2f\n", yours.name, yours.actnum, yours.balance);

	return 0;
}
