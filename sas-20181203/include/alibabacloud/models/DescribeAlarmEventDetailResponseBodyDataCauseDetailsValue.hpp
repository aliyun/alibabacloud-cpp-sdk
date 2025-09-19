// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALARMEVENTDETAILRESPONSEBODYDATACAUSEDETAILSVALUE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALARMEVENTDETAILRESPONSEBODYDATACAUSEDETAILSVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeAlarmEventDetailResponseBodyDataCauseDetailsValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAlarmEventDetailResponseBodyDataCauseDetailsValue& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAlarmEventDetailResponseBodyDataCauseDetailsValue& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeAlarmEventDetailResponseBodyDataCauseDetailsValue() = default ;
    DescribeAlarmEventDetailResponseBodyDataCauseDetailsValue(const DescribeAlarmEventDetailResponseBodyDataCauseDetailsValue &) = default ;
    DescribeAlarmEventDetailResponseBodyDataCauseDetailsValue(DescribeAlarmEventDetailResponseBodyDataCauseDetailsValue &&) = default ;
    DescribeAlarmEventDetailResponseBodyDataCauseDetailsValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAlarmEventDetailResponseBodyDataCauseDetailsValue() = default ;
    DescribeAlarmEventDetailResponseBodyDataCauseDetailsValue& operator=(const DescribeAlarmEventDetailResponseBodyDataCauseDetailsValue &) = default ;
    DescribeAlarmEventDetailResponseBodyDataCauseDetailsValue& operator=(DescribeAlarmEventDetailResponseBodyDataCauseDetailsValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->type_ != nullptr && this->value_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeAlarmEventDetailResponseBodyDataCauseDetailsValue& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeAlarmEventDetailResponseBodyDataCauseDetailsValue& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeAlarmEventDetailResponseBodyDataCauseDetailsValue& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The name of the field that displays the tracing information.
    std::shared_ptr<string> name_ = nullptr;
    // The type of the field that displays the tracing information. Valid values:
    // 
    // *   **text**
    // *   **html**
    std::shared_ptr<string> type_ = nullptr;
    // The value of the field that displays the tracing information.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
