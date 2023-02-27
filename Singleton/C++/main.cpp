#include <iostream>
using namespace std;

class Singleton {
private:
    static Singleton *obj;
    Singleton() {};
public:
    static Singleton *getInstance();
    void sayHello();
};

Singleton *Singleton::obj = nullptr;
Singleton *Singleton::getInstance() {
    if(obj = nullptr) {
        obj = new Singleton();
    }
    return obj;
}
void Singleton::sayHello() {
    cout << "Hello" << endl;
}

int main() {
    Singleton *a = Singleton::getInstance();
    a->sayHello();
    return 0;
}
