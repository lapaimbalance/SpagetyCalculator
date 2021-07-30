#include <iostream>

using namespace std;

int req(){
    cout << "**************" << endl;
    cout << "Here is your result" << endl;
    return 0;
}

int plusanut(int a, int b){
    int i = a + b;
    return i;
}

int umnozit(int a, int b){
    int i = a * b;
    return i;
}

int razdelit(int a, int b){
    int i = a / b;
    return i;
}

int otminusovat(int a, int b){
    int i = a - b;
    return i;
}

int main(){
    int a;
    int b;
    int c;
    cout << "Hello to calculator!" << endl;
    cout << "Please give me number 1" << endl;
    cin >> a;
    cout << "Please give me number 2" << endl;
    cin >> b;
    cout << "Please give me operator : 1 - '-', 2 - '+', 3 - '/', 4 - '*'" << endl;
    cin >> c;
    switch (c)
    {
    case 1:
        cout << otminusovat(a,b) << endl;
        req();
        break;

    case 2:
        req();
        cout << plusanut(a,b) << endl;
        break;
    case 3:
        req();
        cout << razdelit(a,b) << endl;
        break;
    case 4:
        req();
        cout << umnozit(a,b) << endl;
        break;
    }
    
    return 0;
}