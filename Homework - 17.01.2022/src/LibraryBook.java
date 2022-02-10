import java.util.Objects;

public class LibraryBook implements ILibraryBook, Comparable{
    private Reader reader;
    private String bookName;
    private boolean status;

    public LibraryBook(String bn)
    {
        this.bookName = bn;
    }

    public LibraryBook(String bn, boolean st)
    {
        this.bookName = bn;
        this.status = st;
    }

    public Reader getReader() {
        return reader;
    }

    public void setReader(Reader reader) {
        this.reader = reader;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) return true;
        if (o == null || getClass() != o.getClass()) return false;
        LibraryBook that = (LibraryBook) o;
        return status == that.status && Objects.equals(reader, that.reader) && Objects.equals(bookName, that.bookName);
    }

    @Override
    public String toString() {
        return "LibraryBook{" +
                "reader=" + reader +
                ", bookName='" + bookName + '\'' +
                ", status=" + status +
                '}';
    }

    @Override
    public int hashCode() {
        return Objects.hash(reader, bookName, status);
    }

    @Override
    public void get(Reader rdr) {
        
    }

    @Override
    public void ret() {

    }
}
