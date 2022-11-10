//A program to check whether an entered alphabet is vowel or consonant
#include<stdio.h>
int main(){
    char ch;
    printf("Enter an alphabet : ");
    scanf("%c", &ch);
    //checking whether ch is an alphabet or not
    if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z'){ 
        switch (ch){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                printf("It's a vowel");
                break;
            default:
                printf("It's a consonant");
                break;
        }
    }else
        printf("Plz enter an alphabet");
    
    return 0;
}