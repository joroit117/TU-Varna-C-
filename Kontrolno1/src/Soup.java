import java.util.List;

public class Soup extends Food implements HotFood
{

    double temperature;
    Soup(String nameOfFood, List<String> listOfProducts, double price, double temperature) throws Exception {
        super(nameOfFood, listOfProducts, price, temperature);
        if(temperature >= 15 && temperature <= 30)
        {
            this.temperature = temperature;
        }
        else
        {
            new InvalidTemperature(15, 30);
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
