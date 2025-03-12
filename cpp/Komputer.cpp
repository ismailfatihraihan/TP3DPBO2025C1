#pragma once
#include "Cpu.cpp"
#include "Ram.cpp"
#include "Harddrive.cpp"
#include <vector>
#include <string>

using namespace std;

class Komputer {
private:
  string nama;
  Cpu cpu;
  vector<Ram> ramList;
  Harddrive harddrive;

public:
  Komputer(string nama, Cpu cpu, vector<Ram> ramList, Harddrive harddrive) :
  nama(move(nama)), cpu(move(cpu)), ramList(move(ramList)), harddrive(move(harddrive)) {}

  void tampilkanInfo() const {
    cout << "Informasi Komputer:\n";
    cout << "Nama: " << nama << "\n";
    cpu.info();
    for (const auto& ram : ramList) {
        ram.info();
    }
    harddrive.info();
  }
  void setNama(string nama) { this->nama = nama; }
  void setCpu(Cpu cpu) { this->cpu = cpu; }
  void setRam(vector<Ram> ramList) { this->ramList = ramList; }
  void setHarddrive(Harddrive harddrive) { this->harddrive = harddrive; }
  void addRam(Ram ram) { ramList.push_back(ram); }

  string getNama() { return nama; }
  Cpu getCpu() { return cpu; }
  vector<Ram> getRamList() { return ramList; }
  Harddrive getHarddrive() { return harddrive; }
  ~Komputer() {}
};