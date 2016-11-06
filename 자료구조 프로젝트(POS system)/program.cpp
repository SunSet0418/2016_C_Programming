#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>
#include<conio.h>
#include"Product.h"
typedef struct LinkedList {
	char name[100];
	int price;
	int num;
	int barcode;
	struct LinkedList *newpro;
}node;

struct product list[10] = {
	{"Do it HTML,CSS",28000,9788997390250},
	{"Do it 안드로이드",28000,9788997390847},
	{"LG Gram",2000000,9788997390250},
	{"MSI GT73", 3500000,9788926113356},
	{"Samsung Metal Series9", 2200000,9788931551167},
	{"다이소 5핀 케이블", 1000,8808739000108},
	{"맥북프로",1400000,8858741718423},
	{"맥북프로 2016",2500000,6945795380026},
	{"열혈강의 자료구조",32000,9788989345022},
	{"초코파이",8000,8801117544614}
};

node*head, *tail;

void main();

void insertprint() {
	system("cls");
	node *p = head->newpro;
	if (p == tail) {
		printf("계산된 물건이 없습니다.\n");
		return;
	}
	while (p != tail) {
		printf("%s\t  %d원\t  %d개\n", p->name, p->price, p->num);
		p = p->newpro;
	}
	printf("\n");
}
void printLinkedList() {
	system("cls");
	node *p = head->newpro;
	if (p == tail) {
		printf("계산된 물건이 없습니다.\n");
		system("pause");
		return;
	}
	while (p != tail) {
		printf("%s\t  %d원\t  %d개\n", p->name, p->price, p->num);
		p = p->newpro;
	}
	printf("\n");
	system("pause");
}

void reset() {
	head = (node*)malloc(sizeof(node));
	tail = (node*)malloc(sizeof(node));
	head->newpro = tail;
	tail->newpro = NULL;
	printf("연결 리스트가 초기화 되었습니다\n");
}

void insert() {
	system("cls");
	head = (node*)malloc(sizeof(node));
	tail = (node*)malloc(sizeof(node));
	head->newpro = tail;
	tail->newpro = NULL;
	while (1) {
		int barcode;
		node *Newnode = (node*)malloc(sizeof(node));
		node*p = head;
		node*s = p->newpro;
		scanf("%d", &barcode);
		while (p->newpro != tail) {
			p = p->newpro;
		}
		if (barcode == 0)
			printLinkedList();
		else if (barcode == 1)
			main();
		for (int i = 0; i < (sizeof(list) / sizeof(product)); i++) {
			if (list[i].barcode == barcode) {
				strcpy(Newnode->name, list[i].name);
				Newnode->price = list[i].price;
				Newnode->barcode = list[i].barcode;
				Newnode->num = 1;
				Newnode->newpro = tail;
				p->newpro = Newnode;
				insertprint();
				fflush(stdin);
			}
		}
	}
	return;
}

void deleteNode() {
	int barcode;
	scanf("%d", &barcode);
	node *a = head->newpro;
	while (a != tail) {
		node *o = a;
		a = a->newpro;
		if (a->barcode == barcode) {
			node*s = a->newpro;
			free(a);
			o->newpro = s;
			break;
		}
	}
	return;
}

void main() {
	while (1) {
		system("cls");
		int select;
		printf("POS 시스템\n\n");
		printf("1. 바코드 리딩\n");
		printf("2. 물건 삭제\n");
		printf("3. 계산목록\n");
		scanf("%d", &select);
		switch (select) {
		case 1:insert(); break;
		case 2:deleteNode(); break;
		case 3:printLinkedList(); break;
		}
	}
}