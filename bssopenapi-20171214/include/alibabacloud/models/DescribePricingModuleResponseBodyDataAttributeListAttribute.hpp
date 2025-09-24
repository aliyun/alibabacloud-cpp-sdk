// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRICINGMODULERESPONSEBODYDATAATTRIBUTELISTATTRIBUTE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRICINGMODULERESPONSEBODYDATAATTRIBUTELISTATTRIBUTE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribePricingModuleResponseBodyDataAttributeListAttributeValues.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class DescribePricingModuleResponseBodyDataAttributeListAttribute : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePricingModuleResponseBodyDataAttributeListAttribute& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Unit, unit_);
      DARABONBA_PTR_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePricingModuleResponseBodyDataAttributeListAttribute& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Unit, unit_);
      DARABONBA_PTR_FROM_JSON(Values, values_);
    };
    DescribePricingModuleResponseBodyDataAttributeListAttribute() = default ;
    DescribePricingModuleResponseBodyDataAttributeListAttribute(const DescribePricingModuleResponseBodyDataAttributeListAttribute &) = default ;
    DescribePricingModuleResponseBodyDataAttributeListAttribute(DescribePricingModuleResponseBodyDataAttributeListAttribute &&) = default ;
    DescribePricingModuleResponseBodyDataAttributeListAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePricingModuleResponseBodyDataAttributeListAttribute() = default ;
    DescribePricingModuleResponseBodyDataAttributeListAttribute& operator=(const DescribePricingModuleResponseBodyDataAttributeListAttribute &) = default ;
    DescribePricingModuleResponseBodyDataAttributeListAttribute& operator=(DescribePricingModuleResponseBodyDataAttributeListAttribute &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->name_ != nullptr && this->unit_ != nullptr && this->values_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribePricingModuleResponseBodyDataAttributeListAttribute& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribePricingModuleResponseBodyDataAttributeListAttribute& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // unit Field Functions 
    bool hasUnit() const { return this->unit_ != nullptr;};
    void deleteUnit() { this->unit_ = nullptr;};
    inline string unit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
    inline DescribePricingModuleResponseBodyDataAttributeListAttribute& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const Models::DescribePricingModuleResponseBodyDataAttributeListAttributeValues & values() const { DARABONBA_PTR_GET_CONST(values_, Models::DescribePricingModuleResponseBodyDataAttributeListAttributeValues) };
    inline Models::DescribePricingModuleResponseBodyDataAttributeListAttributeValues values() { DARABONBA_PTR_GET(values_, Models::DescribePricingModuleResponseBodyDataAttributeListAttributeValues) };
    inline DescribePricingModuleResponseBodyDataAttributeListAttribute& setValues(const Models::DescribePricingModuleResponseBodyDataAttributeListAttributeValues & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline DescribePricingModuleResponseBodyDataAttributeListAttribute& setValues(Models::DescribePricingModuleResponseBodyDataAttributeListAttributeValues && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    // The code of the attribute.
    std::shared_ptr<string> code_ = nullptr;
    // The name of the attribute.
    std::shared_ptr<string> name_ = nullptr;
    // The unit of the attribute.
    std::shared_ptr<string> unit_ = nullptr;
    // The attribute values.
    std::shared_ptr<Models::DescribePricingModuleResponseBodyDataAttributeListAttributeValues> values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
