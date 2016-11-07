#include<stdio.h>
int main() {
	int list[4];
	int num=0;
	int i;

	for (i = 0; i < 4; i++) {
		printf("ÀÎµ¦½º %d¹ø : ",i);
		scanf("%d", &list[i]);
	}
	
	for (;;) {
		for (i = 0; i < 4; i++) {
			if (list[i]>list[i+1]) {
				if (i == 3) {
					for (i = 0; i < 4; i++) {
						printf("%d\t", list[i]);
						if (i == 3) {
							return 0;
						}
					}
				}

				num = list[i + 1];
				list[i + 1] = list[i];
				list[i] = num;
				break;

				

			}
		}
	}
}