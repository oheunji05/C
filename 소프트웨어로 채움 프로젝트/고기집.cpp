#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

void s_printf(const char str[]) {
	Sleep(1000);
	printf("%s", str);
}
	
int menu(){
	printf("메뉴판 여기 있습니다.\n");
	printf("가격은 전부 1인분 기준입니다\n");
	printf("-----------------------------------------\n");
	printf("|                  MENU                 |\n");
	printf("-----------------------------------------\n");
	printf("|                 고기류                |\n");
	printf("|  0. 생삼겹살                   10000원|\n");
	printf("|  1. 목살                       10000원|\n");
	printf("|  2. 항정살                     11000원|\n");
	printf("|  3. 갈매기살                   10000원|\n");
	printf("|  4. 돼지갈비                   12000원|\n");
	printf("|  5. 껍데기                      4000원|\n");
	printf("-----------------------------------------\n");
	printf("|                 후식류                |\n");
	printf("|  6. 공기밥                      1000원|\n");
	printf("|  7. 된장찌개                    2000원|\n");
	printf("|  8. 물냉면                      5000원|\n");
	printf("|  9. 비빔냉면                    5000원|\n");
	printf("| 10. 누룽지                      3000원|\n");
	printf("| 11. 라면                        3000원|\n");
	printf("-----------------------------------------\n");
	printf("|                  주류                 |\n");
	printf("| 12. 콜라                        1500원|\n");
	printf("| 13. 사이다                      1500원|\n");
	printf("| 14. 소주                        3000원|\n");
	printf("| 15. 맥주                        4000원|\n");
	printf("-----------------------------------------\n");
	printf("|                                       |\n");
	printf("| 16. 메뉴 추천                         |\n");
	printf("|                                       |\n");
	printf("-----------------------------------------\n");
	return 1;
}


int main() {
	char order;//주문 여부
	int n;//주문 번호
	int how;//몇 인분
	int q;//질문 번호

	char foods[16][50] = { "생삼겹살", "목살", "항정살", "갈매기살","돼지갈비","껍데기",
		                   "공기밥","된장찌개","물냉면","비빔냉면","누룽지","라면",
		                   "콜라","사이다","소주","맥주"};

	int total[50] = {10000,10000,11000,10000,12000,
		             4000,1000,2000,5000,5000,3000,3000,
		             1500,1500,3000,4000};

	int finaltotal=0;

	printf("어서오세요.\n");
	printf("주문하시겠어요? (Y / N) ");
	scanf("%c", &order);
	if (order == 'n' || order == 'N') {
		return 0;
	}
   
	menu();

	while (1) {
		printf("\n");
		s_printf("무엇을 주문하시겠어요? (번호를 입력해 주세요)\n");
		scanf("%d", &n);

		if (n == 16) {
			s_printf("메뉴 추천을 원하시는 군요. 그럼 질문의 주제를 골라주세요. (번호를 입력)\n");
			printf("--------질문 주제--------\n");
			printf("| 1. 오늘 날씨          |\n");
			printf("| 2. 오늘 기분          |\n");
			printf("-------------------------\n");

			scanf("%d", &q);
			if (q == 1) {
				s_printf("오늘 날씨는 어떤가요? (번호 선택)\n");
				printf("---------오늘 날씨---------\n");
				printf("| 1. 맑음                 |\n");
				printf("| 2. 흐림                 |\n");
				printf("---------------------------\n");

				scanf("%d", &q);

				if (q == 1) {
					s_printf("날씨가 맑을 때는 돼지갈비와 물냉면이 잘 팔립니다.\n");
				}

				else if (q == 2) {
					s_printf("날씨가 흐릴 때는 생삼겹살과 된장찌개, 공기밥이 잘 팔립니다.\n");
				}
			}
			else if (q == 2) {
				s_printf("오늘 기분은 어떤가요? (번호 선택)\n");
				printf("---------오늘 날씨---------\n");
				printf("| 1. 좋음                 |\n");
				printf("| 2. 나쁨                 |\n");
				printf("---------------------------\n");

				scanf("%d", &q);

				if (q == 1) {
					s_printf("기분이 좋을 때는 목살을 드시는 걸 추천드립니다.\n");
				}

				else if (q == 2) {
					s_printf("기분이 나쁠 때는 갈매기살을 드시는 걸 추천드립니다.\n");
				}
			}
		}
		
		else {
			printf("%s 몇 인분(개) 드릴까요? (숫자로 입력)\n", foods[n]);
			scanf("%d", &how);
			finaltotal = finaltotal + (total[n] * how);

			s_printf("더 주문하시겠어요? (Y / N) ");
			scanf(" %c", &order);

			if (order == 'n' || order == 'N') {
				srand((unsigned int)time(NULL));
				int time;
				time = rand() % 15 + 1;
				printf("\n");
				printf("총 가격은 %d원 입니다.\n\n", finaltotal);
				printf("약 %d분 뒤에 나올 예정입니다. 조금만 기다려주세요\n\n", time);
				break;
			}
		}
	}
	return 0;
}