public class FoodProduct
{
    private String nameOfProduct;
    FoodProduct(String nameOfProduct)
    {
        this.nameOfProduct = nameOfProduct;
    }

    String getNameOfProduct()
    {
        return this.nameOfProduct;
    }

    void setNameOfProduct(String name)
    {
        this.nameOfProduct = name;
    }

    Boolean compareNames(String name)
    {
        if(this.nameOfProduct == name)
            return true;
        else
            return false;
    }
}
