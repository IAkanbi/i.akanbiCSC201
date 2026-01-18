#include <iostream>
using namespace std;

void nprint(char name, int n){
    for (int i = 1; i<=n; i++){
        cout << name;
    }
}
int main(){
    char x = 'W';
    nprint(x, 5);
    cout << "\n";
    nprint(201,x);
}
