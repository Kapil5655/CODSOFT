#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;
int main(){

    int guess = 10;
    int user_guess;
    int gueses=4;
    srand(time(0));
    int target =(rand()%10)+1;

cout<<"You have no of gueses "<<gueses<<"guess"<<endl;

cout<<"Start guessing a number";
cout<<"Enter your guess 1 by 1 "<<endl;
while(gueses--){
    cin>>user_guess;
    if(user_guess==target){
        cout<<"You won! in "<<4-gueses<<"tries!"<<endl;
        exit(0);
    }
    else if(user_guess<target){
        cout<<"too low!"<<endl;
        
    }
    else{
        cout<<"too high"<<endl;
    }
}
   cout<<"You lost!"<<endl;
   return 0;

}