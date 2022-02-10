import java.util.ArrayList;
import java.util.Date;
import java.util.List;
import java.util.Objects;

public class Reader extends Student implements IReader, Comparable
{
    private List<String> LibraryBook = new ArrayList<>();

    public Reader(String nm, String fn) throws InvalidValueException {
        super(nm, fn);
    }
    public Reader(Date date, String name, double uspeh, String f_nom) {
        super(date, name, uspeh, f_nom);
    }

    public List<String> getLibraryBook() {
        return LibraryBook;
    }

    public void setLibraryBook(List<String> libraryBook) {
        LibraryBook = libraryBook;
    }

    @Override
    public void get(String book) {
        LibraryBook.add(book);
    }

    @Override
    public void ret(String book) {
        LibraryBook.remove(book);
    }

    @Override
    public String toString() {
        return "Reader{" +
                "name='" + name + '\'' +
                ", birthDate=" + birthDate +
                ", uspeh=" + uspeh +
                ", LibraryBook=" + LibraryBook +
                ", facultyNumber='" + facultyNumber + '\'' +
                '}';
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) return true;
        if (o == null || getClass() != o.getClass()) return false;
        if (!super.equals(o)) return false;
        Reader reader = (Reader) o;
        return Objects.equals(LibraryBook, reader.LibraryBook);
    }

    @Override
    public int hashCode() {
        return Objects.hash(super.hashCode(), LibraryBook);
    }
}
