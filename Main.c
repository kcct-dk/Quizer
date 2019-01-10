#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Quiz.h"
#include "QAUnit.h"

void printStartMsg();
void printHelpMsg();
void mrymryhrhrhrhr();

void main() {
	printStartMsg();
	printHelpMsg();
	char sel[6];
	char number;
	int no;
	
	//int sel;
	for (;;) {
		printf("> ");
		//scanf("%d", &sel);
		scanf("%s", sel);
		if(strcmp(sel,"1")==0||strcmp(sel,"2")==0||strcmp(sel,"3")==0||strcmp(sel,"364364")==0){
			if(strcmp(sel,"364364")==0){
					mrymryhrhrhrhr();
					printf("\n");
					continue;
			}
			
		number=sel[0];
		no=number-'0';
			
		switch(no) {
			case 1:
				exit(0);
				break;

			case 2:
				printHelpMsg();
				break;

			case 3:
				printf("KANJI\n");
				printf("\n");
				break;

			/*case 364364:
				mrymryhrhrhrhr();
				printf("\n");
				break;
			*/
			default:
				printf("[エラー] 不正な入力\n");
				printf("\n");
			}
		}else{
		printf("[エラー]不正な入力\n");
		printf("\n");
		continue;
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

void mrymryhrhrhrhr() {
	QA qa;
	strcpy(qa.q, "わかる？突っ込め。突っ込めって言ってんの、ね？突っ込めって言ってんだよォ！");
	printf("%s\n", qa.q);
	qa.a = malloc(sizeof(char *) * ASIZE);
	qa.a[0] = "右向くんだよ90度";
	printf("%s\n", qa.a[0]);
	qa.a[1] = "エンジン全開！";
	printf("%s\n", qa.a[1]);
	qa.a[2] = "こ↑こ↓（到着）";
	printf("%s\n", qa.a[2]);
	qa.ansArrLen = 3;
	qa.crtAnsNum = 1;
	quiz(qa);
	// 
}

