#define NAME "Player"

#include <stdio.h>

int triangle(int num){

    int triangle [num];

        for (int i = 0; i < num; i++) {
            triangle[i] = new Array(i+1);

            for (int j = 0; j < i+1; j++) {
                if (j == 0 || j == i) {
                    triangle[i][j] = 1;
            } else {
                triangle[i][j] = triangle[i-1][j-1] + triangle[i-1][j];
            }
        }
    }

    return triangle;


}


int main(){
    int a, b, c, d;
    printf("Please enter a number");
    scanf("%i",&a);

    int myAr[a] = triangle(a);


// console.log(createPascalTriangle(myRow))






    for(let x = 0; x < myRow; x++ ){
        for(let y = 0; y < myAr[x].length; y++ ){


            printf("%s, ",&myAr[x][y]);


        }

        printf("\n");
    }

}