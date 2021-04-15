#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(){

//자연수 n을 입력받아 n줄만큼 다음과 같이 출력하는 프로그램 
//5입력 
//1
//2 3
//4 5 6
//7 8 9 10
//10 11 12 13 15

	int num,k=1;
	scanf("%d",&num);
	for (int i=0;i<=num;i++){
		for (int j=0;j<i;j++){
			printf("%d",k++);
		}
		printf("\n");
	}
	
	return 0;
}
