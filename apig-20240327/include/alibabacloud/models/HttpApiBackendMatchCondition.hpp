// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HTTPAPIBACKENDMATCHCONDITION_HPP_
#define ALIBABACLOUD_MODELS_HTTPAPIBACKENDMATCHCONDITION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class HttpApiBackendMatchCondition : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HttpApiBackendMatchCondition& obj) { 
      DARABONBA_PTR_TO_JSON(key, key_);
      DARABONBA_PTR_TO_JSON(operator, operator_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, HttpApiBackendMatchCondition& obj) { 
      DARABONBA_PTR_FROM_JSON(key, key_);
      DARABONBA_PTR_FROM_JSON(operator, operator_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    HttpApiBackendMatchCondition() = default ;
    HttpApiBackendMatchCondition(const HttpApiBackendMatchCondition &) = default ;
    HttpApiBackendMatchCondition(HttpApiBackendMatchCondition &&) = default ;
    HttpApiBackendMatchCondition(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HttpApiBackendMatchCondition() = default ;
    HttpApiBackendMatchCondition& operator=(const HttpApiBackendMatchCondition &) = default ;
    HttpApiBackendMatchCondition& operator=(HttpApiBackendMatchCondition &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->key_ == nullptr
        && this->operator_ == nullptr && this->type_ == nullptr && this->value_ == nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline HttpApiBackendMatchCondition& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline HttpApiBackendMatchCondition& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline HttpApiBackendMatchCondition& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline HttpApiBackendMatchCondition& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The key of the matching condition.
    shared_ptr<string> key_ {};
    // The operator. Exact match, prefix match, and regular expressions are supported.
    // 
    // Valid values:
    // 
    // *   equal
    // *   regex
    // *   prefix
    shared_ptr<string> operator_ {};
    // The match type. Query and Header parameters can be matched.
    shared_ptr<string> type_ {};
    // The value of the matching condition.
    shared_ptr<string> value_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
