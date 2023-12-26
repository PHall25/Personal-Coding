package Java;

public class Methods {
    // Method definition
    static String greet(String name) {
        return "Hello, " + name + "!";
    }

    public static void main(String[] args) {
        // Method call
        String result = greet("Alice");
        System.out.println(result);
    }
}
