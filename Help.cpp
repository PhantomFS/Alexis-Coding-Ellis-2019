// 010-TestCase.cpp

// Let Catch provide main():
#define NAME "Player"

#include <stdio.h>

char speak(char b){

    char* myString=NAME;
    char a;
    a='0';


    printf("Hello %s, Type a number \n",myString);
    scanf("%c",&a);
    printf("%s, %c was typed \n",myString,a);
}

int main(){
    speak(1);



}