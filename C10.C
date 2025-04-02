// Matrix Multiplication
 #include <stdio.h>
 int main() {
 int rows1,cols1,rows2,cols2;
 scanf("%d %d %d %d",&rows1,&cols1,&rows2,&cols2);
 int matrix1[rows1][cols1],matrix2[rows2][cols2];
 if(cols1==rows2){
 for(int i=0;i<rows1;i++){
 for(int j=0;j<cols1;j++){
 scanf("%d",&matrix1[i][j]);
 }}
 for(int i=0;i<rows2;i++){
 for(int j=0;j<cols2;j++){
 scanf("%d",&matrix2[i][j]);
 }}
 int product[rows1][cols2];
 for(int i=0;i<rows1;i++){
 for(int j=0;j<cols2;j++){
 product[i][j]=0;
 }
 }
 for(int i=0;i<rows1;i++){
 for(int j=0;j<cols2;j++){
 for(int k=0;k<cols1;k++){
 product[i][j]+=matrix1[i][k]*matrix2[k][j];
 }}
 }
 for(int i=0;i<rows1;i++){
 for(int j=0;j<cols2;j++){
 printf("%d ",product[i][j]);
 }
 printf("\n");
 }    return 0;
 }}
