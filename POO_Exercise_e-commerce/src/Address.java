class Address {

    String cep;
    String region;
    String city;
    String street;
    int number;
    String complement;

    public Address(String cep, String region, String city, String street, int number) {
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
