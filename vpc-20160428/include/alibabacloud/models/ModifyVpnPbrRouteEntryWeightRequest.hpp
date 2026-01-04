// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYVPNPBRROUTEENTRYWEIGHTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYVPNPBRROUTEENTRYWEIGHTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ModifyVpnPbrRouteEntryWeightRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyVpnPbrRouteEntryWeightRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(NewWeight, newWeight_);
      DARABONBA_PTR_TO_JSON(NextHop, nextHop_);
      DARABONBA_PTR_TO_JSON(OverlayMode, overlayMode_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RouteDest, routeDest_);
      DARABONBA_PTR_TO_JSON(RouteSource, routeSource_);
      DARABONBA_PTR_TO_JSON(VpnGatewayId, vpnGatewayId_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyVpnPbrRouteEntryWeightRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(NewWeight, newWeight_);
      DARABONBA_PTR_FROM_JSON(NextHop, nextHop_);
      DARABONBA_PTR_FROM_JSON(OverlayMode, overlayMode_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RouteDest, routeDest_);
      DARABONBA_PTR_FROM_JSON(RouteSource, routeSource_);
      DARABONBA_PTR_FROM_JSON(VpnGatewayId, vpnGatewayId_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
    };
    ModifyVpnPbrRouteEntryWeightRequest() = default ;
    ModifyVpnPbrRouteEntryWeightRequest(const ModifyVpnPbrRouteEntryWeightRequest &) = default ;
    ModifyVpnPbrRouteEntryWeightRequest(ModifyVpnPbrRouteEntryWeightRequest &&) = default ;
    ModifyVpnPbrRouteEntryWeightRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyVpnPbrRouteEntryWeightRequest() = default ;
    ModifyVpnPbrRouteEntryWeightRequest& operator=(const ModifyVpnPbrRouteEntryWeightRequest &) = default ;
    ModifyVpnPbrRouteEntryWeightRequest& operator=(ModifyVpnPbrRouteEntryWeightRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->newWeight_ == nullptr && this->nextHop_ == nullptr && this->overlayMode_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr
        && this->priority_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->routeDest_ == nullptr
        && this->routeSource_ == nullptr && this->vpnGatewayId_ == nullptr && this->weight_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyVpnPbrRouteEntryWeightRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // newWeight Field Functions 
    bool hasNewWeight() const { return this->newWeight_ != nullptr;};
    void deleteNewWeight() { this->newWeight_ = nullptr;};
    inline int32_t getNewWeight() const { DARABONBA_PTR_GET_DEFAULT(newWeight_, 0) };
    inline ModifyVpnPbrRouteEntryWeightRequest& setNewWeight(int32_t newWeight) { DARABONBA_PTR_SET_VALUE(newWeight_, newWeight) };


    // nextHop Field Functions 
    bool hasNextHop() const { return this->nextHop_ != nullptr;};
    void deleteNextHop() { this->nextHop_ = nullptr;};
    inline string getNextHop() const { DARABONBA_PTR_GET_DEFAULT(nextHop_, "") };
    inline ModifyVpnPbrRouteEntryWeightRequest& setNextHop(string nextHop) { DARABONBA_PTR_SET_VALUE(nextHop_, nextHop) };


    // overlayMode Field Functions 
    bool hasOverlayMode() const { return this->overlayMode_ != nullptr;};
    void deleteOverlayMode() { this->overlayMode_ = nullptr;};
    inline string getOverlayMode() const { DARABONBA_PTR_GET_DEFAULT(overlayMode_, "") };
    inline ModifyVpnPbrRouteEntryWeightRequest& setOverlayMode(string overlayMode) { DARABONBA_PTR_SET_VALUE(overlayMode_, overlayMode) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyVpnPbrRouteEntryWeightRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyVpnPbrRouteEntryWeightRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline ModifyVpnPbrRouteEntryWeightRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyVpnPbrRouteEntryWeightRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyVpnPbrRouteEntryWeightRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyVpnPbrRouteEntryWeightRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // routeDest Field Functions 
    bool hasRouteDest() const { return this->routeDest_ != nullptr;};
    void deleteRouteDest() { this->routeDest_ = nullptr;};
    inline string getRouteDest() const { DARABONBA_PTR_GET_DEFAULT(routeDest_, "") };
    inline ModifyVpnPbrRouteEntryWeightRequest& setRouteDest(string routeDest) { DARABONBA_PTR_SET_VALUE(routeDest_, routeDest) };


    // routeSource Field Functions 
    bool hasRouteSource() const { return this->routeSource_ != nullptr;};
    void deleteRouteSource() { this->routeSource_ = nullptr;};
    inline string getRouteSource() const { DARABONBA_PTR_GET_DEFAULT(routeSource_, "") };
    inline ModifyVpnPbrRouteEntryWeightRequest& setRouteSource(string routeSource) { DARABONBA_PTR_SET_VALUE(routeSource_, routeSource) };


    // vpnGatewayId Field Functions 
    bool hasVpnGatewayId() const { return this->vpnGatewayId_ != nullptr;};
    void deleteVpnGatewayId() { this->vpnGatewayId_ = nullptr;};
    inline string getVpnGatewayId() const { DARABONBA_PTR_GET_DEFAULT(vpnGatewayId_, "") };
    inline ModifyVpnPbrRouteEntryWeightRequest& setVpnGatewayId(string vpnGatewayId) { DARABONBA_PTR_SET_VALUE(vpnGatewayId_, vpnGatewayId) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline ModifyVpnPbrRouteEntryWeightRequest& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The client token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    shared_ptr<string> clientToken_ {};
    // The new weight of the policy-based route. Valid values:
    // 
    // *   **100**: The IPsec-VPN connection associated with the policy-based route serves as an active connection.
    // *   **0**: The IPsec-VPN connection associated with the policy-based route serves as a standby connection.
    // 
    // This parameter is required.
    shared_ptr<int32_t> newWeight_ {};
    // The next hop of the policy-based route.
    // 
    // This parameter is required.
    shared_ptr<string> nextHop_ {};
    // The tunneling protocol. The value is set to **Ipsec**, which indicates the IPsec tunneling protocol.
    shared_ptr<string> overlayMode_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The priority of the policy-based route.
    // 
    // *   If the route was not assigned a priority, this parameter is optional.
    // 
    // *   If the route was assigned a priority, this parameter is optional.
    // 
    //         If you specify this parameter, set the value to the priority that was assigned to the policy-based route. Otherwise, the operation fails.
    shared_ptr<int32_t> priority_ {};
    // The ID of the region where the VPN gateway is created. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The destination CIDR block of the policy-based route.
    // 
    // This parameter is required.
    shared_ptr<string> routeDest_ {};
    // The source CIDR block of the policy-based route.
    // 
    // This parameter is required.
    shared_ptr<string> routeSource_ {};
    // The ID of the VPN gateway.
    // 
    // This parameter is required.
    shared_ptr<string> vpnGatewayId_ {};
    // The original weight of the policy-based route. Valid values:
    // 
    // *   **100**: The IPsec-VPN connection associated with the policy-based route serves as an active connection.
    // *   **0**: The IPsec-VPN connection associated with the policy-based route serves as a standby connection.
    // 
    // This parameter is required.
    shared_ptr<int32_t> weight_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
