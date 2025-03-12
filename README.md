# Janji
Saya Ismail Fatih Raihan dengan NIM 2307840 mengerjakan Tugas Praktikum 3 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
## **Desain Program**
### **1. Konsep OOP yang Digunakan**
**Inheritance**, kelas `Komponen` diwarisi oleh `Cpu`, `Ram`, dan `Storage`.  
**Composition**, `Komputer` memiliki `Cpu`, daftar `Ram`, dan `Harddrive`.  
**Multiple Inheritance**, `Cpu` mewarisi dari `Komponen` dan `PerangkatTambahan`.  
**Multilevel Inheritance**, `Storage` diwarisi oleh `Harddrive`.  
**Hybrid Inheritance**, `Harddrive` mewarisi dari `Storage` dan `PerangkatPenyimpanan`.  
**Polimorfisme**, `info()` yang diimplementasi di semua subclass.

### **2. Class Diagram**
![image](https://github.com/user-attachments/assets/2ac51fad-6369-4435-b926-749756bf95bb)

## **Alur Program**

1. **Membuat Objek Komponen Komputer**  
   - Objek `Cpu`, `Ram`, dan `Harddrive` dibuat dengan spesifikasi tertentu.  

2. **Membuat Objek `Komputer`**  
   - `Komputer` menerima `Cpu`, daftar `Ram`, dan `Harddrive` sebagai komposisi.  

3. **Menampilkan Informasi Komputer di Main**  
   - `tampilkanInfo()` mencetak spesifikasi lengkap komputer (CPU, RAM, Harddrive).  
