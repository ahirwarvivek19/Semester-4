
public class Overloading {

	public int add(int x, int y) {
		return x + y;
	}

	public float add(float x, float y) {
		return x + y;
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Overloading m = new Overloading();
		System.out.println("Sum of 1 and 9 is: " + m.add(1, 9));
		System.out.println("Sum of 1.7 and 9.5 is: " + m.add(1.7f, 9.5f));
		
	}

}
