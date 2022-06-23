#include <iostream>
#include "../include/json.hpp"

using namespace std;
using namespace nlohmann;

template<typename T>
class A {
public:
    T i;
};

template<typename T>
class B {
public:
    using ptr = std::shared_ptr<A<T>>;
    using type = A<T>;
    B() {
        ptr p(new type);
        p->i = 4;
        std::cout << p->i << std::endl;
    }
};

int main() {
    // try {
    //     json js = json::parse("12");
    //     int i = js["234"];
    // } catch(json::parse_error p) {
    //     std::cout << p.what() << std::endl;
    // } catch(json::type_error t) {
    //     std::cout << t.what() << std::endl;
    // }
    // std::cout << "123" << std::endl;

    B<int> b;
    return 0;
}