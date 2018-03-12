#include <iostream>

using namespace std;

int main()
{
    int ni, nf, ei, ef, produto;
    cout << "Digite a base inicial e a final" << endl;
    cin >> ni >> nf;
    cout << "Digite o expoente inicial e final" << endl;
    cin >> ei >> ef;
    for (int base = ni; base <= nf; base++){
        for (int exp=ei; exp<=ef; exp++){
            if (exp == 0){
                produto = 1;
            }
            else {
                produto = base;
                for (int x=2; x<=exp; x++){
                    produto *=base ;
                }
            }
        cout << produto << endl;
        }

    }

return 0;
}
