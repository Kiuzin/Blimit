import java.util.UUID;

public class User {

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
        this.password = this.ChangePassword(password);
        this.address = address;
        this.type = type;
    }

    public String getID() {
        return id;
    }

    private String ChangePassword(String newPassword) {
        if (newPassword.length() < 6)
            throw new RuntimeException("Sua senha precisa de pelo menos 6 caractéres");
        
        return newPassword;
    }

    public void showDates() {
        System.out.println("Usuário: " + name);
        System.out.println("ID: " + id);
        System.out.println("Email: " + email);
        System.out.println("Endereço: " + address.toString());
        System.out.println("Tipo: " + type);
    }
}
