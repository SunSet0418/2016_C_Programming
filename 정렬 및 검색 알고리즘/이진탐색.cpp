#include <stdio.h>
int main() {

	int arr[8] = { 1,2,3,4,5,6,7,8 };
	
	int num = 0;

	int check = 4;

	printf("기준 숫자 입력 1~8");
	scanf("%d",&num);

	
		if (arr[check-1]> num) {
			check -= 2;
		}
		else if (arr[check - 1]> num) {
			check += 2;
		}
		
		if (num == arr[check - 1]) {
			printf("%d번째",check);
			return 0;
		}

		if (arr[check]> num) {
			check -= 1;
		}
		else if (arr[check]> num) {
			check += 1;
		}

		if (num == arr[check]) {
			printf("%d번째", check+1);
		}
	
		return 0;
}