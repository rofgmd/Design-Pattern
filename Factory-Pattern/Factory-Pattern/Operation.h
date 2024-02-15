#pragma once

class  Operation
{
public:
    void setNum1(double num1) {
        this->num1 = num1;
    }
    void setNum2(double num2) {
        this->num2 = num2;
    }
    // 获取操作数的方法
    double getNum1() {
        return num1;
    }
    double getNum2() {
        return num2;
    }
    // 抽象的计算方法，由子类实现
    virtual double execute(double a, double b) = 0;

private:
	double num1; // 第一个操作数
	double num2; // 第二个操作数
};
