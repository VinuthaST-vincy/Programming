#include<stdio.h>
#include<string.h>
int isPalindrome(char str[]){
    int left=0;
    int right=strlen(str)-1;
    while(left<right){
        if(str[left]!=str[right])
        {
            return 0;
        }
        else{
            left++;
            right--;
        }
    }
    return -1;
}
int main(){
    char input[100];
    printf("Enter the string:\n");
    scanf("%s",&input);
    if(isPalindrome(input)){
        printf("\"%s\" is a Palindrome String", input);
    }
    else{
        printf("\"%s\" is not a Palindrome String", input);
    }
    return 0;

}
