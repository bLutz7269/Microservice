#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]){
    int input = atoi(argv[1]);
    while(!(input == 1 || input == 2)){
        cout << "Error, invalid num input. Try again: ";
        return 1;
    }
    return 0;
}