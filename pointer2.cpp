#include<iostream>
using namespace std;
int main()
{
    int i=3;
     float var1= 3.46;
    float *ptr= &var1;
    
    for(i=0; i<5;i++)
    {
        cout<<*ptr<<endl;
        ptr++;

    }
}
