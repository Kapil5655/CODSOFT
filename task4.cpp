#include<iostream>
#include<conio.h>
using namespace std;
int main(){
   int words=1;
   char ch = NULL;
   cout<<"Enter text : ";
   while(ch!='\r'){
    ch=_getche();
    if(ch==' '){
        words++;
    }
   }
cout<<"Words"<<words<<endl;

}