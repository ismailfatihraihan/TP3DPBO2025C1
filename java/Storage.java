class Storage extends Komponen {
  protected int kapasitasGB;

  public Storage(int kapasitasGB, String merk, String nama) {
      super(merk, nama);
      this.kapasitasGB = kapasitasGB;
  }

  @Override
  public void info() {
      System.out.println("Merk: " + merk + ", Nama: " + nama + ", Kapasitas: " + kapasitasGB + "GB");
  }
}
