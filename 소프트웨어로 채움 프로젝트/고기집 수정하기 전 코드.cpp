//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	char order;//�ֹ� ����
//	int n;//�ֹ� ��ȣ
//	int how;//�� �κ�
//	int total = 0;
//	int flag;
//
//
//	printf("�������.\n");
//	printf("�ֹ��Ͻðھ��? (Y / N) ");
//	scanf("%c", &order);
//	if (order == 'n' || order == 'N') {
//		return 0;
//	}
//
//	printf("�޴��� ���� �ֽ��ϴ�.\n");
//	printf("������ ���� 1�κ� �����Դϴ�\n");
//	printf("-----------------------------------------\n");
//	printf("|                  MENU                 |\n");
//	printf("-----------------------------------------\n");
//	printf("|                 ����                |\n");
//	printf("|  0. ������                   10000��|\n");
//	printf("|  1. ���                       10000��|\n");
//	printf("|  2. ������                     11000��|\n");
//	printf("|  3. ���ű��                   10000��|\n");
//	printf("|  4. ��������                   12000��|\n");
//	printf("|  5. ������                      4000��|\n");
//	printf("-----------------------------------------\n");
//	printf("|                 �Ľķ�                |\n");
//	printf("|  6. �����                      1000��|\n");
//	printf("|  7. �����                    2000��|\n");
//	printf("|  8. ���ø�                      5000��|\n");
//	printf("|  9. ����ø�                    5000��|\n");
//	printf("| 10. ������                      3000��|\n");
//	printf("| 11. ���                        3000��|\n");
//	printf("-----------------------------------------\n");
//	printf("|                  �ַ�                 |\n");
//	printf("| 12. �ݶ�                        1500��|\n");
//	printf("| 13. ���̴�                      1500��|\n");
//	printf("| 14. ����                        3000��|\n");
//	printf("| 15. ����                        4000��|\n");
//	printf("-----------------------------------------\n");
//
//
//	//flag = 0;
//	while (1) {
//
//		printf("������ �ֹ��Ͻðھ��? (��ȣ�� �Է��� �ּ���)\n");
//		scanf("%d", &n);
//
//		if (n == 1) {
//			printf("������ �� �κ� �帱���? (���ڷ� �Է�)\n", foods[n]);
//			scanf("%d", &how);
//			total = total + (10000 * how);
//			printf("�� �ֹ��Ͻðھ��? (Y / N)");
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
//			printf("��� �� �κ� �帱���? (���ڷ� �Է�)\n");
//			scanf("%d", &how);
//			total = total + (10000 * how);
//			printf("�� �ֹ��Ͻðھ��? (Y / N)");
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
//			printf("������ �� �κ� �帱���? (���ڷ� �Է�) \n");
//			scanf("%d", &how);
//			total = total + (11000 * how);
//			printf("�� �ֹ��Ͻðھ��? (Y / N)");
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
//			printf("���ű�� �� �κ� �帱���? (���ڷ� �Է�)\n");
//			scanf("%d", &how);
//			total = total + (10000 * how);
//			printf("�� �ֹ��Ͻðھ��? (Y / N)");
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
//			printf("�������� �� �κ� �帱���? (���ڷ� �Է�)\n");
//			scanf("%d", &how);
//			total = total + (12000 * how);
//			printf("�� �ֹ��Ͻðھ��? (Y / N)");
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
//			printf("������ �� �κ� �帱���? (���ڷ� �Է�)\n");
//			scanf("%d", &how);
//			total = total + (4000 * how);
//			printf("�� �ֹ��Ͻðھ��? (Y / N)");
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
//			printf("����� �� �� �帱���? (���ڷ� �Է�)\n");
//			scanf("%d", &how);
//			total = total + (1000 * how);
//			printf("�� �ֹ��Ͻðھ��? (Y / N)");
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
//			printf("����� �� �� �帱���? (���ڷ� �Է�)\n");
//			scanf("%d", &how);
//			total = total + (2000 * how);
//			printf("�� �ֹ��Ͻðھ��? (Y / N)");
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
//			printf("���ø� �� �� �帱���? (���ڷ� �Է�)\n");
//			scanf("%d", &how);
//			total = total + (5000 * how);
//			printf("�� �ֹ��Ͻðھ��? (Y / N)");
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
//			printf("����ø� �� �� �帱���? (���ڷ� �Է�)\n");
//			scanf("%d", &how);
//			total = total + (5000 * how);
//			printf("�� �ֹ��Ͻðھ��? (Y / N)");
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
//			printf("������ �� �� �帱���? (���ڷ� �Է�)\n");
//			scanf("%d", &how);
//			total = total + (3000 * how);
//			printf("�� �ֹ��Ͻðھ��? (Y / N)");
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
//			printf("��� �� �� �帱���? (���ڷ� �Է�)\n");
//			scanf("%d", &how);
//			total = total + (3000 * how);
//			printf("�� �ֹ��Ͻðھ��? (Y / N)");
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
//			printf("�ݶ� �� �� �帱���? (���ڷ� �Է�)\n");
//			scanf("%d", &how);
//			total = total + (1500 * how);
//			printf("�� �ֹ��Ͻðھ��? (Y / N)");
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
//			printf("���̴� �� �� �帱���? (���ڷ� �Է�)\n");
//			scanf("%d", &how);
//			total = total + (1500 * how);
//			printf("�� �ֹ��Ͻðھ��? (Y / N)");
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
//			printf("���� �� �� �帱���? (���ڷ� �Է�)\n");
//			scanf("%d", &how);
//			total = total + (3000 * how);
//			printf("�� �ֹ��Ͻðھ��? (Y / N)");
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
//			printf("���� �� �� �帱���? (���ڷ� �Է�)\n");
//			scanf("%d", &how);
//			total = total + (4000 * how);
//			printf("�� �ֹ��Ͻðھ��? (Y / N)");
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
//			printf("�� ������ %d�� �Դϴ�.", total);
//			break;
//		}
//	}
//
//	return 0;
//}