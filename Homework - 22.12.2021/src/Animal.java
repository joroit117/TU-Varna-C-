import java.lang.*;
import java.util.*;

public abstract class Animal implements Movement
{
    private String name;
    private int age;
    private double weight;

    public Animal(String name, int age, double weight)
    {
        this.name = name;
        this.age = age;
        this.weight = weight;
    }

    public abstract String sound();

    public abstract String eats(int count);

    @Override
    public String toString()
    {
        StringBuilder stringBuilder = new StringBuilder();
        stringBuilder.append("Name: " + this.name + "\n");
        stringBuilder.append("Age: " + this.age + " years\n");
        stringBuilder.append("Weight: " + this.weight + " kg\n");
        stringBuilder.append("Sound: " + this.sound() + "\n");
        return stringBuilder.toString();
    }
}
