// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYROUTEDISTRIBUTIONSTRATEGYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYROUTEDISTRIBUTIONSTRATEGYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class ModifyRouteDistributionStrategyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyRouteDistributionStrategyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DestCidrBlock, destCidrBlock_);
      DARABONBA_PTR_TO_JSON(HcInstanceId, hcInstanceId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RouteDistribution, routeDistribution_);
      DARABONBA_PTR_TO_JSON(RouteSource, routeSource_);
      DARABONBA_PTR_TO_JSON(SmartAGId, smartAGId_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyRouteDistributionStrategyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DestCidrBlock, destCidrBlock_);
      DARABONBA_PTR_FROM_JSON(HcInstanceId, hcInstanceId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RouteDistribution, routeDistribution_);
      DARABONBA_PTR_FROM_JSON(RouteSource, routeSource_);
      DARABONBA_PTR_FROM_JSON(SmartAGId, smartAGId_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
    };
    ModifyRouteDistributionStrategyRequest() = default ;
    ModifyRouteDistributionStrategyRequest(const ModifyRouteDistributionStrategyRequest &) = default ;
    ModifyRouteDistributionStrategyRequest(ModifyRouteDistributionStrategyRequest &&) = default ;
    ModifyRouteDistributionStrategyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyRouteDistributionStrategyRequest() = default ;
    ModifyRouteDistributionStrategyRequest& operator=(const ModifyRouteDistributionStrategyRequest &) = default ;
    ModifyRouteDistributionStrategyRequest& operator=(ModifyRouteDistributionStrategyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->destCidrBlock_ == nullptr
        && this->hcInstanceId_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->routeDistribution_ == nullptr && this->routeSource_ == nullptr && this->smartAGId_ == nullptr && this->sourceType_ == nullptr; };
    // destCidrBlock Field Functions 
    bool hasDestCidrBlock() const { return this->destCidrBlock_ != nullptr;};
    void deleteDestCidrBlock() { this->destCidrBlock_ = nullptr;};
    inline string getDestCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(destCidrBlock_, "") };
    inline ModifyRouteDistributionStrategyRequest& setDestCidrBlock(string destCidrBlock) { DARABONBA_PTR_SET_VALUE(destCidrBlock_, destCidrBlock) };


    // hcInstanceId Field Functions 
    bool hasHcInstanceId() const { return this->hcInstanceId_ != nullptr;};
    void deleteHcInstanceId() { this->hcInstanceId_ = nullptr;};
    inline string getHcInstanceId() const { DARABONBA_PTR_GET_DEFAULT(hcInstanceId_, "") };
    inline ModifyRouteDistributionStrategyRequest& setHcInstanceId(string hcInstanceId) { DARABONBA_PTR_SET_VALUE(hcInstanceId_, hcInstanceId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyRouteDistributionStrategyRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyRouteDistributionStrategyRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyRouteDistributionStrategyRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyRouteDistributionStrategyRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyRouteDistributionStrategyRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // routeDistribution Field Functions 
    bool hasRouteDistribution() const { return this->routeDistribution_ != nullptr;};
    void deleteRouteDistribution() { this->routeDistribution_ = nullptr;};
    inline string getRouteDistribution() const { DARABONBA_PTR_GET_DEFAULT(routeDistribution_, "") };
    inline ModifyRouteDistributionStrategyRequest& setRouteDistribution(string routeDistribution) { DARABONBA_PTR_SET_VALUE(routeDistribution_, routeDistribution) };


    // routeSource Field Functions 
    bool hasRouteSource() const { return this->routeSource_ != nullptr;};
    void deleteRouteSource() { this->routeSource_ = nullptr;};
    inline string getRouteSource() const { DARABONBA_PTR_GET_DEFAULT(routeSource_, "") };
    inline ModifyRouteDistributionStrategyRequest& setRouteSource(string routeSource) { DARABONBA_PTR_SET_VALUE(routeSource_, routeSource) };


    // smartAGId Field Functions 
    bool hasSmartAGId() const { return this->smartAGId_ != nullptr;};
    void deleteSmartAGId() { this->smartAGId_ = nullptr;};
    inline string getSmartAGId() const { DARABONBA_PTR_GET_DEFAULT(smartAGId_, "") };
    inline ModifyRouteDistributionStrategyRequest& setSmartAGId(string smartAGId) { DARABONBA_PTR_SET_VALUE(smartAGId_, smartAGId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline ModifyRouteDistributionStrategyRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


  protected:
    // The destination CIDR block.
    // 
    // This parameter is required.
    shared_ptr<string> destCidrBlock_ {};
    // The ID of the health check instance.
    shared_ptr<string> hcInstanceId_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID of the Smart Access Gateway (SAG) instance.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The route advertisement policy. Valid values:
    // 
    // *   **publish**: advertises routes.
    // *   **no_publish**: does not advertise routes.
    // *   **no_publish_and_publish_on_health_success**: routes are advertised only when they pass the health check.
    // *   **no_publish_and_publish_on_health_fail**: routes are advertised only when they fail the health check.
    // *   **publish_and_revoke_on_health_success**: advertised routes are withdrawn only when they pass the health check.
    // *   **publish_and_revoke_on_health_fail**: advertised routes are withdrawn only when they fail the health check.
    // 
    // For more information, see [Configure health checks](https://help.aliyun.com/document_detail/163971.html) and [Advertise routes](https://help.aliyun.com/document_detail/163973.html).
    // 
    // This parameter is required.
    shared_ptr<string> routeDistribution_ {};
    // The source of routes. Valid values:
    // 
    // *   **Alibaba Cloud-facing routes**
    // 
    //     *   **The ID of the Virtual Private Cloud (VPC)**: learns routes from the VPC network.
    //     *   **The ID of the virtual border router (VBR)**: learns routes from the VBR.
    //     *   **The ID of the SAG instance**: learns routes from the SAG instance.
    // 
    // *   **Private network-facing routes**
    // 
    //     *   **STATIC**: static routes specified in the SAG console.
    //     *   **OSPF**: learns routes through the Open Shortest Path First (OSPF) protocol.
    //     *   **BGP**: learns routes through Border Gateway Protocol (BGP).
    // 
    // This parameter is required.
    shared_ptr<string> routeSource_ {};
    // The ID of the SAG instance.
    // 
    // This parameter is required.
    shared_ptr<string> smartAGId_ {};
    // The type of the route source. Valid values:
    // 
    // *   **cloud**: Alibaba Cloud-facing routes.
    // *   **local**: private network-facing routes.
    // 
    // This parameter is required.
    shared_ptr<string> sourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
