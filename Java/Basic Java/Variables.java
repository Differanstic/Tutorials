import java.util.Formatter;
import java.lang.Math;

public class Variables {
    public static void main(String args[]){

        /* Basic Datatypes
         * int -> [-2147483647, 2147483647]
         * float -> [1.4E-45, 3.4028235E38]
         * double -> [4.9E-324 , 1.7976931348623157E308]
         * string -> "This is a string" // Non Primitive Datatype
         * char -> 'x'
         * boolean -> [true, false]
        */


    // Declaring Variables
        int i = 10 , i2 = 20;
        float f = 3.14f;
        double d = 1.3424d;
        String s = "Hello World";
        char c = 'x';
        boolean b = true;



    // Declaring  Const|Final Variables
        final int N = 10;
        final String DBNAME = "Database-Name";



    // Printing Variables in Java
        System.out.println("int ->" + i);
        System.out.println("float ->" + f);
        System.out.println("double ->" + d);
        System.out.println("String ->" + s);
        System.out.println("char ->" + c);
        System.out.println("boolean ->" + b);
        System.out.println("final int ->" + N);
        System.out.println("final String ->" + DBNAME);

    // Example
        System.out.println("sum ->" +( i + i2 ) );

    // Printing with precision (Round off)
        // Method 1
            System.out.println("Format with Math.round() method -> "+Math.round(d));
        // Method 2
            Formatter formatter = new Formatter();  
            System.out.println("Format with Formatter "+formatter.format("%.4f", d));
            formatter.close();


    // Type Casting the Variable 
        String valueString = "3";
        char valueChar = '1';
        double valueDouble = 2.453424d;
        float valueFloat = 3.1424f;
        
        int t = Integer.parseInt(valueString); 
        int t2 = (int) valueDouble; 
        int t3 = (int) valueFloat;



    //Printing Maximum and Minimun Value of Datatypes
        System.out.println("double [" +Double.MIN_VALUE + ", "+ Double.MAX_VALUE + " ]");
        System.out.println("float [" +Float.MIN_VALUE + ", "+ Float.MAX_VALUE + " ]");
        System.out.println("int [" +Integer.MIN_VALUE + ", "+ Integer.MAX_VALUE + " ]");



    // Find Max and Min With Number Datatypes
        double d1 = 3.14455435d, d2 = 3.14443564d;
        System.out.println("Double Max ->"+ Double.max(d1, d2) );

        float f1 = 3.14f, f2 = 3.12f;
        System.out.println("Float Max ->"+ Float.max(f1, f2));

        
    }
}
