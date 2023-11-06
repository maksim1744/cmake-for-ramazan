#pragma once

#include <iostream>

using std::cout, std::endl, std::string;

static void print_1(string who, int num) {
    cout << "[" << who << "][1] " << num << endl;
}

void print_2(string who, int num);

template<typename T>
void print_3(string who, T num) {
    cout << "[" << who << "][3] " << num << endl;
}

struct S {
    void print_4(string who, int num) {
        cout << "[" << who << "][4] " << num << endl;
    }

    void print_5(string who, int num);
};