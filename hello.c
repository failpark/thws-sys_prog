#include <stdio.h>
int main() {
	printf("Hello World\n");
	int num = 10;
	scanf("%d", &num);
	// there is no bool type???
	if (num == 10) {
		printf("num is 10\n");
	} else if (num == 11) {
		printf("num is 11\n");
	} else if (num) {
		printf("not zero\n");
	}
	printf("Your input was: %d\n", num);
	return 0;
}