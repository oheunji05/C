/* https://dgsw.goorm.io/exam/132233/%EC%BD%94%EB%94%A9%ED%85%8C%EC%8A%A4%ED%8A%B81/quiz/4 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int re = 0;
	for (int hour = 0; hour <= n; hour++) {
		for (int min = 0; min <= 59; min++) {
			for (int se = 0; se <= 59; se++) {
				if (se == 3 || se == 13 || se == 23 || se == 33 || se == 43 || se == 53 || se == 30 || se == 31 || se == 32 || se == 34 || se == 35 || se == 36 || se == 37 || se == 38 || se == 39) {
					if (se == 33) {
						re++;
					}
					re++;
				}
				if (min == 3 || min == 13 || min == 23 || min == 33 || min == 43 || min == 53 || min == 30 || min == 31 || min == 32 || min == 34 || min == 35 || min == 36 || min == 37 || min == 38 || min == 39) {
					if (min == 33) {
						re++;
					}
					re++;
				}
				if (hour == 3 || hour == 13 || hour == 23) {
					re++;
				}
			}
		}
	}
	printf("%d", re);
	return 0;
}
