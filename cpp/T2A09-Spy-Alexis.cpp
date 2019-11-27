
#include <iostream>
#include <string>
using namespace std;

 std::string myFun(std::string myString){
     
    for(int myLoop = 0; myLoop < myString.length(); myLoop++){
        
        if (myString[myLoop] == 'a'){
            myString[myLoop] = 'z';
        }
        else if (myString[myLoop] == 'b'){
            myString[myLoop] = 'a';
        }

        else if (myString[myLoop] == 'c'){
            myString[myLoop] = 'b';
        }

        else if (myString[myLoop] == 'd'){
            myString[myLoop] = 'c';
        }

        else if (myString[myLoop] == 'e'){
            myString[myLoop] = 'd';
        }

        else if (myString[myLoop] == 'f'){
            myString[myLoop] = 'e';
        }

        else if (myString[myLoop] == 'g'){
            myString[myLoop] = 'f';
        }

        else if (myString[myLoop] == 'h'){
            myString[myLoop] = 'g';
        }

        else if (myString[myLoop] == 'i'){
            myString[myLoop] = 'h';
        }

        else if (myString[myLoop] == 'j'){
            myString[myLoop] = 'i';
        }

        else if (myString[myLoop] == 'k'){
            myString[myLoop] = 'j';
        }
        else if (myString[myLoop] == 'l'){
            myString[myLoop] = 'k';
        }
        else if (myString[myLoop] == 'm'){
            myString[myLoop] = 'l';
        }
        else if (myString[myLoop] == 'n'){
            myString[myLoop] = 'm';
        }
        else if (myString[myLoop] == 'o'){
            myString[myLoop] = 'n';
        }
        else if (myString[myLoop] == 'p'){
            myString[myLoop] = 'o';
        }
        else if (myString[myLoop] == 'q'){
            myString[myLoop] = 'p';
        }
        else if (myString[myLoop] == 'r'){
            myString[myLoop] = 'q';
        }
        else if (myString[myLoop] == 's'){
            myString[myLoop] = 'r';
        }
        else if (myString[myLoop] == 't'){
            myString[myLoop] = 's';
        }
        else if (myString[myLoop] == 'u'){
            myString[myLoop] = 't';
        }
        else if (myString[myLoop] == 'v'){
            myString[myLoop] = 'u';
        }
        else if (myString[myLoop] == 'w'){
            myString[myLoop] = 'v';
        }
        else if (myString[myLoop] == 'x'){
            myString[myLoop] = 'w';
        }
        else if (myString[myLoop] == 'y'){
            myString[myLoop] = 'x';
        }
        else if (myString[myLoop] == 'z'){
            myString[myLoop] = 'y';
        }
        else if (myString[myLoop] == '!'){
            myString[myLoop] = ' ';
        }
        else if (myString[myLoop] == ' '){
            myString[myLoop] = '!';
        }

    }   

     cout<< myString;
     
     return myString;
     
     
 }

int main()
{
    std::string Test = "Hello";
    
    
    cout<<"Please enter a message to be crypted. Please avoid captial letters \n";
    
    getline (cin, Test);
    
    myFun(Test);
    
    //cout<< Test;
}