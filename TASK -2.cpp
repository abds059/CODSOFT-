#include<iostream>

using namespace std;

int main(){
    char choice;
    int num1,num2;

do{
    cout<<"Enter first number: "<<endl;
    cin>>num1;

    cout<<"Enter second number: "<<endl;
    cin>>num2;

    cout<<"Enter operand: "<<endl
        <<"('+' --> ADDITION"<<endl
        <<"('-' ---> SUBTRACTION)"<<endl
        <<"('*' --> MULTIPLICATION)"<<endl
        <<"('/' --> DIVISION)"<<endl
        <<"('E' --> EXIT)"<<endl;

    cin>>choice;

    switch(choice){

        case '+':{
            cout<<"Performing Addition: "<<num1+num2<<endl;
            break;
        }
        case '-':{
            cout<<"Performing Subtraction: "<<num1-num2<<endl;
            break;
        }
        case '*':{
            cout<<"Performing Multiplication: "<<num1*num2<<endl;
            break;
        }
        case '/':{
            cout<<"Performing Division: "<<num1/num2<<endl;
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