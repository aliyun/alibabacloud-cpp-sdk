// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYLOADBALANCERPAYTYPEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYLOADBALANCERPAYTYPEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class ModifyLoadBalancerPayTypeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyLoadBalancerPayTypeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(PricingCycle, pricingCycle_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyLoadBalancerPayTypeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(PricingCycle, pricingCycle_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    ModifyLoadBalancerPayTypeRequest() = default ;
    ModifyLoadBalancerPayTypeRequest(const ModifyLoadBalancerPayTypeRequest &) = default ;
    ModifyLoadBalancerPayTypeRequest(ModifyLoadBalancerPayTypeRequest &&) = default ;
    ModifyLoadBalancerPayTypeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyLoadBalancerPayTypeRequest() = default ;
    ModifyLoadBalancerPayTypeRequest& operator=(const ModifyLoadBalancerPayTypeRequest &) = default ;
    ModifyLoadBalancerPayTypeRequest& operator=(ModifyLoadBalancerPayTypeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoPay_ == nullptr
        && return this->duration_ == nullptr && return this->loadBalancerId_ == nullptr && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr && return this->payType_ == nullptr
        && return this->pricingCycle_ == nullptr && return this->regionId_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr; };
    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool autoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline ModifyLoadBalancerPayTypeRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline ModifyLoadBalancerPayTypeRequest& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string loadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline ModifyLoadBalancerPayTypeRequest& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyLoadBalancerPayTypeRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyLoadBalancerPayTypeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline ModifyLoadBalancerPayTypeRequest& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // pricingCycle Field Functions 
    bool hasPricingCycle() const { return this->pricingCycle_ != nullptr;};
    void deletePricingCycle() { this->pricingCycle_ = nullptr;};
    inline string pricingCycle() const { DARABONBA_PTR_GET_DEFAULT(pricingCycle_, "") };
    inline ModifyLoadBalancerPayTypeRequest& setPricingCycle(string pricingCycle) { DARABONBA_PTR_SET_VALUE(pricingCycle_, pricingCycle) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyLoadBalancerPayTypeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyLoadBalancerPayTypeRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyLoadBalancerPayTypeRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // Specifies whether to enable automatic payment. Valid values:
    // 
    // *   **true**: yes
    // *   **false** (default): no
    // 
    // >  This parameter is valid only when the `PayType` parameter is set to **PrePay**. This parameter is valid only for pay-as-you-go instances.
    std::shared_ptr<bool> autoPay_ = nullptr;
    // The subscription duration.
    // 
    // *   If **PricingCycle** is set to **month**, the valid values are **1** to **9**.
    // *   If **PricingCycle** is set to **year**, the valid values are **1** to **3**.
    // 
    // >  This parameter is valid only when the **PayType** parameter is set to **PrePay**. This parameter is valid only for pay-as-you-go instances.
    std::shared_ptr<int32_t> duration_ = nullptr;
    // The ID of the CLB instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> loadBalancerId_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The billing method of the CLB instance. Valid values:
    // 
    // *   **PayOnDemand** (default): pay-as-you-go
    // 
    // To change the billing method of a pay-as-you-go CLB instance to subscription, you must set the parameter to **PrePay**. In addition, the previous billing method of the CLB instance must be **PayOnDemand**.
    std::shared_ptr<string> payType_ = nullptr;
    // The billing cycle.
    // 
    // Valid values: **year** and **month**.
    // 
    // >  This parameter is valid only when the **PayType** parameter is set to **PrePay**. This parameter is valid only for pay-as-you-go instances.
    std::shared_ptr<string> pricingCycle_ = nullptr;
    // The ID of the region where the CLB instance is deployed.
    // 
    // You can query the region ID from the [Regions and zones](https://help.aliyun.com/document_detail/40654.html) list or by calling the [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) operation.
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
