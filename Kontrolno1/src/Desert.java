import java.util.List;

public class Desert extends Food implements SweetFood
{
    double temperature;
    double sweetness;
    Desert(String nameOfFood, List<String> listOfProducts, Double price, Double temperature, double sweetness) throws Exception {
        super(nameOfFood, listOfProducts, price, temperature);
        this.sweetness = sweetness;
        if(sweetness >= 1 && sweetness <= 10)
        {
            this.sweetness = sweetness;
        }
        else
        {
            new InvalidSweetness(1, 10);
        }
    }

    public void changeSweetnessLevel(double sweetness)
    {
        this.sweetness = sweetness;
    }


    @Override
    public void setTemperature(double temperature) throws Exception {
        if(temperature >= -15 && temperature <= 35)
        {
            this.temperature = temperature;
        }
        else
        {
            new InvalidTemperature(-15, 35);
        }
    }

    @Override
    public String toString() {
        StringBuilder stringBuilder = new StringBuilder();
        stringBuilder.append(getNameOfFood());
        stringBuilder.append(getListOfProducts());
        stringBuilder.append(getPrice());
        stringBuilder.append(this.temperature);
        stringBuilder.append(this.sweetness);
        return stringBuilder.toString();
    }
}
