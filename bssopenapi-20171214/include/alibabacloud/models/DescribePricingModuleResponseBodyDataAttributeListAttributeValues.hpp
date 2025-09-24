// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRICINGMODULERESPONSEBODYDATAATTRIBUTELISTATTRIBUTEVALUES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRICINGMODULERESPONSEBODYDATAATTRIBUTELISTATTRIBUTEVALUES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePricingModuleResponseBodyDataAttributeListAttributeValuesAttributeValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class DescribePricingModuleResponseBodyDataAttributeListAttributeValues : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePricingModuleResponseBodyDataAttributeListAttributeValues& obj) { 
      DARABONBA_PTR_TO_JSON(AttributeValue, attributeValue_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePricingModuleResponseBodyDataAttributeListAttributeValues& obj) { 
      DARABONBA_PTR_FROM_JSON(AttributeValue, attributeValue_);
    };
    DescribePricingModuleResponseBodyDataAttributeListAttributeValues() = default ;
    DescribePricingModuleResponseBodyDataAttributeListAttributeValues(const DescribePricingModuleResponseBodyDataAttributeListAttributeValues &) = default ;
    DescribePricingModuleResponseBodyDataAttributeListAttributeValues(DescribePricingModuleResponseBodyDataAttributeListAttributeValues &&) = default ;
    DescribePricingModuleResponseBodyDataAttributeListAttributeValues(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePricingModuleResponseBodyDataAttributeListAttributeValues() = default ;
    DescribePricingModuleResponseBodyDataAttributeListAttributeValues& operator=(const DescribePricingModuleResponseBodyDataAttributeListAttributeValues &) = default ;
    DescribePricingModuleResponseBodyDataAttributeListAttributeValues& operator=(DescribePricingModuleResponseBodyDataAttributeListAttributeValues &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attributeValue_ != nullptr; };
    // attributeValue Field Functions 
    bool hasAttributeValue() const { return this->attributeValue_ != nullptr;};
    void deleteAttributeValue() { this->attributeValue_ = nullptr;};
    inline const vector<Models::DescribePricingModuleResponseBodyDataAttributeListAttributeValuesAttributeValue> & attributeValue() const { DARABONBA_PTR_GET_CONST(attributeValue_, vector<Models::DescribePricingModuleResponseBodyDataAttributeListAttributeValuesAttributeValue>) };
    inline vector<Models::DescribePricingModuleResponseBodyDataAttributeListAttributeValuesAttributeValue> attributeValue() { DARABONBA_PTR_GET(attributeValue_, vector<Models::DescribePricingModuleResponseBodyDataAttributeListAttributeValuesAttributeValue>) };
    inline DescribePricingModuleResponseBodyDataAttributeListAttributeValues& setAttributeValue(const vector<Models::DescribePricingModuleResponseBodyDataAttributeListAttributeValuesAttributeValue> & attributeValue) { DARABONBA_PTR_SET_VALUE(attributeValue_, attributeValue) };
    inline DescribePricingModuleResponseBodyDataAttributeListAttributeValues& setAttributeValue(vector<Models::DescribePricingModuleResponseBodyDataAttributeListAttributeValuesAttributeValue> && attributeValue) { DARABONBA_PTR_SET_RVALUE(attributeValue_, attributeValue) };


  protected:
    std::shared_ptr<vector<Models::DescribePricingModuleResponseBodyDataAttributeListAttributeValuesAttributeValue>> attributeValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
