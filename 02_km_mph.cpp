#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    double mph = 0.62137;

    cin >> n;

    std:cout << std::fixed << std::setprecision(2);

    cout << n / mph << endl;

    return 0;
}