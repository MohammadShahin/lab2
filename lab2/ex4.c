#include <stdio.h>

void swap(int *x, int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
}

int main(void) {
	int n, m;
	scanf("%d%d", &n, &m);
	swap(&n, &m);
	printf("%d %d", n, m);
	return 0;
}
