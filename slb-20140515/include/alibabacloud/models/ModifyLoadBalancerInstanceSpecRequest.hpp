// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYLOADBALANCERINSTANCESPECREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYLOADBALANCERINSTANCESPECREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class ModifyLoadBalancerInstanceSpecRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyLoadBalancerInstanceSpecRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_TO_JSON(LoadBalancerSpec, loadBalancerSpec_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyLoadBalancerInstanceSpecRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerSpec, loadBalancerSpec_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    ModifyLoadBalancerInstanceSpecRequest() = default ;
    ModifyLoadBalancerInstanceSpecRequest(const ModifyLoadBalancerInstanceSpecRequest &) = default ;
    ModifyLoadBalancerInstanceSpecRequest(ModifyLoadBalancerInstanceSpecRequest &&) = default ;
    ModifyLoadBalancerInstanceSpecRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyLoadBalancerInstanceSpecRequest() = default ;
    ModifyLoadBalancerInstanceSpecRequest& operator=(const ModifyLoadBalancerInstanceSpecRequest &) = default ;
    ModifyLoadBalancerInstanceSpecRequest& operator=(ModifyLoadBalancerInstanceSpecRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoPay_ == nullptr
        && return this->loadBalancerId_ == nullptr && return this->loadBalancerSpec_ == nullptr && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr && return this->regionId_ == nullptr
        && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr; };
    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool autoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline ModifyLoadBalancerInstanceSpecRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string loadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline ModifyLoadBalancerInstanceSpecRequest& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


    // loadBalancerSpec Field Functions 
    bool hasLoadBalancerSpec() const { return this->loadBalancerSpec_ != nullptr;};
    void deleteLoadBalancerSpec() { this->loadBalancerSpec_ = nullptr;};
    inline string loadBalancerSpec() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerSpec_, "") };
    inline ModifyLoadBalancerInstanceSpecRequest& setLoadBalancerSpec(string loadBalancerSpec) { DARABONBA_PTR_SET_VALUE(loadBalancerSpec_, loadBalancerSpec) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyLoadBalancerInstanceSpecRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyLoadBalancerInstanceSpecRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyLoadBalancerInstanceSpecRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyLoadBalancerInstanceSpecRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyLoadBalancerInstanceSpecRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // Specifies whether to enable automatic payment. Valid values:
    // 
    // *   **true**: automatically completes the payment.
    // *   **false** (default): If you select this option, you must complete the payment in the Order Center.
    // 
    // > This parameter takes effect only for subscription instances.
    std::shared_ptr<bool> autoPay_ = nullptr;
    // The ID of the CLB instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> loadBalancerId_ = nullptr;
    // The specification of the CLB instance. Valid values:
    // 
    // *   **slb.s1.small**
    // *   **slb.s2.small**
    // *   **slb.s2.medium**
    // *   **slb.s3.small**
    // *   **slb.s3.medium**
    // *   **slb.s3.large**
    // 
    // The specifications available vary by region. For more information about the specifications, see [High-performance CLB instance](https://help.aliyun.com/document_detail/85931.html).
    // 
    // > When you switch a shared-resource CLB instance to a high-performance CLB instance, your service may be interrupted for 10 to 30 seconds. We recommend that you modify the specification during off-peak hours or use Alibaba Cloud DNS to schedule your workloads to another CLB instance before you modify the specification.
    // 
    // This parameter is required.
    std::shared_ptr<string> loadBalancerSpec_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID of the CLB instance.
    // 
    // You can query the region ID from the [Regions and zones](https://help.aliyun.com/document_detail/40654.html) list or by calling the [DescribeRegions](https://help.aliyun.com/document_detail/27584.html) operation.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
