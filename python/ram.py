from komponen import Komponen

class Ram(Komponen):
    def __init__(self, kapasitas_gb: int, ddr: str, merk: str, nama: str):
        super().__init__(merk, nama)
        self.kapasitas_gb = kapasitas_gb
        self.ddr = ddr

    def info(self):
        print(f"RAM: {self.merk} {self.nama} ({self.kapasitas_gb} GB, {self.ddr})")
