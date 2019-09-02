#include <iostream>
using namespace std;
int main()
{
    float a;float b;float c;float d;float x1;float x2;
    cout<<"Input the value of a , b and c respectively"<<endl;
    cin>>a>>b>>c;
    d = ((b*b)-(4*a*c))/(2*a);
    x1 = -b -d;
    x2 = -b +d;
    cout <<"The value of x1: "<<x1<<endl;
    cout<<"The value of x2: "<<x2<<endl;

}
