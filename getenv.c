#include "shell.h"

/**
 * get_env - get the environment variable
 * @getcmd: command
 * Return: the environment variable
 */

char *get_env(char *getcmd)
{
	int i, size;

	if (getcmd != NULL || getcmd[0] != '\0')
	{
		i = 0;
		while (environ[i] != NULL)
		{
			size = 0;
			while (*getcmd == environ[i][size] && *getcmd != '\0')
			{
				getcmd++;
				size++;
			}
			if ((environ[i][size]) == '=')
				return (&environ[i][size + 1]);
			i++;
		}
	}
	return (NULL);
}
