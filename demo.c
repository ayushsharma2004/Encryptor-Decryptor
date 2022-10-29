#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

void main() {
	srand(time(NULL));
	char st[50];
	int rep;
	printf("\nEnter any message: ");
	gets(st);
	int len = strlen(st);
	do {
		int sel, i, j, k, random[50];
		printf("1 = Encrypt a string\n");
		printf("2 = Decrypt a string\n");
		scanf("%d", &sel);
		switch(sel) {
			case 1:
				for(i = 0; (i < len) && (st[i] != '\0'); i++) {
					random[i] = rand() % 10;
					st[i] = st[i] + random[i];
				}
				printf("\nEncrypted message: %s\n", st);
				break;
			case 2:
				for(j = 0; j < len && st[j] != '\0'; j++) {
					st[j] = st[j] - random[j];
				}
				printf("\nDecrypted message: %s\n", st);
				break;
			default:
				printf("\nError\n");
		}
		printf("Try again (yes/no): \n");
		printf("1: Yes\n2: No\n");
		scanf("%d", &rep);
	} while (rep == 1);
}