package track;

public class Obstaculo {

	private String Tipo;
	private int length;
	private int damage;
	
	public Obstaculo(String pTipo) {
		this.Tipo = pTipo;
		length = 3;
		damage = 10;
	}
}
