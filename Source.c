#include <stdio.h> 
#define N 250
int main() {
	unsigned char str[N] = "", buffer = 0;
	int i = 0, lenght = 0;
	while (1) {
		printf("Enter the string: ");
		fgets(str, N, stdin);
		if (!(str[N-2] == '\0' || str[N-2] == '\n')) {
			buffer = getchar();
				if (buffer != '\n') {			//buffercleaner
					while (buffer != '\n')
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
			default:
				printf("%c", str[i]);
			}
	}
	getchar();
	return 0;
}