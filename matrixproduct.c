#include<stdio.h>
int main(){


    int a_col, a_row, b_col , b_row;
    printf("1st matrix row and column: ");
    scanf("%d%d", &a_row, &a_col);

    printf("2nd :");
    scanf("%d%d" , &b_row, &b_col);

    int a[a_row][a_col];
    int b[b_row][b_col];

    for(int i=0; i<a_row; i++)
       for(int j=0; j<a_col; j++)
          scanf("%d", &a[i][j]);
     
    printf("input b matrix: ");

    for(int i=0; i<b_row; i++)
       for(int j=0; j<b_col; j++)
          scanf("%d", &b[i][j]);

           int j, i, k;
          if(a_col== b_row){
            int r[a_row][b_col];
            int sum =0;

            for( i=0; i<a_row; i++){
                for( j=0; j<b_col; j++){
                    r[i][j]=0;
                    for( k=0; k<a_col; k++){
                    r[i][j] =r[i][j] + ((a[i][k])*(b[k][j]));
                }
                //  r[i][j] = sum;

                 printf("%d\t", r[i][j]);
                
                }

                printf("\n");
                
               

                
                
            }

        //    for( i=0; i<a_row; i++){
        //         for( j=0; j<b_col; j++){
        //         printf("%d ", r[i][j]);
                 
        //         }

        //         printf("\n");
            
              
        //  }





}  



}