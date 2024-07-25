// MyClass.h
#ifndef MYCLASS_H
#define MYCLASS_H

class MyClass {
private:
    int* ptr;
    int value;

public:
    // Constructors
    MyClass();
    MyClass(int val);
    MyClass(const MyClass& other);

    // Destructor
    ~MyClass();

    // Assignment Operator
    MyClass& operator=(const MyClass& other);

    // Getter and Setter
    int getValue() const;
    void setValue(int val);

    int getPtrValue() const;
    void setPtrValue(int val);
};

#endif // MYCLASS_H
