#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

/**
 * infinite_while - waits indefinitely for termination
 *
 * Return: 0 if successful else int error code
 */
int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}

/**
 * main - a program that creates 5 zombie processes
 *
 * Description: creates zombie processes and sleeps
 * Return: 0 if successful and int error code if not
 */
int main(void)
{
	int zombieCount = 0;
	pid_t pid;

	while (zombieCount < 5)
	{
		pid = fork();
		if (pid == 0)
			exit(0);
		printf("Zombie process created, PID: %i\n", pid);
		zombieCount++;

	}

	infinite_while();
	return (0);
}
