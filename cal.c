#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("사용법: %s <숫자1> <연산자> <숫자2>\n", argv[0]);
        return 1;
    }

    int num1 = atoi(argv[1]);
    char *operator = argv[2];
    int num2 = atoi(argv[3]);

   int result = 0;

    if (strcmp(operator, "+") == 0) {
        result = num1 + num2;
    } else if (strcmp(operator, "-") == 0) {
        result = num1 - num2;
    } else if (strcmp(operator, "x") == 0) {
        result = num1 * num2;
    } else if (strcmp(operator, "/") == 0) {
	result = num1 / num2;
    } else {
	printf("입력 에러");
	return 1;
    }

    printf("%d\n", result);

    return 0;
}
