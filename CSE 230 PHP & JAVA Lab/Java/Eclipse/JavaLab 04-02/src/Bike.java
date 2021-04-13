public class Bike implements Vehicle_interface{
	String vehicle_name, vehicle_number, vehicle_model, color;
	long price, reg_number;

	public Bike(String vehicle_name, String vehicle_number, String vehicle_model, String color, long price,
			long reg_number) {
		this.vehicle_name = vehicle_name;
		this.vehicle_number = vehicle_number;
		this.vehicle_model = vehicle_model;
		this.color = color;
		this.price = price;
		this.reg_number = reg_number;
	}
	public void modelDetails() {
		System.out.println("Vehicle name: " + vehicle_name);
		System.out.println("Vehicle number: " + vehicle_number);
		System.out.println("Vehicle model: " + vehicle_model);
		System.out.println("Vehicle color: " + color);
		System.out.println();
	}
	public void priceDetails() {
		System.out.println("Price: " + price);
		System.out.println("Registration number: " + reg_number);
	}

	public static void main(String[] args) {
		Bike b = new Bike("Bajaj Pulsar RS200", "MP13JF1919", "P19RS200", "White", 301000, 19192519);
		b.modelDetails();
		b.priceDetails();
	}
}