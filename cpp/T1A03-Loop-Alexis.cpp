#define NAME "Player"

#include <stdio.h>

int * triangle(int num){
    int * temp;
    int * triangle1 [num];

        for (int i = 0; i < num; i++) {
            triangle1[i] = &(triangle1[i][i+1]);

            for (int j = 0; j < i+1; j++) {
                if (j == 0 || j == i) {
                    triangle1[i][j] = (1);
                } else {
                triangle1[i][j] = (triangle1[i-1][j-1]) + (triangle1[i-1][j]);
                temp = &triangle1[i][j];
                }
            }
        }

    return temp;


}


int main(){
    int a, c, d;

    printf("Please enter a number");
    scanf("%i",&a);
    int * myAr[a];

    myAr[a] = triangle (a);






    for(int x = 0; x < a; x++ ){
        for(int * y = 0; y < myAr[x]; y++ ){


            printf("%s, ",&myAr[x][y]);


        }

        printf("\n");
    }

}