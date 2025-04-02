// String Operations (Without Built in Functions)
#include <stdio.h>
 int stringlength(char[]);
 void stringcopy(char[]);
 void stringcompare(char[],char[]);
 void stringreverse(char[]);
 void stringlower(char[],char[]);
 void stringupper(char[],char[]);
 void stringconcat(char[],char[]);
 int main(){
 char string1[100],string2[100];
 scanf("%[^\n]",string1);
 printf("Length of string: %d\n",stringlength(string1));
    stringcopy(string1);
    printf("Enter the second string for comparison:");
    scanf(" %[^\n]",string2);
    stringcompare(string1,string2);
    stringreverse(string1);
    char temp[100];
    stringlower(string1,temp);
    printf("\nLowercase string: %s\n",temp);
    stringupper(string1,temp);
    printf("Uppercase string: %s\n",temp);
    stringconcat(string1,string2);
    printf("Concatenated string: %s\n",string1);
    return 0;
 }
 int stringlength(char string1[]){
    int length=0;
    while(string1[length]!='\0'){
        length++;
    }
    return length;
 }
 void stringcopy(char string1[]){
    int i=0;
    char copy_string1[100];
    while(string1[i]!='\0'){
        copy_string1[i]=string1[i];
        i++;
    }
    copy_string1[i]='\0';
    printf("Copied string: %s\n",copy_string1);
 }
 void stringcompare(char string1[],char string2[]){
    printf(" Comparing '%s' and '%s': ",string1,string2);
    int i=0,j=0;
    while(string1[i]!='\0' && string2[i]!='\0'){
        if(string1[i]<string2[i]){
            printf("First string is smaller\n");
            return;
        }
        else if(string1[i]>string2[i]){
            printf("First string is greater\n");
            return;

        }
        i++;
    }
    if(string1[i]=='\0' && string2[i]=='\0'){
        printf("Strings are equal\n");
    }
    else if(string1[i]=='\0'){
        printf("First string is smaller\n");
    }
    else{
        printf("First string is greater");
    }
    }
 void stringreverse(char string1[]){
    int length=stringlength(string1);
    printf("Reversed string: ");
     string1[length]='\0';
 for(int i=length-1;i>=0;i--){
 printf("%c",string1[i]);
 }
 }
 void stringlower(char string1[],char temp[]){
 int i=0;
 while(string1[i]!='\0'){
 if(string1[i]>='A'&&string1[i]<='Z'){
 temp[i]=string1[i]+32;
 }
 else{
 temp[i]=string1[i];
 }
 i++;
 }
 temp[i]='\0';
 }
 void stringupper(char string1[],char temp[]){
 int i=0;
 while(string1[i]!='\0'){
 if(string1[i]>='a'&&string1[i]<='z'){
 temp[i]=string1[i]-32;
 }
 else{
 temp[i]=string1[i];
 }
 i++;
 }
 temp[i]='\0';
 }
 void stringconcat(char string1[],char string2[]){
 int i=stringlength(string1);
 int j=0;
 string1[i]=' ';
 i++;
 while(string2[j]!='\0'){
 string1[i]=string2[j];
 i++;
 j++;
 }
 string1[i]='\0';
 }
