#include<stdio.h>
int main(){
 int vendedor[15]={0},j=0,i=0,totalf[1]={0},mayor[1]={0};

  for(i=0;i<20;i++){
    printf("ingrese las unidades vendidas: ");
        int total1[1]={0};
    for(j=0;j<15;j++){
      scanf("%d",&vendedor[i]);
        total1[0]+=vendedor[i];
     }
        printf("el total de unidades vendidas de este vendedor es: %d\n",total1[0]);
        totalf[0]+=total1[0];
 
        if(total1[0]>mayor[0]){
          mayor[0]=total1[0];
         }
}
  printf("\nel total de unidades vendidas es de: %du\n",totalf[0]);
  printf("la mayor candidad de ventas fue: %d\n",mayor[0]);
}
