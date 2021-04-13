
public class Sportsman extends Person {

	String sport;
	char gender;

	public Sportsman(String name, double height, double weight, 
			int age, String sport, char gender) {
		super(name, height, weight, age);
		this.sport = sport;
		this.gender = gender;
	}

	public void display() {
		super.display();
		System.out.println("Sport: " + sport);
		System.out.println("Gender: " + gender);
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Sportsman s = new Sportsman("Ronaldo", 179, 70, 30, "Football", 'M');
		s.display();

	}

}