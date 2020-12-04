#ifndef BANKNUMBER_H_INCLUDED
#define BANKNUMBER_H_INCLUDED

typedef struct {
    long long int   integerPart;
    unsigned short  fractionalPart;
} BankNumber;

// сложение
BankNumber add(BankNumber first, BankNumber second);

BankNumber sub(BankNumber first, BankNumber second);

BankNumber mul(BankNumber first, BankNumber second);

BankNumber toDeposit(BankNumber body,
                     unsigned int timing,
                     float procent,
                     bool isCapitalization);

#endif // BANKNUMBER_H_INCLUDED
