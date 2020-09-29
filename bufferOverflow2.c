#include <stdio.h>
#include <string.h>

void function1(char *str) {
	char buffer[5];
	strcpy(buffer, str);
}

void main(int argc, char *argv[])
{
	function1(argv[1]);
	printf("%s\n", "Executed normally");
}
