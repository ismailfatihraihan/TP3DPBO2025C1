#pragma once
#include "Komponen.cpp"
#include <iostream>
#include <string>

using namespace std;

// class Ram : public Komponen {
// private:
//   int kapasitasGB;
//   string ddr;

// public:
//   Ram() {}
//   Ram(int kapasitasGB, string ddr, string merk, string nama) 
//     : Komponen(merk, nama), kapasitasGB(kapasitasGB), ddr(ddr) {}

//   void setKapasitasGB(int kapasitasGB) { this->kapasitasGB = kapasitasGB; }
//   void setDdr(string ddr) { this->ddr = ddr; } 
//   int getKapasitasGB() { return kapasitasGB; }
//   string getDdr() { return ddr; }
//   ~Ram() {}
// };

class Ram : public Komponen {
private:
    int kapasitasGB;
    string ddr;
public:
    Ram(int kapasitas, string ddrType, string merk, string nama) :
        Komponen(move(merk), move(nama)), kapasitasGB(kapasitas), ddr(move(ddrType)) {}
    
    void info() const override {
        cout << "RAM: " << merk << " " << nama << " (" << kapasitasGB << " GB, " << ddr << ")\n";
    }

    void setKapasitasGB(int kapasitasGB) { this->kapasitasGB = kapasitasGB; }
    void setDdr(string ddr) { this->ddr = ddr; } 
    int getKapasitasGB() { return kapasitasGB; }
    string getDdr() { return ddr; }

    ~Ram(){}
};