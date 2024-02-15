#pragma once
#include "Operation.h"
#include <stdexcept>
#include <cmath>

class Add : public Operation {
public:
    double execute(double a, double b) override {
        return a + b;
    }
};

class Subtract : public Operation {
public:
    double execute(double a, double b) override {
        return a - b;
    }
};

class Multiply : public Operation {
public:
    double execute(double a, double b) override {
        return a * b;
    }
};

class Divide : public Operation {
public:
    double execute(double a, double b) override {
        try {
            if (b == 0) throw std::runtime_error("Division by zero");
            return a / b;
        }
        catch(const std::runtime_error& e){
            std::cerr << "Error: " << e.what() << std::endl;
            exit(1); // 使用 exit 函数退出程序
        }
        
    }
};

class Power : public Operation {
public:
    double execute(double a, double b) override {
        return pow(a, b);
    }

};