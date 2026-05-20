#include <stdio.h>
#include <string.h>

int main(){
  int n;
  scanf("%d",&n);
  int a[n];
  for(int i=0; i<n; i++){
    scanf("%d",&a[i]);
  }
  int tmp;
  for(int i=0; i<n; i++){
    printf("%d ",a[i]);
  }
  printf("\n");
  for(int j=0; j<n-1; j++){
    int *p = &a[0];
    for(int i=0; i<n-1; i++){
      tmp = *p;
      *p = *(p+1);
      *(p+1) = tmp;
      p++;
    }
    for(int k=0; k<n; k++){
      printf("%d ",a[k]);
    }
    printf("\n");
  }
}