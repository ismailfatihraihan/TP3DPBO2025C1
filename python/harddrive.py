from storage import Storage
from perangkat_penyimpanan import PerangkatPenyimpanan

class Harddrive(Storage, PerangkatPenyimpanan):
    def __init__(self, kapasitas_gb: int, tipe_drive: str, merk: str, nama: str):
        super().__init__(kapasitas_gb, merk, nama)
        self.tipe_drive = tipe_drive

    def info(self):
        print(f"Harddrive: {self.tipe_drive} {self.merk} {self.nama} ({self.kapasitas_gb} GB)")

    def kapasitas_maksimal(self):
        print("Harddrive ini mendukung hingga 4TB penyimpanan.")
