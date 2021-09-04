//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	char order;//주문 여부
//	int n;//주문 번호
//	int how;//몇 인분
//	int total = 0;
//	int flag;
//
//
//	printf("어서오세요.\n");
//	printf("주문하시겠어요? (Y / N) ");
//	scanf("%c", &order);
//	if (order == 'n' || order == 'N') {
//		return 0;
//	}
//
//	printf("메뉴판 여기 있습니다.\n");
//	printf("가격은 전부 1인분 기준입니다\n");
//	printf("-----------------------------------------\n");
//	printf("|                  MENU                 |\n");
//	printf("-----------------------------------------\n");
//	printf("|                 고기류                |\n");
//	printf("|  0. 생삼겹살                   10000원|\n");
//	printf("|  1. 목살                       10000원|\n");
//	printf("|  2. 항정살                     11000원|\n");
//	printf("|  3. 갈매기살                   10000원|\n");
//	printf("|  4. 돼지갈비                   12000원|\n");
//	printf("|  5. 껍데기                      4000원|\n");
//	printf("-----------------------------------------\n");
//	printf("|                 후식류                |\n");
//	printf("|  6. 공기밥                      1000원|\n");
//	printf("|  7. 된장찌개                    2000원|\n");
//	printf("|  8. 물냉면                      5000원|\n");
//	printf("|  9. 비빔냉면                    5000원|\n");
//	printf("| 10. 누룽지                      3000원|\n");
//	printf("| 11. 라면                        3000원|\n");
//	printf("-----------------------------------------\n");
//	printf("|                  주류                 |\n");
//	printf("| 12. 콜라                        1500원|\n");
//	printf("| 13. 사이다                      1500원|\n");
//	printf("| 14. 소주                        3000원|\n");
//	printf("| 15. 맥주                        4000원|\n");
//	printf("-----------------------------------------\n");
//
//
//	//flag = 0;
//	while (1) {
//
//		printf("무엇을 주문하시겠어요? (번호를 입력해 주세요)\n");
//		scanf("%d", &n);
//
//		if (n == 1) {
//			printf("생삼겹살 몇 인분 드릴까요? (숫자로 입력)\n", foods[n]);
//			scanf("%d", &how);
//			total = total + (10000 * how);
//			printf("더 주문하시겠어요? (Y / N)");
//			scanf(" %c", &order);
//			if (order == 'Y' && order == 'y') {
//				continue;
//			}
//			else if (order == 'n' || order == 'N') {
//				return 0;
//			}
//		}
//
//		else if (n == 2) {
//			printf("목살 몇 인분 드릴까요? (숫자로 입력)\n");
//			scanf("%d", &how);
//			total = total + (10000 * how);
//			printf("더 주문하시겠어요? (Y / N)");
//			scanf(" %c", &order);
//			if (order == 'Y' && order == 'y') {
//				continue;
//			}
//			else if (order == 'n' && order == 'N') {
//				flag = 1;
//			}
//		}
//
//		else if (n == 3) {
//			printf("항정살 몇 인분 드릴까요? (숫자로 입력) \n");
//			scanf("%d", &how);
//			total = total + (11000 * how);
//			printf("더 주문하시겠어요? (Y / N)");
//			scanf(" %c", &order);
//			if (order == 'Y' && order == 'y') {
//				continue;
//			}
//			else if (order == 'n' && order == 'N') {
//				flag = 1;
//			}
//		}
//
//		else if (n == 4) {
//			printf("갈매기살 몇 인분 드릴까요? (숫자로 입력)\n");
//			scanf("%d", &how);
//			total = total + (10000 * how);
//			printf("더 주문하시겠어요? (Y / N)");
//			scanf(" %c", &order);
//			if (order == 'Y' && order == 'y') {
//				continue;
//			}
//			else if (order == 'n' && order == 'N') {
//				flag = 1;
//			}
//		}
//
//		else if (n == 5) {
//			printf("돼지갈비 몇 인분 드릴까요? (숫자로 입력)\n");
//			scanf("%d", &how);
//			total = total + (12000 * how);
//			printf("더 주문하시겠어요? (Y / N)");
//			scanf(" %c", &order);
//			if (order == 'Y' && order == 'y') {
//				continue;
//			}
//			else if (order == 'n' && order == 'N') {
//				flag = 1;
//			}
//		}
//
//		else if (n == 6) {
//			printf("껍데기 몇 인분 드릴까요? (숫자로 입력)\n");
//			scanf("%d", &how);
//			total = total + (4000 * how);
//			printf("더 주문하시겠어요? (Y / N)");
//			scanf(" %c", &order);
//			if (order == 'Y' && order == 'y') {
//				continue;
//			}
//			else if (order == 'n' && order == 'N') {
//				flag = 1;
//			}
//		}
//
//		else if (n == 7) {
//			printf("공기밥 몇 개 드릴까요? (숫자로 입력)\n");
//			scanf("%d", &how);
//			total = total + (1000 * how);
//			printf("더 주문하시겠어요? (Y / N)");
//			scanf(" %c", &order);
//			if (order == 'Y' && order == 'y') {
//				continue;
//			}
//			else if (order == 'n' && order == 'N') {
//				flag = 1;
//			}
//		}
//
//		else if (n == 8) {
//			printf("된장찌개 몇 개 드릴까요? (숫자로 입력)\n");
//			scanf("%d", &how);
//			total = total + (2000 * how);
//			printf("더 주문하시겠어요? (Y / N)");
//			scanf(" %c", &order);
//			if (order == 'Y' && order == 'y') {
//				continue;
//			}
//			else if (order == 'n' && order == 'N') {
//				flag = 1;
//			}
//		}
//
//		else if (n == 9) {
//			printf("물냉면 몇 개 드릴까요? (숫자로 입력)\n");
//			scanf("%d", &how);
//			total = total + (5000 * how);
//			printf("더 주문하시겠어요? (Y / N)");
//			scanf(" %c", &order);
//			if (order == 'Y' && order == 'y') {
//				continue;
//			}
//			else if (order == 'n' && order == 'N') {
//				flag = 1;
//			}
//		}
//
//		else if (n == 10) {
//			printf("비빔냉면 몇 개 드릴까요? (숫자로 입력)\n");
//			scanf("%d", &how);
//			total = total + (5000 * how);
//			printf("더 주문하시겠어요? (Y / N)");
//			scanf(" %c", &order);
//			if (order == 'Y' && order == 'y') {
//				continue;
//			}
//			else if (order == 'n' && order == 'N') {
//				flag = 1;
//			}
//		}
//
//		else if (n == 11) {
//			printf("누룽지 몇 개 드릴까요? (숫자로 입력)\n");
//			scanf("%d", &how);
//			total = total + (3000 * how);
//			printf("더 주문하시겠어요? (Y / N)");
//			scanf(" %c", &order);
//			if (order == 'Y' && order == 'y') {
//				continue;
//			}
//			else if (order == 'n' && order == 'N') {
//				flag = 1;
//			}
//		}
//
//		else if (n == 12) {
//			printf("라면 몇 개 드릴까요? (숫자로 입력)\n");
//			scanf("%d", &how);
//			total = total + (3000 * how);
//			printf("더 주문하시겠어요? (Y / N)");
//			scanf(" %c", &order);
//			if (order == 'Y' && order == 'y') {
//				continue;
//			}
//			else if (order == 'n' && order == 'N') {
//				flag = 1;
//			}
//		}
//
//		else if (n == 13) {
//			printf("콜라 몇 개 드릴까요? (숫자로 입력)\n");
//			scanf("%d", &how);
//			total = total + (1500 * how);
//			printf("더 주문하시겠어요? (Y / N)");
//			scanf(" %c", &order);
//			if (order == 'Y' && order == 'y') {
//				continue;
//			}
//			else if (order == 'n' && order == 'N') {
//				flag = 1;
//			}
//		}
//
//		else if (n == 14) {
//			printf("사이다 몇 개 드릴까요? (숫자로 입력)\n");
//			scanf("%d", &how);
//			total = total + (1500 * how);
//			printf("더 주문하시겠어요? (Y / N)");
//			scanf(" %c", &order);
//			if (order == 'Y' && order == 'y') {
//				continue;
//			}
//			else if (order == 'n' && order == 'N') {
//				flag = 1;
//			}
//		}
//
//		else if (n == 15) {
//			printf("소주 몇 개 드릴까요? (숫자로 입력)\n");
//			scanf("%d", &how);
//			total = total + (3000 * how);
//			printf("더 주문하시겠어요? (Y / N)");
//			scanf(" %c", &order);
//			if (order == 'Y' && order == 'y') {
//				continue;
//			}
//			else if (order == 'n' && order == 'N') {
//				flag = 1;
//			}
//		}
//
//		else if (n == 16) {
//			printf("맥주 몇 개 드릴까요? (숫자로 입력)\n");
//			scanf("%d", &how);
//			total = total + (4000 * how);
//			printf("더 주문하시겠어요? (Y / N)");
//			scanf(" %c", &order);
//			if (order == 'Y' && order == 'y') {
//				continue;
//			}
//			else if (order == 'n' && order == 'N') {
//				flag = 1;
//			}
//		}
//
//		if (flag == 1) {
//			printf("총 가격은 %d원 입니다.", total);
//			break;
//		}
//	}
//
//	return 0;
//}