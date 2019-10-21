
#include <stdio.h>
#include <string>

std::string myFun(int Num){

std::string Final = "Hello";


std::string  myAr[4][3] = {{"January","February","March"}, {"April","May","June"}, {"July","August","September"}, {"October","November","December"}};

    if(Num == 0){

        Final = "The hot months are: ";
        for (int myLoop=0; myLoop<= 2; myLoop++){

            Final.append (myAr[0][myLoop]);


        }
    }
    if (Num == 1){
        Final = "The cold months are: ";
        for (int myLoop=0; myLoop<= 2; myLoop++){

            Final.append (myAr[1][myLoop]);


        }
    }
    if (Num == 2){
        Final = "The rainy months are: ";
        for (int myLoop=0; myLoop<= 2; myLoop++){

            Final.append (myAr[2][myLoop]);

        }
    }
    if (Num == 3){
        Final = "The windy months are: ";
        for (int myLoop=0; myLoop<= 2; myLoop++){

            Final.append (myAr[3][myLoop]);

        }
    }

return Final;


}


int main(){

int a;

printf("Choose either 0, 1, 2, or 3");

scanf("%d", &a);

myFun(a);


}