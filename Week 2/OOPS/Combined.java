interface Playable {
    void play();
}

class Veena implements Playable {

    public void play() {
        System.out.println("Veena is being played");
    }
}

class Saxophone implements Playable {

    public void play() {
        System.out.println("Saxophone is being played");
    }
}

public class Test {

    public static void main(String[] args) {

        Veena v = new Veena();
        Saxophone s = new Saxophone();

        
        v.play();
        s.play();

        
        Playable instrument;

        instrument = v;
        instrument.play();

        instrument = s;
        instrument.play();
    }
}
