// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSWIMMINGLANEGATEWAYROUTESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTSWIMMINGLANEGATEWAYROUTESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListSwimmingLaneGatewayRoutesResponseBodyDataRoutePredicate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListSwimmingLaneGatewayRoutesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSwimmingLaneGatewayRoutesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(RouteId, routeId_);
      DARABONBA_PTR_TO_JSON(RouteName, routeName_);
      DARABONBA_PTR_TO_JSON(RoutePredicate, routePredicate_);
    };
    friend void from_json(const Darabonba::Json& j, ListSwimmingLaneGatewayRoutesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(RouteId, routeId_);
      DARABONBA_PTR_FROM_JSON(RouteName, routeName_);
      DARABONBA_PTR_FROM_JSON(RoutePredicate, routePredicate_);
    };
    ListSwimmingLaneGatewayRoutesResponseBodyData() = default ;
    ListSwimmingLaneGatewayRoutesResponseBodyData(const ListSwimmingLaneGatewayRoutesResponseBodyData &) = default ;
    ListSwimmingLaneGatewayRoutesResponseBodyData(ListSwimmingLaneGatewayRoutesResponseBodyData &&) = default ;
    ListSwimmingLaneGatewayRoutesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSwimmingLaneGatewayRoutesResponseBodyData() = default ;
    ListSwimmingLaneGatewayRoutesResponseBodyData& operator=(const ListSwimmingLaneGatewayRoutesResponseBodyData &) = default ;
    ListSwimmingLaneGatewayRoutesResponseBodyData& operator=(ListSwimmingLaneGatewayRoutesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->routeId_ == nullptr
        && return this->routeName_ == nullptr && return this->routePredicate_ == nullptr; };
    // routeId Field Functions 
    bool hasRouteId() const { return this->routeId_ != nullptr;};
    void deleteRouteId() { this->routeId_ = nullptr;};
    inline int64_t routeId() const { DARABONBA_PTR_GET_DEFAULT(routeId_, 0L) };
    inline ListSwimmingLaneGatewayRoutesResponseBodyData& setRouteId(int64_t routeId) { DARABONBA_PTR_SET_VALUE(routeId_, routeId) };


    // routeName Field Functions 
    bool hasRouteName() const { return this->routeName_ != nullptr;};
    void deleteRouteName() { this->routeName_ = nullptr;};
    inline string routeName() const { DARABONBA_PTR_GET_DEFAULT(routeName_, "") };
    inline ListSwimmingLaneGatewayRoutesResponseBodyData& setRouteName(string routeName) { DARABONBA_PTR_SET_VALUE(routeName_, routeName) };


    // routePredicate Field Functions 
    bool hasRoutePredicate() const { return this->routePredicate_ != nullptr;};
    void deleteRoutePredicate() { this->routePredicate_ = nullptr;};
    inline const Models::ListSwimmingLaneGatewayRoutesResponseBodyDataRoutePredicate & routePredicate() const { DARABONBA_PTR_GET_CONST(routePredicate_, Models::ListSwimmingLaneGatewayRoutesResponseBodyDataRoutePredicate) };
    inline Models::ListSwimmingLaneGatewayRoutesResponseBodyDataRoutePredicate routePredicate() { DARABONBA_PTR_GET(routePredicate_, Models::ListSwimmingLaneGatewayRoutesResponseBodyDataRoutePredicate) };
    inline ListSwimmingLaneGatewayRoutesResponseBodyData& setRoutePredicate(const Models::ListSwimmingLaneGatewayRoutesResponseBodyDataRoutePredicate & routePredicate) { DARABONBA_PTR_SET_VALUE(routePredicate_, routePredicate) };
    inline ListSwimmingLaneGatewayRoutesResponseBodyData& setRoutePredicate(Models::ListSwimmingLaneGatewayRoutesResponseBodyDataRoutePredicate && routePredicate) { DARABONBA_PTR_SET_RVALUE(routePredicate_, routePredicate) };


  protected:
    // The ID of the route.
    std::shared_ptr<int64_t> routeId_ = nullptr;
    // The name of the route.
    std::shared_ptr<string> routeName_ = nullptr;
    // The routing rule.
    std::shared_ptr<Models::ListSwimmingLaneGatewayRoutesResponseBodyDataRoutePredicate> routePredicate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
