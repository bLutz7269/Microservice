#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]){
    char c = argv[1][0];
    string final = "./lightsError  ";
    final += c;
    int check = 0;

    do{
        check = system(final.c_str());
        
        if (check != 0){
            cin.ignore(100, '\n');
            cin.clear();
            cin >> c;
            final = "./lightsError  ";
            final += c;    
        }
    }while(check != 0);

    int num = 4;
    final = "./numChecker ";
    final += to_string(num);

    do{
        check = system(final.c_str());
        
        if (check != 0){
            cin.clear();
            cin.ignore(100, '\n');
            cin >> num;
            final = "./numChecker ";
            final += to_string(num);    
        }
    }while(check != 0);

    return 0;
}