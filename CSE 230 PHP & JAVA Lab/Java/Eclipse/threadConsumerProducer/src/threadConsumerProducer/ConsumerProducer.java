package threadConsumerProducer;

import java.util.*;

public class ConsumerProducer extends Thread {
    boolean prod, cons;
    static Buffer b = new Buffer();

    ConsumerProducer(boolean p) {
        prod = p;
        cons = !p;
    }

    public void run() {
        try {
            if (prod)
                b.producer();
            else
                b.consumer();
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
    }

    public static void main(String[] args) {
        ConsumerProducer producer = new ConsumerProducer(true);
        ConsumerProducer consumer = new ConsumerProducer(false);

        producer.start();
        consumer.start();
    }
}

class Buffer {
    ArrayList<Integer> buff = new ArrayList<>();
    int capacity = 7;

    public void producer() throws InterruptedException {
        int product = 1;
        while (true)
            synchronized (this) {
                while (buff.size() == capacity)
                    wait();

                System.out.println("Producing : " + product);
                buff.add(product++);
                notify();
                Thread.sleep(500);
            }
    }

    public void consumer() throws InterruptedException {
        while (true)
            synchronized (this) {
                while (buff.size() == 0)
                    wait();
                System.out.println("Consuming :" + buff.remove(0));
                notify();
                Thread.sleep(500);
            }
    }
}
