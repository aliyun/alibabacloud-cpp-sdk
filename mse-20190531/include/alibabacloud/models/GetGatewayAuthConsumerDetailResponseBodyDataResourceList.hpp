// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGATEWAYAUTHCONSUMERDETAILRESPONSEBODYDATARESOURCELIST_HPP_
#define ALIBABACLOUD_MODELS_GETGATEWAYAUTHCONSUMERDETAILRESPONSEBODYDATARESOURCELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetGatewayAuthConsumerDetailResponseBodyDataResourceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGatewayAuthConsumerDetailResponseBodyDataResourceList& obj) { 
      DARABONBA_PTR_TO_JSON(ConsumerId, consumerId_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ResourceStatus, resourceStatus_);
      DARABONBA_PTR_TO_JSON(RouteId, routeId_);
      DARABONBA_PTR_TO_JSON(RouteName, routeName_);
    };
    friend void from_json(const Darabonba::Json& j, GetGatewayAuthConsumerDetailResponseBodyDataResourceList& obj) { 
      DARABONBA_PTR_FROM_JSON(ConsumerId, consumerId_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ResourceStatus, resourceStatus_);
      DARABONBA_PTR_FROM_JSON(RouteId, routeId_);
      DARABONBA_PTR_FROM_JSON(RouteName, routeName_);
    };
    GetGatewayAuthConsumerDetailResponseBodyDataResourceList() = default ;
    GetGatewayAuthConsumerDetailResponseBodyDataResourceList(const GetGatewayAuthConsumerDetailResponseBodyDataResourceList &) = default ;
    GetGatewayAuthConsumerDetailResponseBodyDataResourceList(GetGatewayAuthConsumerDetailResponseBodyDataResourceList &&) = default ;
    GetGatewayAuthConsumerDetailResponseBodyDataResourceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGatewayAuthConsumerDetailResponseBodyDataResourceList() = default ;
    GetGatewayAuthConsumerDetailResponseBodyDataResourceList& operator=(const GetGatewayAuthConsumerDetailResponseBodyDataResourceList &) = default ;
    GetGatewayAuthConsumerDetailResponseBodyDataResourceList& operator=(GetGatewayAuthConsumerDetailResponseBodyDataResourceList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->consumerId_ != nullptr
        && this->gatewayUniqueId_ != nullptr && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->id_ != nullptr && this->resourceStatus_ != nullptr
        && this->routeId_ != nullptr && this->routeName_ != nullptr; };
    // consumerId Field Functions 
    bool hasConsumerId() const { return this->consumerId_ != nullptr;};
    void deleteConsumerId() { this->consumerId_ = nullptr;};
    inline int64_t consumerId() const { DARABONBA_PTR_GET_DEFAULT(consumerId_, 0L) };
    inline GetGatewayAuthConsumerDetailResponseBodyDataResourceList& setConsumerId(int64_t consumerId) { DARABONBA_PTR_SET_VALUE(consumerId_, consumerId) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string gatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline GetGatewayAuthConsumerDetailResponseBodyDataResourceList& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline GetGatewayAuthConsumerDetailResponseBodyDataResourceList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline GetGatewayAuthConsumerDetailResponseBodyDataResourceList& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetGatewayAuthConsumerDetailResponseBodyDataResourceList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // resourceStatus Field Functions 
    bool hasResourceStatus() const { return this->resourceStatus_ != nullptr;};
    void deleteResourceStatus() { this->resourceStatus_ = nullptr;};
    inline bool resourceStatus() const { DARABONBA_PTR_GET_DEFAULT(resourceStatus_, false) };
    inline GetGatewayAuthConsumerDetailResponseBodyDataResourceList& setResourceStatus(bool resourceStatus) { DARABONBA_PTR_SET_VALUE(resourceStatus_, resourceStatus) };


    // routeId Field Functions 
    bool hasRouteId() const { return this->routeId_ != nullptr;};
    void deleteRouteId() { this->routeId_ = nullptr;};
    inline int64_t routeId() const { DARABONBA_PTR_GET_DEFAULT(routeId_, 0L) };
    inline GetGatewayAuthConsumerDetailResponseBodyDataResourceList& setRouteId(int64_t routeId) { DARABONBA_PTR_SET_VALUE(routeId_, routeId) };


    // routeName Field Functions 
    bool hasRouteName() const { return this->routeName_ != nullptr;};
    void deleteRouteName() { this->routeName_ = nullptr;};
    inline string routeName() const { DARABONBA_PTR_GET_DEFAULT(routeName_, "") };
    inline GetGatewayAuthConsumerDetailResponseBodyDataResourceList& setRouteName(string routeName) { DARABONBA_PTR_SET_VALUE(routeName_, routeName) };


  protected:
    // The consumer ID.
    std::shared_ptr<int64_t> consumerId_ = nullptr;
    // The unique ID of the gateway.
    std::shared_ptr<string> gatewayUniqueId_ = nullptr;
    // The time when the resource associated with the consumer authentication record was created.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The time when the resource associated with the consumer authentication record was modified.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The ID of the authorized resource for the consumer.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The resource authorization state. Valid values:
    // 
    // *   true: Resource authorization is enabled.
    // *   false: Resource authorization is disabled.
    std::shared_ptr<bool> resourceStatus_ = nullptr;
    // The ID of the route.
    std::shared_ptr<int64_t> routeId_ = nullptr;
    // The name of the route.
    std::shared_ptr<string> routeName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
