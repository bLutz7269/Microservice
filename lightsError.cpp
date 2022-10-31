#include <iostream>
#include <string>

using namespace std;
int main(int argc, char* argv[]){
    //char *b = argv[1];
    char c = argv[1][0];
    while(!(c == 'O' || c == 'W' || c == 'R' || c == 'G' || c == 'B')){
        cout << "Error, invalid light input. Try again: ";
        return 1;
    }

    return 0;
}