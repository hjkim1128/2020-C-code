#include <stdio.h>

void increment(void);

int main(void)
{
	for (int count = 0; count < 3; count++)
		increment();
}
	void increment(void)
	{
		static int sindex = 1;
		auto int aindex = 1;

		printf("���� �������� sindex: %2d,\n", sindex++);
		printf("�ڵ� �������� aindex: %2d,", aindex++);

	}