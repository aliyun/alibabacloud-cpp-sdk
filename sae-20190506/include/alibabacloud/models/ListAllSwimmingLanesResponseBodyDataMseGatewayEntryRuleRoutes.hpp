// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALLSWIMMINGLANESRESPONSEBODYDATAMSEGATEWAYENTRYRULEROUTES_HPP_
#define ALIBABACLOUD_MODELS_LISTALLSWIMMINGLANESRESPONSEBODYDATAMSEGATEWAYENTRYRULEROUTES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListAllSwimmingLanesResponseBodyDataMseGatewayEntryRuleRoutesRoutePredicate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListAllSwimmingLanesResponseBodyDataMseGatewayEntryRuleRoutes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAllSwimmingLanesResponseBodyDataMseGatewayEntryRuleRoutes& obj) { 
      DARABONBA_PTR_TO_JSON(RouteId, routeId_);
      DARABONBA_PTR_TO_JSON(RouteName, routeName_);
      DARABONBA_PTR_TO_JSON(RoutePredicate, routePredicate_);
    };
    friend void from_json(const Darabonba::Json& j, ListAllSwimmingLanesResponseBodyDataMseGatewayEntryRuleRoutes& obj) { 
      DARABONBA_PTR_FROM_JSON(RouteId, routeId_);
      DARABONBA_PTR_FROM_JSON(RouteName, routeName_);
      DARABONBA_PTR_FROM_JSON(RoutePredicate, routePredicate_);
    };
    ListAllSwimmingLanesResponseBodyDataMseGatewayEntryRuleRoutes() = default ;
    ListAllSwimmingLanesResponseBodyDataMseGatewayEntryRuleRoutes(const ListAllSwimmingLanesResponseBodyDataMseGatewayEntryRuleRoutes &) = default ;
    ListAllSwimmingLanesResponseBodyDataMseGatewayEntryRuleRoutes(ListAllSwimmingLanesResponseBodyDataMseGatewayEntryRuleRoutes &&) = default ;
    ListAllSwimmingLanesResponseBodyDataMseGatewayEntryRuleRoutes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAllSwimmingLanesResponseBodyDataMseGatewayEntryRuleRoutes() = default ;
    ListAllSwimmingLanesResponseBodyDataMseGatewayEntryRuleRoutes& operator=(const ListAllSwimmingLanesResponseBodyDataMseGatewayEntryRuleRoutes &) = default ;
    ListAllSwimmingLanesResponseBodyDataMseGatewayEntryRuleRoutes& operator=(ListAllSwimmingLanesResponseBodyDataMseGatewayEntryRuleRoutes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->routeId_ != nullptr
        && this->routeName_ != nullptr && this->routePredicate_ != nullptr; };
    // routeId Field Functions 
    bool hasRouteId() const { return this->routeId_ != nullptr;};
    void deleteRouteId() { this->routeId_ = nullptr;};
    inline int64_t routeId() const { DARABONBA_PTR_GET_DEFAULT(routeId_, 0L) };
    inline ListAllSwimmingLanesResponseBodyDataMseGatewayEntryRuleRoutes& setRouteId(int64_t routeId) { DARABONBA_PTR_SET_VALUE(routeId_, routeId) };


    // routeName Field Functions 
    bool hasRouteName() const { return this->routeName_ != nullptr;};
    void deleteRouteName() { this->routeName_ = nullptr;};
    inline string routeName() const { DARABONBA_PTR_GET_DEFAULT(routeName_, "") };
    inline ListAllSwimmingLanesResponseBodyDataMseGatewayEntryRuleRoutes& setRouteName(string routeName) { DARABONBA_PTR_SET_VALUE(routeName_, routeName) };


    // routePredicate Field Functions 
    bool hasRoutePredicate() const { return this->routePredicate_ != nullptr;};
    void deleteRoutePredicate() { this->routePredicate_ = nullptr;};
    inline const Models::ListAllSwimmingLanesResponseBodyDataMseGatewayEntryRuleRoutesRoutePredicate & routePredicate() const { DARABONBA_PTR_GET_CONST(routePredicate_, Models::ListAllSwimmingLanesResponseBodyDataMseGatewayEntryRuleRoutesRoutePredicate) };
    inline Models::ListAllSwimmingLanesResponseBodyDataMseGatewayEntryRuleRoutesRoutePredicate routePredicate() { DARABONBA_PTR_GET(routePredicate_, Models::ListAllSwimmingLanesResponseBodyDataMseGatewayEntryRuleRoutesRoutePredicate) };
    inline ListAllSwimmingLanesResponseBodyDataMseGatewayEntryRuleRoutes& setRoutePredicate(const Models::ListAllSwimmingLanesResponseBodyDataMseGatewayEntryRuleRoutesRoutePredicate & routePredicate) { DARABONBA_PTR_SET_VALUE(routePredicate_, routePredicate) };
    inline ListAllSwimmingLanesResponseBodyDataMseGatewayEntryRuleRoutes& setRoutePredicate(Models::ListAllSwimmingLanesResponseBodyDataMseGatewayEntryRuleRoutesRoutePredicate && routePredicate) { DARABONBA_PTR_SET_RVALUE(routePredicate_, routePredicate) };


  protected:
    std::shared_ptr<int64_t> routeId_ = nullptr;
    std::shared_ptr<string> routeName_ = nullptr;
    std::shared_ptr<Models::ListAllSwimmingLanesResponseBodyDataMseGatewayEntryRuleRoutesRoutePredicate> routePredicate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
