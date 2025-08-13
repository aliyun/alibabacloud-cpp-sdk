// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGATEWAYAUTHCONSUMERRESOURCEREQUESTRESOURCELIST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGATEWAYAUTHCONSUMERRESOURCEREQUESTRESOURCELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class UpdateGatewayAuthConsumerResourceRequestResourceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGatewayAuthConsumerResourceRequestResourceList& obj) { 
      DARABONBA_PTR_TO_JSON(RouteId, routeId_);
      DARABONBA_PTR_TO_JSON(RouteName, routeName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGatewayAuthConsumerResourceRequestResourceList& obj) { 
      DARABONBA_PTR_FROM_JSON(RouteId, routeId_);
      DARABONBA_PTR_FROM_JSON(RouteName, routeName_);
    };
    UpdateGatewayAuthConsumerResourceRequestResourceList() = default ;
    UpdateGatewayAuthConsumerResourceRequestResourceList(const UpdateGatewayAuthConsumerResourceRequestResourceList &) = default ;
    UpdateGatewayAuthConsumerResourceRequestResourceList(UpdateGatewayAuthConsumerResourceRequestResourceList &&) = default ;
    UpdateGatewayAuthConsumerResourceRequestResourceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGatewayAuthConsumerResourceRequestResourceList() = default ;
    UpdateGatewayAuthConsumerResourceRequestResourceList& operator=(const UpdateGatewayAuthConsumerResourceRequestResourceList &) = default ;
    UpdateGatewayAuthConsumerResourceRequestResourceList& operator=(UpdateGatewayAuthConsumerResourceRequestResourceList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->routeId_ != nullptr
        && this->routeName_ != nullptr; };
    // routeId Field Functions 
    bool hasRouteId() const { return this->routeId_ != nullptr;};
    void deleteRouteId() { this->routeId_ = nullptr;};
    inline int64_t routeId() const { DARABONBA_PTR_GET_DEFAULT(routeId_, 0L) };
    inline UpdateGatewayAuthConsumerResourceRequestResourceList& setRouteId(int64_t routeId) { DARABONBA_PTR_SET_VALUE(routeId_, routeId) };


    // routeName Field Functions 
    bool hasRouteName() const { return this->routeName_ != nullptr;};
    void deleteRouteName() { this->routeName_ = nullptr;};
    inline string routeName() const { DARABONBA_PTR_GET_DEFAULT(routeName_, "") };
    inline UpdateGatewayAuthConsumerResourceRequestResourceList& setRouteName(string routeName) { DARABONBA_PTR_SET_VALUE(routeName_, routeName) };


  protected:
    // The route ID.
    std::shared_ptr<int64_t> routeId_ = nullptr;
    // The name of the route.
    std::shared_ptr<string> routeName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
