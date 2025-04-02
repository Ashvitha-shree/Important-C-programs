// Binary Search Techniques using Recursion.
 #include <stdio.h>
 int binarySearchRecursive(int array[],int low,int high,int target)
 {
 if(low > high){
 return -1;}
 int mid=(low+high)/2;
 if (array[mid]==target){
 return mid;}
 else if(array[mid]<target){
 return binarySearchRecursive(array,mid+1,high,target);}
 return binarySearchRecursive(array,low,mid-1,target);}
 int main(){
 int size,target;
 scanf("%d\n",&size);
 int low=0,high=size-1;
 int array[size];
 for(int i=0;i<size;i++){
 scanf("%d",&array[i]);
 }
 scanf("%d\n",&target);
 int result=binarySearchRecursive(array,low,high,target);
 if (result!=-1){
 printf("%d\n",result);}
 else{
 printf("Element not found in the array.\n");}
 return 0;
 }
