import java.util.Date;

public class Applicant {
    protected String name;
    protected Date birthDate;
    protected double uspeh;

    public Applicant(){};

    public Applicant(Date birth, String name, double uspeh)
    {
        this.name = name;
        this.birthDate = birth;
        this.uspeh = uspeh;
    }

    public String getName()
    {
        return this.name;
    }
    public void setName(String name)
    {
        this.name = name;
    }

    public Date getBirth()
    {
        return this.birthDate;
    }
    public void setName(Date birth)
    {
        this.birthDate = birth;
    }

    public double getUspeh()
    {
        return this.uspeh;
    }
    public void setUspeh(double uspeh)
    {
        this.uspeh = uspeh;
    }

    @Override
    public String toString() {
        return "Applicant{" +
                "name='" + name + '\'' +
                ", birthDate=" + birthDate +
                ", uspeh=" + uspeh +
                '}';
    }
}
