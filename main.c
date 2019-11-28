//main.c or main.cpp

#include <stdlib.h>
#include <stdio.h>
#include <locale.h> //не надо для линуха

int main() {
	setlocale(LC_ALL, ""); //не надо для линуха
	
	char ch[256];
	char prevch;
	int count = 0;
	int num_of_space = 0;
	int i = 0;

	for (int i = 0; i < 256; i++) {
		ch[i] = '\0';
	}

	gets(ch);

	while (ch[i] != '\0') {
		if (i > 0) {
			prevch = ch[i - 1];
		}
		if (ch[i] == ' ') {
			if (num_of_space == 0) {
				num_of_space++;
				count++;
			}
		}
		else num_of_space = 0;
		i++;
	}
	if (prevch != ' ') {
		count++;
	}

	printf("%d", count);


	printf("\n");
	system("pause"); //не надо для линуха
	return 0;
}
