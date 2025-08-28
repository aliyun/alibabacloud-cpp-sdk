// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVPNPBRROUTEENTRYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEVPNPBRROUTEENTRYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateVpnPbrRouteEntryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVpnPbrRouteEntryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(NextHop, nextHop_);
      DARABONBA_PTR_TO_JSON(OverlayMode, overlayMode_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(PublishVpc, publishVpc_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RouteDest, routeDest_);
      DARABONBA_PTR_TO_JSON(RouteSource, routeSource_);
      DARABONBA_PTR_TO_JSON(VpnGatewayId, vpnGatewayId_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVpnPbrRouteEntryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(NextHop, nextHop_);
      DARABONBA_PTR_FROM_JSON(OverlayMode, overlayMode_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(PublishVpc, publishVpc_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RouteDest, routeDest_);
      DARABONBA_PTR_FROM_JSON(RouteSource, routeSource_);
      DARABONBA_PTR_FROM_JSON(VpnGatewayId, vpnGatewayId_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
    };
    CreateVpnPbrRouteEntryRequest() = default ;
    CreateVpnPbrRouteEntryRequest(const CreateVpnPbrRouteEntryRequest &) = default ;
    CreateVpnPbrRouteEntryRequest(CreateVpnPbrRouteEntryRequest &&) = default ;
    CreateVpnPbrRouteEntryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVpnPbrRouteEntryRequest() = default ;
    CreateVpnPbrRouteEntryRequest& operator=(const CreateVpnPbrRouteEntryRequest &) = default ;
    CreateVpnPbrRouteEntryRequest& operator=(CreateVpnPbrRouteEntryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->description_ != nullptr && this->dryRun_ != nullptr && this->nextHop_ != nullptr && this->overlayMode_ != nullptr && this->ownerAccount_ != nullptr
        && this->ownerId_ != nullptr && this->priority_ != nullptr && this->publishVpc_ != nullptr && this->regionId_ != nullptr && this->resourceOwnerAccount_ != nullptr
        && this->resourceOwnerId_ != nullptr && this->routeDest_ != nullptr && this->routeSource_ != nullptr && this->vpnGatewayId_ != nullptr && this->weight_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateVpnPbrRouteEntryRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateVpnPbrRouteEntryRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateVpnPbrRouteEntryRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // nextHop Field Functions 
    bool hasNextHop() const { return this->nextHop_ != nullptr;};
    void deleteNextHop() { this->nextHop_ = nullptr;};
    inline string nextHop() const { DARABONBA_PTR_GET_DEFAULT(nextHop_, "") };
    inline CreateVpnPbrRouteEntryRequest& setNextHop(string nextHop) { DARABONBA_PTR_SET_VALUE(nextHop_, nextHop) };


    // overlayMode Field Functions 
    bool hasOverlayMode() const { return this->overlayMode_ != nullptr;};
    void deleteOverlayMode() { this->overlayMode_ = nullptr;};
    inline string overlayMode() const { DARABONBA_PTR_GET_DEFAULT(overlayMode_, "") };
    inline CreateVpnPbrRouteEntryRequest& setOverlayMode(string overlayMode) { DARABONBA_PTR_SET_VALUE(overlayMode_, overlayMode) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateVpnPbrRouteEntryRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateVpnPbrRouteEntryRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline CreateVpnPbrRouteEntryRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // publishVpc Field Functions 
    bool hasPublishVpc() const { return this->publishVpc_ != nullptr;};
    void deletePublishVpc() { this->publishVpc_ = nullptr;};
    inline bool publishVpc() const { DARABONBA_PTR_GET_DEFAULT(publishVpc_, false) };
    inline CreateVpnPbrRouteEntryRequest& setPublishVpc(bool publishVpc) { DARABONBA_PTR_SET_VALUE(publishVpc_, publishVpc) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateVpnPbrRouteEntryRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateVpnPbrRouteEntryRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateVpnPbrRouteEntryRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // routeDest Field Functions 
    bool hasRouteDest() const { return this->routeDest_ != nullptr;};
    void deleteRouteDest() { this->routeDest_ = nullptr;};
    inline string routeDest() const { DARABONBA_PTR_GET_DEFAULT(routeDest_, "") };
    inline CreateVpnPbrRouteEntryRequest& setRouteDest(string routeDest) { DARABONBA_PTR_SET_VALUE(routeDest_, routeDest) };


    // routeSource Field Functions 
    bool hasRouteSource() const { return this->routeSource_ != nullptr;};
    void deleteRouteSource() { this->routeSource_ = nullptr;};
    inline string routeSource() const { DARABONBA_PTR_GET_DEFAULT(routeSource_, "") };
    inline CreateVpnPbrRouteEntryRequest& setRouteSource(string routeSource) { DARABONBA_PTR_SET_VALUE(routeSource_, routeSource) };


    // vpnGatewayId Field Functions 
    bool hasVpnGatewayId() const { return this->vpnGatewayId_ != nullptr;};
    void deleteVpnGatewayId() { this->vpnGatewayId_ = nullptr;};
    inline string vpnGatewayId() const { DARABONBA_PTR_GET_DEFAULT(vpnGatewayId_, "") };
    inline CreateVpnPbrRouteEntryRequest& setVpnGatewayId(string vpnGatewayId) { DARABONBA_PTR_SET_VALUE(vpnGatewayId_, vpnGatewayId) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline CreateVpnPbrRouteEntryRequest& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate a token, but you must make sure that the token is unique among different requests. The client token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the request ID as the client token. The request ID is different for each request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The description of the policy-based route.
    // 
    // The description must be 1 to 100 characters in length, and cannot start with http:// or https://.
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<bool> dryRun_ = nullptr;
    // The next hop of the policy-based route.
    // 
    // This parameter is required.
    std::shared_ptr<string> nextHop_ = nullptr;
    // The tunneling protocol. Set the value to **Ipsec**.
    std::shared_ptr<string> overlayMode_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The priority of the policy-based route. Valid values: **1** to **100**. Default value: **10**.
    // 
    // A smaller value indicates a higher priority.
    std::shared_ptr<int32_t> priority_ = nullptr;
    // Specifies whether to advertise the policy-based route to a virtual private cloud (VPC) route table. Valid values:
    // 
    // *   **true**
    // *   **false**
    // 
    // This parameter is required.
    std::shared_ptr<bool> publishVpc_ = nullptr;
    // The region ID of the VPN gateway. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
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
    // The VPN gateway ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> vpnGatewayId_ = nullptr;
    // The weight of the policy-based route.
    // 
    // If you use the same VPN gateway to establish active/standby IPsec-VPN connections, you can configure route weights to specify which connection is active. A value of 100 specifies the active connection, whereas a value of 0 specifies the standby connection.
    // 
    // You can configure health checks to automatically check the connectivity of IPsec-VPN connections. If the active connection is down, the standby connection automatically takes over. For more information, see [CreateVpnConnection](https://help.aliyun.com/document_detail/120391.html).
    // 
    // *   **100**: The IPsec-VPN connection associated with the policy-based route serves as an active connection.
    // *   **0**: The IPsec-VPN connection associated with the policy-based route serves as a standby connection.
    // 
    // >  If you specify active/standby IPsec-VPN connections, the active policy-based route and the standby policy-based route must have the same source and destination CIDR blocks.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> weight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
