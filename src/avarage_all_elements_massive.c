#include<stdio.h>
int main(){

        int i;
        int max =10;
        int array[max];
        int sum=0;
        int maximal;
        int avarage;
     
            printf("Enter %d element masssive:\n",max);
               for(i=0;i<max;++i){
                    printf("array[%d]=",i);
                    scanf("%d",&array[i]);  
               }
               for(i=0;i<max;++i){
                    sum=sum+array[i];
                    }
               avarage=sum/max;
               for(i=0;i<max;++i){
               if(array[i]=avarage){
                    maximal=array[i];
               } 
                
          }
        printf("mean_avarage:%d\n",maximal);
        printf("avarage:%d\n",avarage);
        printf("sum:%d\n",sum);
return 0;
}