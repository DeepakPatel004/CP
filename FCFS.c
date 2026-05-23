#include<stdio.h>
int main(){
    int n;
    printf("Enter number of process(max 30) \n");
    scanf("%d",&n);

    int bt[30];
    for(int i =0 ;i <n; i++){
        printf("give brudt timr of process number %d : ",i+1);
        scanf("%d",&bt[i]);
    }

    int wt[30];
    for(int i=0; i<n; i++){
        wt[i] = 0;
        for(int j=0; j<i; j++){
            wt[i] += bt[j];
        }
       
    }

     int trt[30];
     for(int i =0 ; i<n ;i ++){
        trt[i]=wt[i]+bt[i];

     }

     float avg_wt = 0;
     float avg_trt = 0;

     for(int i=0; i<n; i++){
        avg_wt += wt[i];
        avg_trt += trt[i];
    }
    avg_wt = (float)avg_wt/n;
    avg_trt = (float)avg_trt/n;
    printf("%f %f",avg_wt,avg_trt);
    return 0;

    
