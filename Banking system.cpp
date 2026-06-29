#include <iostream>
#include <string>
//deposit, withdraw, show balance (all funcs)]
void showBalance(double balance);
double withdraw(double balance);
double deposit(double balance);

int main(){
    double balance = 0;
    int choice = -1;

    std::string viba;


    std::cout << '\n';
    std::cout << "Banking system\n";

    do{
        std::cout << '\n';
        std::cout << "0.Выход" << '\n';
        std::cout << "1.Показать баланс" << '\n';
        std::cout << "2.Внести" << '\n';
        std::cout << "3.Снять" << '\n';
        std::cout << "Выбор: ";

        std::getline(std::cin >> std::ws, viba);

        try{
            choice = std::stoi(viba);
        }
        catch(const std::invalid_argument& e){
            std::cout << "Неверный ввод!\n";

            continue;
        }

        switch(choice){
            case 1:
                std::cout << '\n';
                showBalance(balance);
                break;
            case 2:
                balance = deposit(balance);
                break;
            case 3:
                balance = withdraw(balance);
                break;
        }

    } while(choice != 0);






    std::cout << '\n';
    return 0;
}
void showBalance(double balance){
    std::cout << "Ваш баланс: " << balance << '\n';
}
double deposit(double balance){
    bool inputDone = false;
    double deposit;
    std::string sdeposit;
    do{
        std::cout << '\n';
        std::cout << "Введите сумму для взноса: ";
        std::getline(std::cin >> std::ws, sdeposit);
        try{
            deposit = std::stod(sdeposit);
        }
        catch(const std::invalid_argument& e){
            std::cout << "Неверный ввод!\n";
            continue;
        }
        std::cout << '\n';
        inputDone = true;
    }while(!inputDone);

    balance += deposit;

    return balance;
}
double withdraw(double balance){
    bool inputDone = false;
    double withdrawal;
    std::string swithdrawal;
    do{
        std::cout << '\n';
        std::cout << "Введите сумму для снятия: ";
        std::getline(std::cin >> std::ws, swithdrawal);
        try{
            withdrawal = std::stod(swithdrawal);
        }
        catch(const std::invalid_argument& e){
            std::cout << "Неверный ввод!\n";
            continue;
        }
        std::cout << '\n';
        inputDone = true;
    }while(!inputDone);

    balance -= withdrawal;

    return balance;
}
