#include <iostream>
using namespace std;

int main(){
    int catCount;
    cout << "�п�J�@���X�Ӥ����G";
    cin >> catCount;
    string name[100];
    for(int i = 0; i < catCount; i++){
        cout << "�п�J��" << i + 1 << "�Ӥ������W�١G";
        cin >> name[i];
    }

    int value[100];
    int priceCount;
    cout << "�п�J�@���X���b�G";
    cin >> priceCount;
    for(int i = 0; i < 100; i++){
        value[i] = 0;
    }

    for(int i = 0; i < priceCount; i++){
        cout << "�п�J��" << i + 1 << "����ơG";
        int cat;
        cin >> cat;
        int valueTemp;
        cin >> valueTemp;
        value[cat - 1] += valueTemp;
    }

    cout << "\n";

    for(int i = 0; i < catCount; i++){
        cout << i + 1 << ". " << name[i] << "�G" << value[i] << "\n";
    }
}
