#include <iostream>
#include <cmath>

int main(){


    std::cout << "*****************ЕБАЛ МАТЬ********************" << std::endl;


    std::string op;
    bool trueOperator = false;
    bool firstTime = true;


    double num1;
    std::cout << "Enter first number: ";
    std::cin >> num1;

    do{
        if(!firstTime){
            std::cout << "Invalid input!" << std::endl;
        }
        std::cout << "Enter an operator(+,-,*,/,^): ";
        std::getline(std::cin >> std::ws, op);
        if(op == "+" || op == "-" || op == "*" || op == "/" || op== "^"){
            trueOperator = true;
        }
        else{
            firstTime = false;
        }
    }while(!trueOperator);

    double num2;
    std::cout << "Enter second number: ";
    std::cin >> num2;


    double result;

    if(op == "+"){
        result = num1 + num2;
    }
    else if(op == "-"){
        result = num1 - num2;
    }
    else if(op == "*"){
        result = num1 - num2;
    }
    else if(op == "/"){
        result = num1 / num2;
    }
    else if(op == "^"){
        result = pow(num1, num2);
    }





    std::cout << "The result of this equasion(" << num1 << " " << op << " " << num2 << ") is: " << result << std::endl;
    //penis



    std::cout << "**********************************************" << std::endl;
    return 0;
}
