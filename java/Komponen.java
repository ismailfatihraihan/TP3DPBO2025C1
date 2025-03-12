abstract class Komponen {
  protected String merk;
  protected String nama;

  public Komponen(String merk, String nama) {
      this.merk = merk;
      this.nama = nama;
  }

  public String getMerk() { return merk; }
  public String getNama() { return nama; }

  public abstract void info(); // Polimorfisme
}
