// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESWIMMINGLANERESPONSEBODYDATAMSEGATEWAYENTRYRULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESWIMMINGLANERESPONSEBODYDATAMSEGATEWAYENTRYRULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRuleConditions.hpp>
#include <map>
#include <alibabacloud/models/DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRuleRoutes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRule& obj) { 
      DARABONBA_PTR_TO_JSON(ConditionJoiner, conditionJoiner_);
      DARABONBA_PTR_TO_JSON(Conditions, conditions_);
      DARABONBA_PTR_TO_JSON(IndependentPercentageEnable, independentPercentageEnable_);
      DARABONBA_PTR_TO_JSON(Percentage, percentage_);
      DARABONBA_PTR_TO_JSON(PercentageByRoute, percentageByRoute_);
      DARABONBA_PTR_TO_JSON(RouteIds, routeIds_);
      DARABONBA_PTR_TO_JSON(Routes, routes_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRule& obj) { 
      DARABONBA_PTR_FROM_JSON(ConditionJoiner, conditionJoiner_);
      DARABONBA_PTR_FROM_JSON(Conditions, conditions_);
      DARABONBA_PTR_FROM_JSON(IndependentPercentageEnable, independentPercentageEnable_);
      DARABONBA_PTR_FROM_JSON(Percentage, percentage_);
      DARABONBA_PTR_FROM_JSON(PercentageByRoute, percentageByRoute_);
      DARABONBA_PTR_FROM_JSON(RouteIds, routeIds_);
      DARABONBA_PTR_FROM_JSON(Routes, routes_);
    };
    DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRule() = default ;
    DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRule(const DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRule &) = default ;
    DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRule(DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRule &&) = default ;
    DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRule() = default ;
    DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRule& operator=(const DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRule &) = default ;
    DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRule& operator=(DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->conditionJoiner_ == nullptr
        && return this->conditions_ == nullptr && return this->independentPercentageEnable_ == nullptr && return this->percentage_ == nullptr && return this->percentageByRoute_ == nullptr && return this->routeIds_ == nullptr
        && return this->routes_ == nullptr; };
    // conditionJoiner Field Functions 
    bool hasConditionJoiner() const { return this->conditionJoiner_ != nullptr;};
    void deleteConditionJoiner() { this->conditionJoiner_ = nullptr;};
    inline string conditionJoiner() const { DARABONBA_PTR_GET_DEFAULT(conditionJoiner_, "") };
    inline DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRule& setConditionJoiner(string conditionJoiner) { DARABONBA_PTR_SET_VALUE(conditionJoiner_, conditionJoiner) };


    // conditions Field Functions 
    bool hasConditions() const { return this->conditions_ != nullptr;};
    void deleteConditions() { this->conditions_ = nullptr;};
    inline const vector<Models::DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRuleConditions> & conditions() const { DARABONBA_PTR_GET_CONST(conditions_, vector<Models::DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRuleConditions>) };
    inline vector<Models::DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRuleConditions> conditions() { DARABONBA_PTR_GET(conditions_, vector<Models::DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRuleConditions>) };
    inline DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRule& setConditions(const vector<Models::DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRuleConditions> & conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };
    inline DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRule& setConditions(vector<Models::DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRuleConditions> && conditions) { DARABONBA_PTR_SET_RVALUE(conditions_, conditions) };


    // independentPercentageEnable Field Functions 
    bool hasIndependentPercentageEnable() const { return this->independentPercentageEnable_ != nullptr;};
    void deleteIndependentPercentageEnable() { this->independentPercentageEnable_ = nullptr;};
    inline bool independentPercentageEnable() const { DARABONBA_PTR_GET_DEFAULT(independentPercentageEnable_, false) };
    inline DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRule& setIndependentPercentageEnable(bool independentPercentageEnable) { DARABONBA_PTR_SET_VALUE(independentPercentageEnable_, independentPercentageEnable) };


    // percentage Field Functions 
    bool hasPercentage() const { return this->percentage_ != nullptr;};
    void deletePercentage() { this->percentage_ = nullptr;};
    inline int32_t percentage() const { DARABONBA_PTR_GET_DEFAULT(percentage_, 0) };
    inline DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRule& setPercentage(int32_t percentage) { DARABONBA_PTR_SET_VALUE(percentage_, percentage) };


    // percentageByRoute Field Functions 
    bool hasPercentageByRoute() const { return this->percentageByRoute_ != nullptr;};
    void deletePercentageByRoute() { this->percentageByRoute_ = nullptr;};
    inline const map<string, int32_t> & percentageByRoute() const { DARABONBA_PTR_GET_CONST(percentageByRoute_, map<string, int32_t>) };
    inline map<string, int32_t> percentageByRoute() { DARABONBA_PTR_GET(percentageByRoute_, map<string, int32_t>) };
    inline DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRule& setPercentageByRoute(const map<string, int32_t> & percentageByRoute) { DARABONBA_PTR_SET_VALUE(percentageByRoute_, percentageByRoute) };
    inline DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRule& setPercentageByRoute(map<string, int32_t> && percentageByRoute) { DARABONBA_PTR_SET_RVALUE(percentageByRoute_, percentageByRoute) };


    // routeIds Field Functions 
    bool hasRouteIds() const { return this->routeIds_ != nullptr;};
    void deleteRouteIds() { this->routeIds_ = nullptr;};
    inline const vector<int64_t> & routeIds() const { DARABONBA_PTR_GET_CONST(routeIds_, vector<int64_t>) };
    inline vector<int64_t> routeIds() { DARABONBA_PTR_GET(routeIds_, vector<int64_t>) };
    inline DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRule& setRouteIds(const vector<int64_t> & routeIds) { DARABONBA_PTR_SET_VALUE(routeIds_, routeIds) };
    inline DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRule& setRouteIds(vector<int64_t> && routeIds) { DARABONBA_PTR_SET_RVALUE(routeIds_, routeIds) };


    // routes Field Functions 
    bool hasRoutes() const { return this->routes_ != nullptr;};
    void deleteRoutes() { this->routes_ = nullptr;};
    inline const vector<Models::DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRuleRoutes> & routes() const { DARABONBA_PTR_GET_CONST(routes_, vector<Models::DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRuleRoutes>) };
    inline vector<Models::DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRuleRoutes> routes() { DARABONBA_PTR_GET(routes_, vector<Models::DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRuleRoutes>) };
    inline DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRule& setRoutes(const vector<Models::DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRuleRoutes> & routes) { DARABONBA_PTR_SET_VALUE(routes_, routes) };
    inline DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRule& setRoutes(vector<Models::DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRuleRoutes> && routes) { DARABONBA_PTR_SET_RVALUE(routes_, routes) };


  protected:
    std::shared_ptr<string> conditionJoiner_ = nullptr;
    std::shared_ptr<vector<Models::DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRuleConditions>> conditions_ = nullptr;
    std::shared_ptr<bool> independentPercentageEnable_ = nullptr;
    std::shared_ptr<int32_t> percentage_ = nullptr;
    std::shared_ptr<map<string, int32_t>> percentageByRoute_ = nullptr;
    std::shared_ptr<vector<int64_t>> routeIds_ = nullptr;
    std::shared_ptr<vector<Models::DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRuleRoutes>> routes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
