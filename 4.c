#include <stdio.h>
#include <stdlib.h>

int main(){
	int a, b;
	scanf("%d %d", &a, &b);

	int x = a;
	int y = b;

	a = abs(a);
	b = abs(b);
	int c=0;
	int sum=b;

	while(a>=b){
   b=b+sum;
   c=c+1;

  }

	if (x < 0 && y > 0 || y < 0 && x > 0){
		c = -c;
	}

	printf("%d", c);
}
