#include <iostream>

using namespace std;

int main()
{
    int qtd, volume, litro, raio;
    cin >> raio;
    cin >> litro;
    volume = (((raio * raio * raio) * 3.1415) * 4) / 3;
    qtd = litro / volume;
    cout << qtd <<endl;
    return 0;
}
