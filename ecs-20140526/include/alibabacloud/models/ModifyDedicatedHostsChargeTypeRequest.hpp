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
        && this->clientToken_ == nullptr && this->dedicatedHostChargeType_ == nullptr && this->dedicatedHostIds_ == nullptr && this->detailFee_ == nullptr && this->dryRun_ == nullptr
        && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->period_ == nullptr && this->periodUnit_ == nullptr && this->regionId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline ModifyDedicatedHostsChargeTypeRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyDedicatedHostsChargeTypeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dedicatedHostChargeType Field Functions 
    bool hasDedicatedHostChargeType() const { return this->dedicatedHostChargeType_ != nullptr;};
    void deleteDedicatedHostChargeType() { this->dedicatedHostChargeType_ = nullptr;};
    inline string getDedicatedHostChargeType() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostChargeType_, "") };
    inline ModifyDedicatedHostsChargeTypeRequest& setDedicatedHostChargeType(string dedicatedHostChargeType) { DARABONBA_PTR_SET_VALUE(dedicatedHostChargeType_, dedicatedHostChargeType) };


    // dedicatedHostIds Field Functions 
    bool hasDedicatedHostIds() const { return this->dedicatedHostIds_ != nullptr;};
    void deleteDedicatedHostIds() { this->dedicatedHostIds_ = nullptr;};
    inline string getDedicatedHostIds() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostIds_, "") };
    inline ModifyDedicatedHostsChargeTypeRequest& setDedicatedHostIds(string dedicatedHostIds) { DARABONBA_PTR_SET_VALUE(dedicatedHostIds_, dedicatedHostIds) };


    // detailFee Field Functions 
    bool hasDetailFee() const { return this->detailFee_ != nullptr;};
    void deleteDetailFee() { this->detailFee_ = nullptr;};
    inline bool getDetailFee() const { DARABONBA_PTR_GET_DEFAULT(detailFee_, false) };
    inline ModifyDedicatedHostsChargeTypeRequest& setDetailFee(bool detailFee) { DARABONBA_PTR_SET_VALUE(detailFee_, detailFee) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline ModifyDedicatedHostsChargeTypeRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyDedicatedHostsChargeTypeRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyDedicatedHostsChargeTypeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline ModifyDedicatedHostsChargeTypeRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline ModifyDedicatedHostsChargeTypeRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyDedicatedHostsChargeTypeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyDedicatedHostsChargeTypeRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyDedicatedHostsChargeTypeRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // Specifies whether to automatically complete automatic payment. Valid values:
    // - true: Automatic payment is automatically completed. Make sure that your account balance is sufficient. Otherwise, abnormal orders are generated, and you can only cancel the orders.
    // - false: An order is generated but no payment is made.
    // 
    // Default value: true.
    // 
    // > If your payment method has insufficient balance, set AutoPay to false. An unpaid order is generated, and you can pay for the order on your own.
    shared_ptr<bool> autoPay_ {};
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but make sure that the token is unique among different requests. The ClientToken value can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    shared_ptr<string> clientToken_ {};
    // The new billable methods of the dedicated hosts. Valid values:
    // - PrePaid: transforms the billing method from pay-as-you-go to subscription.
    // - PostPaid: transforms the billing method from subscription to pay-as-you-go.
    // 
    // Default value: PrePaid.
    shared_ptr<string> dedicatedHostChargeType_ {};
    // The IDs of dedicated hosts. The value can be a JSON array that consists of up to 20 dedicated host IDs. Separate the IDs with commas (,).
    // 
    // This parameter is required.
    shared_ptr<string> dedicatedHostIds_ {};
    // Specifies whether to return the billing details when the billing method is changed from subscription to pay-as-you-go.
    // 
    // Default value: false.
    shared_ptr<bool> detailFee_ {};
    // Specifies whether to perform only a dry run. Valid values:
    // - true: performs only a dry run. The system checks the request for potential issues, including invalid AccessKey pairs, unauthorized RAM users, and missing parameter values. If the request fails the dry run, the corresponding error is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // - false: performs a dry run and sends the request. If the request passes the dry run, a 2XX HTTP status code is returned and the operation is performed.
    // 
    // Default value: false.
    shared_ptr<bool> dryRun_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The subscription renewal period. Valid values:
    // 
    // - If you set PeriodUnit to Week, the valid values of Period are 1, 2, 3, and 4.
    // - If you set PeriodUnit to Month, the valid values of Period are 1, 2, 3, 4, 5, 6, 7, 8, 9, 12, 24, 36, 48, and 60.
    shared_ptr<int32_t> period_ {};
    // The unit of the renewal period, which is the unit of the Period parameter. Valid values:
    // - Week
    // - Month
    // 
    // Default value: Month.
    shared_ptr<string> periodUnit_ {};
    // The region ID of the dedicated hosts. You can call [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
