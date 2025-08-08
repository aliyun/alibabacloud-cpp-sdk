// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRODUCTRESPONSEBODYPRODUCTSKUSPRODUCTSKUMODULESMODULEPROPERTIESPROPERTYPROPERTYVALUES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRODUCTRESPONSEBODYPRODUCTSKUSPRODUCTSKUMODULESMODULEPROPERTIESPROPERTYPROPERTYVALUES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesPropertyPropertyValuesPropertyValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesPropertyPropertyValues : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesPropertyPropertyValues& obj) { 
      DARABONBA_PTR_TO_JSON(PropertyValue, propertyValue_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesPropertyPropertyValues& obj) { 
      DARABONBA_PTR_FROM_JSON(PropertyValue, propertyValue_);
    };
    DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesPropertyPropertyValues() = default ;
    DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesPropertyPropertyValues(const DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesPropertyPropertyValues &) = default ;
    DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesPropertyPropertyValues(DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesPropertyPropertyValues &&) = default ;
    DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesPropertyPropertyValues(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesPropertyPropertyValues() = default ;
    DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesPropertyPropertyValues& operator=(const DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesPropertyPropertyValues &) = default ;
    DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesPropertyPropertyValues& operator=(DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesPropertyPropertyValues &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->propertyValue_ != nullptr; };
    // propertyValue Field Functions 
    bool hasPropertyValue() const { return this->propertyValue_ != nullptr;};
    void deletePropertyValue() { this->propertyValue_ = nullptr;};
    inline const vector<Models::DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesPropertyPropertyValuesPropertyValue> & propertyValue() const { DARABONBA_PTR_GET_CONST(propertyValue_, vector<Models::DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesPropertyPropertyValuesPropertyValue>) };
    inline vector<Models::DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesPropertyPropertyValuesPropertyValue> propertyValue() { DARABONBA_PTR_GET(propertyValue_, vector<Models::DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesPropertyPropertyValuesPropertyValue>) };
    inline DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesPropertyPropertyValues& setPropertyValue(const vector<Models::DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesPropertyPropertyValuesPropertyValue> & propertyValue) { DARABONBA_PTR_SET_VALUE(propertyValue_, propertyValue) };
    inline DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesPropertyPropertyValues& setPropertyValue(vector<Models::DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesPropertyPropertyValuesPropertyValue> && propertyValue) { DARABONBA_PTR_SET_RVALUE(propertyValue_, propertyValue) };


  protected:
    std::shared_ptr<vector<Models::DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesPropertyPropertyValuesPropertyValue>> propertyValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
