#include<iostream>
using namespace std;
int main(){
   float x,sum=0;
   p1:
   cout<<"Enter x: ";
   cin>>x;
   if (x==0)
   {
       cout<<"sum = "<<sum;
   }
   else
   {
       if(x>0){
         sum=sum+x;  
       }
       goto p1;   
   }
   


   return 0; 
}
