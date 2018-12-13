#include <stdio.h>
#include <stdlib.h>
#include "Quiz.h"

void printStartMsg();
void printHelpMsg();

void main() {
	printStartMsg();
	printHelpMsg();

	int sel;
	for (;;) {
		printf("> ");
		scanf("%d", &sel);

		switch(sel) {
			case 1:
				exit(0);
				break;

			case 2:
				printHelpMsg();
				break;

			case 3:
				printf("KANJHI\n");
				printf("\n");
				break;

			default:
				printf("[エラー] 不正な入力\n");
				printf("\n");
		}
	}
}

void printStartMsg() {
	printf("Quizer 第0.1版\n");
	printf("\n");
}

void printHelpMsg() {
	printf("コマンド一覧表\n");
	printf("    1: 終了\n");
	printf("    2: コマンド一覧表の表示\n");
	printf("    3: [Quiz] 漢字の読み方\n");
	printf("    \n");
}

