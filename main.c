#include <stdio.h>
#include <stdlib.h>
int i,j,k;
int sum=0;
void mult_array(int a[3][3],int b[3][3],int length);
int main()
{
    int a[3][3]={{1,1,1},{1,1,1},{1,1,1}};
int b[3][3]={{1,1 ,1},{1,1,1},{1,1,1}};

mult_array(a,b,3);

    return 0;
}
void mult_array(int a[3][3],int b[3][3],int length){
for(i=0;i<length;i++){
for(j=0;j<length;j++){

for(k=0;k<length;k++){
sum=sum+b[i][k]*a[k][j];


 }
 a[i][j]=sum;

sum=0;

}


}
for(i=0;i<3;i++){
for(j=0;j<3;j++){
        printf("%d   ",a[i][j]);
}
printf("\n");
}
}
/*
array uou enter is put
1 4 7  1 4 7
2 5 8 *2 5 8  =
3 6 9  3 6 9
*/
