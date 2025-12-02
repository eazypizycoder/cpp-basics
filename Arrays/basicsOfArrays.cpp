#include <iostream>
using namespace std;
int main()
{
    // inili

    // int student[3]={80,70,20};

    // decl

    // 0 ,1,2
    
    
    // int student[4];
    
    
    
    int student[3];
    student[0] = 80;
    student[1] = {70};
    student[2] = {60};

    cout<<&student[0]<<endl;
    cout<<&student[1]<<endl;




    // cout<<"First Student Marks :"<<student[0]<<endl;
    // cout<<"Second Student Marks :"<<student[1]<<endl;
    // cout<<"Third Student Marks :"<<student[2];
    return 0;
}