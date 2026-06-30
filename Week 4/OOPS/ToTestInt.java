interface test {
    void square(int n);
}

class arithmetic implements test {
    public void square(int n) {
        int result = n * n;
        System.out.println("Square of " + n + " is " + result);
    }
}

public class ToTestInt {
    public static void main(String[] args) {
        arithmetic obj = new arithmetic();
        obj.square(5);
        obj.square(12);
    }
}
