// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESWIMMINGLANERESPONSEBODYDATAMSEGATEWAYENTRYRULECONDITIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESWIMMINGLANERESPONSEBODYDATAMSEGATEWAYENTRYRULECONDITIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRuleConditions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRuleConditions& obj) { 
      DARABONBA_PTR_TO_JSON(Condition, condition_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRuleConditions& obj) { 
      DARABONBA_PTR_FROM_JSON(Condition, condition_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRuleConditions() = default ;
    DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRuleConditions(const DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRuleConditions &) = default ;
    DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRuleConditions(DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRuleConditions &&) = default ;
    DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRuleConditions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRuleConditions() = default ;
    DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRuleConditions& operator=(const DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRuleConditions &) = default ;
    DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRuleConditions& operator=(DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRuleConditions &&) = default ;
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
    inline DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRuleConditions& setCondition(string condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRuleConditions& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRuleConditions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRuleConditions& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The matching rule.
    std::shared_ptr<string> condition_ = nullptr;
    // The parameter name.
    std::shared_ptr<string> name_ = nullptr;
    // The type of the parameter.
    std::shared_ptr<string> type_ = nullptr;
    // The match value of the condition.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
