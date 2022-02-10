public class EmptyValue {
    private String name;
    EmptyValue(String name)
            throws Exception {
        this.name = name;
        throw new Exception("The value of " + name + " cannot be empty or null");
    }
}
