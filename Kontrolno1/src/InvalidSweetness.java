public class InvalidSweetness {

    private double min;
    private double max;
    InvalidSweetness(double min, double max) throws Exception {
        this.min = min;
        this.max = max;
        throw new Exception("The sweetness is not in the range from " + min + " to " + max);
    }
}
