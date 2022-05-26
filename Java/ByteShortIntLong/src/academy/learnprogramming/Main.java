//Overflow and Underflow in Java

package academy.learnprogramming;

public class Main {

    public static void main(String[] args) {
        
        int myMinIntVal = Integer.MIN_VALUE;
        int myMaxIntVal = Integer.MAX_VALUE;

        System.out.println("Integer Minimum Value = " + myMinIntVal);
        System.out.println("Integer Maximum Value = " + myMaxIntVal);
        System.out.println("Busted MAX Value = " + (myMaxIntVal + 1));
        System.out.println("Busted MIN Value = " + (myMinIntVal - 1));
        
//        int myMaxIntTest = 2_147_483_647;

        byte myMinByteValue = Byte.MIN_VALUE;
        byte myMaxByteValue = Byte.MAX_VALUE;

        System.out.println("Byte Minimum Value = " + myMinByteValue);
        System.out.println("Byte Maximum Value = " + myMaxByteValue);

        short myMinShortValue = Short.MIN_VALUE;
        short myMaxShortValue = Short.MAX_VALUE;

        System.out.println("Short Minimum Value = " + myMinShortValue);
        System.out.println("Short Maximum Value = " + myMaxShortValue);

        long myMinLongValue = Long.MIN_VALUE;
        long myMaxLongValue = Long.MAX_VALUE;

        System.out.println("Long Minimum Value = " + myMinLongValue);
        System.out.println("Long Maximum Value = " + myMaxLongValue);

        int myTotal = (myMinByteValue / 2);
        byte myNewByteValue = (byte) (myMinByteValue / 2);


    }
}
