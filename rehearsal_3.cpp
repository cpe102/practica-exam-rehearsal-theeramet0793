#include <iostream>
#include<cmath>


using namespace std;
//Write sumSqrt() here.
double sum=0;

double sumSqrt(int N){
    sum=0;
    if(N<=0){
        return 0;
    }
    else{
        while(N>0){
        sum=sum+(1/pow(N,0.5));
        N=N-1;
        }
     return sum;
    }

}


int main()
{
    double a = sumSqrt(20);
    double b = sumSqrt(10);
    double c = sumSqrt(5);
    double d = sumSqrt(2);
    double e = sumSqrt(1);
    double f = sumSqrt(0);
    double g = sumSqrt(-1);
    
    cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << "\n" << f << "\n" << g << "\n";
return 0;
}
