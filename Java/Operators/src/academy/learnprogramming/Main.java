package academy.learnprogramming;

public class Main {

    public static void main(String[] args) {

        int result = 1 + 2; // 1 + 2 = 3
        System.out.println("1 + 2 = " + result);
        int previousResult = result;
        System.out.println("previousResult " + previousResult);
        result = result - 1;
        System.out.println("3 - 1 = " + result);
        System.out.println("previousResult " + previousResult);

        result = result * 10; // 2 * 10 = 20
        System.out.println("2 * 10 = " + result);

        result = result / 5; // 20 / 5 = 4
        System.out.println("20 / 4 = " + result);

        result = result % 3; // remainder of (4 % 3) = 1
        System.out.println("4 % 3 = " + result);

        //result = result + 1
        result++;
        System.out.println(result);

        //result === result - 1
        result--;
        System.out.println(result);

        //result = result + 2
        result += 2;
        System.out.println(result);

        //result = result * 10
        result *= 10;
        System.out.println(result);

        //result = result / 3
        result /= 3;
        System.out.println(result);

        //result = result - 2
        result -= 2;
        System.out.println(result);

        boolean isAlien = false;
        if (isAlien == false) {
            System.out.println("Not an alien");
            System.out.println("And fuck aliens :)");
        }

        int topScore = 80;
        if (topScore < 100) {
            System.out.println("You got the highest score!");
        }

        int secondTopScore = 81;
        if (topScore > secondTopScore && topScore < 100){
            System.out.println("Greater than top score but less than 100");
        }

    }
}
