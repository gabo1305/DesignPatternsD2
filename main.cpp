#include <iostream>
//Singleton

using namespace std;

class Singleton {
    static Singleton *instance;
    int dato;

    Singleton() {
        dato = 0;
    }

public:
    static Singleton *getInstance() {
        if (!instance)
            instance = new Singleton;
        return instance;
    }

    int getDato() {
        return this -> dato;
    }

    void setData(int dato) {
        this -> dato = dato;
    }
};


Singleton *Singleton::instance = 0;

int main(){
    Singleton *single = single->getInstance();
    cout << single->getDato() << endl;
    single->setData(5);
    cout << single->getDato() << endl;
    return 0;
}