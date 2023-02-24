#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

/**
 * main - PPID
 *
 * Return: 0
 */
int main(void)
{

pid_t my_pid;

my_pid = getppid();
printf("%u\n", my_pid);
return (0);
}
