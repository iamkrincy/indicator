#include<stdio.h>

int cube(int row, int col)
{
	
	int i,j;
    int a[row][col];
    int *arr2[row][col];
    
    printf("\nEnter the elements of the value\n"); 
    for(i=0; i<row; i++){
    	
    	for(j=0; j<col; j++){
    		
    		printf("[%d][%d] = ",i,j);
    		scanf("%d",&a[i][j]);
    		arr2[i][j] = &a[i][j];
		}
	}
	
	printf("\nCube of Elements is = \n");  
	for(i=0; i<row; i++){
    	
    	for(j=0; j<col; j++){
    		
    		printf("%d ",(*arr2[i][j]) * (*arr2[i][j]) * (*arr2[i][j]));
		}
		printf("\n");
	}
}


main() 
{
	
	int r,c;

    printf("Enter the number of rows = ");
    scanf("%d",&r);
    
    printf("Enter the number of columns = ");
    scanf("%d",&c);
    
    cube(r,c);
    
}