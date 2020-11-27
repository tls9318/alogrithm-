#include <stdio.h>
#include <string.h>

int main()
{
	char name[10];

	scanf_s("%s", &name);

	if (strcmp(name, "Ω≈πŒ±‘") == 0) {
		printf("%s, æ»≥Á\n", name);
	}
	else {
		printf("%s¥‘ æ»≥Á«œººø‰.\n", name);
	}

	return 0;
}