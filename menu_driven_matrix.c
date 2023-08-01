#include <stdio.h>

int i,j;
void read(int a[][100],int m,int n);
void sum(int a[][100],int m,int n,int b[][100]);
void multiply(int a[][100],int m,int n,int q,int b[][100]);
void transpose(int a[][100],int m,int n);
void display(int a[][100],int m,int n);

int main() {
    system("clear");
    int a_rows,a_cols,b_rows,b_cols,choice;
    printf("Enter rows of Matrix A:");
    scanf("%d",a_rows);
    printf("Enter columns of Matrix A:");
    scanf("%d",&a_cols);
    int a[a_rows][a_cols];
    read(a,b_rows,b_cols);
    printf("Enter rows of Matrix B:");
    scanf("%d",&b_rows);
    printf("Enter columns of Matrix B:");
    scanf("%d",&b_cols);
    int b[b_rows][b_cols];
    read(b,b_rows,b_cols);
    do {
        system("clear");
        printf("***********************\n");
        printf("*   Matrix Operations *\n");
        printf("*   1.Additon         *\n");
        printf("*   2.Multiply        *\n");
        printf("*   3.Transpose       *\n");
        printf("*   4.Exit            *\n");
        printf("***********************\n");
        printf("\nEnter your choice:");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            if ((a_rows!=b_rows) || (a_cols!=b_rows)) {
                printf("Addition is not possible");

            }
            else {
                sum(a,a_rows,a_cols,b);

            }
            break;
        case 2:
            if (a_cols!=b_rows) {
                printf("Multiplication is not possible");
            }
            else {
                multiply(a,a_rows,a_cols,b_cols,b);
            }
            break;
        case 3:
            transpose(a,a_rows,a_cols);
            transpose(b,b_rows,b_cols);
            break;
        case 4:
            printf("Bye...\n");
            exit(0);
        default:
            printf("Enter a valid option!\n");
        }
    } while (choice!=4);
}
void read(int a[][100],int m,int n) {
    printf("Enter the elements:");
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; i++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    
}

void sum(int a[][100],int m,int n,int b[][100]) {
    int c[m][n];
    for ( i = 0; i < m; i++)
    {
        for ( i = 0; i < n; i++)
        {
            c[i][j]= a[i][j] + b[i][j];
        }
        
    }
    printf("The sum of two matrices is:\n");
    display(c,m,n);
    
}
void multiply(int a[][100],int m,int n,int q,int b[][100]) {
    int r,k,c,sum=0,multiply[100][100];
    for ( r= 0; r < m; r++)
    {
        for(c=0;c<q;c++) {
            for (k=0;k<n;k++) {
                sum = sum + a[r][k] * b[k][c];
            }
            multiply[r][c]=sum;
            sum=0;
        }
    }
    printf("The product of two matrices is:\n");
    display(multiply,m,q);
}
void transpose(int a[][100],int m,int n) {
    int c,d,trans[100][100];
    for (c=0;c<m;c++) {
        for (d=0;d<n;d++) {
            trans[d][c]= a[c][d];
        }
    }
    printf("The transpose of the matrix is:\n");
    display(a,n,m);
}
void display(int a[][100],int m,int n) {
    system("clear");
    for (i=0;i<m;i++) {
        for (j=0;j<n;j++) {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");
    printf("\n");
}