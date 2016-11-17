
  #include <stdio.h>



 int main() {





  int m, n;
  scanf(" %d %d", &m, &n);


  int arr[n+m];





  int i,j,p,k =0;
  for (i = 0; i < m + n; i++) {
   scanf(" %d", &arr[i]);
  }





  for ( j = 0; j < m; j++) {
    p = arr[0];
   for ( k = 0; k < m + n; k++) {
    arr[k]=arr[k+1];
   }
   arr[m+n-1] = p;
  }


  for ( i = 0; i < m + n; i++) {
   printf("%d ", arr[i]);
  }


 return 0;
 }
