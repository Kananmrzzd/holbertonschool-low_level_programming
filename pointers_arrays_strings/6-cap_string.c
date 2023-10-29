#include "main.h"

/**
 * cap_string - capitalize all words
 * @str: pointer to char
 * Return: char
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a'&& str[i] <= 'z')
		{
			if (str[i - 1] == ' ' ||
			    str[i - 1] == '\n' ||
			    str[i - 1] == '\t' ||
			    str[i - 1] == ',' ||
			    str[i - 1] == '.' ||
			    str[i - 1] == ';' ||
			    str[i - 1] == '!' ||
		            str[i - 1] == '"' ||
			    str[i - 1] == '?' ||
			    str[i - 1] == '(' ||
			    str[i - 1] == ')' ||
			    str[i - 1] == '{' ||
			    str[i - 1] == '}' ||
			    i == 0)
				str[i] -= 32;
		}

		i++;
	}

	return (str);
}


