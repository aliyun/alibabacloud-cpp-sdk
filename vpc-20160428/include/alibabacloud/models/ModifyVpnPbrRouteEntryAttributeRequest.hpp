// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYVPNPBRROUTEENTRYATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYVPNPBRROUTEENTRYATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ModifyVpnPbrRouteEntryAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyVpnPbrRouteEntryAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(NewPriority, newPriority_);
      DARABONBA_PTR_TO_JSON(NewWeight, newWeight_);
      DARABONBA_PTR_TO_JSON(NextHop, nextHop_);
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
    friend void from_json(const Darabonba::Json& j, ModifyVpnPbrRouteEntryAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(NewPriority, newPriority_);
      DARABONBA_PTR_FROM_JSON(NewWeight, newWeight_);
      DARABONBA_PTR_FROM_JSON(NextHop, nextHop_);
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
    ModifyVpnPbrRouteEntryAttributeRequest() = default ;
    ModifyVpnPbrRouteEntryAttributeRequest(const ModifyVpnPbrRouteEntryAttributeRequest &) = default ;
    ModifyVpnPbrRouteEntryAttributeRequest(ModifyVpnPbrRouteEntryAttributeRequest &&) = default ;
    ModifyVpnPbrRouteEntryAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyVpnPbrRouteEntryAttributeRequest() = default ;
    ModifyVpnPbrRouteEntryAttributeRequest& operator=(const ModifyVpnPbrRouteEntryAttributeRequest &) = default ;
    ModifyVpnPbrRouteEntryAttributeRequest& operator=(ModifyVpnPbrRouteEntryAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->newPriority_ != nullptr && this->newWeight_ != nullptr && this->nextHop_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr
        && this->priority_ != nullptr && this->regionId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->routeDest_ != nullptr
        && this->routeSource_ != nullptr && this->vpnGatewayId_ != nullptr && this->weight_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyVpnPbrRouteEntryAttributeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // newPriority Field Functions 
    bool hasNewPriority() const { return this->newPriority_ != nullptr;};
    void deleteNewPriority() { this->newPriority_ = nullptr;};
    inline int32_t newPriority() const { DARABONBA_PTR_GET_DEFAULT(newPriority_, 0) };
    inline ModifyVpnPbrRouteEntryAttributeRequest& setNewPriority(int32_t newPriority) { DARABONBA_PTR_SET_VALUE(newPriority_, newPriority) };


    // newWeight Field Functions 
    bool hasNewWeight() const { return this->newWeight_ != nullptr;};
    void deleteNewWeight() { this->newWeight_ = nullptr;};
    inline int32_t newWeight() const { DARABONBA_PTR_GET_DEFAULT(newWeight_, 0) };
    inline ModifyVpnPbrRouteEntryAttributeRequest& setNewWeight(int32_t newWeight) { DARABONBA_PTR_SET_VALUE(newWeight_, newWeight) };


    // nextHop Field Functions 
    bool hasNextHop() const { return this->nextHop_ != nullptr;};
    void deleteNextHop() { this->nextHop_ = nullptr;};
    inline string nextHop() const { DARABONBA_PTR_GET_DEFAULT(nextHop_, "") };
    inline ModifyVpnPbrRouteEntryAttributeRequest& setNextHop(string nextHop) { DARABONBA_PTR_SET_VALUE(nextHop_, nextHop) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyVpnPbrRouteEntryAttributeRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyVpnPbrRouteEntryAttributeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline ModifyVpnPbrRouteEntryAttributeRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyVpnPbrRouteEntryAttributeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyVpnPbrRouteEntryAttributeRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyVpnPbrRouteEntryAttributeRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // routeDest Field Functions 
    bool hasRouteDest() const { return this->routeDest_ != nullptr;};
    void deleteRouteDest() { this->routeDest_ = nullptr;};
    inline string routeDest() const { DARABONBA_PTR_GET_DEFAULT(routeDest_, "") };
    inline ModifyVpnPbrRouteEntryAttributeRequest& setRouteDest(string routeDest) { DARABONBA_PTR_SET_VALUE(routeDest_, routeDest) };


    // routeSource Field Functions 
    bool hasRouteSource() const { return this->routeSource_ != nullptr;};
    void deleteRouteSource() { this->routeSource_ = nullptr;};
    inline string routeSource() const { DARABONBA_PTR_GET_DEFAULT(routeSource_, "") };
    inline ModifyVpnPbrRouteEntryAttributeRequest& setRouteSource(string routeSource) { DARABONBA_PTR_SET_VALUE(routeSource_, routeSource) };


    // vpnGatewayId Field Functions 
    bool hasVpnGatewayId() const { return this->vpnGatewayId_ != nullptr;};
    void deleteVpnGatewayId() { this->vpnGatewayId_ = nullptr;};
    inline string vpnGatewayId() const { DARABONBA_PTR_GET_DEFAULT(vpnGatewayId_, "") };
    inline ModifyVpnPbrRouteEntryAttributeRequest& setVpnGatewayId(string vpnGatewayId) { DARABONBA_PTR_SET_VALUE(vpnGatewayId_, vpnGatewayId) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline ModifyVpnPbrRouteEntryAttributeRequest& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The client token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The new priority of the policy-based route. Valid values: **1** to **100**.
    // 
    // A smaller value indicates a higher priority.
    // 
    // If you do not specify this parameter, the priority of the policy-based route is not modified.
    // 
    // >  You must specify at least one of **NewPriority** and **NewWeight**.
    std::shared_ptr<int32_t> newPriority_ = nullptr;
    // The new weight of the policy-based route. Valid values:
    // 
    // *   **100**: The IPsec-VPN connection associated with the policy-based route serves as the active connection.
    // *   **0**: The IPsec-VPN connection associated with the policy-based route serves as the standby connection.
    // 
    // If you do not specify this parameter, the weight of the policy-based route is not modified.
    // 
    // >  You must specify at least one of **NewPriority** and **NewWeight**.
    std::shared_ptr<int32_t> newWeight_ = nullptr;
    // The next hop of the policy-based route.
    // 
    // This parameter is required.
    std::shared_ptr<string> nextHop_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The original priority of the policy-based route. Valid values: **1** to **100**.
    // 
    // A smaller value indicates a higher priority.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> priority_ = nullptr;
    // The region ID of the VPN gateway.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The destination CIDR block of the policy-based route.
    // 
    // This parameter is required.
    std::shared_ptr<string> routeDest_ = nullptr;
    // The source CIDR block of the policy-based route.
    // 
    // This parameter is required.
    std::shared_ptr<string> routeSource_ = nullptr;
    // The ID of the VPN gateway.
    // 
    // This parameter is required.
    std::shared_ptr<string> vpnGatewayId_ = nullptr;
    // The original weight of the policy-based route. Valid values:
    // 
    // *   **100**: The IPsec-VPN connection associated with the policy-based route serves as an active connection.
    // *   **0**: The IPsec-VPN connection associated with the policy-based route serves as a standby connection.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> weight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
