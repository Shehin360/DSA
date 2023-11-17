#include<stdio.h>



void read_sparsemat(int mat_normal[100][100],int r,int c)
{
    int i=0,j=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&mat_normal[i][j]);
        }
    }
}
void print_sparsemat(int mat_normal[100][100],int r,int c)
{
    int i=0,j=0;
    for(i=0;i<r;i++)
    {
        printf("\n");
        for(j=0;j<c;j++)
        {
            printf("%d  ",mat_normal[i][j]);
        }
    }
}

void sum(int mat1[100][100],int mat2[100][100]){

    int mat[100][100];
    int tr1,tr2,n=0,i,j,k;
    if(mat1[0][0]==mat2[0][0] && mat1[0][1]==mat2[0][1])
    {
tr1=mat1[0][2];
tr2=mat2[0][2];
i=1;
j=1;
k=1;
n=tr1+tr2;

    while(i<=tr1 && j<=tr2){

        if(mat1[i][0]==mat2[0][0] && mat2[0][1]==mat2[0][1]){

            mat[k][0]=mat1[j][0];
            mat[k][1]=mat1[i][1];
            mat[k][2]=mat1[i][2]+mat2[j][2];
            i++,j++,k++;
        }

        else if(mat1[i][0]<mat2[j][0])
        {
            mat[k][0]=mat[i][0];
            mat[k][1]=mat1[i][1];
                mat[k][2]=mat1[i][2];
                i++;k++;

        }
        else{
            mat[k][0]=mat2[j][0];
                mat[k][1]=mat2[j][1];
                mat[k][2]=mat2[j][2];
                j++;k++;
        }


    }
    
    while(i<=tr1)
        {
           mat[k][0]=mat1[i][0];
                mat[k][1]=mat1[i][1];
                mat[k][2]=mat1[i][2];
                i++;k++; 
        }
        while(j<=tr2)
        {
             mat[k][0]=mat2[j][0];
                mat[k][1]=mat2[j][1];
                mat[k][2]=mat2[j][2];
                j++;k++;
        }
        mat[0][0]=mat1[0][0];
        mat[0][1]=mat1[0][1];
        mat[0][2]=k-1;
        printf("\nThe sum is:\n");
         for(i=0;i<k;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        {
            
            printf("%d  ",mat[i][j]);
        }
    }
    }
    else
    {
        printf("The matrix is incompatible for addition\n");
    }
}


    


int main(){


int mat1[100][100],r1,c1,mat2[100][100],r2,c2;
printf("\nFirst matrix:");
printf("\nEnter the number of rows:");
scanf("%d",&r1);
printf("\nEnter the number of columns:");
scanf("%d",&c1);
printf("Enter the elements:");
read_sparsemat(mat1,r1,c1);

printf("\nSecond matrix:");
printf("\nEnter the number of rows");
scanf("%d",&r2);
printf("\nEnter the number of columns:");
scanf("%d",&c2);
printf("Enter the elements:");
read_sparsemat(mat2,r2,c2);

printf("\nThe first matrix is:");
print_sparsemat(mat1,r1,c2);

printf("\nThe second matrix is:");
print_sparsemat(mat2,r2,c2);

printf("Sum:");
sum(mat1,mat2);




}