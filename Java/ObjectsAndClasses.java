package Java;

public class ObjectsAndClasses {
    // Class definition
    static class Person {
        String name;
        int age;

        // Constructor
        Person(String name, int age) {
            this.name = name;
            this.age = age;
        }
    }

    public static void main(String[] args) {
        // Object instantiation
        Person person = new Person("John", 25);

        // Accessing object properties
        System.out.println("Name: " + person.name);
        System.out.println("Age: " + person.age);
    }
}
