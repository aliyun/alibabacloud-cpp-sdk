// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYROUTERINTERFACEATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYROUTERINTERFACEATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ModifyRouterInterfaceAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyRouterInterfaceAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeleteHealthCheckIp, deleteHealthCheckIp_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(HcRate, hcRate_);
      DARABONBA_PTR_TO_JSON(HcThreshold, hcThreshold_);
      DARABONBA_PTR_TO_JSON(HealthCheckSourceIp, healthCheckSourceIp_);
      DARABONBA_PTR_TO_JSON(HealthCheckTargetIp, healthCheckTargetIp_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OppositeInterfaceId, oppositeInterfaceId_);
      DARABONBA_PTR_TO_JSON(OppositeInterfaceOwnerId, oppositeInterfaceOwnerId_);
      DARABONBA_PTR_TO_JSON(OppositeRouterId, oppositeRouterId_);
      DARABONBA_PTR_TO_JSON(OppositeRouterType, oppositeRouterType_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RouterInterfaceId, routerInterfaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyRouterInterfaceAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeleteHealthCheckIp, deleteHealthCheckIp_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(HcRate, hcRate_);
      DARABONBA_PTR_FROM_JSON(HcThreshold, hcThreshold_);
      DARABONBA_PTR_FROM_JSON(HealthCheckSourceIp, healthCheckSourceIp_);
      DARABONBA_PTR_FROM_JSON(HealthCheckTargetIp, healthCheckTargetIp_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OppositeInterfaceId, oppositeInterfaceId_);
      DARABONBA_PTR_FROM_JSON(OppositeInterfaceOwnerId, oppositeInterfaceOwnerId_);
      DARABONBA_PTR_FROM_JSON(OppositeRouterId, oppositeRouterId_);
      DARABONBA_PTR_FROM_JSON(OppositeRouterType, oppositeRouterType_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RouterInterfaceId, routerInterfaceId_);
    };
    ModifyRouterInterfaceAttributeRequest() = default ;
    ModifyRouterInterfaceAttributeRequest(const ModifyRouterInterfaceAttributeRequest &) = default ;
    ModifyRouterInterfaceAttributeRequest(ModifyRouterInterfaceAttributeRequest &&) = default ;
    ModifyRouterInterfaceAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyRouterInterfaceAttributeRequest() = default ;
    ModifyRouterInterfaceAttributeRequest& operator=(const ModifyRouterInterfaceAttributeRequest &) = default ;
    ModifyRouterInterfaceAttributeRequest& operator=(ModifyRouterInterfaceAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deleteHealthCheckIp_ != nullptr
        && this->description_ != nullptr && this->hcRate_ != nullptr && this->hcThreshold_ != nullptr && this->healthCheckSourceIp_ != nullptr && this->healthCheckTargetIp_ != nullptr
        && this->name_ != nullptr && this->oppositeInterfaceId_ != nullptr && this->oppositeInterfaceOwnerId_ != nullptr && this->oppositeRouterId_ != nullptr && this->oppositeRouterType_ != nullptr
        && this->ownerId_ != nullptr && this->regionId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->routerInterfaceId_ != nullptr; };
    // deleteHealthCheckIp Field Functions 
    bool hasDeleteHealthCheckIp() const { return this->deleteHealthCheckIp_ != nullptr;};
    void deleteDeleteHealthCheckIp() { this->deleteHealthCheckIp_ = nullptr;};
    inline bool deleteHealthCheckIp() const { DARABONBA_PTR_GET_DEFAULT(deleteHealthCheckIp_, false) };
    inline ModifyRouterInterfaceAttributeRequest& setDeleteHealthCheckIp(bool deleteHealthCheckIp) { DARABONBA_PTR_SET_VALUE(deleteHealthCheckIp_, deleteHealthCheckIp) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyRouterInterfaceAttributeRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // hcRate Field Functions 
    bool hasHcRate() const { return this->hcRate_ != nullptr;};
    void deleteHcRate() { this->hcRate_ = nullptr;};
    inline int32_t hcRate() const { DARABONBA_PTR_GET_DEFAULT(hcRate_, 0) };
    inline ModifyRouterInterfaceAttributeRequest& setHcRate(int32_t hcRate) { DARABONBA_PTR_SET_VALUE(hcRate_, hcRate) };


    // hcThreshold Field Functions 
    bool hasHcThreshold() const { return this->hcThreshold_ != nullptr;};
    void deleteHcThreshold() { this->hcThreshold_ = nullptr;};
    inline int32_t hcThreshold() const { DARABONBA_PTR_GET_DEFAULT(hcThreshold_, 0) };
    inline ModifyRouterInterfaceAttributeRequest& setHcThreshold(int32_t hcThreshold) { DARABONBA_PTR_SET_VALUE(hcThreshold_, hcThreshold) };


    // healthCheckSourceIp Field Functions 
    bool hasHealthCheckSourceIp() const { return this->healthCheckSourceIp_ != nullptr;};
    void deleteHealthCheckSourceIp() { this->healthCheckSourceIp_ = nullptr;};
    inline string healthCheckSourceIp() const { DARABONBA_PTR_GET_DEFAULT(healthCheckSourceIp_, "") };
    inline ModifyRouterInterfaceAttributeRequest& setHealthCheckSourceIp(string healthCheckSourceIp) { DARABONBA_PTR_SET_VALUE(healthCheckSourceIp_, healthCheckSourceIp) };


    // healthCheckTargetIp Field Functions 
    bool hasHealthCheckTargetIp() const { return this->healthCheckTargetIp_ != nullptr;};
    void deleteHealthCheckTargetIp() { this->healthCheckTargetIp_ = nullptr;};
    inline string healthCheckTargetIp() const { DARABONBA_PTR_GET_DEFAULT(healthCheckTargetIp_, "") };
    inline ModifyRouterInterfaceAttributeRequest& setHealthCheckTargetIp(string healthCheckTargetIp) { DARABONBA_PTR_SET_VALUE(healthCheckTargetIp_, healthCheckTargetIp) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyRouterInterfaceAttributeRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // oppositeInterfaceId Field Functions 
    bool hasOppositeInterfaceId() const { return this->oppositeInterfaceId_ != nullptr;};
    void deleteOppositeInterfaceId() { this->oppositeInterfaceId_ = nullptr;};
    inline string oppositeInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(oppositeInterfaceId_, "") };
    inline ModifyRouterInterfaceAttributeRequest& setOppositeInterfaceId(string oppositeInterfaceId) { DARABONBA_PTR_SET_VALUE(oppositeInterfaceId_, oppositeInterfaceId) };


    // oppositeInterfaceOwnerId Field Functions 
    bool hasOppositeInterfaceOwnerId() const { return this->oppositeInterfaceOwnerId_ != nullptr;};
    void deleteOppositeInterfaceOwnerId() { this->oppositeInterfaceOwnerId_ = nullptr;};
    inline int64_t oppositeInterfaceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(oppositeInterfaceOwnerId_, 0L) };
    inline ModifyRouterInterfaceAttributeRequest& setOppositeInterfaceOwnerId(int64_t oppositeInterfaceOwnerId) { DARABONBA_PTR_SET_VALUE(oppositeInterfaceOwnerId_, oppositeInterfaceOwnerId) };


    // oppositeRouterId Field Functions 
    bool hasOppositeRouterId() const { return this->oppositeRouterId_ != nullptr;};
    void deleteOppositeRouterId() { this->oppositeRouterId_ = nullptr;};
    inline string oppositeRouterId() const { DARABONBA_PTR_GET_DEFAULT(oppositeRouterId_, "") };
    inline ModifyRouterInterfaceAttributeRequest& setOppositeRouterId(string oppositeRouterId) { DARABONBA_PTR_SET_VALUE(oppositeRouterId_, oppositeRouterId) };


    // oppositeRouterType Field Functions 
    bool hasOppositeRouterType() const { return this->oppositeRouterType_ != nullptr;};
    void deleteOppositeRouterType() { this->oppositeRouterType_ = nullptr;};
    inline string oppositeRouterType() const { DARABONBA_PTR_GET_DEFAULT(oppositeRouterType_, "") };
    inline ModifyRouterInterfaceAttributeRequest& setOppositeRouterType(string oppositeRouterType) { DARABONBA_PTR_SET_VALUE(oppositeRouterType_, oppositeRouterType) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyRouterInterfaceAttributeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyRouterInterfaceAttributeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyRouterInterfaceAttributeRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyRouterInterfaceAttributeRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // routerInterfaceId Field Functions 
    bool hasRouterInterfaceId() const { return this->routerInterfaceId_ != nullptr;};
    void deleteRouterInterfaceId() { this->routerInterfaceId_ = nullptr;};
    inline string routerInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(routerInterfaceId_, "") };
    inline ModifyRouterInterfaceAttributeRequest& setRouterInterfaceId(string routerInterfaceId) { DARABONBA_PTR_SET_VALUE(routerInterfaceId_, routerInterfaceId) };


  protected:
    // Specifies whether to delete the health check IP addresses configured on the router interface. Valid values:
    // 
    // *   **true**
    // *   **false** (default)
    std::shared_ptr<bool> deleteHealthCheckIp_ = nullptr;
    // The description of the router interface.
    // 
    // The value must be 2 to 256 characters in length. It must start with a letter but cannot start with `http://` or `https://`.
    std::shared_ptr<string> description_ = nullptr;
    // The rate of health checks. Unit: milliseconds. The recommended value is **2000**. This value specifies the interval at which probe packets are sent during a health check.
    // 
    // In this example, **HcThreshold** is set to **8** and **HcRate** is set to **2000**. In this example, probe packets are sent from **HealthCheckSourceIp** (source address) to **HealthCheckTargetIp** (destination address) every 2,000 seconds. If no response is returned for eight consecutive times, the health check fails.
    std::shared_ptr<int32_t> hcRate_ = nullptr;
    // The healthy threshold. Unit: packets. We recommend that you set the value to **8**. This value specifies the number of probe packets that are sent during a health check.
    std::shared_ptr<int32_t> hcThreshold_ = nullptr;
    // The source IP address that is used to perform health checks. The source IP address must be an idle IP address of the local virtual private cloud (VPC).
    // 
    // >  You can set this parameter when an Express Connect circuit is used.
    std::shared_ptr<string> healthCheckSourceIp_ = nullptr;
    // The destination IP address that is used to perform health checks.
    // 
    // >  This parameter is required when **HealthCheckSourceIp** is specified.
    std::shared_ptr<string> healthCheckTargetIp_ = nullptr;
    // The name of the router interface.
    // 
    // The name must be 2 to 128 characters in length, and can contain letters, digits, underscores (_), and hyphens (-). The name must start with a letter.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the peer router interface.
    std::shared_ptr<string> oppositeInterfaceId_ = nullptr;
    // The ID of the Alibaba Cloud account to which the peer router interface belongs.
    std::shared_ptr<int64_t> oppositeInterfaceOwnerId_ = nullptr;
    // The ID of the peer router.
    std::shared_ptr<string> oppositeRouterId_ = nullptr;
    // The type of router to which the peer router interface belongs. Valid values:
    // 
    // *   **VRouter**
    // *   **VBR** (default)
    std::shared_ptr<string> oppositeRouterType_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID of the router interface.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The ID of the router interface.
    // 
    // This parameter is required.
    std::shared_ptr<string> routerInterfaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
