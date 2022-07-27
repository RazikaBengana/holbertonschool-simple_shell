#include <stdio.h>
#include <unistd.h>
#include "shell.h"

/**
 * _getppid - Function that get PPID
 *
 * Return: Value of pid_t
 */

pid_t _getppid(void)
{
	pid_t parent;

	parent = getpid();
	return (parent);
}
