#define NAME "Player"

#include <stdio.h>

char speak(char b){

    char* myString=NAME;
    char a;
    int z, x, y;
    a='0';


    printf("Hello %s, Type a one digit number please \n",myString);
    scanf("%i",&z);
    printf("%i was used, please enter your name \n",z);
    scanf("%s",&myString);
    printf("Thank you, %i\n",myString);
}

int main(){
    speak(1);



}