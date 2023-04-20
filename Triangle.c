#include"Triangle.h"
#include<stdio.h>
void Triangle(int num){
    
    for (int i=0;i<=num;i++){
        
        for(int j=num-i;j>0;j--){
            printf(" ");
        }
        
         
        for(int k=1;k<i*2;k++){
           if (i!=num)
            if (k!=1 && k!=i*2-1)
             printf(" ");
            else
             printf("*");
          else
          {
            printf("*");
          }
          
          }
        
        printf("\n");
    }
        
}