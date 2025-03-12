class Cpu extends Komponen implements PerangkatTambahan {
  private int jumlahCore;
  private double kecepatanGHz;

  public Cpu(int jumlahCore, double kecepatanGHz, String merk, String nama) {
      super(merk, nama);
      this.jumlahCore = jumlahCore;
      this.kecepatanGHz = kecepatanGHz;
  }

  @Override
  public void info() {
      System.out.println("CPU: " + merk + " " + nama + " (" + jumlahCore + " Core, " + kecepatanGHz + " GHz)");
  }

  @Override
  public void infoTambahan() {
      System.out.println("Tambahan CPU: Overclocking support.");
  }
}
