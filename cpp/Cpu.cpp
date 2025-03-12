#pragma once
#include "Komponen.cpp"
#include "PerangkatTambahan.cpp"
#include <iostream>
#include <string>

using namespace std;

class Cpu : public Komponen, public PerangkatTambahan {
private:
    int jumlahCore;
    float kecepatanGHz;
public:
    Cpu(int core, float speed, string merk, string nama) :
        Komponen(move(merk), move(nama)), jumlahCore(core), kecepatanGHz(speed) {}
    
    void info() const override {
        cout << "CPU: " << merk << " " << nama << " (" << jumlahCore << " Core, "
             << kecepatanGHz << " GHz)\n";
    }
    
    void infoTambahan() const override {
        cout << "Tambahan CPU: Overclocking support.\n";
    }
};