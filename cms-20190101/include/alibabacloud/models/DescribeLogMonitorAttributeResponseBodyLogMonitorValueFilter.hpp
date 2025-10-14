// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOGMONITORATTRIBUTERESPONSEBODYLOGMONITORVALUEFILTER_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOGMONITORATTRIBUTERESPONSEBODYLOGMONITORVALUEFILTER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeLogMonitorAttributeResponseBodyLogMonitorValueFilter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLogMonitorAttributeResponseBodyLogMonitorValueFilter& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Operator, operator_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLogMonitorAttributeResponseBodyLogMonitorValueFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeLogMonitorAttributeResponseBodyLogMonitorValueFilter() = default ;
    DescribeLogMonitorAttributeResponseBodyLogMonitorValueFilter(const DescribeLogMonitorAttributeResponseBodyLogMonitorValueFilter &) = default ;
    DescribeLogMonitorAttributeResponseBodyLogMonitorValueFilter(DescribeLogMonitorAttributeResponseBodyLogMonitorValueFilter &&) = default ;
    DescribeLogMonitorAttributeResponseBodyLogMonitorValueFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLogMonitorAttributeResponseBodyLogMonitorValueFilter() = default ;
    DescribeLogMonitorAttributeResponseBodyLogMonitorValueFilter& operator=(const DescribeLogMonitorAttributeResponseBodyLogMonitorValueFilter &) = default ;
    DescribeLogMonitorAttributeResponseBodyLogMonitorValueFilter& operator=(DescribeLogMonitorAttributeResponseBodyLogMonitorValueFilter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->key_ == nullptr
        && return this->operator_ == nullptr && return this->value_ == nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DescribeLogMonitorAttributeResponseBodyLogMonitorValueFilter& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline DescribeLogMonitorAttributeResponseBodyLogMonitorValueFilter& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeLogMonitorAttributeResponseBodyLogMonitorValueFilter& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The name of the log field used for matching in the filter condition.
    std::shared_ptr<string> key_ = nullptr;
    // The method that is used to match the field value. Valid values:
    // 
    // *   `contain`: contains
    // *   `notContain`: does not contain
    // *   `>`: greater than
    // *   `<`: less than
    // *   `>=`: greater than or equal to
    // *   `<=`: less than or equal to
    std::shared_ptr<string> operator_ = nullptr;
    // The field value to be matched in the filter condition.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
