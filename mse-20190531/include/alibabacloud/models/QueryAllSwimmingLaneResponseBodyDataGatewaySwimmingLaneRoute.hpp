// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYALLSWIMMINGLANERESPONSEBODYDATAGATEWAYSWIMMINGLANEROUTE_HPP_
#define ALIBABACLOUD_MODELS_QUERYALLSWIMMINGLANERESPONSEBODYDATAGATEWAYSWIMMINGLANEROUTE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRouteConditions.hpp>
#include <alibabacloud/models/QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRouteRouteIndependentPercentageList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRoute : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRoute& obj) { 
      DARABONBA_PTR_TO_JSON(CanaryModel, canaryModel_);
      DARABONBA_PTR_TO_JSON(Condition, condition_);
      DARABONBA_PTR_TO_JSON(Conditions, conditions_);
      DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(Percentage, percentage_);
      DARABONBA_PTR_TO_JSON(RouteIdList, routeIdList_);
      DARABONBA_PTR_TO_JSON(RouteIndependentPercentageEnable, routeIndependentPercentageEnable_);
      DARABONBA_PTR_TO_JSON(RouteIndependentPercentageList, routeIndependentPercentageList_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRoute& obj) { 
      DARABONBA_PTR_FROM_JSON(CanaryModel, canaryModel_);
      DARABONBA_PTR_FROM_JSON(Condition, condition_);
      DARABONBA_PTR_FROM_JSON(Conditions, conditions_);
      DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(Percentage, percentage_);
      DARABONBA_PTR_FROM_JSON(RouteIdList, routeIdList_);
      DARABONBA_PTR_FROM_JSON(RouteIndependentPercentageEnable, routeIndependentPercentageEnable_);
      DARABONBA_PTR_FROM_JSON(RouteIndependentPercentageList, routeIndependentPercentageList_);
    };
    QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRoute() = default ;
    QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRoute(const QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRoute &) = default ;
    QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRoute(QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRoute &&) = default ;
    QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRoute(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRoute() = default ;
    QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRoute& operator=(const QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRoute &) = default ;
    QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRoute& operator=(QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRoute &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->canaryModel_ == nullptr
        && return this->condition_ == nullptr && return this->conditions_ == nullptr && return this->gatewayId_ == nullptr && return this->gatewayUniqueId_ == nullptr && return this->percentage_ == nullptr
        && return this->routeIdList_ == nullptr && return this->routeIndependentPercentageEnable_ == nullptr && return this->routeIndependentPercentageList_ == nullptr; };
    // canaryModel Field Functions 
    bool hasCanaryModel() const { return this->canaryModel_ != nullptr;};
    void deleteCanaryModel() { this->canaryModel_ = nullptr;};
    inline int32_t canaryModel() const { DARABONBA_PTR_GET_DEFAULT(canaryModel_, 0) };
    inline QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRoute& setCanaryModel(int32_t canaryModel) { DARABONBA_PTR_SET_VALUE(canaryModel_, canaryModel) };


    // condition Field Functions 
    bool hasCondition() const { return this->condition_ != nullptr;};
    void deleteCondition() { this->condition_ = nullptr;};
    inline string condition() const { DARABONBA_PTR_GET_DEFAULT(condition_, "") };
    inline QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRoute& setCondition(string condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };


    // conditions Field Functions 
    bool hasConditions() const { return this->conditions_ != nullptr;};
    void deleteConditions() { this->conditions_ = nullptr;};
    inline const vector<Models::QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRouteConditions> & conditions() const { DARABONBA_PTR_GET_CONST(conditions_, vector<Models::QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRouteConditions>) };
    inline vector<Models::QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRouteConditions> conditions() { DARABONBA_PTR_GET(conditions_, vector<Models::QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRouteConditions>) };
    inline QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRoute& setConditions(const vector<Models::QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRouteConditions> & conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };
    inline QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRoute& setConditions(vector<Models::QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRouteConditions> && conditions) { DARABONBA_PTR_SET_RVALUE(conditions_, conditions) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline int64_t gatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, 0L) };
    inline QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRoute& setGatewayId(int64_t gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string gatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRoute& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // percentage Field Functions 
    bool hasPercentage() const { return this->percentage_ != nullptr;};
    void deletePercentage() { this->percentage_ = nullptr;};
    inline int32_t percentage() const { DARABONBA_PTR_GET_DEFAULT(percentage_, 0) };
    inline QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRoute& setPercentage(int32_t percentage) { DARABONBA_PTR_SET_VALUE(percentage_, percentage) };


    // routeIdList Field Functions 
    bool hasRouteIdList() const { return this->routeIdList_ != nullptr;};
    void deleteRouteIdList() { this->routeIdList_ = nullptr;};
    inline const vector<int64_t> & routeIdList() const { DARABONBA_PTR_GET_CONST(routeIdList_, vector<int64_t>) };
    inline vector<int64_t> routeIdList() { DARABONBA_PTR_GET(routeIdList_, vector<int64_t>) };
    inline QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRoute& setRouteIdList(const vector<int64_t> & routeIdList) { DARABONBA_PTR_SET_VALUE(routeIdList_, routeIdList) };
    inline QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRoute& setRouteIdList(vector<int64_t> && routeIdList) { DARABONBA_PTR_SET_RVALUE(routeIdList_, routeIdList) };


    // routeIndependentPercentageEnable Field Functions 
    bool hasRouteIndependentPercentageEnable() const { return this->routeIndependentPercentageEnable_ != nullptr;};
    void deleteRouteIndependentPercentageEnable() { this->routeIndependentPercentageEnable_ = nullptr;};
    inline string routeIndependentPercentageEnable() const { DARABONBA_PTR_GET_DEFAULT(routeIndependentPercentageEnable_, "") };
    inline QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRoute& setRouteIndependentPercentageEnable(string routeIndependentPercentageEnable) { DARABONBA_PTR_SET_VALUE(routeIndependentPercentageEnable_, routeIndependentPercentageEnable) };


    // routeIndependentPercentageList Field Functions 
    bool hasRouteIndependentPercentageList() const { return this->routeIndependentPercentageList_ != nullptr;};
    void deleteRouteIndependentPercentageList() { this->routeIndependentPercentageList_ = nullptr;};
    inline const vector<Models::QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRouteRouteIndependentPercentageList> & routeIndependentPercentageList() const { DARABONBA_PTR_GET_CONST(routeIndependentPercentageList_, vector<Models::QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRouteRouteIndependentPercentageList>) };
    inline vector<Models::QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRouteRouteIndependentPercentageList> routeIndependentPercentageList() { DARABONBA_PTR_GET(routeIndependentPercentageList_, vector<Models::QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRouteRouteIndependentPercentageList>) };
    inline QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRoute& setRouteIndependentPercentageList(const vector<Models::QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRouteRouteIndependentPercentageList> & routeIndependentPercentageList) { DARABONBA_PTR_SET_VALUE(routeIndependentPercentageList_, routeIndependentPercentageList) };
    inline QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRoute& setRouteIndependentPercentageList(vector<Models::QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRouteRouteIndependentPercentageList> && routeIndependentPercentageList) { DARABONBA_PTR_SET_RVALUE(routeIndependentPercentageList_, routeIndependentPercentageList) };


  protected:
    std::shared_ptr<int32_t> canaryModel_ = nullptr;
    std::shared_ptr<string> condition_ = nullptr;
    std::shared_ptr<vector<Models::QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRouteConditions>> conditions_ = nullptr;
    std::shared_ptr<int64_t> gatewayId_ = nullptr;
    std::shared_ptr<string> gatewayUniqueId_ = nullptr;
    std::shared_ptr<int32_t> percentage_ = nullptr;
    std::shared_ptr<vector<int64_t>> routeIdList_ = nullptr;
    std::shared_ptr<string> routeIndependentPercentageEnable_ = nullptr;
    std::shared_ptr<vector<Models::QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRouteRouteIndependentPercentageList>> routeIndependentPercentageList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
