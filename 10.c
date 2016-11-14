#include <stdio.h>

int main(){
	int n,i=0;
	scanf("%d", &n);
	int arr[n];


	for ( i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}

	int sum = 0;

	for ( i = 0; i < n; i++){
		if (arr[i] == 0){
			sum++;
		}
	}

	printf("%d", sum);

	return 0;
}
