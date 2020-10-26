#include<stdio.h>
int main(){
    int m,n;
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
    int row1=0,coln=0,sum=0,diag=0;

    for(int i = 0; i <= 0; i++)
	{
		for(int j = 0; j < n-1; j++)
		{
			row1 = row1 + matrix[i][j];
		}
	}		

    for(int j = n - 1; j == n-1; j--)
	{
		for(int i = 0; i < m; i++)
		{
        	coln = coln + matrix[j][i];
		}
	}

    for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if ((i + j) == (m - 1))
			{
				diag += matrix[i][j];
			}
			if(j == 0 && i == m-1)
				coln = coln - matrix[i][j];
		}
	}
	printf("Sum of Zig-Zag pattern is %d ", diag + row1 + coln);
    return 0;
}
