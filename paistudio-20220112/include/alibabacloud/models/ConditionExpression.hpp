// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONDITIONEXPRESSION_HPP_
#define ALIBABACLOUD_MODELS_CONDITIONEXPRESSION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class ConditionExpression : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConditionExpression& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Operator, operator_);
      DARABONBA_PTR_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, ConditionExpression& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
      DARABONBA_PTR_FROM_JSON(Values, values_);
    };
    ConditionExpression() = default ;
    ConditionExpression(const ConditionExpression &) = default ;
    ConditionExpression(ConditionExpression &&) = default ;
    ConditionExpression(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConditionExpression() = default ;
    ConditionExpression& operator=(const ConditionExpression &) = default ;
    ConditionExpression& operator=(ConditionExpression &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->key_ == nullptr
        && this->operator_ == nullptr && this->values_ == nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline ConditionExpression& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline ConditionExpression& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const vector<string> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
    inline vector<string> getValues() { DARABONBA_PTR_GET(values_, vector<string>) };
    inline ConditionExpression& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline ConditionExpression& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    // This parameter is required.
    shared_ptr<string> key_ {};
    // This parameter is required.
    shared_ptr<string> operator_ {};
    // This parameter is required.
    shared_ptr<vector<string>> values_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
