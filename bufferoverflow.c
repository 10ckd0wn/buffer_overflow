#include <stdio.h>
#include <string.h>

void buffer(char* input);

int main(int argc, char *argv[]) {
	if (argc==1 || argc > 2){
		printf("Incorrect input, check README");
		return 0;
	}
	else {
		buffer(argv[1]);
	}
	return 0;
}

void buffer(char* input){
	int value = 5;
	char buffer_one[8], buffer_two[8];

	strcpy(buffer_one, "one");
	strcpy(buffer_two, "two");

	printf("[ДО] First_Buffer по адресу %p и содержит \n", buffer_two, buffer_two);
	printf("[ДО] Second_Buffer по адресу %p и содержит \'%s\'\n", buffer_one, buffer_one);
	printf("[ДО] value по адресу %p и равно %d (0x%08x) \n\n", &value, value, value);
	printf("[КОПИРУЕМ] %d байтов в buffer_two\n\n", strlen(input));

	strcpy(buffer_two, input);

    printf("[ПОСЛЕ] Second_Buffer по адресу %p и содержит \'%s\'\n", buffer_two, buffer_two);
    printf("[ПОСЛЕ] First_Buffer по адресу %p и содержит \'%s\'\n", buffer_one, buffer_one);
    printf("[ПОСЛЕ] value по адресу %p и равно %d (0x%08x)\n", &value, value, value);
}
