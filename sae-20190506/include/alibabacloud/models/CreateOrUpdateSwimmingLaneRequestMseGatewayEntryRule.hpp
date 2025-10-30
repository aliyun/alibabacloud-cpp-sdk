// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORUPDATESWIMMINGLANEREQUESTMSEGATEWAYENTRYRULE_HPP_
#define ALIBABACLOUD_MODELS_CREATEORUPDATESWIMMINGLANEREQUESTMSEGATEWAYENTRYRULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateOrUpdateSwimmingLaneRequestMseGatewayEntryRuleConditions.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class CreateOrUpdateSwimmingLaneRequestMseGatewayEntryRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrUpdateSwimmingLaneRequestMseGatewayEntryRule& obj) { 
      DARABONBA_PTR_TO_JSON(ConditionJoiner, conditionJoiner_);
      DARABONBA_PTR_TO_JSON(Conditions, conditions_);
      DARABONBA_PTR_TO_JSON(IndependentPercentageEnable, independentPercentageEnable_);
      DARABONBA_PTR_TO_JSON(Percentage, percentage_);
      DARABONBA_PTR_TO_JSON(PercentageByRoute, percentageByRoute_);
      DARABONBA_PTR_TO_JSON(RouteIds, routeIds_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOrUpdateSwimmingLaneRequestMseGatewayEntryRule& obj) { 
      DARABONBA_PTR_FROM_JSON(ConditionJoiner, conditionJoiner_);
      DARABONBA_PTR_FROM_JSON(Conditions, conditions_);
      DARABONBA_PTR_FROM_JSON(IndependentPercentageEnable, independentPercentageEnable_);
      DARABONBA_PTR_FROM_JSON(Percentage, percentage_);
      DARABONBA_PTR_FROM_JSON(PercentageByRoute, percentageByRoute_);
      DARABONBA_PTR_FROM_JSON(RouteIds, routeIds_);
    };
    CreateOrUpdateSwimmingLaneRequestMseGatewayEntryRule() = default ;
    CreateOrUpdateSwimmingLaneRequestMseGatewayEntryRule(const CreateOrUpdateSwimmingLaneRequestMseGatewayEntryRule &) = default ;
    CreateOrUpdateSwimmingLaneRequestMseGatewayEntryRule(CreateOrUpdateSwimmingLaneRequestMseGatewayEntryRule &&) = default ;
    CreateOrUpdateSwimmingLaneRequestMseGatewayEntryRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOrUpdateSwimmingLaneRequestMseGatewayEntryRule() = default ;
    CreateOrUpdateSwimmingLaneRequestMseGatewayEntryRule& operator=(const CreateOrUpdateSwimmingLaneRequestMseGatewayEntryRule &) = default ;
    CreateOrUpdateSwimmingLaneRequestMseGatewayEntryRule& operator=(CreateOrUpdateSwimmingLaneRequestMseGatewayEntryRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->conditionJoiner_ == nullptr
        && return this->conditions_ == nullptr && return this->independentPercentageEnable_ == nullptr && return this->percentage_ == nullptr && return this->percentageByRoute_ == nullptr && return this->routeIds_ == nullptr; };
    // conditionJoiner Field Functions 
    bool hasConditionJoiner() const { return this->conditionJoiner_ != nullptr;};
    void deleteConditionJoiner() { this->conditionJoiner_ = nullptr;};
    inline string conditionJoiner() const { DARABONBA_PTR_GET_DEFAULT(conditionJoiner_, "") };
    inline CreateOrUpdateSwimmingLaneRequestMseGatewayEntryRule& setConditionJoiner(string conditionJoiner) { DARABONBA_PTR_SET_VALUE(conditionJoiner_, conditionJoiner) };


    // conditions Field Functions 
    bool hasConditions() const { return this->conditions_ != nullptr;};
    void deleteConditions() { this->conditions_ = nullptr;};
    inline const vector<Models::CreateOrUpdateSwimmingLaneRequestMseGatewayEntryRuleConditions> & conditions() const { DARABONBA_PTR_GET_CONST(conditions_, vector<Models::CreateOrUpdateSwimmingLaneRequestMseGatewayEntryRuleConditions>) };
    inline vector<Models::CreateOrUpdateSwimmingLaneRequestMseGatewayEntryRuleConditions> conditions() { DARABONBA_PTR_GET(conditions_, vector<Models::CreateOrUpdateSwimmingLaneRequestMseGatewayEntryRuleConditions>) };
    inline CreateOrUpdateSwimmingLaneRequestMseGatewayEntryRule& setConditions(const vector<Models::CreateOrUpdateSwimmingLaneRequestMseGatewayEntryRuleConditions> & conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };
    inline CreateOrUpdateSwimmingLaneRequestMseGatewayEntryRule& setConditions(vector<Models::CreateOrUpdateSwimmingLaneRequestMseGatewayEntryRuleConditions> && conditions) { DARABONBA_PTR_SET_RVALUE(conditions_, conditions) };


    // independentPercentageEnable Field Functions 
    bool hasIndependentPercentageEnable() const { return this->independentPercentageEnable_ != nullptr;};
    void deleteIndependentPercentageEnable() { this->independentPercentageEnable_ = nullptr;};
    inline bool independentPercentageEnable() const { DARABONBA_PTR_GET_DEFAULT(independentPercentageEnable_, false) };
    inline CreateOrUpdateSwimmingLaneRequestMseGatewayEntryRule& setIndependentPercentageEnable(bool independentPercentageEnable) { DARABONBA_PTR_SET_VALUE(independentPercentageEnable_, independentPercentageEnable) };


    // percentage Field Functions 
    bool hasPercentage() const { return this->percentage_ != nullptr;};
    void deletePercentage() { this->percentage_ = nullptr;};
    inline int32_t percentage() const { DARABONBA_PTR_GET_DEFAULT(percentage_, 0) };
    inline CreateOrUpdateSwimmingLaneRequestMseGatewayEntryRule& setPercentage(int32_t percentage) { DARABONBA_PTR_SET_VALUE(percentage_, percentage) };


    // percentageByRoute Field Functions 
    bool hasPercentageByRoute() const { return this->percentageByRoute_ != nullptr;};
    void deletePercentageByRoute() { this->percentageByRoute_ = nullptr;};
    inline const map<string, int32_t> & percentageByRoute() const { DARABONBA_PTR_GET_CONST(percentageByRoute_, map<string, int32_t>) };
    inline map<string, int32_t> percentageByRoute() { DARABONBA_PTR_GET(percentageByRoute_, map<string, int32_t>) };
    inline CreateOrUpdateSwimmingLaneRequestMseGatewayEntryRule& setPercentageByRoute(const map<string, int32_t> & percentageByRoute) { DARABONBA_PTR_SET_VALUE(percentageByRoute_, percentageByRoute) };
    inline CreateOrUpdateSwimmingLaneRequestMseGatewayEntryRule& setPercentageByRoute(map<string, int32_t> && percentageByRoute) { DARABONBA_PTR_SET_RVALUE(percentageByRoute_, percentageByRoute) };


    // routeIds Field Functions 
    bool hasRouteIds() const { return this->routeIds_ != nullptr;};
    void deleteRouteIds() { this->routeIds_ = nullptr;};
    inline const vector<int64_t> & routeIds() const { DARABONBA_PTR_GET_CONST(routeIds_, vector<int64_t>) };
    inline vector<int64_t> routeIds() { DARABONBA_PTR_GET(routeIds_, vector<int64_t>) };
    inline CreateOrUpdateSwimmingLaneRequestMseGatewayEntryRule& setRouteIds(const vector<int64_t> & routeIds) { DARABONBA_PTR_SET_VALUE(routeIds_, routeIds) };
    inline CreateOrUpdateSwimmingLaneRequestMseGatewayEntryRule& setRouteIds(vector<int64_t> && routeIds) { DARABONBA_PTR_SET_RVALUE(routeIds_, routeIds) };


  protected:
    // Logical connectors between conditions:
    // 
    // *   AND: All conditions are met at the same time.
    // *   OR: Any condition is met.
    std::shared_ptr<string> conditionJoiner_ = nullptr;
    // Routing Condition
    std::shared_ptr<vector<Models::CreateOrUpdateSwimmingLaneRequestMseGatewayEntryRuleConditions>> conditions_ = nullptr;
    // Whether to enable proportional grayscale.
    // 
    // *   true: Enabled. After you enable this parameter, you must configure the PercentageByPath.
    // *   false: Disabled.
    std::shared_ptr<bool> independentPercentageEnable_ = nullptr;
    // The percentage of traffic replication. Valid values: 0 to 100.
    std::shared_ptr<int32_t> percentage_ = nullptr;
    // The traffic configuration.
    std::shared_ptr<map<string, int32_t>> percentageByRoute_ = nullptr;
    // The ID of the route.
    std::shared_ptr<vector<int64_t>> routeIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
