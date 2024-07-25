// MyClass.cpp
#include "MyClass.h"
#include <iostream>

// Default Constructor
MyClass::MyClass() : ptr(new int(0)), value(0) {}

// Parameterized Constructor
MyClass::MyClass(int val) : ptr(new int(val)), value(val) {}

// Copy Constructor
MyClass::MyClass(const MyClass& other) : ptr(new int(*other.ptr)), value(other.value) {}

// Destructor
MyClass::~MyClass() {
    delete ptr;
}

// Assignment Operator
MyClass& MyClass::operator=(const MyClass& other) {
    if (this == &other) return *this; // self-assignment check

    delete ptr; // Clean up existing resource
    ptr = new int(*other.ptr);
    value = other.value;
    return *this;
}

// Getter for value
int MyClass::getValue() const {
    return value;
}

// Setter for value
void MyClass::setValue(int val) {
    value = val;
}

// Getter for ptr value
int MyClass::getPtrValue() const {
    return *ptr;
}

// Setter for ptr value
void MyClass::setPtrValue(int val) {
    *ptr = val;
}
