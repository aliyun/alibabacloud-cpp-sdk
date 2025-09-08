// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTOMATERESPONSECONFIGFEATURERESPONSEBODYDATARIGHTVALUEENUMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTOMATERESPONSECONFIGFEATURERESPONSEBODYDATARIGHTVALUEENUMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeAutomateResponseConfigFeatureResponseBodyDataRightValueEnums : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAutomateResponseConfigFeatureResponseBodyDataRightValueEnums& obj) { 
      DARABONBA_PTR_TO_JSON(Value, value_);
      DARABONBA_PTR_TO_JSON(ValueMds, valueMds_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAutomateResponseConfigFeatureResponseBodyDataRightValueEnums& obj) { 
      DARABONBA_PTR_FROM_JSON(Value, value_);
      DARABONBA_PTR_FROM_JSON(ValueMds, valueMds_);
    };
    DescribeAutomateResponseConfigFeatureResponseBodyDataRightValueEnums() = default ;
    DescribeAutomateResponseConfigFeatureResponseBodyDataRightValueEnums(const DescribeAutomateResponseConfigFeatureResponseBodyDataRightValueEnums &) = default ;
    DescribeAutomateResponseConfigFeatureResponseBodyDataRightValueEnums(DescribeAutomateResponseConfigFeatureResponseBodyDataRightValueEnums &&) = default ;
    DescribeAutomateResponseConfigFeatureResponseBodyDataRightValueEnums(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAutomateResponseConfigFeatureResponseBodyDataRightValueEnums() = default ;
    DescribeAutomateResponseConfigFeatureResponseBodyDataRightValueEnums& operator=(const DescribeAutomateResponseConfigFeatureResponseBodyDataRightValueEnums &) = default ;
    DescribeAutomateResponseConfigFeatureResponseBodyDataRightValueEnums& operator=(DescribeAutomateResponseConfigFeatureResponseBodyDataRightValueEnums &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->value_ != nullptr
        && this->valueMds_ != nullptr; };
    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeAutomateResponseConfigFeatureResponseBodyDataRightValueEnums& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    // valueMds Field Functions 
    bool hasValueMds() const { return this->valueMds_ != nullptr;};
    void deleteValueMds() { this->valueMds_ = nullptr;};
    inline string valueMds() const { DARABONBA_PTR_GET_DEFAULT(valueMds_, "") };
    inline DescribeAutomateResponseConfigFeatureResponseBodyDataRightValueEnums& setValueMds(string valueMds) { DARABONBA_PTR_SET_VALUE(valueMds_, valueMds) };


  protected:
    // The enumerated value of the right operand.
    std::shared_ptr<string> value_ = nullptr;
    // The internal code of the enumerated value.
    std::shared_ptr<string> valueMds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
