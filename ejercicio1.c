#include<stdio.h>
int main(){
   int i=0,n[5]={0},total[0];

  printf("ingrese 5 numeros: ");
  for(i=0;i<5;i++){
        scanf("%d",&n[i]);

}
for(i=0;i<5;i++){
        total[0]+=n[i];
}
printf("el la resistencia total es: %d",total[0]);

return  0;
}

