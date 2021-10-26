#include<stdio.h>
int main(){
        int i=0,total[0],mayor[0],num[5]={0}; 
 printf("ingrese 5 numeros: ");
   for(i=0;i<5;i++){
     scanf("%d",&num[i]);
}
  for(i=0;i<5;i++){
     total[0]+=num[i];
}
 for(i=0;i<5;i++){
     if(num[i]>mayor[0]){
       mayor[0]=num[i];
      }
}
  printf("el promedio es: %d\n",total[0]/5);
  printf("el mayor de los numeros es: %d",mayor[0]);
return 0;
}


