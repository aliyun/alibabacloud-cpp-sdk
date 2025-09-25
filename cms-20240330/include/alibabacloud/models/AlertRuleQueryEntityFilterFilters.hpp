// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALERTRULEQUERYENTITYFILTERFILTERS_HPP_
#define ALIBABACLOUD_MODELS_ALERTRULEQUERYENTITYFILTERFILTERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class AlertRuleQueryEntityFilterFilters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AlertRuleQueryEntityFilterFilters& obj) { 
      DARABONBA_PTR_TO_JSON(field, field_);
      DARABONBA_PTR_TO_JSON(operator, operator_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, AlertRuleQueryEntityFilterFilters& obj) { 
      DARABONBA_PTR_FROM_JSON(field, field_);
      DARABONBA_PTR_FROM_JSON(operator, operator_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    AlertRuleQueryEntityFilterFilters() = default ;
    AlertRuleQueryEntityFilterFilters(const AlertRuleQueryEntityFilterFilters &) = default ;
    AlertRuleQueryEntityFilterFilters(AlertRuleQueryEntityFilterFilters &&) = default ;
    AlertRuleQueryEntityFilterFilters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AlertRuleQueryEntityFilterFilters() = default ;
    AlertRuleQueryEntityFilterFilters& operator=(const AlertRuleQueryEntityFilterFilters &) = default ;
    AlertRuleQueryEntityFilterFilters& operator=(AlertRuleQueryEntityFilterFilters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->field_ != nullptr
        && this->operator_ != nullptr && this->value_ != nullptr; };
    // field Field Functions 
    bool hasField() const { return this->field_ != nullptr;};
    void deleteField() { this->field_ = nullptr;};
    inline string field() const { DARABONBA_PTR_GET_DEFAULT(field_, "") };
    inline AlertRuleQueryEntityFilterFilters& setField(string field) { DARABONBA_PTR_SET_VALUE(field_, field) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline AlertRuleQueryEntityFilterFilters& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline AlertRuleQueryEntityFilterFilters& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> field_ = nullptr;
    std::shared_ptr<string> operator_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
