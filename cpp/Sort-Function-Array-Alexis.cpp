

#include <iostream>
#include <stdio.h>
using namespace std;

int sort(){
    int myArray[10];

   cout<<"Please enter numbers 5 numbers one at a time to be sorted. \n";
   cin>> myArray[0];
   myArray[5]= myArray[0];
   cin>> myArray[1];

   if(myArray[1]>myArray[5]){
       myArray[6]=myArray[5];
       myArray[5]=myArray[1];
   }
   else {
       myArray[6]=myArray[1];
   }

   cin>> myArray[2];

   if(myArray[2]>myArray[5]){
       myArray[7]=myArray[6];
       myArray[6]=myArray[5];
       myArray[5]=myArray[2];
   }
   else if(myArray[2]>myArray[6]){
       myArray[7]=myArray[6];
       myArray[6]=myArray[2];
   }
   else {
       myArray[7]=myArray[2];
   }
   cin>> myArray[3];

   if(myArray[3]>myArray[5]){
       myArray[8]=myArray[7];
       myArray[7]=myArray[6];
       myArray[6]=myArray[5];
       myArray[5]=myArray[3];
   }
   else if(myArray[3]>myArray[6]){
       myArray[8]=myArray[7];
       myArray[7]=myArray[6];
       myArray[6]=myArray[3];
   }
   else if(myArray[3]>myArray[7]){
       myArray[8]=myArray[6];
       myArray[7]=myArray[3];
   }
   else {
       myArray[8]=myArray[3];
   }

   cin>> myArray[4];

   if(myArray[4]>myArray[5]){
       myArray[9]=myArray[8];
       myArray[8]=myArray[7];
       myArray[7]=myArray[6];
       myArray[6]=myArray[5];
       myArray[5]=myArray[4];
   }
    else if(myArray[4]>myArray[6]){
       myArray[9]=myArray[8];
       myArray[8]=myArray[7];
       myArray[7]=myArray[6];
       myArray[6]=myArray[3];
   }
   else if(myArray[4]>myArray[7]){
       myArray[9]=myArray[8];
       myArray[8]=myArray[7];
       myArray[7]=myArray[3];
   }
   else if(myArray[4]>myArray[8]){
       myArray[9]=myArray[8];
       myArray[8]=myArray[3];
   }
   else {
       myArray[9]=myArray[4];
   }


   cout<<myArray[5]<<' '<<myArray[6]<<' '<<myArray[7]<<' '<<myArray[8]<<' '<<myArray[9];

}

int main(){
  sort();


}