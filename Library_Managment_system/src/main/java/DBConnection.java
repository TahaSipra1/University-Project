/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author Taha Sipra
 */

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.Statement;

public class DBConnection {
    public static void main(String[] args) {

        String url = "jdbc:sqlserver://localhost:1433;databaseName=TestDB;encrypt=true;trustServerCertificate=true";
        String user = "sa";        // your SQL username
        String password = "1234";  // your SQL password

        try {
            Connection conn = DriverManager.getConnection(url, user, password);
            System.out.println("Connected Successfully!");

            Statement stmt = conn.createStatement();

            conn.close();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
