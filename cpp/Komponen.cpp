#pragma once
#include <iostream>
#include <string>

using namespace std;

class Komponen {
  protected:
      string merk;
      string nama;
  public:
      Komponen(string merk, string nama) : merk(move(merk)), nama(move(nama)) {}
      
      void setMerk(string merk) { this->merk = merk; }
      void setNama(string nama) { this->nama = nama; }
      string getMerk() const { return merk; }
      string getNama() const { return nama; }
      
      virtual void info() const = 0; // Polimorfisme
      virtual ~Komponen() = default;
  };