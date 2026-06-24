#include <iostream>

int main(){

    srand(time(0));
    int num = (rand() % 10) + 1;
    int guess;
    int tries = 0;


    std::cout << "Guess a number between 1 and 10\n";

    do{

        std::cout << "Guess: ";
        std::cin >> guess;
        std::cout << '\n';
        tries++;
        if(guess < num){
            std::cout << "The number is greater than your guess\n";
        }
        else if(guess > num){
            std::cout << "The number is smaller than your guess\n";
        }

    } while(guess != num);


    std::cout << "You won! It took you " << tries << " tries to guess the number.\n";


    return 0;
}
