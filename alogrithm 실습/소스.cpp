#include <stdio.h>
#include <string.h>

int main()
{
	char name[10];

	scanf_s("%s", &name);

	if (strcmp(name, "�Źα�") == 0) {
		printf("%s, �ȳ�\n", name);
	}
	else {
		printf("%s�� �ȳ��ϼ���.\n", name);
	}

	return 0;
}