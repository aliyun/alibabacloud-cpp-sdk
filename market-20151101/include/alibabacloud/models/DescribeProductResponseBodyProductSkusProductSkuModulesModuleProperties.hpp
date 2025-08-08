// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRODUCTRESPONSEBODYPRODUCTSKUSPRODUCTSKUMODULESMODULEPROPERTIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRODUCTRESPONSEBODYPRODUCTSKUSPRODUCTSKUMODULESMODULEPROPERTIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesProperty.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class DescribeProductResponseBodyProductSkusProductSkuModulesModuleProperties : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProductResponseBodyProductSkusProductSkuModulesModuleProperties& obj) { 
      DARABONBA_PTR_TO_JSON(Property, property_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProductResponseBodyProductSkusProductSkuModulesModuleProperties& obj) { 
      DARABONBA_PTR_FROM_JSON(Property, property_);
    };
    DescribeProductResponseBodyProductSkusProductSkuModulesModuleProperties() = default ;
    DescribeProductResponseBodyProductSkusProductSkuModulesModuleProperties(const DescribeProductResponseBodyProductSkusProductSkuModulesModuleProperties &) = default ;
    DescribeProductResponseBodyProductSkusProductSkuModulesModuleProperties(DescribeProductResponseBodyProductSkusProductSkuModulesModuleProperties &&) = default ;
    DescribeProductResponseBodyProductSkusProductSkuModulesModuleProperties(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProductResponseBodyProductSkusProductSkuModulesModuleProperties() = default ;
    DescribeProductResponseBodyProductSkusProductSkuModulesModuleProperties& operator=(const DescribeProductResponseBodyProductSkusProductSkuModulesModuleProperties &) = default ;
    DescribeProductResponseBodyProductSkusProductSkuModulesModuleProperties& operator=(DescribeProductResponseBodyProductSkusProductSkuModulesModuleProperties &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->property_ != nullptr; };
    // property Field Functions 
    bool hasProperty() const { return this->property_ != nullptr;};
    void deleteProperty() { this->property_ = nullptr;};
    inline const vector<Models::DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesProperty> & property() const { DARABONBA_PTR_GET_CONST(property_, vector<Models::DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesProperty>) };
    inline vector<Models::DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesProperty> property() { DARABONBA_PTR_GET(property_, vector<Models::DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesProperty>) };
    inline DescribeProductResponseBodyProductSkusProductSkuModulesModuleProperties& setProperty(const vector<Models::DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesProperty> & property) { DARABONBA_PTR_SET_VALUE(property_, property) };
    inline DescribeProductResponseBodyProductSkusProductSkuModulesModuleProperties& setProperty(vector<Models::DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesProperty> && property) { DARABONBA_PTR_SET_RVALUE(property_, property) };


  protected:
    std::shared_ptr<vector<Models::DescribeProductResponseBodyProductSkusProductSkuModulesModulePropertiesProperty>> property_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
