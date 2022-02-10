import java.util.List;

public class Salad extends Food implements ColdFood
{
    double temperature;
    Salad(String nameOfFood, List<String> listOfProducts, Double price, Double temperature) throws Exception {
        super(nameOfFood, listOfProducts, price, temperature);
        if(temperature >= 0 && temperature <= 10)
        {
            this.temperature = temperature;
        }
        else
        {
            new InvalidTemperature(0, 10);
        }
    }

    @Override
    public void setTemperature(double temperature) {
        this.temperature = temperature;
    }

    @Override
    public String toString() {
        StringBuilder stringBuilder = new StringBuilder();
        stringBuilder.append(getNameOfFood());
        stringBuilder.append(getListOfProducts());
        stringBuilder.append(getPrice());
        stringBuilder.append(this.temperature);
        return stringBuilder.toString();
    }
}
