import java.util.*;

public class FoodTable
{
    private List<Portion> portions;

    FoodTable(){};

    public void addPortion(Food food, double quantity)
    {

    }

    public double sumOfFood()
    {
        double sum = 0;
        for (var portion : portions) {

            sum += portion.getFood().getPrice();
        }
        return sum;
    }

    public double sumOfQuantity()
    {
        double quantity = 0;
        for (var portion : portions) {

            quantity += portion.getQuantity();
        }
        return quantity;
    }

    public List<Soup> getSoups()
    {
        List<Soup> soups = new ArrayList<>();
        for (var portion : portions) {

            if(portion.getFood() instanceof HotFood) {
                soups.add((Soup) portion.getFood());
            }
        }
        return soups;
    }

    public List<Salad> getSalads()
    {
        List<Salad> salads = new ArrayList<>();
        for (var portion : portions) {

            if(portion.getFood() instanceof ColdFood) {
                salads.add((Salad) portion.getFood());
            }
        }
        return salads;
    }

    public List<Desert> getDeserts()
    {
        List<Desert> deserts = new ArrayList<>();
        for (var portion : portions) {

            if(portion.getFood() instanceof SweetFood) {
                deserts.add((Desert) portion.getFood());
            }
        }
        return deserts;
    }

    public List<Food> getFoodsSortedByPrice()
    {
        SortedSet<Desert> deserts = new SortedSet<Desert>() {
            @Override
            public Comparator<? super Desert> comparator() {
                return null;
            }

            @Override
            public SortedSet<Desert> subSet(Desert fromElement, Desert toElement) {
                return null;
            }

            @Override
            public SortedSet<Desert> headSet(Desert toElement) {
                return null;
            }

            @Override
            public SortedSet<Desert> tailSet(Desert fromElement) {
                return null;
            }

            @Override
            public Desert first() {
                return null;
            }

            @Override
            public Desert last() {
                return null;
            }

            @Override
            public int size() {
                return 0;
            }

            @Override
            public boolean isEmpty() {
                return false;
            }

            @Override
            public boolean contains(Object o) {
                return false;
            }

            @Override
            public Iterator<Desert> iterator() {
                return null;
            }

            @Override
            public Object[] toArray() {
                return new Object[0];
            }

            @Override
            public <T> T[] toArray(T[] a) {
                return null;
            }

            @Override
            public boolean add(Desert desert) {
                return false;
            }

            @Override
            public boolean remove(Object o) {
                return false;
            }

            @Override
            public boolean containsAll(Collection<?> c) {
                return false;
            }

            @Override
            public boolean addAll(Collection<? extends Desert> c) {
                return false;
            }

            @Override
            public boolean retainAll(Collection<?> c) {
                return false;
            }

            @Override
            public boolean removeAll(Collection<?> c) {
                return false;
            }

            @Override
            public void clear() {

            }
        };
        for (var portion : portions) {

            if(portion.getFood() instanceof SweetFood) {
                deserts.add((Desert) portion.getFood());
            }
        }
        return deserts;
    }


}
