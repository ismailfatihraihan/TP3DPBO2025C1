#include "Komponen.cpp"

class Storage : public Komponen {
protected:
    int kapasitasGB;
public:
    Storage(int kapasitas, string merk, string nama) :
        Komponen(move(merk), move(nama)), kapasitasGB(kapasitas) {}
};