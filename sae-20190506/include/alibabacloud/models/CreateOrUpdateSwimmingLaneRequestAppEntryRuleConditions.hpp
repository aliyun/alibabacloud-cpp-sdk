// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORUPDATESWIMMINGLANEREQUESTAPPENTRYRULECONDITIONS_HPP_
#define ALIBABACLOUD_MODELS_CREATEORUPDATESWIMMINGLANEREQUESTAPPENTRYRULECONDITIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class CreateOrUpdateSwimmingLaneRequestAppEntryRuleConditions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrUpdateSwimmingLaneRequestAppEntryRuleConditions& obj) { 
      DARABONBA_PTR_TO_JSON(Condition, condition_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOrUpdateSwimmingLaneRequestAppEntryRuleConditions& obj) { 
      DARABONBA_PTR_FROM_JSON(Condition, condition_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    CreateOrUpdateSwimmingLaneRequestAppEntryRuleConditions() = default ;
    CreateOrUpdateSwimmingLaneRequestAppEntryRuleConditions(const CreateOrUpdateSwimmingLaneRequestAppEntryRuleConditions &) = default ;
    CreateOrUpdateSwimmingLaneRequestAppEntryRuleConditions(CreateOrUpdateSwimmingLaneRequestAppEntryRuleConditions &&) = default ;
    CreateOrUpdateSwimmingLaneRequestAppEntryRuleConditions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOrUpdateSwimmingLaneRequestAppEntryRuleConditions() = default ;
    CreateOrUpdateSwimmingLaneRequestAppEntryRuleConditions& operator=(const CreateOrUpdateSwimmingLaneRequestAppEntryRuleConditions &) = default ;
    CreateOrUpdateSwimmingLaneRequestAppEntryRuleConditions& operator=(CreateOrUpdateSwimmingLaneRequestAppEntryRuleConditions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->condition_ == nullptr
        && return this->name_ == nullptr && return this->type_ == nullptr && return this->value_ == nullptr; };
    // condition Field Functions 
    bool hasCondition() const { return this->condition_ != nullptr;};
    void deleteCondition() { this->condition_ = nullptr;};
    inline string condition() const { DARABONBA_PTR_GET_DEFAULT(condition_, "") };
    inline CreateOrUpdateSwimmingLaneRequestAppEntryRuleConditions& setCondition(string condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateOrUpdateSwimmingLaneRequestAppEntryRuleConditions& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateOrUpdateSwimmingLaneRequestAppEntryRuleConditions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline CreateOrUpdateSwimmingLaneRequestAppEntryRuleConditions& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // Matching Rule:
    // 
    // *   The exact match. The condition is met if the traffic value and the condition value are exactly the same.
    // *   The exact match. The condition is met if the traffic value and the condition value are exactly the same.
    // *   The inclusive match. The condition is met if the traffic value is included in the specified list.
    // *   The percentage match. Principle: The condition is met if \\"hash(get(`key`)) % 100 < value\\".
    // *   Regular match: a regular expression match. The condition is met when the match is based on regular expression rules.
    std::shared_ptr<string> condition_ = nullptr;
    // The parameter name.
    std::shared_ptr<string> name_ = nullptr;
    // The parameter type. Valid values:
    // 
    // *   header
    // *   param
    // *   Cookie: forwards requests based on cookies.
    std::shared_ptr<string> type_ = nullptr;
    // The match value of the condition.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
