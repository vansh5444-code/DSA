import java.util.Random;

abstract class Compartment {
    public abstract String notice();
}

class FirstClass extends Compartment {
    public String notice() {
        return "This is a First Class Compartment.";
    }
}

class Ladies extends Compartment {
    public String notice() {
        return "This is a Ladies Compartment.";
    }
}

class General extends Compartment {
    public String notice() {
        return "This is a General Compartment.";
    }
}

class Luggage extends Compartment {
    public String notice() {
        return "This is a Luggage Compartment.";
    }
}

public class TestCompartment {
    public static void main(String[] args) {

        Compartment[] coach = new Compartment[10];
        Random r = new Random();

        for (int i = 0; i < coach.length; i++) {
            int n = r.nextInt(4) + 1;

            if (n == 1) {
                coach[i] = new FirstClass();
            } else if (n == 2) {
                coach[i] = new Ladies();
            } else if (n == 3) {
                coach[i] = new General();
            } else {
                coach[i] = new Luggage();
            }
        }

        for (int i = 0; i < coach.length; i++) {
            System.out.println("Coach " + (i + 1) + ": " + coach[i].notice());
        }
    }
}
