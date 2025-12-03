// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYLOADBALANCERINSTANCECHARGETYPEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYLOADBALANCERINSTANCECHARGETYPEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class ModifyLoadBalancerInstanceChargeTypeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyLoadBalancerInstanceChargeTypeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_TO_JSON(LoadBalancerSpec, loadBalancerSpec_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyLoadBalancerInstanceChargeTypeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerSpec, loadBalancerSpec_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    ModifyLoadBalancerInstanceChargeTypeRequest() = default ;
    ModifyLoadBalancerInstanceChargeTypeRequest(const ModifyLoadBalancerInstanceChargeTypeRequest &) = default ;
    ModifyLoadBalancerInstanceChargeTypeRequest(ModifyLoadBalancerInstanceChargeTypeRequest &&) = default ;
    ModifyLoadBalancerInstanceChargeTypeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyLoadBalancerInstanceChargeTypeRequest() = default ;
    ModifyLoadBalancerInstanceChargeTypeRequest& operator=(const ModifyLoadBalancerInstanceChargeTypeRequest &) = default ;
    ModifyLoadBalancerInstanceChargeTypeRequest& operator=(ModifyLoadBalancerInstanceChargeTypeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bandwidth_ == nullptr
        && return this->instanceChargeType_ == nullptr && return this->internetChargeType_ == nullptr && return this->loadBalancerId_ == nullptr && return this->loadBalancerSpec_ == nullptr && return this->ownerAccount_ == nullptr
        && return this->ownerId_ == nullptr && return this->regionId_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr; };
    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int32_t bandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
    inline ModifyLoadBalancerInstanceChargeTypeRequest& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // instanceChargeType Field Functions 
    bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
    void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
    inline string instanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
    inline ModifyLoadBalancerInstanceChargeTypeRequest& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


    // internetChargeType Field Functions 
    bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
    void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
    inline string internetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
    inline ModifyLoadBalancerInstanceChargeTypeRequest& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string loadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline ModifyLoadBalancerInstanceChargeTypeRequest& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


    // loadBalancerSpec Field Functions 
    bool hasLoadBalancerSpec() const { return this->loadBalancerSpec_ != nullptr;};
    void deleteLoadBalancerSpec() { this->loadBalancerSpec_ = nullptr;};
    inline string loadBalancerSpec() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerSpec_, "") };
    inline ModifyLoadBalancerInstanceChargeTypeRequest& setLoadBalancerSpec(string loadBalancerSpec) { DARABONBA_PTR_SET_VALUE(loadBalancerSpec_, loadBalancerSpec) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyLoadBalancerInstanceChargeTypeRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyLoadBalancerInstanceChargeTypeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyLoadBalancerInstanceChargeTypeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyLoadBalancerInstanceChargeTypeRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyLoadBalancerInstanceChargeTypeRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The maximum bandwidth of the Internet-facing CLB instance that is billed on a pay-by-bandwidth basis.
    // 
    // You do not need to set this parameter. The metering method of Internet data transfer for pay-by-LCU instances supports only pay-by-traffic.
    std::shared_ptr<int32_t> bandwidth_ = nullptr;
    // The metering method of the instance after the change.
    // 
    // Valid value: **PayByCLCU**. Only pay-by-LCU is supported.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceChargeType_ = nullptr;
    // The metering method of Internet data transfer after the change.
    // 
    // Valid value: **paybytraffic**.
    // 
    // > *   If the value of the **InstanceChargeType** parameter is set to **PayByCLCU**, only pay-by-data-transfer is supported.
    // >*   When you change the metering method, the new metering method takes effect at 00:00:00 the next day.
    std::shared_ptr<string> internetChargeType_ = nullptr;
    // The ID of the CLB instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> loadBalancerId_ = nullptr;
    // The specification of the CLB instance.
    // 
    // You do not need to set this parameter. For pay-as-you-go CLB instances, you can only change the metering method from pay-by-specification to pay-by-LCU. You cannot change the metering method from pay-by-LCU to pay-by-specification.
    std::shared_ptr<string> loadBalancerSpec_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID of the CLB instance.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
