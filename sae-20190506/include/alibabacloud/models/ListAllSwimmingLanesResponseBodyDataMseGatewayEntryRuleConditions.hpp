// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALLSWIMMINGLANESRESPONSEBODYDATAMSEGATEWAYENTRYRULECONDITIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTALLSWIMMINGLANESRESPONSEBODYDATAMSEGATEWAYENTRYRULECONDITIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListAllSwimmingLanesResponseBodyDataMseGatewayEntryRuleConditions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAllSwimmingLanesResponseBodyDataMseGatewayEntryRuleConditions& obj) { 
      DARABONBA_PTR_TO_JSON(Condition, condition_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListAllSwimmingLanesResponseBodyDataMseGatewayEntryRuleConditions& obj) { 
      DARABONBA_PTR_FROM_JSON(Condition, condition_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ListAllSwimmingLanesResponseBodyDataMseGatewayEntryRuleConditions() = default ;
    ListAllSwimmingLanesResponseBodyDataMseGatewayEntryRuleConditions(const ListAllSwimmingLanesResponseBodyDataMseGatewayEntryRuleConditions &) = default ;
    ListAllSwimmingLanesResponseBodyDataMseGatewayEntryRuleConditions(ListAllSwimmingLanesResponseBodyDataMseGatewayEntryRuleConditions &&) = default ;
    ListAllSwimmingLanesResponseBodyDataMseGatewayEntryRuleConditions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAllSwimmingLanesResponseBodyDataMseGatewayEntryRuleConditions() = default ;
    ListAllSwimmingLanesResponseBodyDataMseGatewayEntryRuleConditions& operator=(const ListAllSwimmingLanesResponseBodyDataMseGatewayEntryRuleConditions &) = default ;
    ListAllSwimmingLanesResponseBodyDataMseGatewayEntryRuleConditions& operator=(ListAllSwimmingLanesResponseBodyDataMseGatewayEntryRuleConditions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->condition_ != nullptr
        && this->name_ != nullptr && this->type_ != nullptr && this->value_ != nullptr; };
    // condition Field Functions 
    bool hasCondition() const { return this->condition_ != nullptr;};
    void deleteCondition() { this->condition_ = nullptr;};
    inline string condition() const { DARABONBA_PTR_GET_DEFAULT(condition_, "") };
    inline ListAllSwimmingLanesResponseBodyDataMseGatewayEntryRuleConditions& setCondition(string condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListAllSwimmingLanesResponseBodyDataMseGatewayEntryRuleConditions& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListAllSwimmingLanesResponseBodyDataMseGatewayEntryRuleConditions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ListAllSwimmingLanesResponseBodyDataMseGatewayEntryRuleConditions& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> condition_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
