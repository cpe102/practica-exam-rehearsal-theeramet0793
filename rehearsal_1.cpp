#include<iostream>
#include<string>
using namespace std;
int main(){

string name;
float  grade;

cout<<"What is your name?: ";
cin>>name;
cout<<"What is your GPA?: ";
cin>>grade;

if(grade>=3.5){
    cout<<name<<" InW  Jrim Jrim!!!";
}
else
{
    cout<<"Try harder, "<<name<<"!!!";
}


return 0;
}
