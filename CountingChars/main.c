#include <stdio.h>

// Calculates the length of a string using pointer arithmetic
int stringLength(const char* stringPtr);

int main()
{
	char myString[] = "Hello";
	printf("The length of myString is: %d\n",
		stringLength(myString));
}

int stringLength(const char* stringPtr)
{
	const char* endPtr = stringPtr;

	while (*endPtr)
		endPtr++;

	return endPtr - stringPtr;
}