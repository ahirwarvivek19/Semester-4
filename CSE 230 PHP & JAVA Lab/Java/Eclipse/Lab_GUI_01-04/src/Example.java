import javax.swing.*;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Example extends JFrame {

    private static final long serialVersionUID = -4665098097829410828L;
    JLabel l1, l2, l3, l4;
    JTextField t1, t2;
    JButton b1;

    public void SetComponents() {
        l1 = new JLabel("Factorial of a number:");
        l2 = new JLabel("Enter the number");
        l4 = new JLabel();
        t1 = new JTextField();
        t2 = new JTextField();
        b1 = new JButton("Calculate Factorial");
        setLayout(null);
        b1.addActionListener(new handler());
        l1.setBounds(50, 50, 300, 20);
        l2.setBounds(50, 100, 150, 20);
        t1.setBounds(250, 100, 200, 20);
        b1.setBounds(60, 150, 100, 20);
        l4.setBounds(50, 200, 200, 20);
           
        add(l1);
        add(l2);
        add(l4);
        add(t1);
        add(b1);
        
       
    }

    class handler implements ActionListener {
        @Override
        public void actionPerformed(ActionEvent e) {
            int a = Integer.parseInt(t1.getText());
            if (a < 0) {
                l4.setText("Error: Please Enter a Non-negative number.");
                return;
            }
            long fact = 1;
            for (int i = 1; i <= a; i++)
                fact = fact*i;
            l4.setText("Result : " + fact);
        }
    }

    public static void main(String[] args) {
        Example e = new Example();
        e.setSize(600, 500);
        e.setVisible(true);
        e.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        e.SetComponents();
    }
}