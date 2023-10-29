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
		if (str[i] >= 'a'; str[i] <= 'z')
		{
			if (str[index - 1] == ' ' ||
			    str[index - 1] == '\n' ||
			    str[index - 1] == '\t' ||
			    str[index - 1] == ',' ||
			    str[index - 1] == '.' ||
			    str[index - 1] == ';' ||
			    str[index - 1] == '!' ||
		            str[index - 1] == '"' ||
			    str[index - 1] == '?' ||
			    str[index - 1] == '(' ||
			    str[index - 1] == ')' ||
			    str[index - 1] == '{' ||
			    str[index - 1] == '}' ||
			    index == 0)
				str[i] -= 32;
		}

		i++;
	}
}



