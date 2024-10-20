#pragma once

#include <string>

#include <professor_record.h>

/**
 * @class ClassRecord
 * @brief This class represents a class record containing information about
 *        the class such as name, ID, description, and professor.
 */
class ClassRecord {
 public:
  /**
   * @brief Constructor for the ClassRecord class.
   */
  ClassRecord() = default;

  virtual ~ClassRecord() = default;

  /**
   * @brief Sets the name of the class.
   * @param class_name A std::std::string representing the class name.
   */
  void setClass_name(std::string class_name);

  /**
   * @brief Gets the name of the class.
   * @return A std::string containing the class name.
   */
  std::string getClass_name();

  /**
   * @brief Sets the ID of the class.
   * @param class_id An integer representing the class ID.
   */
  void setClass_id(int class_id);

  /**
   * @brief Gets the ID of the class.
   * @return An integer containing the class ID.
   */
  int getClass_id();

  /**
   * @brief Sets the description of the class.
   * @param class_description A std::string representing the class description.
   */
  void setClass_description(std::string class_description);

  /**
   * @brief Gets the description of the class.
   * @return A std::string containing the class description.
   */
  std::string getClass_description();

 private:
  /**
   * @brief A std::string representing the description of the class.
   */
  std::string description;

  /**
   * @brief A record of the professor associated with this class.
   */
  ProfessorRecord professor;
};
