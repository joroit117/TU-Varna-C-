import java.util.List;

public abstract class Food
{
    private String nameOfFood;
    private List<String> listOfProducts;
    private Double price;
    private Double temperature;

    Food(String nameOfFood, List<String> listOfProducts, double price, double temperature)
    {
        this.nameOfFood = nameOfFood;
        this.listOfProducts = listOfProducts;
        this.price = price;
        this.temperature = temperature;
    }

    public abstract void setTemperature(double temperature) throws Exception;


    public String getNameOfFood()
    {
        return this.nameOfFood;
    }

    public double getPrice()
    {
        return this.price;
    }

    public double getTemperature()
    {
        return this.temperature;
    }

    public List<String> getListOfProducts()
    {
        return this.listOfProducts;
    }






}
