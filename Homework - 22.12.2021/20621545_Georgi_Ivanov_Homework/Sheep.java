public class Sheep extends Animal implements Tamely
{

    public Sheep(String name, int age, double weight) {
        super(name, age, weight);
    }

    @Override
    public String sound()
    {
        return "Beee beee...";
    }

    @Override
    public String eats(int count)
    {
        String str = "The sheep is eating " + count + " grams of food.";
        return str;
    }

    @Override
    public String move() {
        return "Walking";
    }
}
