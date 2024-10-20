#pragma once

#include <record.h>

/**
 * @class ProfessorRecord
 * @brief This class represents a professor record, derived from the Record
 * class.
 *
 * This class holds information about a professor, including their department.
 */
class ProfessorRecord : public Record
{
public:
  /**
   * @brief Default constructor for the ProfessorRecord class.
   *
   * Initializes an empty professor record.
   */
  ProfessorRecord () = default;

  /**
   * @brief Destructor for the ProfessorRecord class.
   *
   * Cleans up any resources used by the professor record.
   */
  ~ProfessorRecord () = default;

private:
  /**
   * @brief The department to which the professor belongs.
   *
   * A string representing the professor's department.
   */
  std::string departement{};
};
