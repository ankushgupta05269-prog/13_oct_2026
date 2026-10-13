#include <iostream>
using namespace std;

class animal {
public:
    virtual void sound() {
        cout << "The animal makes a sound" << endl;
    }
};

class dog : public animal {
public:
    void sound() override {
        cout << "Dog Barks" << endl;
    }
};

class cat : public animal {
public:
    void sound() override {
        cout << "Cat Meows" << endl;
    }
};

int main() {
    animal *ace;

    dog d;
    cat c;

    ace = &d;
    ace->sound();

    ace = &c;
    ace->sound();

    return 0;
}