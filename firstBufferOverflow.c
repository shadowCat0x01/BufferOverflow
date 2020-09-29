// Author: shadowCat0x01
// Name: firstBufferOverflow
// Purpose: Learn more about buffer overflow attack

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int data[100];
	int* ptr = malloc( 100 * sizeof(int) );
}
