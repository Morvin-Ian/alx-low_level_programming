#include <stdio.h>

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'q' || ch == 'e')
			continue++;
		else
			putchar(ch);
			ch++;
	}
	putchar("\n");
}
