
#include<bits/stdc++.h>
using namespace std;

namespace n1
{
    void func()
    {
        cout<<"namespace1";
    }
}

namespace n2
{
    void func(string greet)
    {
        printf("hello %s!",greet);
    }
}

class Main
{
    Main *x;
    Main(Main *t): x(t){  }//*x = *t;}
    Main(Main &t )
    {
        *x=t;
       
        // x=t; you cannot do this because x memory address is immutable you can dereference and can change the value(contained address) inside it 
        // we can do *x = *t; *x =t means &t; 
    }
};

int main(void)
{

    n1::func();
    n2::func("this is second namespace with same function name");
    return 0;
}
