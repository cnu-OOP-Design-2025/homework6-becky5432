#include <iostream>
#include "bird.h"
using namespace std;

class Duck : public Bird {
public: 
    Duck(): Bird("Duck"){cry();}
    void cry() {
        cout << "Quack!" <<endl;
    }
    ~Duck() {
        cry();
    }
};

class Penguin : public Bird {
public:
    Penguin() :Bird("Penguin") {cry();}
    void cry() {
        cout << "Squawk!" <<endl;
    }
    void fly() {
        cout << "This bird can't fly." <<endl;
    }
    ~Penguin() {
        cry();
    }
};

class Eagle : public Bird {
public:
    Eagle() :Bird("Eagle") {cry();}
    void cry() {
        cout << "Screech!" <<endl;
    }
    void swim () {
        cout << "This bird can't swim." <<endl;
    }
    ~Eagle() {
        cry();
    }
};