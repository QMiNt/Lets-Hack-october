

import java.util.ArrayList;
import java.util.Scanner;

class CRUD{
    Scanner input = new Scanner(System.in);
    ArrayList<String>Names = new ArrayList<>();

    public void add(){
        System.out.print(" Enter name: ");
        String name = input.nextLine().toLowerCase();

        if(name.equals("")){
            System.out.println(" Name can't add in the list.");
        }else{
            System.out.println(" Name added. ");
            Names.add(name);
        }
    }

    public void read(){
        if(Names.size() == 0){
            System.out.println(" There are no existing data in the list. ");
        }else{
            System.out.println(" List of names. ");
            for(String nameList : Names){
                System.out.println(" " + nameList);
            }
        }

    }

    public void update(){
        System.out.print(" Enter name to edit: ");
        String update = input.nextLine().toLowerCase();

        if(Names.contains(update)){
            Names.remove(update);

            System.out.print(" Enter new name: ");
            String newName = input.nextLine();
            Names.add(newName);

            System.out.println(" Update Successfully ");
        }else{
            System.out.println(" Name does not exist in the list. ");
        }
    }

    public void delete(){
        System.out.print(" Enter name to delete: ");
        String delete = input.nextLine().toLowerCase();

        if(Names.contains(delete)){
            Names.remove(delete);
            System.out.println(" Deleted Successfully ");
        }else{
            System.out.println(" Name does not exist in the list. ");
        }
    }

}

class Main {
    public static void main (String[]args) {
        Scanner input = new Scanner(System.in);

        CRUD s1 = new CRUD();
        int choice;
        do {
            printOperations();
            System.out.print(" Select option: ");
            choice = input.nextInt();

            switch (choice){

                case 1:
                        s1.add();
                        break;
                case 2:
                        s1.read();
                        break;
                case 3:
                        s1.update();
                        break;
                case 4:
                        s1.delete();
                        break;
                case 5:
                    printOperations();
                default:
                    break;
            }
        } while (choice != 6);
    }
    public static void printOperations(){
        System.out.println("\n1-> Add To List\n2-> Read Items in the List\n3-> Update an item in the list\n4-> Delete an item from the list\n5-> Print Operations\n6-> Exit\n");
    }
}