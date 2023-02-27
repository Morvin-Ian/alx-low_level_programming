/**
 * rev_string - reverses a string
 *
 * @s: string parameter input
 *
 * Return: Nothing
*/

void rev_string(char *s)
{
	int k, n;
	char ch;

	for (k = 0; s[k] != '\0'; ++k)
		;

	for (n = 0; n < l / 2; ++n)
	{
		ch = s[n];
		s[n] = s[k - 1 - n];
		s[k - 1 - n] = ch;
	}

}
