#include<stdio.h>
int main(){
    int m,n,sum=0;
    printf("Enter Size of the Matrix: ");
    scanf("%d %d",&m,&n);
    int matrix[m][n];
    printf("Enter Elements in the Matrix:\n");
    for(int i=0;i<m;i++){
        printf("Enter Elements of row %d: ",i+1);
        for(int j=0;j<n;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==0 || j==0 || i==m-1 || j==n-1){
                printf("%d ",matrix[i][j]);
                sum += matrix[i][j];
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("Sum of the boundary elements is %d.\n", sum);
    return 0;
} 
