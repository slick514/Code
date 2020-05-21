package com.jusies; // your package name may be different

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class Main {

    public static void main(String[] args) {
        // Create a reader for taking in a line from stdin
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        // Create a string for holding the text that will be read from stdin
        String input;

        // Catch any IOException that is thrown
        try {
            // Read in a line from stdin
            input = br.readLine();

            // Print "Hello, World."
            System.out.println("Hello, World.");

            // Print the text that was previously read in from stdin
            System.out.println(input);

        } catch (IOException ioe) {
            // If an error was thrown, print it out
            System.out.println(ioe);
        }
    }
}