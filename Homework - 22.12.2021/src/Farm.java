import java.util.ArrayList;
import java.util.List;

public class Farm
{
    private List<Animal> animals;

    public Farm()
    {
        animals = new ArrayList<>();
    }
    
    public List<Animal> petsList()
    {
        List<Animal> pets = new ArrayList<>();
        for (var animal : animals)
        {
            if(animal instanceof Pet)
            {
                pets.add(animal);
            }
        }
        return pets;
    }

    public List<Animal> tamelyList()
    {
        List<Animal> tamely = new ArrayList<>();
        for (var animal : animals)
        {
            if(animal instanceof Tamely)
            {
                tamely.add(animal);
            }
        }
        return tamely;
    }

    public void addAnimal(Animal animal)
    {
        animals.add(animal);
    }

    public void removeAnimal(Animal animal)
    {
        animals.remove(animal);
    }

    public List<String> feedAnimals(double foodQuantity)
    {
        List<String> eating = new ArrayList<>();
        for (var animal : animals)
        {
            eating.add(animal.eats(300));
        }
        return eating;
    }

    public List<String> animalsSounds()
    {
        List<String> sounds = new ArrayList<>();
        for (var animal : animals)
        {
            sounds.add(animal.sound());
        }
        return sounds;
    }
}

