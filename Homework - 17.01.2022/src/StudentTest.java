import org.junit.jupiter.api.Test;

import java.util.function.BooleanSupplier;

import static org.junit.jupiter.api.Assertions.*;

class StudentTest {
    @Test
    public void testConstruction() throws InvalidValueException {
        assertTrue((BooleanSupplier) new Student("GGGgG", ""));
    }
}