#include<iostream>
using namespace std;
int main(){
    float num1, num2;
    char op;
    cout<<"Enter the first number:"<<endl;
    cin>>num1;
     cout<<"Enter the second number :"<<endl;
    cin>>num2;

    cout<<"Choose an operation(+,-,*,/): ";
    cin>>op;
    switch(op){
   
        case'+':
        cout<<num1+num2;
        break;
        case'-':
        cout<<num1-num2;
        break;
         case'*':
        cout<<num1*num2;
        break;
        case'/':
        cout<<num1/num2;
        break;

        default:
        cout<<"Invalid operation"<<endl;

        }

       }


