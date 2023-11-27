#include<stdio.h>
    int main(){
        int i;
        int maxl=30;
        int max,maxi;
        int min,mini;
        int value[maxl];
        int sum=0;
        int counter=0;
        int average;
        
        printf("enter a max_length<20\n");
        scanf("%d",&maxl);
             for(i=0;i<maxl;++i){
                    printf("value[%d]=",i);
                    scanf("%d",&value[i]);  
             }            
                max=value[0];
                for(i=0;i<maxl;++i){
                    if(value[i]>max){
                        max=value[i];
                        maxi=i;
                    }
                }            
                min=value[0];  
                    for(i=0;i<maxl;++i){
                        if(value[i]<=min){
                            min=value[i];
                            mini=i;
                    }
                }
                for(i=0;i<maxl;++i){
                    if(i==maxi){
                        for(i=maxi+1;i<mini;++i){
                        sum=sum+value[i];
                        counter=counter+1;
                        average=sum/counter;
                        }
                    }
                    if(i==mini){
                        for(i=mini+1;i<maxi;++i){
                        sum=sum+value[i];
                        counter=counter+1;
                        average=sum/counter;    
                        }
                    }
                }
                
             
    printf("min:%d-[%d],max:%d-[%d]\naverage=%d\n",min,mini,max,maxi,average);
return 0;
}