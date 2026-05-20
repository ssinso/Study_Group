#include <stdio.h>
#include <string.h>

int main(){
  int a;
  scanf("%d",&a);
  int b[a*a];
  int *p = &b[0];
  int t=1;
  for(int i=1; i<=a; i++){
    for(int j=1; j<=a; j++){
      if(i%2 == 1){
        *p = t;
        t++;
        p++;
      }
      else{
        if(j==1)
          p += a-1;
        *p = t;
        t++;
        if(j == a)
          p += a;
        else
          p--;
      }
    }
  }
  for(int i=0; i<a; i++){
    for(int j=0; j<a; j++){
      printf("%d ",b[i*a + j]);
    }
    printf("\n");
  }
}