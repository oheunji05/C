/* https://dgsw.goorm.io/exam/132233/%EC%BD%94%EB%94%A9%ED%85%8C%EC%8A%A4%ED%8A%B81/quiz/8 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int n;
	int arr[500] = { 0 };
	int temp;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}
