#pragma once

#include <string>
using namespace std;

/**
 * @class Record
 * @brief This is a base class that represents a generic record,
 *        containing common attributes such as ID and name.
 */
class Record
{
  public:
    /**
     * @brief Default constructor for the Record class.
     *
     * Initializes a Record object with default values:
     * ID is set to 0 and name is initialized as an empty string.
     */
    Record () : id (0), name ("") {};

    /**
     * @brief Virtual destructor for the Record class.
     *
     * Ensures proper cleanup of resources when a derived class object is
     * deleted.
     */
    virtual ~Record () {}

  private:
    /**
     * @brief The ID associated with the record.
     *
     * An integer representing the unique identifier for the record.
     */
    int id;

    /**
     * @brief The name associated with the record.
     *
     * A string representing the name of the record.
     */
    std::string name;
};
