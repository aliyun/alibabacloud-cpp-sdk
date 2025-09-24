// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRICINGMODULERESPONSEBODYDATAATTRIBUTELISTATTRIBUTEVALUESATTRIBUTEVALUE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRICINGMODULERESPONSEBODYDATAATTRIBUTELISTATTRIBUTEVALUESATTRIBUTEVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class DescribePricingModuleResponseBodyDataAttributeListAttributeValuesAttributeValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePricingModuleResponseBodyDataAttributeListAttributeValuesAttributeValue& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePricingModuleResponseBodyDataAttributeListAttributeValuesAttributeValue& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribePricingModuleResponseBodyDataAttributeListAttributeValuesAttributeValue() = default ;
    DescribePricingModuleResponseBodyDataAttributeListAttributeValuesAttributeValue(const DescribePricingModuleResponseBodyDataAttributeListAttributeValuesAttributeValue &) = default ;
    DescribePricingModuleResponseBodyDataAttributeListAttributeValuesAttributeValue(DescribePricingModuleResponseBodyDataAttributeListAttributeValuesAttributeValue &&) = default ;
    DescribePricingModuleResponseBodyDataAttributeListAttributeValuesAttributeValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePricingModuleResponseBodyDataAttributeListAttributeValuesAttributeValue() = default ;
    DescribePricingModuleResponseBodyDataAttributeListAttributeValuesAttributeValue& operator=(const DescribePricingModuleResponseBodyDataAttributeListAttributeValuesAttributeValue &) = default ;
    DescribePricingModuleResponseBodyDataAttributeListAttributeValuesAttributeValue& operator=(DescribePricingModuleResponseBodyDataAttributeListAttributeValuesAttributeValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->remark_ != nullptr && this->type_ != nullptr && this->value_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribePricingModuleResponseBodyDataAttributeListAttributeValuesAttributeValue& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline DescribePricingModuleResponseBodyDataAttributeListAttributeValuesAttributeValue& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribePricingModuleResponseBodyDataAttributeListAttributeValuesAttributeValue& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribePricingModuleResponseBodyDataAttributeListAttributeValuesAttributeValue& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The attribute value that corresponds to the module code.
    std::shared_ptr<string> name_ = nullptr;
    // The description of the module values.
    std::shared_ptr<string> remark_ = nullptr;
    // The type of the attribute value that corresponds to the module code. Valid values:
    // 
    // *   single_float: single value
    // *   range_float: range value
    std::shared_ptr<string> type_ = nullptr;
    // The attribute value that corresponds to the module code.
    // 
    // >  If the Type parameter is set to range_float, the valid values of this parameter range from 1024 to 1024000. A value of 1024 indicates that the step size is 1024.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
