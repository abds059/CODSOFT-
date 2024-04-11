#include<iostream>

using namespace std;

void getinput(int &num1, int &num2){
    cout<<"Enter first number: "<<endl;
    cin>>num1;

    cout<<"Enter second number: "<<endl;
    cin>>num2;

}

int main(){
    char choice;
    int num1,num2;

do{
    
    cout<<"Enter choice: "<<endl
        <<"('+' --> ADDITION"<<endl
        <<"'-' ---> SUBTRACTION"<<endl
        <<"'*' --> MULTIPLICATION"<<endl
        <<"'/' --> DIVISION"<<endl
        <<"'E' --> EXIT)"<<endl;

    cin>>choice;

    switch(choice){

        case '+':{
            getinput(num1,num2);            
            cout<<"Performing Addition: "<<num1+num2<<endl;
            break;
        }
        case '-':{
            getinput(num1,num2);
            cout<<"Performing Subtraction: "<<num1-num2<<endl;
            break;
        }
        case '*':{
            getinput(num1,num2);
            cout<<"Performing Multiplication: "<<num1*num2<<endl;
            break;
        }
        case '/':{
            getinput(num1,num2);
            if(num2!=0){
                cout<<"Performing Division: "<<num1/num2<<endl;
            }else{
                cout<<"Error division by zero! "<<endl;
            }
            break;
        }
        case 'E':{
            cout<<"Exiting! "<<endl;
            break;
        }
        default: {
            cout<<"No valid operation! "<<endl;
            break;

        }
    }
}while(choice!='E');

    return 0;
}