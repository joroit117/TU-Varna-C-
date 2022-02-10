public class Dog extends Animal implements Pet
{
    public Dog(String name, int age, double weight) {
        super(name, age, weight);
    }

    @Override
    public String sound() {
        return "Bau bau...";
    }

    @Override
    public String eats(int count) {
        String str = "The dog is eating " + count + " grams of food.";
        return str;
    }

    @Override
    public String move() {
        return "Running";
    }
}
