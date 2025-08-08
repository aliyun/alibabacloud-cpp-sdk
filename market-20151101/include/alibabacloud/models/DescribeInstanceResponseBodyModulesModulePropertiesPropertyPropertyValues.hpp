// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCERESPONSEBODYMODULESMODULEPROPERTIESPROPERTYPROPERTYVALUES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCERESPONSEBODYMODULESMODULEPROPERTIESPROPERTYPROPERTYVALUES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInstanceResponseBodyModulesModulePropertiesPropertyPropertyValuesPropertyValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class DescribeInstanceResponseBodyModulesModulePropertiesPropertyPropertyValues : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceResponseBodyModulesModulePropertiesPropertyPropertyValues& obj) { 
      DARABONBA_PTR_TO_JSON(PropertyValue, propertyValue_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceResponseBodyModulesModulePropertiesPropertyPropertyValues& obj) { 
      DARABONBA_PTR_FROM_JSON(PropertyValue, propertyValue_);
    };
    DescribeInstanceResponseBodyModulesModulePropertiesPropertyPropertyValues() = default ;
    DescribeInstanceResponseBodyModulesModulePropertiesPropertyPropertyValues(const DescribeInstanceResponseBodyModulesModulePropertiesPropertyPropertyValues &) = default ;
    DescribeInstanceResponseBodyModulesModulePropertiesPropertyPropertyValues(DescribeInstanceResponseBodyModulesModulePropertiesPropertyPropertyValues &&) = default ;
    DescribeInstanceResponseBodyModulesModulePropertiesPropertyPropertyValues(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceResponseBodyModulesModulePropertiesPropertyPropertyValues() = default ;
    DescribeInstanceResponseBodyModulesModulePropertiesPropertyPropertyValues& operator=(const DescribeInstanceResponseBodyModulesModulePropertiesPropertyPropertyValues &) = default ;
    DescribeInstanceResponseBodyModulesModulePropertiesPropertyPropertyValues& operator=(DescribeInstanceResponseBodyModulesModulePropertiesPropertyPropertyValues &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->propertyValue_ != nullptr; };
    // propertyValue Field Functions 
    bool hasPropertyValue() const { return this->propertyValue_ != nullptr;};
    void deletePropertyValue() { this->propertyValue_ = nullptr;};
    inline const vector<Models::DescribeInstanceResponseBodyModulesModulePropertiesPropertyPropertyValuesPropertyValue> & propertyValue() const { DARABONBA_PTR_GET_CONST(propertyValue_, vector<Models::DescribeInstanceResponseBodyModulesModulePropertiesPropertyPropertyValuesPropertyValue>) };
    inline vector<Models::DescribeInstanceResponseBodyModulesModulePropertiesPropertyPropertyValuesPropertyValue> propertyValue() { DARABONBA_PTR_GET(propertyValue_, vector<Models::DescribeInstanceResponseBodyModulesModulePropertiesPropertyPropertyValuesPropertyValue>) };
    inline DescribeInstanceResponseBodyModulesModulePropertiesPropertyPropertyValues& setPropertyValue(const vector<Models::DescribeInstanceResponseBodyModulesModulePropertiesPropertyPropertyValuesPropertyValue> & propertyValue) { DARABONBA_PTR_SET_VALUE(propertyValue_, propertyValue) };
    inline DescribeInstanceResponseBodyModulesModulePropertiesPropertyPropertyValues& setPropertyValue(vector<Models::DescribeInstanceResponseBodyModulesModulePropertiesPropertyPropertyValuesPropertyValue> && propertyValue) { DARABONBA_PTR_SET_RVALUE(propertyValue_, propertyValue) };


  protected:
    std::shared_ptr<vector<Models::DescribeInstanceResponseBodyModulesModulePropertiesPropertyPropertyValuesPropertyValue>> propertyValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
