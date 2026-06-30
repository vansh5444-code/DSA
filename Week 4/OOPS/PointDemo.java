class Point {
    private int x, y;

    public Point() {
        this.x = 0;
        this.y = 0;
    }

    public Point(int x, int y) {
        this.x = x;
        this.y = y;
    }

    public void setX(int x) {
        this.x = x;
    }

    public void setY(int y) {
        this.y = y;
    }

    public void setXY(int x, int y) {
        this.x = x;
        this.y = y;
    }

    public void display() {
        System.out.println("Point(" + x + ", " + y + ")");
    }
}

public class PointDemo {
    public static void main(String[] args) {
        Point p1 = new Point();
        System.out.print("Default constructor -> ");
        p1.display();

        Point p2 = new Point(3, 7);
        System.out.print("Parameterized constructor -> ");
        p2.display();

        p1.setX(10);
        p1.setY(20);
        System.out.print("After setX/setY -> ");
        p1.display();

        p2.setXY(15, 25);
        System.out.print("After setXY -> ");
        p2.display();
    }
}
