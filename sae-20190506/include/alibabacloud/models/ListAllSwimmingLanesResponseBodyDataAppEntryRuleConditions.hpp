// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALLSWIMMINGLANESRESPONSEBODYDATAAPPENTRYRULECONDITIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTALLSWIMMINGLANESRESPONSEBODYDATAAPPENTRYRULECONDITIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListAllSwimmingLanesResponseBodyDataAppEntryRuleConditions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAllSwimmingLanesResponseBodyDataAppEntryRuleConditions& obj) { 
      DARABONBA_PTR_TO_JSON(Condition, condition_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Value, value_);
      DARABONBA_PTR_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, ListAllSwimmingLanesResponseBodyDataAppEntryRuleConditions& obj) { 
      DARABONBA_PTR_FROM_JSON(Condition, condition_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
      DARABONBA_PTR_FROM_JSON(Values, values_);
    };
    ListAllSwimmingLanesResponseBodyDataAppEntryRuleConditions() = default ;
    ListAllSwimmingLanesResponseBodyDataAppEntryRuleConditions(const ListAllSwimmingLanesResponseBodyDataAppEntryRuleConditions &) = default ;
    ListAllSwimmingLanesResponseBodyDataAppEntryRuleConditions(ListAllSwimmingLanesResponseBodyDataAppEntryRuleConditions &&) = default ;
    ListAllSwimmingLanesResponseBodyDataAppEntryRuleConditions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAllSwimmingLanesResponseBodyDataAppEntryRuleConditions() = default ;
    ListAllSwimmingLanesResponseBodyDataAppEntryRuleConditions& operator=(const ListAllSwimmingLanesResponseBodyDataAppEntryRuleConditions &) = default ;
    ListAllSwimmingLanesResponseBodyDataAppEntryRuleConditions& operator=(ListAllSwimmingLanesResponseBodyDataAppEntryRuleConditions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->condition_ == nullptr
        && return this->name_ == nullptr && return this->type_ == nullptr && return this->value_ == nullptr && return this->values_ == nullptr; };
    // condition Field Functions 
    bool hasCondition() const { return this->condition_ != nullptr;};
    void deleteCondition() { this->condition_ = nullptr;};
    inline string condition() const { DARABONBA_PTR_GET_DEFAULT(condition_, "") };
    inline ListAllSwimmingLanesResponseBodyDataAppEntryRuleConditions& setCondition(string condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListAllSwimmingLanesResponseBodyDataAppEntryRuleConditions& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListAllSwimmingLanesResponseBodyDataAppEntryRuleConditions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ListAllSwimmingLanesResponseBodyDataAppEntryRuleConditions& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const vector<string> & values() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
    inline vector<string> values() { DARABONBA_PTR_GET(values_, vector<string>) };
    inline ListAllSwimmingLanesResponseBodyDataAppEntryRuleConditions& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline ListAllSwimmingLanesResponseBodyDataAppEntryRuleConditions& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    std::shared_ptr<string> condition_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
    std::shared_ptr<vector<string>> values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
