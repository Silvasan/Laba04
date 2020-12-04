#include <stdio.h> 

int main() {
	unsigned char str[250] = "", buffer = 0;
	int i = 0, lenght = 0;
	while (1) {
		printf("Enter the string: ");
		fgets(str, 250, stdin);
		if (!(str[248] == '\0' || str[248] == '\n')) {
			buffer = getchar();
			if (buffer != '\n') {
				while (buffer != '\n')			//buffercleaner
					scanf("%c", &buffer);
				printf("\nChecking an array for overflow...\n\nError! Please try again.\n\n");
			}
			else {
				printf("\nChecking an array for overflow...\n\nSuccessfully!\n\n");
				break;
			}
		}
		else {
			printf("\nChecking an array for overflow...\n\nSuccessfully!\n\n");
			break;
		}
	}
	printf("Result:\n");
	for (i = 0; str[i] != '\n'; i++) {
		if (str[i] >= '0' && str[i] <= '9') {
			switch (str[i]) {
			case '0':
				printf("zero");
				break;
			case '1':
				printf("one");
				break;
			case '2':
				printf("two");
				break;
			case '3':
				printf("three");
				break;
			case '4':
				printf("four");
				break;
			case '5':
				printf("five");
				break;
			case '6':
				printf("six");
				break;
			case '7':
				printf("seven");
				break;
			case '8':
				printf("eight");
				break;
			case '9':
				printf("nine");
				break;
			}
		}
		else printf("%c", str[i]);
	}
	getchar();
	return 0;
}