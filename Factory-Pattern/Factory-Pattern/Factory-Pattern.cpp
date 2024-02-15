// Factory-Pattern.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "OperationFactory.h"
int main()
{
    // Testing for normally operation, like + - * /
    std::shared_ptr<Operation> test_add = OperationFactory::createOperation('+');
    double result = test_add->execute(25, 5);
    std::cout << "Add Operation test: 25 + 5 = " << result << std::endl;

    std::shared_ptr<Operation> test_subtract = OperationFactory::createOperation('-');
    result = test_subtract->execute(25, 5);
    std::cout << "Substract Operation test: 25 - 5 = " << result << std::endl;

    std::shared_ptr<Operation> test_mutiply = OperationFactory::createOperation('*');
    result = test_mutiply->execute(25, 5);
    std::cout << "Substract Operation test: 25 * 5 = " << result << std::endl;

    std::shared_ptr<Operation> test_divide = OperationFactory::createOperation('/');
    result = test_divide->execute(25, 5);
    std::cout << "Substract Operation test: 25 / 5 = " << result << std::endl;

    std::shared_ptr<Operation> test_power = OperationFactory::createOperation('^');
    result = test_power->execute(5, 2);
    std::cout << "Substract Operation test: 5 ^ 2 = " << result << std::endl;
    result = test_power->execute(5, -2);
    std::cout << "Substract Operation test: 5 ^ -2 = " << result << std::endl;
    result = test_power->execute(5, 0.1);
    std::cout << "Substract Operation test: 5 ^ 0.1 = " << result << std::endl;
    result = test_power->execute(0, 0);
    std::cout << "Substract Operation test: 0 ^ 0 = " << result << std::endl;

    // Testing for invalid operation
    //std::shared_ptr<Operation> test_invalid = OperationFactory::createOperation('^');
    //result = test_invalid->execute(25, 5);
    //std::cout << "Substract Operation test: 25 ^ 5 = " << result << std::endl;

    // Testing for divide 0
    // result = test_divide->execute(5, 0);
    // std::cout << "Substract Operation test: 5 / 0 = " << result << std::endl;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
