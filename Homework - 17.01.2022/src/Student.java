import java.util.Date;
import java.util.Objects;

public class Student extends Applicant implements Comparable {

    protected String facultyNumber;

    public Student(String name, String f_nom)throws InvalidValueException
    {
        super.name = name;
        if(f_nom.equals("")){
            throw new InvalidValueException("Erorr");
        }
        this.facultyNumber = f_nom;
    }

    public Student(Date birth, String name, double uspeh, String f_nom) {
        super(birth, name, uspeh);

        this.facultyNumber = f_nom;
    }

    public String getFacultyNumber()
    {
        return this.facultyNumber;
    }

    public void setFacultyNumber(String f_Nom)
    {
        this.facultyNumber = f_Nom;
    }

    @Override
    public String toString() {
        return "Student{" +
                "name='" + name + '\'' +
                ", birthDate=" + birthDate +
                ", uspeh=" + uspeh +
                ", facultyNumber='" + facultyNumber + '\'' +
                '}';
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) return true;
        if (o == null || getClass() != o.getClass()) return false;
        Student student = (Student) o;
        return Objects.equals(facultyNumber, student.facultyNumber);
    }

    @Override
    public int hashCode() {
        return Objects.hash(facultyNumber);
    }
}
