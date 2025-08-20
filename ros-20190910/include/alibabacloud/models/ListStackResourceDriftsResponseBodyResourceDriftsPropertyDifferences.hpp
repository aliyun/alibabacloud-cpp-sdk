// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSTACKRESOURCEDRIFTSRESPONSEBODYRESOURCEDRIFTSPROPERTYDIFFERENCES_HPP_
#define ALIBABACLOUD_MODELS_LISTSTACKRESOURCEDRIFTSRESPONSEBODYRESOURCEDRIFTSPROPERTYDIFFERENCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class ListStackResourceDriftsResponseBodyResourceDriftsPropertyDifferences : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListStackResourceDriftsResponseBodyResourceDriftsPropertyDifferences& obj) { 
      DARABONBA_PTR_TO_JSON(ActualValue, actualValue_);
      DARABONBA_PTR_TO_JSON(DifferenceType, differenceType_);
      DARABONBA_PTR_TO_JSON(ExpectedValue, expectedValue_);
      DARABONBA_PTR_TO_JSON(PropertyPath, propertyPath_);
    };
    friend void from_json(const Darabonba::Json& j, ListStackResourceDriftsResponseBodyResourceDriftsPropertyDifferences& obj) { 
      DARABONBA_PTR_FROM_JSON(ActualValue, actualValue_);
      DARABONBA_PTR_FROM_JSON(DifferenceType, differenceType_);
      DARABONBA_PTR_FROM_JSON(ExpectedValue, expectedValue_);
      DARABONBA_PTR_FROM_JSON(PropertyPath, propertyPath_);
    };
    ListStackResourceDriftsResponseBodyResourceDriftsPropertyDifferences() = default ;
    ListStackResourceDriftsResponseBodyResourceDriftsPropertyDifferences(const ListStackResourceDriftsResponseBodyResourceDriftsPropertyDifferences &) = default ;
    ListStackResourceDriftsResponseBodyResourceDriftsPropertyDifferences(ListStackResourceDriftsResponseBodyResourceDriftsPropertyDifferences &&) = default ;
    ListStackResourceDriftsResponseBodyResourceDriftsPropertyDifferences(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListStackResourceDriftsResponseBodyResourceDriftsPropertyDifferences() = default ;
    ListStackResourceDriftsResponseBodyResourceDriftsPropertyDifferences& operator=(const ListStackResourceDriftsResponseBodyResourceDriftsPropertyDifferences &) = default ;
    ListStackResourceDriftsResponseBodyResourceDriftsPropertyDifferences& operator=(ListStackResourceDriftsResponseBodyResourceDriftsPropertyDifferences &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->actualValue_ != nullptr
        && this->differenceType_ != nullptr && this->expectedValue_ != nullptr && this->propertyPath_ != nullptr; };
    // actualValue Field Functions 
    bool hasActualValue() const { return this->actualValue_ != nullptr;};
    void deleteActualValue() { this->actualValue_ = nullptr;};
    inline string actualValue() const { DARABONBA_PTR_GET_DEFAULT(actualValue_, "") };
    inline ListStackResourceDriftsResponseBodyResourceDriftsPropertyDifferences& setActualValue(string actualValue) { DARABONBA_PTR_SET_VALUE(actualValue_, actualValue) };


    // differenceType Field Functions 
    bool hasDifferenceType() const { return this->differenceType_ != nullptr;};
    void deleteDifferenceType() { this->differenceType_ = nullptr;};
    inline string differenceType() const { DARABONBA_PTR_GET_DEFAULT(differenceType_, "") };
    inline ListStackResourceDriftsResponseBodyResourceDriftsPropertyDifferences& setDifferenceType(string differenceType) { DARABONBA_PTR_SET_VALUE(differenceType_, differenceType) };


    // expectedValue Field Functions 
    bool hasExpectedValue() const { return this->expectedValue_ != nullptr;};
    void deleteExpectedValue() { this->expectedValue_ = nullptr;};
    inline string expectedValue() const { DARABONBA_PTR_GET_DEFAULT(expectedValue_, "") };
    inline ListStackResourceDriftsResponseBodyResourceDriftsPropertyDifferences& setExpectedValue(string expectedValue) { DARABONBA_PTR_SET_VALUE(expectedValue_, expectedValue) };


    // propertyPath Field Functions 
    bool hasPropertyPath() const { return this->propertyPath_ != nullptr;};
    void deletePropertyPath() { this->propertyPath_ = nullptr;};
    inline string propertyPath() const { DARABONBA_PTR_GET_DEFAULT(propertyPath_, "") };
    inline ListStackResourceDriftsResponseBodyResourceDriftsPropertyDifferences& setPropertyPath(string propertyPath) { DARABONBA_PTR_SET_VALUE(propertyPath_, propertyPath) };


  protected:
    // The actual value of the resource property.
    std::shared_ptr<string> actualValue_ = nullptr;
    // The drift type of the resource property. Valid values:
    // 
    // *   ADD: The value is added to a resource property whose data type is Array or List.
    // *   REMOVE: The property is deleted from the current resource configuration.
    // *   NOT_EQUAL: The current property value differs from the expected value that is defined in the stack template.
    std::shared_ptr<string> differenceType_ = nullptr;
    // The expected value of the resource property that is defined in the template.
    std::shared_ptr<string> expectedValue_ = nullptr;
    // The path of the resource property.
    std::shared_ptr<string> propertyPath_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
