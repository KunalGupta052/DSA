/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

// #include <iostream>
// using namespace std;

// class Base {
//     public:
//         void greet(){
//             cout<<"Hello from base class: \n";
            
//         }
// };
// class Derived: public Base{
//     public:
//         void display(){
//             cout<<"This is derived class \n";
//         }
// };
// int main()
// {
//     Derived obj;
//     obj.greet();
//     obj.display();
    

//     return 0;
// }

#include <iostream>
using namespace std;

class Base {
    protected:
        void greet(){
            cout<<"Hello from base class: \n";
            
        }
};
class Derived: public Base{
    public:
        void display(){
            cout<<"This is derived class \n";
        }
};
int main()
{
    Derived obj;
    obj.greet();
    obj.display();
    

    return 0;
}



