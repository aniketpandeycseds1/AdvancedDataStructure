#include<iostream>
using namespace std;
class Account{
    public:
    void withdraw(){
        cout<<"Withdrawing with standard rules"<<endl;
    }
};
class SavingAccount: public Account{
    public:
    void withdraw(){
        cout<<"Withdrawing with saving account rules"<<endl;
    }
};
int main(){
    SavingAccount sa;
    sa.withdraw();

    Account* acc = &sa;
    acc->withdraw(); // Calls the base class method due to static binding.......
    return 0;
}