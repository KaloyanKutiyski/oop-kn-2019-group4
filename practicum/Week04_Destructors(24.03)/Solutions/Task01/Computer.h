#ifndef COMPUTER_H
#define COMPUTER_H

class Computer
{

public:
    char *brand;
    char *processor;
    char *video;
    char *hardDrive;
    double price;
    int quantity;

    void copy(char *brand, char *processor, char *video, char *hardDrive, double price, int quantity);
    Computer(char *brand, char *processor, char *video, char *hardDrive, double price, int quantity);
    Computer(Computer const &otherComputer);
    ~Computer();
    void print();
};

#endif /* ifndef COMPUTER_H */