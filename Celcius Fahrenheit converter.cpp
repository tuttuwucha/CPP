#include <iostream>
#include <string>
using std::cout, std::string, std::cin;
int main(){


    string menu;
    int men = 0;
    string sdegree;
    double degree;
    bool done;

    cout << '\n';
    cout << "**************** C|F Converter ***************" << '\n';

    do{
        done = false;
        cout << '\n';
        cout << "-1.Выход" << '\n';
        cout << "1.Цельсии в Фаренгейты" << '\n';
        cout << "2.Цельсии в Кельвины" << '\n';
        cout << "3.Фаренгейты в Цельсии" << '\n';
        cout << "4.Фаренгейты в Кельвины" << '\n';
        cout << "Выбор: ";

        std::getline(cin >> std::ws, menu);

        try{
            men = std::stoi(menu);
        }
        catch(const std::invalid_argument& e){

        }

        switch(men){
            case -1:
                break;
            case 1:


                do{
                    cout << '\n';
                    cout << "Введите градусы в Цельсиях: ";

                    std::getline(cin >> std::ws, sdegree);

                    try{
                        degree = std::stod(sdegree);
                    }
                    catch(const std::invalid_argument& e){
                        cout << '\n' << "Некоректный ввод!" << '\n';
                        continue;
                    }
                    cout << '\n' << "Результат в Фаренгейтах: " << degree*1.8+32 << '\n';
                    done = true;
                } while(!done);


                break;
            case 2:


                do{
                    cout << '\n';
                    cout << "Введите градусы в Цельсиях: ";

                    std::getline(cin >> std::ws, sdegree);

                    try{
                        degree = std::stod(sdegree);
                    }
                    catch(const std::invalid_argument& e){
                        cout << '\n' << "Некоректный ввод!" << '\n';
                        men = 0;
                        continue;
                    }
                    cout << '\n' << "Результат в Кельвинах: " << degree+273.15 << '\n';
                    done = true;
                } while(!done);


                break;
            case 3:


                do{
                    cout << '\n';
                    cout << "Введите градусы в Фаренгейтах: ";

                    std::getline(cin >> std::ws, sdegree);

                    try{
                        degree = std::stod(sdegree);
                    }
                    catch(const std::invalid_argument& e){
                        cout << '\n' << "Некоректный ввод!" << '\n';
                        continue;
                    }
                    cout << '\n' << "Результат в Цельсиях: " << (degree-32)/1.8 << '\n';
                    done = true;
                } while(!done);


                break;
            case 4:


                do{
                    cout << '\n';
                    cout << "Введите градусы в Фаренгейтах: ";

                    std::getline(cin >> std::ws, sdegree);

                    try{
                        degree = std::stod(sdegree);
                    }
                    catch(const std::invalid_argument& e){
                        cout << '\n' << "Некоректный ввод!" << '\n';
                        continue;
                    }
                    cout << '\n' << "Результат в Кельвинах: " << ((degree-32)/1.8)+273.15 << '\n';
                    done = true;
                } while(!done);


                break;
            default:
                cout << '\n';
                cout << "Некоректный ввод!" << '\n';
                break;
        }

    } while(men != -1);

    cout << '\n';
    cout << "**********************************************" << '\n';
    cout << '\n';

    return 0;
}
