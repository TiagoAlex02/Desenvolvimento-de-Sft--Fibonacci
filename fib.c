
#include <stdio.h>
int main(){
  int i,n,a=o,b=1,prox;
  scanf("%i",&n);
  for(i=1;i<=n;i++){
    printf("%i, ",a);
    prox= a+b;
    a=b;
    b=prox;
  }
}
