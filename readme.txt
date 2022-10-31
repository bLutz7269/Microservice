int numChecker(){
    int input;

    cin >> input;
    while(!(input == 1  input == 2)){
        cout << "Error, invalid input. Try again: ";
        cin.clear();
        cin.ignore(100, '\n');
        cin >> input;
    }
    return input;
}

char lightsError(){
    char c;

    cin >> c;
    while(!(c == 'O'  c == 'W'  c == 'R'  c == 'G' || c == 'B')){
        cout << "Error, invalid input. Try again: ";
        cin.clear();
        cin.ignore(100, '\n');
        cin >> c;
    }
    return c;
}