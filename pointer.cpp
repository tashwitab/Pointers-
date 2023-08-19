#include<iostream>
using namespace std;
int main()
{
    float var1= 3.46;
    float *ptr= &var1;

    cout<<var1<<endl;//value of var
    cout<<*ptr<<endl;//value of adress given
    cout<<&var1<<endl;//adress of var 
    cout<<ptr<<endl;//value of ptr
    cout<<&ptr<<endl;//value of ptr 

    int var2 =3;
    int *ptr = &var2;

    cout<<var2<<endl;//value of var 
    cout<<*ptr<<endl;//value of adress given 
    cout<<&var2<<endl;//adress of var
    cout<<ptr<<endl;//value of ptr
    cout<<&ptr<<endl;//value of ptr 

}