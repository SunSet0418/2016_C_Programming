#include<stdio.h>
#include<math.h>
struct loca {
	int x,y;
};
int main() {
	struct loca th1;
	struct loca th2;
	float distance;
	scanf("%d", &th1.x);
	scanf("%d", &th1.y);
	scanf("%d", &th2.x);
	scanf("%d", &th2.y);
	distance=sqrt(pow(th1.x - th2.x, 2) + pow(th1.y - th2.y, 2));
	printf("%f", distance);
}