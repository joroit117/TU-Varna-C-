public class InvalidTemperature
{
    private double min;
    private double max;
    InvalidTemperature(double min, double max) throws Exception {
        this.min = min;
        this.max = max;
        throw new Exception("The temperature is not in the range from " + min + " to " + max);
    }


}
