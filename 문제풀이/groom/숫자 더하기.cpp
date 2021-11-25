/* https://dgsw.goorm.io/exam/132233/%EC%BD%94%EB%94%A9%ED%85%8C%EC%8A%A4%ED%8A%B81/quiz/1 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int n;
	int sum = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		sum += i;
	}
	printf("%d", sum);
	return 0;
}
