#include <stdio.h>
#include <stdlib.h>

/**
  * main - Arguments
  * @argc: Counts the number of arguments
  * @argv: Vector of the array of strings
  *
  * Description: A function that prints all arguments without argc
  * Return: 0
  */
int main(__attribute__((unused))int argc, char **argv)
{

int idx = 0;

while (argv[idx])
{
	printf("argv[%d]: %s\n", idx, argv[idx]);
	idx++;
}
return (0);
}
