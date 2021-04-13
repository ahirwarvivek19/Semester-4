public class Person {
	String name;
	double height, weight;
	int age;

	public Person() {
		name = "";
		height = 0;
		weight = 0;
		age = 0;
	}

	public Person(String name, double height, double weight, int age) {
		this.name = name;
		this.height = height;
		this.weight = weight;
		this.age = age;
	}

	public void display() {
		System.out.println("Name: " + name);
		System.out.println("Height: " + height);
		System.out.println("Weight: " + weight);
		System.out.println("Age: " + age);
	}
}