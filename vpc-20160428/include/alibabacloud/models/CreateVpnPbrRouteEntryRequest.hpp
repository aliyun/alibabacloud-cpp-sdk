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
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->description_ == nullptr && this->dryRun_ == nullptr && this->nextHop_ == nullptr && this->overlayMode_ == nullptr && this->ownerAccount_ == nullptr
        && this->ownerId_ == nullptr && this->priority_ == nullptr && this->publishVpc_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->routeDest_ == nullptr && this->routeSource_ == nullptr && this->vpnGatewayId_ == nullptr && this->weight_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateVpnPbrRouteEntryRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateVpnPbrRouteEntryRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateVpnPbrRouteEntryRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // nextHop Field Functions 
    bool hasNextHop() const { return this->nextHop_ != nullptr;};
    void deleteNextHop() { this->nextHop_ = nullptr;};
    inline string getNextHop() const { DARABONBA_PTR_GET_DEFAULT(nextHop_, "") };
    inline CreateVpnPbrRouteEntryRequest& setNextHop(string nextHop) { DARABONBA_PTR_SET_VALUE(nextHop_, nextHop) };


    // overlayMode Field Functions 
    bool hasOverlayMode() const { return this->overlayMode_ != nullptr;};
    void deleteOverlayMode() { this->overlayMode_ = nullptr;};
    inline string getOverlayMode() const { DARABONBA_PTR_GET_DEFAULT(overlayMode_, "") };
    inline CreateVpnPbrRouteEntryRequest& setOverlayMode(string overlayMode) { DARABONBA_PTR_SET_VALUE(overlayMode_, overlayMode) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateVpnPbrRouteEntryRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateVpnPbrRouteEntryRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline CreateVpnPbrRouteEntryRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // publishVpc Field Functions 
    bool hasPublishVpc() const { return this->publishVpc_ != nullptr;};
    void deletePublishVpc() { this->publishVpc_ = nullptr;};
    inline bool getPublishVpc() const { DARABONBA_PTR_GET_DEFAULT(publishVpc_, false) };
    inline CreateVpnPbrRouteEntryRequest& setPublishVpc(bool publishVpc) { DARABONBA_PTR_SET_VALUE(publishVpc_, publishVpc) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateVpnPbrRouteEntryRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateVpnPbrRouteEntryRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateVpnPbrRouteEntryRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // routeDest Field Functions 
    bool hasRouteDest() const { return this->routeDest_ != nullptr;};
    void deleteRouteDest() { this->routeDest_ = nullptr;};
    inline string getRouteDest() const { DARABONBA_PTR_GET_DEFAULT(routeDest_, "") };
    inline CreateVpnPbrRouteEntryRequest& setRouteDest(string routeDest) { DARABONBA_PTR_SET_VALUE(routeDest_, routeDest) };


    // routeSource Field Functions 
    bool hasRouteSource() const { return this->routeSource_ != nullptr;};
    void deleteRouteSource() { this->routeSource_ = nullptr;};
    inline string getRouteSource() const { DARABONBA_PTR_GET_DEFAULT(routeSource_, "") };
    inline CreateVpnPbrRouteEntryRequest& setRouteSource(string routeSource) { DARABONBA_PTR_SET_VALUE(routeSource_, routeSource) };


    // vpnGatewayId Field Functions 
    bool hasVpnGatewayId() const { return this->vpnGatewayId_ != nullptr;};
    void deleteVpnGatewayId() { this->vpnGatewayId_ = nullptr;};
    inline string getVpnGatewayId() const { DARABONBA_PTR_GET_DEFAULT(vpnGatewayId_, "") };
    inline CreateVpnPbrRouteEntryRequest& setVpnGatewayId(string vpnGatewayId) { DARABONBA_PTR_SET_VALUE(vpnGatewayId_, vpnGatewayId) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline CreateVpnPbrRouteEntryRequest& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The ClientToken value can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system uses the **RequestId** of the API request as the **ClientToken**. The **RequestId** may be different for each API request.
    shared_ptr<string> clientToken_ {};
    // The description of the policy-based route.
    // 
    // The description must be 1 to 100 characters in length.
    shared_ptr<string> description_ {};
    // Specifies whether to perform a dry run. Valid values:
    // - **true**: performs a dry run without creating the route. The system checks the required parameters, request syntax, and business restrictions. If the check fails, the corresponding error is returned. If the check passes, the error code `DryRunOperation` is returned.
    // - **false** (default): performs a dry run and sends the request. If the check passes, an HTTP 2xx status code is returned and the operation is performed.
    shared_ptr<bool> dryRun_ {};
    // The next hop of the policy-based route.
    // 
    // This parameter is required.
    shared_ptr<string> nextHop_ {};
    // The tunneling protocol. Set the value to **Ipsec** (IPsec tunneling protocol).
    shared_ptr<string> overlayMode_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The policy priority of the policy-based routing entry. Valid values: **1** to **100**. Default value: **10**.
    // 
    // A smaller policy priority value indicates a higher priority of the routing entry.
    shared_ptr<int32_t> priority_ {};
    // Specifies whether to publish the policy-based route to the VPC route table. Valid values:
    // 
    // - **true**: Publishes the policy-based route to the VPC. The system publishes the route only to the VPC system route table, not to VPC custom route tables.
    // 
    //   If you want the VPC custom route table to contain this route, manually add it. For more information, see [CreateRouteEntry](https://help.aliyun.com/document_detail/448722.html).
    // 
    // - **false**: Does not publish the policy-based route to the VPC route table.
    // 
    //   You must manually add a policy-based route with the next hop pointing to the VPN gateway instance in both the VPC system route table and custom route tables. Otherwise, the VPC cannot access resources in the destination CIDR block through the IPsec-VPN connection.
    // 
    // This parameter is required.
    shared_ptr<bool> publishVpc_ {};
    // The region ID of the VPN gateway instance. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the region ID.
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
    // The ID of the VPN gateway instance.
    // 
    // This parameter is required.
    shared_ptr<string> vpnGatewayId_ {};
    // The weight of the policy-based routing entry.
    // 
    // When you use the same VPN gateway instance to establish active/standby IPsec-VPN connections, you can specify the active and standby links by configuring the weight of the policy-based routing entry. A policy-based routing entry with a weight of 100 is the active link by default, and a policy-based routing entry with a weight of 0 is the standby link by default.
    // 
    // You can configure health checks for the IPsec-VPN connection to automatically detect link connectivity. If the active link is down, the system automatically switches traffic to the standby link, ensuring high availability of the cloud connection. For more information, see [CreateVpnConnection](https://help.aliyun.com/document_detail/120391.html).
    // 
    // - **100**: The IPsec-VPN connection associated with the policy-based routing entry serves as the active link.
    // - **0**: The IPsec-VPN connection associated with the policy-based routing entry serves as the standby link.
    // 
    // > - When you specify active and standby links, the source and destination CIDR blocks of the active and standby policy-based routing entries must be the same.
    // > - For VPN gateway instances that support dual-tunnel pattern IPsec-VPN connections, you do not need to configure this parameter. A dual-tunnel pattern IPsec-VPN connection contains two tunnels that automatically form active/standby links. You do not need to specify active/standby links by configuring this parameter. If you configure this parameter, the parameter settings do not take effect.
    // 
    // This parameter is required.
    shared_ptr<int32_t> weight_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
