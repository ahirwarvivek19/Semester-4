
public class Vehicle {
	
	String vehicle_type, vehicle_number, vehicle_model, vehicle_color;
	long price, reg_number;

	public Vehicle(String vehicle_type, String vehicle_number, String vehicle_model, String vehicle_color, long price,
			long reg_number) {
		this.vehicle_type = vehicle_type;
		this.vehicle_number = vehicle_number;
		this.vehicle_model = vehicle_model;
		this.vehicle_color = vehicle_color;
		this.price = price;
		this.reg_number = reg_number;
	}

	void display() {
		System.out.println("Vehicle type: " + vehicle_type);
		System.out.println("Vehicle number: " + vehicle_number);
		System.out.println("Vehicle model: " + vehicle_model);
		System.out.println("Vehicle color: " + vehicle_color);
		System.out.println("Vehicle price: " + price);
		System.out.println("Registration number: " + reg_number);
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Vehicle veh = new Vehicle("Car", "MP13FE1919", "M-CLS", "GREY", 9090000, 8519119);
		veh.display();
	}
}