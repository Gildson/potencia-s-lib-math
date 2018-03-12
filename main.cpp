#include <iostream>

using namespace std;

int main()
{
    int ni, nf, ei, ef, produto;
    cout << "Digite a base inicial e a final" << endl;
    cin >> ni >> nf;
    cout << "Digite o expoente inicial e final" << endl;
    cin >> ei >> ef;
    for (int i=ni; i<=nf; i++)
        for (int j=ei; j<=ef; j++)
            for (int k=j; k<=j; k=i)
            {
                produto = k*k;
                cout << produto << endl;
            }

return 0;
}
