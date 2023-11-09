#include <iostream>
#include <iomanip>

using namespace std;

int sum(int a, int b){
    return a + b;
}

int sub(int a, int b){
    return a - b;
}

int mult(int a, int b){
    return a * b;
}

double divide(int a, int b){
    
    double result = static_cast<double>(a) / b; 

    std::cout << std::fixed << std::setprecision(1);

    return result;
}

int main()
{
    int a, b;
    char operacao;

    cin >> operacao >> a >> b;
   
    switch (operacao)
    {
        case '+':
            cout << sum(a, b) << endl;
            break;
        case '-':
            cout << sub(a, b) << endl;
            break;
        case '*':
            cout << mult(a, b) << endl;
            break;
        case '/':
            cout << divide(a, b) << endl;
            break;
        default:
            cout << "Operacao invalida" << endl;
            break;
    }

    return 0;
}