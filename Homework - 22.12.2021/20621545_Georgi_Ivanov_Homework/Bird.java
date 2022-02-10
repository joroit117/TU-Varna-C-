public class Bird extends Animal implements Pet
{
    public Bird(String name, int age, double weight) {
        super(name, age, weight);
    }

    @Override
    public String sound()
    {
        return "Churulik churulik...";
    }

    @Override
    public String eats(int count)
    {
        String str = "The bird is eating " + count + " grams of food.";
        return str;
    }

    @Override
    public String move()
    {
        return "Flying";
    }
}
