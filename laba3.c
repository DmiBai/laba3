#include <stdio.h>

int main()
{
	int a = 1, i;
	while (((7 * a * a * a) + (82 * a * a) - 1000000) < 0) {
		++a;
	 } 
	a--;
	printf("%d\n", a);
}
