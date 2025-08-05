// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRULERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETRULERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetRuleResponseBodyDataTargets.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class GetRuleResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRuleResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CreatedTimestamp, createdTimestamp_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EventBusName, eventBusName_);
      DARABONBA_PTR_TO_JSON(FilterPattern, filterPattern_);
      DARABONBA_PTR_TO_JSON(RuleARN, ruleARN_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Targets, targets_);
    };
    friend void from_json(const Darabonba::Json& j, GetRuleResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CreatedTimestamp, createdTimestamp_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EventBusName, eventBusName_);
      DARABONBA_PTR_FROM_JSON(FilterPattern, filterPattern_);
      DARABONBA_PTR_FROM_JSON(RuleARN, ruleARN_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Targets, targets_);
    };
    GetRuleResponseBodyData() = default ;
    GetRuleResponseBodyData(const GetRuleResponseBodyData &) = default ;
    GetRuleResponseBodyData(GetRuleResponseBodyData &&) = default ;
    GetRuleResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRuleResponseBodyData() = default ;
    GetRuleResponseBodyData& operator=(const GetRuleResponseBodyData &) = default ;
    GetRuleResponseBodyData& operator=(GetRuleResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createdTimestamp_ != nullptr
        && this->description_ != nullptr && this->eventBusName_ != nullptr && this->filterPattern_ != nullptr && this->ruleARN_ != nullptr && this->ruleName_ != nullptr
        && this->status_ != nullptr && this->targets_ != nullptr; };
    // createdTimestamp Field Functions 
    bool hasCreatedTimestamp() const { return this->createdTimestamp_ != nullptr;};
    void deleteCreatedTimestamp() { this->createdTimestamp_ = nullptr;};
    inline int64_t createdTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createdTimestamp_, 0L) };
    inline GetRuleResponseBodyData& setCreatedTimestamp(int64_t createdTimestamp) { DARABONBA_PTR_SET_VALUE(createdTimestamp_, createdTimestamp) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetRuleResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // eventBusName Field Functions 
    bool hasEventBusName() const { return this->eventBusName_ != nullptr;};
    void deleteEventBusName() { this->eventBusName_ = nullptr;};
    inline string eventBusName() const { DARABONBA_PTR_GET_DEFAULT(eventBusName_, "") };
    inline GetRuleResponseBodyData& setEventBusName(string eventBusName) { DARABONBA_PTR_SET_VALUE(eventBusName_, eventBusName) };


    // filterPattern Field Functions 
    bool hasFilterPattern() const { return this->filterPattern_ != nullptr;};
    void deleteFilterPattern() { this->filterPattern_ = nullptr;};
    inline string filterPattern() const { DARABONBA_PTR_GET_DEFAULT(filterPattern_, "") };
    inline GetRuleResponseBodyData& setFilterPattern(string filterPattern) { DARABONBA_PTR_SET_VALUE(filterPattern_, filterPattern) };


    // ruleARN Field Functions 
    bool hasRuleARN() const { return this->ruleARN_ != nullptr;};
    void deleteRuleARN() { this->ruleARN_ = nullptr;};
    inline string ruleARN() const { DARABONBA_PTR_GET_DEFAULT(ruleARN_, "") };
    inline GetRuleResponseBodyData& setRuleARN(string ruleARN) { DARABONBA_PTR_SET_VALUE(ruleARN_, ruleARN) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline GetRuleResponseBodyData& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetRuleResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // targets Field Functions 
    bool hasTargets() const { return this->targets_ != nullptr;};
    void deleteTargets() { this->targets_ = nullptr;};
    inline const vector<Models::GetRuleResponseBodyDataTargets> & targets() const { DARABONBA_PTR_GET_CONST(targets_, vector<Models::GetRuleResponseBodyDataTargets>) };
    inline vector<Models::GetRuleResponseBodyDataTargets> targets() { DARABONBA_PTR_GET(targets_, vector<Models::GetRuleResponseBodyDataTargets>) };
    inline GetRuleResponseBodyData& setTargets(const vector<Models::GetRuleResponseBodyDataTargets> & targets) { DARABONBA_PTR_SET_VALUE(targets_, targets) };
    inline GetRuleResponseBodyData& setTargets(vector<Models::GetRuleResponseBodyDataTargets> && targets) { DARABONBA_PTR_SET_RVALUE(targets_, targets) };


  protected:
    // The timestamp that indicates when the event rule was created.
    std::shared_ptr<int64_t> createdTimestamp_ = nullptr;
    // The description of the event rule.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the event bus.
    std::shared_ptr<string> eventBusName_ = nullptr;
    // The event pattern, in JSON format. Valid values: stringEqual and stringExpression. You can specify up to five expressions in the map data structure in each field.
    // 
    // You can specify up to five expressions in the map data structure in each field.
    std::shared_ptr<string> filterPattern_ = nullptr;
    // The Alibaba Cloud Resource Name (ARN) of the event rule.
    std::shared_ptr<string> ruleARN_ = nullptr;
    // The name of the event rule.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The status of the event rule. Valid values: ENABLE (default): The event rule is enabled. DISABLE: The event rule is disabled.
    std::shared_ptr<string> status_ = nullptr;
    // The event targets.
    std::shared_ptr<vector<Models::GetRuleResponseBodyDataTargets>> targets_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
