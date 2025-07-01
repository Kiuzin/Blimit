import java.util.UUID;

//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {

    Address nathanAddress = new Address("99999-999", "SP", "São Paulo", "Rua da minha Rua", 50);

    User nathan = new User("Nathan", "kiuzinoficial@gmail.com", "12345", nathanAddress, UserType.ADMIN);


}

enum UserType{
    ADMIN,
    CLIENT
}

class User {

    String id;
    String name;
    String email;
    String password;
    Address address;
    UserType type;

    public User(String name, String email, String password, Address address, UserType type) {
        this.id = UUID.randomUUID().toString();
        this.name = name;
        this.email = email;
        setPassword(password);
        this.address = address;
        this.type = type;
    }

    public void setPassword(String password){
        this.password = password;
    }

    public void showDates() {
        System.out.println("Usuário: " + name);
        System.out.println("ID: " + id);
        System.out.println("Email: " + email);
        System.out.println("Endereço: " + address.toString());
        System.out.println("Tipo: " + type);
    }
}

class Address{

    String cep;
    String region;
    String city;
    String street;
    int number;
    String complement;

    public Address(String cep, String region, String city, String street, int number){
        this.cep = cep;
        this.region = region;
        this.city = city;
        this.street = street;
        this.number = number;
    }

    @Override
    public String toString() {
        return street + "," + number + "-" + city + "," + region + "-" + complement + ", CEP:" + cep;
    }

}