#include<stdio.h>
#include<stdlib.h>
int main(){
    int n; 
    printf("Enter the size of array;\n");
    scanf("%d",&n);
    int*arr=(int*)malloc(n*sizeof(int));
    for(int i=0;i<=4;i++){
        printf("Enter the value at arr[%d]intex:\n",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=4;i++){
        printf("%d",arr[i]);
    }
    return 0;
}
