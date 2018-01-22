#include <stdio.h>

int main() {
	FILE *fp;
	char str[1024];
	int x;
	errno_t error;
	int num;

	error = fopen_s(&fp, "sample.txt", "r");

	if (fp == NULL) {
		printf("ファイルオープン失敗\n");
		return -1;
	}
	while (scanf_s("%d", &num)) {
		if (num == 1) {
			while ((x = fgetc(fp)) != EOF) {
				putchar(x);
			}
		}
		else if (num == 9) {
			break;
		}
	}


	fclose(fp);
	return 0;
}