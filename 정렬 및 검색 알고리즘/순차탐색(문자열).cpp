#include<stdio.h>
#include<Windows.h>
int main() {
	char datalist[10];
	char search;
	printf("���� Ž�� ���α׷�\n");
	for (int i = 0; i < 10; i++) {
		printf("����Ʈ �ε��� %d�� ���� �־��ּ��� : ", i);
		scanf("%s", &datalist[i]);
		fflush(stdin);
	}system("cls");
	while (1) {
		printf("ã�� ���� �����͸� �Է��ϼ��� : ");
		fflush(stdin);
		scanf("%s", &search);
		for (int i = 0; i < 10; i++) {
			if (search == datalist[i]) {
				printf("ã�°��� �ε��� �� : %d    ã�°��� �޸� �ּҰ� : %#x\n", i, &datalist[i]);
			}
		}
		if (datalist[0] != search&&datalist[1] != search&&datalist[2] != search&&datalist[3] != search&&datalist[4] != search&&datalist[5] != search&&datalist[6] != search&&datalist[7] != search&&datalist[8] != search&&datalist[9] != search) {
			printf("�Է��ϽŰ��� ��� �ε����� �������� �ʽ��ϴ�!!\n");
		}
		system("pause"); system("cls");
	}
}