import javax.sound.sampled.Port;

public class Portion
{
    private Food food;
    private double quantity;
    Portion(Food food, double quantity)
    {
        this.food = food;
        this.quantity = quantity;
    }

    public Food getFood()
    {
        return food;
    }
    public double getQuantity()
    {
        return quantity;
    }
    public void setFood(Food food)
    {
        this.food = food;
    }
    public void setQuantity(double quantity)
    {
        this.quantity = quantity;
    }
}
