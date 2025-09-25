#include "Person.h"

// Constructor implementation

Person::Person(int id, std::string first_name, std::string last_name,
        std::string date_of_birth, int weight, int height) {
    this->id = id;
    this->first_name = first_name;
    this->last_name = last_name;
    this->date_of_birth = date_of_birth;
    this->weight = weight;
    this->height = height;
}

// Copy constructor
Person::Person(const Person &other) {
    setID(other.getID());
    setFirstName(other.getFirstName());
    setLastName(other.getLastName());
    setDateOfBirth(other.getDateOfBirth());
    setWeight(other.getWeight());
    setHeight(other.getHeight());
}

//Getters and setters implementations

int Person::getID() const {
    return id;
}
void Person::setID(int id) {
    this->id = id;
}
std::string Person::getFirstName() const {
    return first_name;
}
void Person::setFirstName(std::string first_name) {
    this->first_name = first_name;
}
std::string Person::getLastName() const {
    return last_name;
}
void Person::setLastName(std::string last_name) {
    this->last_name = last_name;
}
std::string Person::getDateOfBirth() const {
    return date_of_birth;
}
void Person::setDateOfBirth(std::string date_of_birth) {
    this->date_of_birth = date_of_birth;
}
int Person::getWeight() const {
    return weight;
}
void Person::setWeight(int weight) {
    this->weight = weight;
}
int Person::getHeight() const {
    return height;
}
void Person::setHeight(int height) {
    this->height = height;
}

//Comparison operators
bool Person::operator==(const Person &rhs) const {
    return (this->getID() == rhs.getID());
}
bool Person::operator<(const Person &rhs) const {
    return (this->getID() < rhs.getID() );
}
bool Person::operator!=(const Person &rhs) const {
    return !(*this == rhs);
}
bool Person::operator>(const Person &rhs) const {
    return !(*this <= rhs);
}

bool Person::operator<=(const Person &rhs) const {
    return (*this <rhs || *this == rhs);
}
bool Person::operator>=(const Person &rhs) const {
    return !(*this < rhs);
}

// Operator+ combines height and weight of two people
Person Person::operator+(const Person &rhs) const {
    Person newPerson(rand() % 100000,"Bob",getLastName(),"04/10/2025",
                this->getWeight() + rhs.getWeight()/2,
                this->getHeight()+rhs.getHeight()/2);
    return newPerson;
}

// Assignment operator
Person& Person::operator=(const Person &rhs) {
    setID(rhs.getID());
    setFirstName(rhs.getFirstName());
    setLastName(rhs.getLastName());
    setDateOfBirth(rhs.getDateOfBirth());
    setWeight(rhs.getWeight());
    setHeight(rhs.getHeight());

    return *this;
}

// Prefix increment: Increases weight and height by 10
Person& Person::operator++() { //prefix
    this->setWeight(getWeight() + 10);
    this->setHeight(getHeight() + 10);
    return *this;
}

// Postfix increment: Increases weight and height by 10
Person Person::operator++(int dummy) {
    Person newPerson = *this;
    this->setWeight(getWeight() + 10);
    this->setHeight(getHeight() + 10);
    return newPerson;
}

// Prefix decrement
Person& Person::operator--() {
    this->setWeight(getWeight() - 10);
    this->setHeight(getHeight() - 10);
    return *this;
}

// Postfix decrement
Person Person::operator--(int dummy) {
    Person newPerson = *this;
    this->setWeight(getWeight() - 10);
    this->setHeight(getHeight() - 10);
    return newPerson;
}

// Converts object to readable string
std::string Person::toString() const {
    std::stringstream ss;
    ss <<getFirstName() << " " << getLastName()
        << " Weight:"<< getWeight()
        << ", Height:" << getHeight();

    return ss.str();
}

// Output overload
std::ostream& operator<<(std::ostream &out, const Person rhs) {
    out << rhs.toString();
    return out;
}

// Output overload
std::ostream& operator<<(std::ostream &out, const Person *rhs) {
    out << rhs->toString();
    return out;
}

