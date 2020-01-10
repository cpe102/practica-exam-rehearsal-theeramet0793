#include<iostream>
#include<string>
//Write compress() here.
using namespace std;

int i;

string compress(string name){
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
    string a = compress("ABCDEFGHIJKLMN");
    string b = compress("123456");
    string c = compress("HelloWorld");
    string d = compress("BNK48");
    string e = compress("COMPROG261102");
    string f = compress("A");
    string g = compress("AB");
    string h = compress("ABC");
    string i = compress("ABCD");
    
    cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << "\n" << f << "\n" << g << "\n" << h << "\n" << i << "\n";

}
