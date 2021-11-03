#include<stdio.h>
int main(){
 int sueldo[20]={0},i=0,mayor=0,menor=0;
 for(i=0;i<20;i++){
  printf("ingrese 20  sueldos: ");
   scanf("%d",&sueldo[i]);
  if(sueldo[i]>2000){
    mayor++;
 }
  else{
   menor++;
 }
}
 printf("los que ganan mas de 2000 son: %d\n",mayor);
 printf("los que ganan menos de 2000 son: %d\n",menor);
  return 0;
}
