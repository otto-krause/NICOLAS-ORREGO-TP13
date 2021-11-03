#include<stdio.h>
int main(){
 int v[10]={0},i=0;
    printf("ingrese dos numeros: ");
     for(i=0;i<2;i++){
        scanf("%d",&v[i]);
        }
 if(v[0]>v[1]){
 for(i=v[1]+1;i<v[0];i++){
   printf("%d ", v[9]+i);
  } 
}
else{
        for(i=v[0]+1;i<v[1];i++){
         printf("%d ",v[9]+i);
      }
 }
return 0;
}
