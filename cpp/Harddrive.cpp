#pragma once
#include "Storage.cpp"
#include "PerangkatPenyimpanan.cpp"
#include <iostream>
#include <string>

using namespace std;

class Harddrive : public Storage, public PerangkatPenyimpanan {
private:
    string tipeDrive;
public:
    Harddrive(int kapasitas, string tipe, string merk, string nama) :
        Storage(kapasitas, move(merk), move(nama)), tipeDrive(move(tipe)) {}
    
    void info() const override {
        cout << "Harddrive: " << tipeDrive << " " << merk << " " << nama << " (" << kapasitasGB << " GB)\n";
    }

  void setKapasitasGB(int kapasitasGB) { this->kapasitasGB = kapasitasGB; }
  void setTipeDrive(string tipeDrive) { this->tipeDrive = tipeDrive; } // Diperbaiki parameter menjadi string
  int getKapasitasGB() { return kapasitasGB; }
  string getTipeDrive() { return tipeDrive; }
  void kapasitasMaksimal() const override {
    cout << "Harddrive ini mendukung hingga 1TB penyimpanan.\n";
  }

  ~Harddrive() {}
};
  