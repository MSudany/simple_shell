#include "shell.h"

/**
 * remove_double_quotes - removes double quotes form the input
 *
 * @string: input command
 *
 * Return: void
 *
 */

void remove_double_quotes(char *string)
{
	int i = 0, j = 0;
	int length = strlen(string);



	while (i < length)
	{
		if (string[i] != '"')
		{
			string[j++] = string[i];
		}
		i++;
	}

	string[j] = '\0';
}


/**
 * replace_pound_with_null - replaces the pounds with null
 *
 *
 * @str: string
 *
 * Return: void
 *
 */


void replace_pound_with_null(char *str)
{
	int i;
	int len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if (str[i] == '#')
		{
			str[i] = '\0';
			break;
		}
	}
}


/**
 * handle_line - handels the line to remove quotes and bounds
 *
 * @line: line
 *
 * Return: @line
 *
 */

char *handle_line(char *line)
{
	char *newline;

	newline = line;
	replace_pound_with_null(newline);
	remove_double_quotes(newline);

	return (newline);
}
