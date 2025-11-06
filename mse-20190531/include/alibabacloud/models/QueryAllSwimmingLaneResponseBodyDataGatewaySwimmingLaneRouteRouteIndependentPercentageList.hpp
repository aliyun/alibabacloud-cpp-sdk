// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYALLSWIMMINGLANERESPONSEBODYDATAGATEWAYSWIMMINGLANEROUTEROUTEINDEPENDENTPERCENTAGELIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYALLSWIMMINGLANERESPONSEBODYDATAGATEWAYSWIMMINGLANEROUTEROUTEINDEPENDENTPERCENTAGELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRouteRouteIndependentPercentageList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRouteRouteIndependentPercentageList& obj) { 
      DARABONBA_PTR_TO_JSON(Percentage, percentage_);
      DARABONBA_PTR_TO_JSON(RouteId, routeId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRouteRouteIndependentPercentageList& obj) { 
      DARABONBA_PTR_FROM_JSON(Percentage, percentage_);
      DARABONBA_PTR_FROM_JSON(RouteId, routeId_);
    };
    QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRouteRouteIndependentPercentageList() = default ;
    QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRouteRouteIndependentPercentageList(const QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRouteRouteIndependentPercentageList &) = default ;
    QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRouteRouteIndependentPercentageList(QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRouteRouteIndependentPercentageList &&) = default ;
    QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRouteRouteIndependentPercentageList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRouteRouteIndependentPercentageList() = default ;
    QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRouteRouteIndependentPercentageList& operator=(const QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRouteRouteIndependentPercentageList &) = default ;
    QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRouteRouteIndependentPercentageList& operator=(QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRouteRouteIndependentPercentageList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->percentage_ == nullptr
        && return this->routeId_ == nullptr; };
    // percentage Field Functions 
    bool hasPercentage() const { return this->percentage_ != nullptr;};
    void deletePercentage() { this->percentage_ = nullptr;};
    inline string percentage() const { DARABONBA_PTR_GET_DEFAULT(percentage_, "") };
    inline QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRouteRouteIndependentPercentageList& setPercentage(string percentage) { DARABONBA_PTR_SET_VALUE(percentage_, percentage) };


    // routeId Field Functions 
    bool hasRouteId() const { return this->routeId_ != nullptr;};
    void deleteRouteId() { this->routeId_ = nullptr;};
    inline string routeId() const { DARABONBA_PTR_GET_DEFAULT(routeId_, "") };
    inline QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRouteRouteIndependentPercentageList& setRouteId(string routeId) { DARABONBA_PTR_SET_VALUE(routeId_, routeId) };


  protected:
    std::shared_ptr<string> percentage_ = nullptr;
    std::shared_ptr<string> routeId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
