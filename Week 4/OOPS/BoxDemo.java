class Box {
    protected double length;
    protected double breadth;

    public Box() {
        length = 0;
        breadth = 0;
    }

    public Box(double length, double breadth) {
        this.length = length;
        this.breadth = breadth;
    }

    public void setLengthBreadth(double length, double breadth) {
        this.length = length;
        this.breadth = breadth;
    }

    public double area() {
        return length * breadth;
    }
}

class Box3D extends Box {
    private double height;

    public Box3D() {
        super();
        height = 0;
    }

    public Box3D(double length, double breadth, double height) {
        super(length, breadth);
        this.height = height;
    }

    public void setHeight(double height) {
        this.height = height;
    }

    public double volume() {
        return length * breadth * height;
    }
}

public class BoxDemo {
    public static void main(String[] args) {
        Box box = new Box(5, 4);
        System.out.println("Box area = " + box.area());

        Box3D box3d = new Box3D(5, 4, 3);
        System.out.println("Box3D area (base) = " + box3d.area());
        System.out.println("Box3D volume = " + box3d.volume());

        Box3D box3dDefault = new Box3D();
        box3dDefault.setLengthBreadth(6, 2);
        box3dDefault.setHeight(4);
        System.out.println("Box3D (set via setters) area = " + box3dDefault.area());
        System.out.println("Box3D (set via setters) volume = " + box3dDefault.volume());
    }
}
