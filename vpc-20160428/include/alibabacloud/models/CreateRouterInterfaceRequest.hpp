// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEROUTERINTERFACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEROUTERINTERFACEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateRouterInterfaceRequestTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateRouterInterfaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRouterInterfaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessPointId, accessPointId_);
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FastLinkMode, fastLinkMode_);
      DARABONBA_PTR_TO_JSON(HealthCheckSourceIp, healthCheckSourceIp_);
      DARABONBA_PTR_TO_JSON(HealthCheckTargetIp, healthCheckTargetIp_);
      DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OppositeAccessPointId, oppositeAccessPointId_);
      DARABONBA_PTR_TO_JSON(OppositeInterfaceId, oppositeInterfaceId_);
      DARABONBA_PTR_TO_JSON(OppositeInterfaceOwnerId, oppositeInterfaceOwnerId_);
      DARABONBA_PTR_TO_JSON(OppositeRegionId, oppositeRegionId_);
      DARABONBA_PTR_TO_JSON(OppositeRouterId, oppositeRouterId_);
      DARABONBA_PTR_TO_JSON(OppositeRouterType, oppositeRouterType_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PricingCycle, pricingCycle_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Role, role_);
      DARABONBA_PTR_TO_JSON(RouterId, routerId_);
      DARABONBA_PTR_TO_JSON(RouterType, routerType_);
      DARABONBA_PTR_TO_JSON(Spec, spec_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRouterInterfaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessPointId, accessPointId_);
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FastLinkMode, fastLinkMode_);
      DARABONBA_PTR_FROM_JSON(HealthCheckSourceIp, healthCheckSourceIp_);
      DARABONBA_PTR_FROM_JSON(HealthCheckTargetIp, healthCheckTargetIp_);
      DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OppositeAccessPointId, oppositeAccessPointId_);
      DARABONBA_PTR_FROM_JSON(OppositeInterfaceId, oppositeInterfaceId_);
      DARABONBA_PTR_FROM_JSON(OppositeInterfaceOwnerId, oppositeInterfaceOwnerId_);
      DARABONBA_PTR_FROM_JSON(OppositeRegionId, oppositeRegionId_);
      DARABONBA_PTR_FROM_JSON(OppositeRouterId, oppositeRouterId_);
      DARABONBA_PTR_FROM_JSON(OppositeRouterType, oppositeRouterType_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PricingCycle, pricingCycle_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
      DARABONBA_PTR_FROM_JSON(RouterId, routerId_);
      DARABONBA_PTR_FROM_JSON(RouterType, routerType_);
      DARABONBA_PTR_FROM_JSON(Spec, spec_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    CreateRouterInterfaceRequest() = default ;
    CreateRouterInterfaceRequest(const CreateRouterInterfaceRequest &) = default ;
    CreateRouterInterfaceRequest(CreateRouterInterfaceRequest &&) = default ;
    CreateRouterInterfaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRouterInterfaceRequest() = default ;
    CreateRouterInterfaceRequest& operator=(const CreateRouterInterfaceRequest &) = default ;
    CreateRouterInterfaceRequest& operator=(CreateRouterInterfaceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessPointId_ != nullptr
        && this->autoPay_ != nullptr && this->autoRenew_ != nullptr && this->clientToken_ != nullptr && this->description_ != nullptr && this->fastLinkMode_ != nullptr
        && this->healthCheckSourceIp_ != nullptr && this->healthCheckTargetIp_ != nullptr && this->instanceChargeType_ != nullptr && this->name_ != nullptr && this->oppositeAccessPointId_ != nullptr
        && this->oppositeInterfaceId_ != nullptr && this->oppositeInterfaceOwnerId_ != nullptr && this->oppositeRegionId_ != nullptr && this->oppositeRouterId_ != nullptr && this->oppositeRouterType_ != nullptr
        && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->period_ != nullptr && this->pricingCycle_ != nullptr && this->regionId_ != nullptr
        && this->resourceGroupId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->role_ != nullptr && this->routerId_ != nullptr
        && this->routerType_ != nullptr && this->spec_ != nullptr && this->tags_ != nullptr; };
    // accessPointId Field Functions 
    bool hasAccessPointId() const { return this->accessPointId_ != nullptr;};
    void deleteAccessPointId() { this->accessPointId_ = nullptr;};
    inline string accessPointId() const { DARABONBA_PTR_GET_DEFAULT(accessPointId_, "") };
    inline CreateRouterInterfaceRequest& setAccessPointId(string accessPointId) { DARABONBA_PTR_SET_VALUE(accessPointId_, accessPointId) };


    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool autoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline CreateRouterInterfaceRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool autoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline CreateRouterInterfaceRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateRouterInterfaceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateRouterInterfaceRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // fastLinkMode Field Functions 
    bool hasFastLinkMode() const { return this->fastLinkMode_ != nullptr;};
    void deleteFastLinkMode() { this->fastLinkMode_ = nullptr;};
    inline bool fastLinkMode() const { DARABONBA_PTR_GET_DEFAULT(fastLinkMode_, false) };
    inline CreateRouterInterfaceRequest& setFastLinkMode(bool fastLinkMode) { DARABONBA_PTR_SET_VALUE(fastLinkMode_, fastLinkMode) };


    // healthCheckSourceIp Field Functions 
    bool hasHealthCheckSourceIp() const { return this->healthCheckSourceIp_ != nullptr;};
    void deleteHealthCheckSourceIp() { this->healthCheckSourceIp_ = nullptr;};
    inline string healthCheckSourceIp() const { DARABONBA_PTR_GET_DEFAULT(healthCheckSourceIp_, "") };
    inline CreateRouterInterfaceRequest& setHealthCheckSourceIp(string healthCheckSourceIp) { DARABONBA_PTR_SET_VALUE(healthCheckSourceIp_, healthCheckSourceIp) };


    // healthCheckTargetIp Field Functions 
    bool hasHealthCheckTargetIp() const { return this->healthCheckTargetIp_ != nullptr;};
    void deleteHealthCheckTargetIp() { this->healthCheckTargetIp_ = nullptr;};
    inline string healthCheckTargetIp() const { DARABONBA_PTR_GET_DEFAULT(healthCheckTargetIp_, "") };
    inline CreateRouterInterfaceRequest& setHealthCheckTargetIp(string healthCheckTargetIp) { DARABONBA_PTR_SET_VALUE(healthCheckTargetIp_, healthCheckTargetIp) };


    // instanceChargeType Field Functions 
    bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
    void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
    inline string instanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
    inline CreateRouterInterfaceRequest& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateRouterInterfaceRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // oppositeAccessPointId Field Functions 
    bool hasOppositeAccessPointId() const { return this->oppositeAccessPointId_ != nullptr;};
    void deleteOppositeAccessPointId() { this->oppositeAccessPointId_ = nullptr;};
    inline string oppositeAccessPointId() const { DARABONBA_PTR_GET_DEFAULT(oppositeAccessPointId_, "") };
    inline CreateRouterInterfaceRequest& setOppositeAccessPointId(string oppositeAccessPointId) { DARABONBA_PTR_SET_VALUE(oppositeAccessPointId_, oppositeAccessPointId) };


    // oppositeInterfaceId Field Functions 
    bool hasOppositeInterfaceId() const { return this->oppositeInterfaceId_ != nullptr;};
    void deleteOppositeInterfaceId() { this->oppositeInterfaceId_ = nullptr;};
    inline string oppositeInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(oppositeInterfaceId_, "") };
    inline CreateRouterInterfaceRequest& setOppositeInterfaceId(string oppositeInterfaceId) { DARABONBA_PTR_SET_VALUE(oppositeInterfaceId_, oppositeInterfaceId) };


    // oppositeInterfaceOwnerId Field Functions 
    bool hasOppositeInterfaceOwnerId() const { return this->oppositeInterfaceOwnerId_ != nullptr;};
    void deleteOppositeInterfaceOwnerId() { this->oppositeInterfaceOwnerId_ = nullptr;};
    inline string oppositeInterfaceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(oppositeInterfaceOwnerId_, "") };
    inline CreateRouterInterfaceRequest& setOppositeInterfaceOwnerId(string oppositeInterfaceOwnerId) { DARABONBA_PTR_SET_VALUE(oppositeInterfaceOwnerId_, oppositeInterfaceOwnerId) };


    // oppositeRegionId Field Functions 
    bool hasOppositeRegionId() const { return this->oppositeRegionId_ != nullptr;};
    void deleteOppositeRegionId() { this->oppositeRegionId_ = nullptr;};
    inline string oppositeRegionId() const { DARABONBA_PTR_GET_DEFAULT(oppositeRegionId_, "") };
    inline CreateRouterInterfaceRequest& setOppositeRegionId(string oppositeRegionId) { DARABONBA_PTR_SET_VALUE(oppositeRegionId_, oppositeRegionId) };


    // oppositeRouterId Field Functions 
    bool hasOppositeRouterId() const { return this->oppositeRouterId_ != nullptr;};
    void deleteOppositeRouterId() { this->oppositeRouterId_ = nullptr;};
    inline string oppositeRouterId() const { DARABONBA_PTR_GET_DEFAULT(oppositeRouterId_, "") };
    inline CreateRouterInterfaceRequest& setOppositeRouterId(string oppositeRouterId) { DARABONBA_PTR_SET_VALUE(oppositeRouterId_, oppositeRouterId) };


    // oppositeRouterType Field Functions 
    bool hasOppositeRouterType() const { return this->oppositeRouterType_ != nullptr;};
    void deleteOppositeRouterType() { this->oppositeRouterType_ = nullptr;};
    inline string oppositeRouterType() const { DARABONBA_PTR_GET_DEFAULT(oppositeRouterType_, "") };
    inline CreateRouterInterfaceRequest& setOppositeRouterType(string oppositeRouterType) { DARABONBA_PTR_SET_VALUE(oppositeRouterType_, oppositeRouterType) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateRouterInterfaceRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateRouterInterfaceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline CreateRouterInterfaceRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // pricingCycle Field Functions 
    bool hasPricingCycle() const { return this->pricingCycle_ != nullptr;};
    void deletePricingCycle() { this->pricingCycle_ = nullptr;};
    inline string pricingCycle() const { DARABONBA_PTR_GET_DEFAULT(pricingCycle_, "") };
    inline CreateRouterInterfaceRequest& setPricingCycle(string pricingCycle) { DARABONBA_PTR_SET_VALUE(pricingCycle_, pricingCycle) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateRouterInterfaceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateRouterInterfaceRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateRouterInterfaceRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateRouterInterfaceRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline CreateRouterInterfaceRequest& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // routerId Field Functions 
    bool hasRouterId() const { return this->routerId_ != nullptr;};
    void deleteRouterId() { this->routerId_ = nullptr;};
    inline string routerId() const { DARABONBA_PTR_GET_DEFAULT(routerId_, "") };
    inline CreateRouterInterfaceRequest& setRouterId(string routerId) { DARABONBA_PTR_SET_VALUE(routerId_, routerId) };


    // routerType Field Functions 
    bool hasRouterType() const { return this->routerType_ != nullptr;};
    void deleteRouterType() { this->routerType_ = nullptr;};
    inline string routerType() const { DARABONBA_PTR_GET_DEFAULT(routerType_, "") };
    inline CreateRouterInterfaceRequest& setRouterType(string routerType) { DARABONBA_PTR_SET_VALUE(routerType_, routerType) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string spec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline CreateRouterInterfaceRequest& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreateRouterInterfaceRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreateRouterInterfaceRequestTags>) };
    inline vector<CreateRouterInterfaceRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<CreateRouterInterfaceRequestTags>) };
    inline CreateRouterInterfaceRequest& setTags(const vector<CreateRouterInterfaceRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateRouterInterfaceRequest& setTags(vector<CreateRouterInterfaceRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The ID of the access point to which the VBR belongs.
    // 
    // You can call the [DescribeAccessPoints](https://help.aliyun.com/document_detail/36062.html) operation to obtain the IDs of access points.
    // 
    // >  This parameter is required if the VBR is connected to an Express Connect circuit.
    std::shared_ptr<string> accessPointId_ = nullptr;
    // Specifies whether to enable automatic payment. Valid values:
    // 
    // *   **false** (default): The automatic payment is disabled. If you select this option, you must go to the Order Center to complete the payment after an order is generated.
    // *   **true**: The automatic payment is enabled. Payments are automatically complete after an order is generated.
    // 
    // >  This parameter is required if **InstanceChargeType** is set to **PrePaid**.
    std::shared_ptr<bool> autoPay_ = nullptr;
    // Specifies whether to enable auto-renewal. Valid values:
    // 
    // *   **false** (default)
    // *   **true**
    std::shared_ptr<bool> autoRenew_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests.
    // 
    // >  If you do not specify this parameter, the system automatically uses the request ID as the client token. The request ID may be different for each request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The description of the router interface.
    // 
    // The description must be 2 to 256 characters in length. It must start with a letter but cannot start with `http://` or `https://`.
    std::shared_ptr<string> description_ = nullptr;
    // Specifies whether the VBR that is created in the Fast Link mode is uplinked to the router interface. The Fast Link mode helps automatically connect router interfaces that are created for the VBR and its peer VPC. Valid values:
    // 
    // *   **true**
    // *   **false**
    // 
    // > 
    // 
    // *   This parameter takes effect only if **RouterType** is set to **VBR** and **OppositeRouterType** is set to **VRouter**.
    // 
    // *   If **FastLinkMode** is set to **true**, **Role** must be set to **InitiatingSide**. In this case, **AccessPointId**, **OppositeRouterType**, **OpppsiteRouterId**, and **OppositeInterfaceOwnerId** are required.
    std::shared_ptr<bool> fastLinkMode_ = nullptr;
    // The source IP address that is used to perform health checks. The source IP address must be an idle IP address of the local virtual private cloud (VPC).
    // 
    // >  You can set this parameter when an Express Connect circuit is used.
    std::shared_ptr<string> healthCheckSourceIp_ = nullptr;
    // The destination IP address that is used to perform health checks.
    // 
    // >  This parameter is required if you specify **HealthCheckSourceIp**
    std::shared_ptr<string> healthCheckTargetIp_ = nullptr;
    // The billing method of the router interface. Valid values:
    // 
    // *   **PrePaid**: subscription
    // *   **PostPaid**: pay-as-you-go
    std::shared_ptr<string> instanceChargeType_ = nullptr;
    // The name of the router interface.
    // 
    // The name must be 2 to 128 characters in length, and can contain letters, digits, periods (.), underscores (_), and hyphens (-).
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the access point to which the peer belongs.
    // 
    // >  This parameter is required if the peer router interface is associated with a VBR. The specified value cannot be changed after the router interface is created.
    std::shared_ptr<string> oppositeAccessPointId_ = nullptr;
    // The ID of the peer router interface.
    std::shared_ptr<string> oppositeInterfaceId_ = nullptr;
    // The ID of the Alibaba Cloud account to which the peer router interface belongs.
    std::shared_ptr<string> oppositeInterfaceOwnerId_ = nullptr;
    // The ID of the region in which the acceptor is deployed.
    // 
    // This parameter is required.
    std::shared_ptr<string> oppositeRegionId_ = nullptr;
    // The ID of the peer router.
    std::shared_ptr<string> oppositeRouterId_ = nullptr;
    // The type of router that is associated with the peer router interface. Valid values:
    // 
    // *   **VRouter**
    // *   **VBR**
    std::shared_ptr<string> oppositeRouterType_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The subscription duration. Valid values:
    // 
    // *   Valid values when PricingCycle is set to Month: **1 to 9**.
    // *   Valid values when PricingCycle is set to Year: **1 to 3**.
    // 
    // >  This parameter is required if **InstanceChargeType** is set to **PrePaid**.
    std::shared_ptr<int32_t> period_ = nullptr;
    // The billing cycle of the subscription. Valid values:
    // 
    // *   **Month** (default)
    // *   **Year**
    // 
    // >  This parameter is required if **InstanceChargeType** is set to **PrePaid**.
    std::shared_ptr<string> pricingCycle_ = nullptr;
    // The ID of the region to which the router interface belongs.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to obtain the region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group.
    // 
    // For more information about resource group, see [What is Resource Management?](https://help.aliyun.com/document_detail/94475.html)
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The role of the router interface. Valid values:
    // 
    // *   **InitiatingSide**: requester
    // *   **AcceptingSide**: acceptor
    // 
    // This parameter is required.
    std::shared_ptr<string> role_ = nullptr;
    // The ID of the router that is associated with the router interface.
    // 
    // This parameter is required.
    std::shared_ptr<string> routerId_ = nullptr;
    // The type of router that is associated with the router interface. Valid values:
    // 
    // *   **VRouter**
    // *   **VBR**
    // 
    // This parameter is required.
    std::shared_ptr<string> routerType_ = nullptr;
    // The specification of the router interface and the corresponding bandwidth. Valid values:
    // 
    // *   **Mini.2**: 2 Mbit/s
    // *   **Mini.5**: 5 Mbit/s
    // *   **Small.1**: 10 Mbit/s
    // *   **Small.2**: 20 Mbit/s
    // *   **Small.5**: 50 Mbit/s
    // *   **Middle.1**: 100 Mbit/s
    // *   **Middle.2**: 200 Mbit/s
    // *   **Middle.5**: 500 Mbit/s
    // *   **Large.1**: 1,000 Mbit/s
    // *   **Large.2**: 2,000 Mbit/s
    // *   **Large.5**: 5,000 Mbit/s
    // *   **Xlarge.1**: 10,000 Mbit/s
    // 
    // >  If **Role** is set to **AcceptingSide**, set **Spec** to **Negative**. This indicates that you do not need to specify the specification when you create an acceptor router interface.
    // 
    // This parameter is required.
    std::shared_ptr<string> spec_ = nullptr;
    // The tag to add to the resource.
    std::shared_ptr<vector<CreateRouterInterfaceRequestTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
