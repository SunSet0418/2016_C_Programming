#include<stdio.h>
#include"book.h"
int main() {
	struct book book1 = { 1,"Èñ¸ÁÀÇ ³ª¶ó","ÇÑ±¹ÃâÆÇ",250000,"È«±æµ¿" };
	printf("Book Address = %d\n", book1.address);
	printf("Book Name = %s\n", book1.name);
	printf("Book PrintCompany = %s\n", book1.printcom);
	printf("Book Price = %d\n", book1.price);
	printf("Book Writer = %s", book1.writer);
}