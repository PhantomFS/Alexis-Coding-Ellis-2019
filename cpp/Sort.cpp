
#include <iostream>
#include <string>
using namespace std;

string myArray[0][52];


string myTemp = "0";
string x = "0";
string myFun(){
    for(int myLoop=0;myLoop<=53;myLoop++){

        myArray[0][myLoop] = rand() % 52 + 1;
        myTemp.append(myArray[0][myLoop]);
        myTemp.append(", ");


    }
    cout<<myTemp;
    return myTemp;
}
/*
string mySort(){

    for (int myLoop1=0;myLoop1<=52;myLoop1++){

        for(int myLoop2=0;myLoop2<=52;myLoop2++){

            for(int myLoop=0;myLoop<=52;myLoop++){

                if(myArray[0][myLoop] >= myArray[0][myLoop+1]){

                    x= myArray[0][myLoop+1]; 
                    myArray[0][myLoop+1]= myArray[0][myLoop] ;
                    myArray[0][myLoop] = x  ;

                }   


            }

        }
        myTemp.append(myArray[0][myLoop1]);
        myTemp.append(", ");
    }


    return myTemp;

}



*/
int main()
{
    string y = "0";
    string final;
    cout<<"Hello! We have a set of random numbers, press 1 to see! \n";
    cin>> y;
    if(y=="1"){
        //final = myFun();
        //cout<< final;
        myFun();
    
    
    }




}
