#include <iostream>
#include <string>

int main(){

    srand(time(0));
    int num = (rand() % 100) + 1;
    int guess;
    std::string sguess;
    int tries = 0;

    std::cout << '\n';
    std::cout << "Guess a number between 1 and 100\n";
    std::cout << '\n';

    do{

        std::cout << "Guess: ";
        std::getline(std::cin >> std::ws, sguess);
        try{
            guess = stoi(sguess);
        }
        catch(const std::invalid_argument& e){
            std::cout << "Invalid input!\n\n";
            continue;
        }

        tries++;
        if(guess < num){
            std::cout << "The number is greater than your guess\n\n";
        }
        else if(guess > num){
            std::cout << "The number is smaller than your guess\n\n";
        }

    } while(guess != num);


    std::cout << "You won! It took you " << tries << " tries to guess the number.\n";
    std::cout << '\n';

    return 0;
}
