public class Hello {
    public static void main(String []args) {
        Singleton object = Singleton.getInstance();
        object.sayHello();
    }
}