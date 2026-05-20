#include <stdio.h>
#include <string.h>

int main(){
  char a[100000];
  scanf("%s",&a);
  int len = strlen(a);
  int b=0, c=0;
  char *p = &a[0];
  for(int i=0; i<len; i++){
    if(*p == '(')
      b++;
    else 
      c++;
    p++;
  }
  printf("%d %d",b,c);
}