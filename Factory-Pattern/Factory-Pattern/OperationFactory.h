#pragma once
#include <memory>
#include "Operation.h"
#include "Basic-operations.h"

class OperationFactory {
public:
    static std::shared_ptr<Operation> createOperation(char op) {
        try {
            switch (op) {
            case '+':
                return std::make_shared<Add>();
            case '-':
                return std::make_shared<Subtract>();
            case '*':
                return std::make_shared<Multiply>();
            case '/':
                return std::make_shared<Divide>();
            case '^':
                return std::make_shared<Power>();
            default:
                throw std::invalid_argument("Invalid operation");
            }
        }
        catch (const std::invalid_argument& e) {
            std::cerr << "Error: " << e.what() << std::endl;
            exit(1); // 使用 exit 函数退出程序
        }

    }
};