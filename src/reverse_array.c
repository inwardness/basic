#include<stdio.h>
    int main(){
        int i;
        int max =5;
        int array[max];
        int sum=0;
        int exchange=0;
        int avarage;
     
            printf("Enter %d element masssive:\n",max);
               for(i=0;i<max;++i){
                    printf("array[%d]=",i);
                    scanf("%d",&array[i]);  
               }
               for(i=0;i<max/2;++i){
                
                exchange=array[0+i];
                array[0+i]=array[max-i-1];
                exchange=array[max-i-1];
               }
               for(i=0;i<max;++i)
               printf("%d\n",array[i]);
    }