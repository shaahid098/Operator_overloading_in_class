
#include <string>
#ifndef PERSON_H
#define PERSON_H
#include <sstream>


class Person {

private:
    int id; // Person's unique identifier
    std::string first_name; // First name
    std::string last_name;  // Last name
    std::string date_of_birth;  // Date of birth
    int weight; // Weight in pounds
    int height; // Height in inches

public:
    /*
     * Constructor: Person
     * Initializes a Person with all attributes.
     */
    Person(int id, std::string first_name, std::string last_name,
            std::string date_of_birth, int weight, int height);

    /*
     * Copy Constructor: Person
     * Creates a copy of another Person.
     */
    Person(const Person &other);

    //Accessor(getters) marked constant
    int getID() const;
    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getDateOfBirth() const;
    int getWeight() const;
    int getHeight() const;

    //Mutators(setters)
    void setID(int id);
    void setFirstName(std::string first_name);
    void setLastName(std::string last_name);
    void setDateOfBirth(std::string date_of_birth);
    void setWeight(int weight);
    void setHeight(int height);

    // Converts Person info into a string
    std::string toString() const;

    // Operator overloads for comparisons
    bool operator==(const Person &rhs) const;
    bool operator!=(const Person &rhs) const;
    bool operator<(const Person &rhs) const;
    bool operator>(const Person &rhs) const;
    bool operator<=(const Person &rhs) const;
    bool operator>=(const Person &rhs) const;

    // Operator+ to combine persons
    Person operator+(const Person &rhs) const;

    // Assignment operator
    Person& operator=(const Person &rhs);

    // Prefix increment
    Person& operator++();

    // Postfix increment
    Person operator++(int dummy);

    // Prefix decrement
    Person& operator--();

    // Postfix decrement
    Person operator--(int dummy);


};

// Output stream overloads
std::ostream& operator<<(std::ostream &out, const Person rhs);
std::ostream& operator<<(std::ostream &out, const Person *rhs);
#endif
