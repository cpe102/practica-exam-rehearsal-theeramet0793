#include<iostream>
#include<string>
//Write compress() here.
using namespace std;

int i;

string conpress(string name){
   i=1;
   string new_name;
   while(i<=name.size()){
       if(i%3==1){
           new_name=new_name+name[i-1];  
       }
      i=i+1; 
   }
return new_name;
}




int main()
{   
    string a = conpress("ABCDEFGHIJKLMN");
    string b = conpress("123456");
    string c = conpress("HelloWorld");
    string d = conpress("BNK48");
    string e = conpress("COMPROG261102");
    string f = conpress("A");
    string g = conpress("AB");
    string h = conpress("ABC");
    string i = conpress("ABCD");
    
    cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << "\n" << f << "\n" << g << "\n" << h << "\n" << i << "\n";

}
