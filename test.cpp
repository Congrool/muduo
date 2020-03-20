#include <type_traits>
#include <iostream>

class base{
    public:
        base(){
            std::cout << "constructor" << std::endl;
        }
        base(const base&){
            std::cout << "constructor" << std::endl;
        }

        base& fun(){
            base b;
            return b;
        }

        base& fun2(){
            std::cout << "if constructor invoked here?" << std::endl;
            return fun();
        }
};
int main(){
    base b;
    std::cout << "start here" << std::endl;
    b.fun2();
}