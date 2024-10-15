#include<stdio.h>
int main(){
    int n1, n2;
    printf("Enter length of first string: ");
    scanf("%d",&n1);
    char str1[n1];
    printf("enter first string: ");
    scanf("%s",str1);
    printf("Enter length of second string: ");
    scanf("%d",&n2);
    char str2[n2];
    printf("enter second string: ");
    scanf("%s",str2);
    char str3[n1+n2];
    for(int i=0; i<n1; i++){
        str3[i] = str1[i];
    }
    for(int i=0; i<n2; i++){
        str3[n1+i] = str2[i];
    }
    printf("combination of both strings is:%s\n",str3);
    return 0;
}