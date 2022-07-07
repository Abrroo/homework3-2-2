#include <iostream>
#include <cstring>

struct bankDB
{
    unsigned int bankAcc = 0;
    std::string fName;
    double bankStatement = 0;
};

void makeSomeMoney(bankDB* client, double newBankStatement)
{
    client->bankStatement = newBankStatement;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    bankDB client;
    double newBankStatement = 0;

    std::cout << "Введите номер счёта: ";
    std::cin >> client.bankAcc;
    std::cout << "Введите имя владельца: ";
    std::cin >> client.fName;
    std::cout << "Введите баланс: ";
    std::cin >> client.bankStatement;
    std::cout << "Введите новый баланс: ";
    std::cin >> newBankStatement;

    makeSomeMoney(&client, newBankStatement);

    std::cout << "Ваш счёт: " << client.fName << ", " << client.bankAcc << ", " << newBankStatement << std::endl;
    return 0;
}