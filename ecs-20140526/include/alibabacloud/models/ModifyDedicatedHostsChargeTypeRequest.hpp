// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDEDICATEDHOSTSCHARGETYPEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDEDICATEDHOSTSCHARGETYPEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ModifyDedicatedHostsChargeTypeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDedicatedHostsChargeTypeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DedicatedHostChargeType, dedicatedHostChargeType_);
      DARABONBA_PTR_TO_JSON(DedicatedHostIds, dedicatedHostIds_);
      DARABONBA_PTR_TO_JSON(DetailFee, detailFee_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDedicatedHostsChargeTypeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DedicatedHostChargeType, dedicatedHostChargeType_);
      DARABONBA_PTR_FROM_JSON(DedicatedHostIds, dedicatedHostIds_);
      DARABONBA_PTR_FROM_JSON(DetailFee, detailFee_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    ModifyDedicatedHostsChargeTypeRequest() = default ;
    ModifyDedicatedHostsChargeTypeRequest(const ModifyDedicatedHostsChargeTypeRequest &) = default ;
    ModifyDedicatedHostsChargeTypeRequest(ModifyDedicatedHostsChargeTypeRequest &&) = default ;
    ModifyDedicatedHostsChargeTypeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDedicatedHostsChargeTypeRequest() = default ;
    ModifyDedicatedHostsChargeTypeRequest& operator=(const ModifyDedicatedHostsChargeTypeRequest &) = default ;
    ModifyDedicatedHostsChargeTypeRequest& operator=(ModifyDedicatedHostsChargeTypeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoPay_ == nullptr
        && return this->clientToken_ == nullptr && return this->dedicatedHostChargeType_ == nullptr && return this->dedicatedHostIds_ == nullptr && return this->detailFee_ == nullptr && return this->dryRun_ == nullptr
        && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr && return this->period_ == nullptr && return this->periodUnit_ == nullptr && return this->regionId_ == nullptr
        && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr; };
    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool autoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline ModifyDedicatedHostsChargeTypeRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyDedicatedHostsChargeTypeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dedicatedHostChargeType Field Functions 
    bool hasDedicatedHostChargeType() const { return this->dedicatedHostChargeType_ != nullptr;};
    void deleteDedicatedHostChargeType() { this->dedicatedHostChargeType_ = nullptr;};
    inline string dedicatedHostChargeType() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostChargeType_, "") };
    inline ModifyDedicatedHostsChargeTypeRequest& setDedicatedHostChargeType(string dedicatedHostChargeType) { DARABONBA_PTR_SET_VALUE(dedicatedHostChargeType_, dedicatedHostChargeType) };


    // dedicatedHostIds Field Functions 
    bool hasDedicatedHostIds() const { return this->dedicatedHostIds_ != nullptr;};
    void deleteDedicatedHostIds() { this->dedicatedHostIds_ = nullptr;};
    inline string dedicatedHostIds() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostIds_, "") };
    inline ModifyDedicatedHostsChargeTypeRequest& setDedicatedHostIds(string dedicatedHostIds) { DARABONBA_PTR_SET_VALUE(dedicatedHostIds_, dedicatedHostIds) };


    // detailFee Field Functions 
    bool hasDetailFee() const { return this->detailFee_ != nullptr;};
    void deleteDetailFee() { this->detailFee_ = nullptr;};
    inline bool detailFee() const { DARABONBA_PTR_GET_DEFAULT(detailFee_, false) };
    inline ModifyDedicatedHostsChargeTypeRequest& setDetailFee(bool detailFee) { DARABONBA_PTR_SET_VALUE(detailFee_, detailFee) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline ModifyDedicatedHostsChargeTypeRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyDedicatedHostsChargeTypeRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyDedicatedHostsChargeTypeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline ModifyDedicatedHostsChargeTypeRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string periodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline ModifyDedicatedHostsChargeTypeRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyDedicatedHostsChargeTypeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyDedicatedHostsChargeTypeRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyDedicatedHostsChargeTypeRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // Specifies whether to automatically complete the payment. Valid values:
    // 
    // *   true: The payment is automatically completed. Make sure that your account balance is sufficient. Otherwise, your order becomes invalid and must be canceled.
    // *   false: An order is generated but no payment is made.
    // 
    // Default value: true.
    // 
    // > If you do not have sufficient balance in your account, you can set `AutoPay` to `false` to generate an unpaid order. Then, you can pay for the order.
    std::shared_ptr<bool> autoPay_ = nullptr;
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The `token` can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    std::shared_ptr<string> clientToken_ = nullptr;
    // The new billing method for the dedicated host. Valid values:
    // 
    // *   PrePaid: changes the billing method from pay-as-you-go to subscription.
    // *   PostPaid: changes the billing method from subscription to pay-as-you-go.
    // 
    // Default value: PrePaid.
    std::shared_ptr<string> dedicatedHostChargeType_ = nullptr;
    // The IDs of the dedicated hosts. The value can be a JSON array that consists of up to 20 dedicated host IDs. Separate the IDs with commas (,).
    // 
    // This parameter is required.
    std::shared_ptr<string> dedicatedHostIds_ = nullptr;
    // Specifies whether to return the billing details of the order when the billing method is changed from subscription to pay-as-you-go.
    // 
    // Default value: false.
    std::shared_ptr<bool> detailFee_ = nullptr;
    // Specifies whether to perform only a dry run. Valid values:
    // 
    // *   true: performs only a dry run. The system checks the request for potential issues, including invalid AccessKey pairs, unauthorized Resource Access Management (RAM) users, and missing parameter values. Otherwise, an error message is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   false: performs a dry run and performs the actual request. If the request passes the dry run, a 2xx HTTP status code is returned and the operation is performed.
    // 
    // Default value: false.
    std::shared_ptr<bool> dryRun_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The renewal duration of the subscription dedicated hosts. Valid values:
    // 
    // *   If you set `PeriodUnit` to Week, valid values of `Period` are 1, 2, 3, and 4.
    // *   If you set `PeriodUnit` to Month, valid values of `Period` are 1, 2, 3, 4, 5, 6, 7, 8, 9, 12, 24, 36, 48, and 60.
    std::shared_ptr<int32_t> period_ = nullptr;
    // The unit of the renewal duration specified by `Period`. Valid values:
    // 
    // *   Week
    // *   Month
    // 
    // Default value: Month.
    std::shared_ptr<string> periodUnit_ = nullptr;
    // The region ID of the dedicated hosts. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
