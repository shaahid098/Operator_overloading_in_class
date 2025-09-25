#include <iostream>
#include "Person.h"

int main() {

    Person *bob = new Person(7,"Chris","Kringle","12/25/1954",210,64);
    Person *rose= new Person(5,"Jessica","Clause","10/31/1986",167,84);


    // Test prefix increment
    ++(*bob);
    std::cout << "After prefix bob is: " << bob << std::endl;

    // Test postfix increment
    (*bob)++;
    (*bob)++;
    std::cout << "After postfix bob is: " << bob << std::endl;

    // Test prefix decrement
    --(*rose);
    std::cout << "After prefix rose is: " << rose << std::endl;

    // Test postfix decrement
    (*rose)++;
    std::cout << "After postfix rose is: " << rose << std::endl;

    //using comparision operators
    std::cout << "bob and rose same? " << ((*bob == *rose) ? "Yes" : "No") << std::endl;
    std::cout << "bob lesser than rose? " << ((*bob < *rose) ? "Yes" : "No") << std::endl;
    std::cout << "bob not equal to rose? " << ((*bob != *rose) ? "Yes" : "No") << std::endl;
    std::cout << "bob grater than rose? " << ((*bob > *rose) ? "Yes" : "No") << std::endl;
    std::cout << "bob lesser or equal to  rose? " << ((*bob <= *rose) ? "Yes" : "No") << std::endl;
    std::cout << "bob greater or equal to rose? " << ((*bob >= *rose) ? "Yes" : "No") << std::endl;

    //testing operator+(combining two people and check if it creates new person)
    Person combined=*bob + *rose;
    std::cout << "If bob and rose added,It creates: "<<combined << std::endl;

    Person clone = *rose; // Calls copy constructor
    Person newPerson1(0, "", "", "", 0, 0); // Empty person
    newPerson1 = clone; // Calls assignment operator
    std::cout << "After assignment newPerson = clone: " << newPerson1 << std::endl;

    // Test output overload (pointer already tested, now value)
    std::cout << "combined by value: " << combined << std::endl;


    return 0;
}
