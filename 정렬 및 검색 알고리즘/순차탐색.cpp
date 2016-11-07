#include<stdio.h>
#include<Windows.h>
int main() {
	int datalist[10];
	int search;
	int index;
	int address;
	printf("순차 탐색 프로그램\n");
		for (int i = 0; i < 10; i++) {
			printf("리스트 인덱스 %d에 값을 넣어주세요 : ", i);
			scanf("%d", &datalist[i]);
		}system("cls");
	while (1) {
		printf("찾고 싶은 데이터를 입력하세요 : ");
		scanf("%d", &search);
		for (int i = 0; i < 10; i++) {
			if (search == datalist[i]) {
				printf("찾는값의 인덱스 값 : %d    찾는값의 메모리 주소값 : %#x\n", i, &datalist[i]);
			}
		}
		if (datalist[0] != search&&datalist[1] != search&&datalist[2] != search&&datalist[3] != search&&datalist[4] != search&&datalist[5] != search&&datalist[6] != search&&datalist[7] != search&&datalist[8] != search&&datalist[9] != search) {
			printf("입력하신값은 모든 인덱스에 존재하지 않습니다!!\n");
		}
		system("pause"); system("cls");
	}
}