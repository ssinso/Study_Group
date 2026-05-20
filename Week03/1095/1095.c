#include <stdio.h>
#include <string.h>

int main(){
  int a;
  scanf("%d",&a);
  int n[a];
  for(int i=0; i<a; i++){
    scanf("%d",&n[i]);
  }
  int tmp = n[0];
  int *p = &n[0];
  for(int i=0; i<a; i++){
    if(*p <= tmp)
      tmp = *p;
      p++;
  }
  printf("%d",tmp);
}