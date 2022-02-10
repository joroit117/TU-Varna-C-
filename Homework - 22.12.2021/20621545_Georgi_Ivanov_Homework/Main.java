public class Main
{
    public static void main(String[] args) {

        //Farm
        Farm farm = new Farm();

        //Add Dogs
        Dog dog1 = new Dog("Roko", 3, 15);
        farm.addAnimal(dog1);
        Dog dog2 = new Dog("Jerry", 7, 25);
        farm.addAnimal(dog2);

        //Add Birds
        Bird bird1 = new Bird("Harry", 2, 1);
        farm.addAnimal(bird1);
        Bird bird2 = new Bird("Moni", 4, 0.75);

        farm.addAnimal(bird2);
        //Add Sheeps
        Sheep sheep1 = new Sheep("Kaila", 5, 40);
        farm.addAnimal(sheep1);
        Sheep sheep2 = new Sheep("Lani", 9, 35);
        farm.addAnimal(sheep2);

        //Remove Bird
        farm.removeAnimal(bird2);

        //Pets List Print
        System.out.println("Pets List:\n");
        for (var pet : farm.petsList())
        {
            System.out.println(pet.toString());
        }

        //Tamely List Print
        System.out.println("Tamely List:\n");
        for (var tamely : farm.tamelyList())
        {
            System.out.println(tamely.toString());
        }

        //Feeding Animals
        System.out.println("Feeding animals:\n");
        for (var eat : farm.feedAnimals(300))
        {
            System.out.println(eat);
        }

        System.out.println();

        //Farm Animals Sounds
        System.out.println("Animals sounds:\n");
        for (var sound : farm.animalsSounds())
        {
            System.out.println(sound);
        }
    }
}
