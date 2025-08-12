// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTLOGMONITORREQUESTVALUEFILTER_HPP_
#define ALIBABACLOUD_MODELS_PUTLOGMONITORREQUESTVALUEFILTER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class PutLogMonitorRequestValueFilter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutLogMonitorRequestValueFilter& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Operator, operator_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, PutLogMonitorRequestValueFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    PutLogMonitorRequestValueFilter() = default ;
    PutLogMonitorRequestValueFilter(const PutLogMonitorRequestValueFilter &) = default ;
    PutLogMonitorRequestValueFilter(PutLogMonitorRequestValueFilter &&) = default ;
    PutLogMonitorRequestValueFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutLogMonitorRequestValueFilter() = default ;
    PutLogMonitorRequestValueFilter& operator=(const PutLogMonitorRequestValueFilter &) = default ;
    PutLogMonitorRequestValueFilter& operator=(PutLogMonitorRequestValueFilter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->key_ != nullptr
        && this->operator_ != nullptr && this->value_ != nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline PutLogMonitorRequestValueFilter& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline PutLogMonitorRequestValueFilter& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline PutLogMonitorRequestValueFilter& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The name of the log field that is used for matching in the filter condition. Valid values of N: 1 to 10.
    std::shared_ptr<string> key_ = nullptr;
    // The method that is used to match the field value. Valid values of N: 1 to 10. Valid values:
    // 
    // *   `contain`: contains
    // *   `notContain`: does not contain
    // *   `>`: greater than
    // *   `<`: less than
    // *   `>=`: greater than or equal to
    // *   `<=`: less than or equal to
    std::shared_ptr<string> operator_ = nullptr;
    // The field value to be matched in the filter condition. Valid values of N: 1 to 10.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
