#include<iostream>
using namespace std;
struct stu{
    int studentroll;
    char sname[30];
    float marks[4];
};
int main(){
    struct stu s;
    int total=0;
    float average;


    cout<<"Enter Studentrollno : ";
    cin>>s.studentroll;
    cout<<"Enter student name : "<<endl;
    cin>>s.sname;
    cout<<"Enter student marks : "<<endl;
    for(int i=0;i<4;i++){
        cin>>s.marks[i];
        total=total+s.marks[i];
        average=total/4;

    }
      cout<<"Student Roll no is :"<<s.studentroll<<endl;
      cout<<"Student name is : "<<s.sname<<endl;
      cout<<"Total marks of student is : "<<total<<endl;
      cout<<"Average marks is :"<<average;

     return 0;



}



