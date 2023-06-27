#include <iostream>
#include <fstream>

using namespace std;

class shopping {
private:
    int pcode;
    float price;
    float discount;
    string name;

public:
    void add();
    void rem();
    void buyer();
    void edit();
    void menu();
    void administrator();
    void receipt();
    void list();
};

void shopping :: menu()
{
    int choice;
    string email;
    string password;

    cout<<"\t\t\t________________________________________________________________\n";
    cout<<"\t\t\t                                                                \n";
    cout<<"\t\t\t                 SUPER MARKET MAIN MENU                         \n";
    cout<<"\t\t\t                                                                \n";
    cout<<"\t\t\t________________________________________________________________\n";
    cout<<"\t\t\t                                                                \n";
    cout<<"\t\t\t 1) ADMINISTRATOR                                               \n";
    cout<<"\t\t\t                                                                \n";
    cout<<"\t\t\t 2) BUYER                                                       \n";
    cout<<"\t\t\t                                                                \n";
    cout<<"\t\t\t 3) EXIT                                                        \n";
    cout<<"\t\t\                                                                 \n";
    cout<<"\t\t\t PLEASE SELECT YOUR CHOICE :)                                   \n";
    cin>>choice;

    switch(choice)
    {

    }

}
int main()
{

    return 0;
}
