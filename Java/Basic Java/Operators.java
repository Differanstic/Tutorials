public class Operators {
   

     public static void main(String args[]){
    /*
     * Operators in Java
     *      #1. Arithmetic Operators
     *          +
     *          -
     *          *
     *          /
     *          % -> Modulus -> gives remainder of x % y
     *          ++ -> increment by 1
     *          -- -> decrement by 1
     */

        int x = 5, y = 10;
     
        System.out.println("x + y ->" + ( x + y ));
        System.out.println("x - y ->" + ( x - y ));
        System.out.println("x * y ->" + ( x * y ));
        System.out.println("x / y ->" + ( x / y ));
        System.out.println("x % y ->" + ( x % y ));
        
        // Pre-Increments (++x) and Post-Increments (x++)
    
        int z1 = 10, z2 = 10;
        System.out.println("z1++ ->" + ( z1++ )); // will show 10
        System.out.println("z2++ ->" + ( ++z2 )); // will show 11

        

        /*
         * Assignment Operator
         *      = Assign value 
         *      +=  Add and Assign
         *      -=  Subtract and Assign
         *      *=  Multiple and Assign
         *      /=  
         *      %=
         */

         //Examples

         double d = 10;
         d += 10;
         System.out.println("d += 10 -> "+ d);
         d = 10;
         d /= 10;
         System.out.println("d /= 10 -> "+ d);
     }
     
}
