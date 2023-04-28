#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/**
 * infinite_while - An infinite while loop.
 *
 * Return: 0 
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
 * create_process - This Creates new processes
 * prints out the PID.
 */
void create_process(void)
{
	int rc = fork();

	if (rc == 0)
	{
		printf("Zombie process created, PID: %d\n", getpid());
		exit(0);
	}
}

/**
 * main - Entry point
 * Creates 5 zombie processes.
 * Return: 0 if successful
 */
int main(void)
{
	create_process();
	create_process();
	create_process();
	create_process();
	create_process();
	return (infinite_while());
}
