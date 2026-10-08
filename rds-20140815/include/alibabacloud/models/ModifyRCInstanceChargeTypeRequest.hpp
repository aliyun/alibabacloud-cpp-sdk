// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYRCINSTANCECHARGETYPEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYRCINSTANCECHARGETYPEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ModifyRCInstanceChargeTypeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyRCInstanceChargeTypeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(AutoUseCoupon, autoUseCoupon_);
      DARABONBA_PTR_TO_JSON(BusinessInfo, businessInfo_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(IncludeDataDisks, includeDataDisks_);
      DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PromotionCode, promotionCode_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(UsedTime, usedTime_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyRCInstanceChargeTypeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(AutoUseCoupon, autoUseCoupon_);
      DARABONBA_PTR_FROM_JSON(BusinessInfo, businessInfo_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(IncludeDataDisks, includeDataDisks_);
      DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PromotionCode, promotionCode_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(UsedTime, usedTime_);
    };
    ModifyRCInstanceChargeTypeRequest() = default ;
    ModifyRCInstanceChargeTypeRequest(const ModifyRCInstanceChargeTypeRequest &) = default ;
    ModifyRCInstanceChargeTypeRequest(ModifyRCInstanceChargeTypeRequest &&) = default ;
    ModifyRCInstanceChargeTypeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyRCInstanceChargeTypeRequest() = default ;
    ModifyRCInstanceChargeTypeRequest& operator=(const ModifyRCInstanceChargeTypeRequest &) = default ;
    ModifyRCInstanceChargeTypeRequest& operator=(ModifyRCInstanceChargeTypeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoPay_ == nullptr
        && this->autoRenew_ == nullptr && this->autoUseCoupon_ == nullptr && this->businessInfo_ == nullptr && this->clientToken_ == nullptr && this->dryRun_ == nullptr
        && this->includeDataDisks_ == nullptr && this->instanceChargeType_ == nullptr && this->instanceId_ == nullptr && this->instanceIds_ == nullptr && this->payType_ == nullptr
        && this->period_ == nullptr && this->promotionCode_ == nullptr && this->regionId_ == nullptr && this->usedTime_ == nullptr; };
    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline ModifyRCInstanceChargeTypeRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline string getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, "") };
    inline ModifyRCInstanceChargeTypeRequest& setAutoRenew(string autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // autoUseCoupon Field Functions 
    bool hasAutoUseCoupon() const { return this->autoUseCoupon_ != nullptr;};
    void deleteAutoUseCoupon() { this->autoUseCoupon_ = nullptr;};
    inline bool getAutoUseCoupon() const { DARABONBA_PTR_GET_DEFAULT(autoUseCoupon_, false) };
    inline ModifyRCInstanceChargeTypeRequest& setAutoUseCoupon(bool autoUseCoupon) { DARABONBA_PTR_SET_VALUE(autoUseCoupon_, autoUseCoupon) };


    // businessInfo Field Functions 
    bool hasBusinessInfo() const { return this->businessInfo_ != nullptr;};
    void deleteBusinessInfo() { this->businessInfo_ = nullptr;};
    inline string getBusinessInfo() const { DARABONBA_PTR_GET_DEFAULT(businessInfo_, "") };
    inline ModifyRCInstanceChargeTypeRequest& setBusinessInfo(string businessInfo) { DARABONBA_PTR_SET_VALUE(businessInfo_, businessInfo) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyRCInstanceChargeTypeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline ModifyRCInstanceChargeTypeRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // includeDataDisks Field Functions 
    bool hasIncludeDataDisks() const { return this->includeDataDisks_ != nullptr;};
    void deleteIncludeDataDisks() { this->includeDataDisks_ = nullptr;};
    inline bool getIncludeDataDisks() const { DARABONBA_PTR_GET_DEFAULT(includeDataDisks_, false) };
    inline ModifyRCInstanceChargeTypeRequest& setIncludeDataDisks(bool includeDataDisks) { DARABONBA_PTR_SET_VALUE(includeDataDisks_, includeDataDisks) };


    // instanceChargeType Field Functions 
    bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
    void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
    inline string getInstanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
    inline ModifyRCInstanceChargeTypeRequest& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyRCInstanceChargeTypeRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline string getInstanceIds() const { DARABONBA_PTR_GET_DEFAULT(instanceIds_, "") };
    inline ModifyRCInstanceChargeTypeRequest& setInstanceIds(string instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline ModifyRCInstanceChargeTypeRequest& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline ModifyRCInstanceChargeTypeRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // promotionCode Field Functions 
    bool hasPromotionCode() const { return this->promotionCode_ != nullptr;};
    void deletePromotionCode() { this->promotionCode_ = nullptr;};
    inline string getPromotionCode() const { DARABONBA_PTR_GET_DEFAULT(promotionCode_, "") };
    inline ModifyRCInstanceChargeTypeRequest& setPromotionCode(string promotionCode) { DARABONBA_PTR_SET_VALUE(promotionCode_, promotionCode) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyRCInstanceChargeTypeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // usedTime Field Functions 
    bool hasUsedTime() const { return this->usedTime_ != nullptr;};
    void deleteUsedTime() { this->usedTime_ = nullptr;};
    inline int32_t getUsedTime() const { DARABONBA_PTR_GET_DEFAULT(usedTime_, 0) };
    inline ModifyRCInstanceChargeTypeRequest& setUsedTime(int32_t usedTime) { DARABONBA_PTR_SET_VALUE(usedTime_, usedTime) };


  protected:
    // Reserved parameter. Not supported.
    shared_ptr<bool> autoPay_ {};
    // Specifies whether to enable auto-renewal. Valid values:
    // 
    // * **true**: Enabled (default).
    // * **false**: Disabled.
    // 
    // > * This parameter takes effect only when you switch from pay-as-you-go to subscription.
    // > * All non-**true** strings are treated as **false**.
    shared_ptr<string> autoRenew_ {};
    // Specifies whether to use coupons. Valid values:
    // * **true** (default): Coupons are used.
    // * **false**: Coupons are not used.
    shared_ptr<bool> autoUseCoupon_ {};
    // The business extension parameter.
    shared_ptr<string> businessInfo_ {};
    // The custom token that is used to ensure the idempotence of the request. 
    // > The token can contain only ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> clientToken_ {};
    // Reserved parameter. Not supported.
    shared_ptr<bool> dryRun_ {};
    // Reserved parameter. Not supported.
    shared_ptr<bool> includeDataDisks_ {};
    // Reserved parameter. Not supported.
    shared_ptr<string> instanceChargeType_ {};
    // The instance ID or cloud disk ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // Reserved parameter. Not supported.
    shared_ptr<string> instanceIds_ {};
    // The billing method of the instance after the change. Valid values:
    // * **Prepaid**: subscription.
    // * **Postpaid**: pay-as-you-go.
    shared_ptr<string> payType_ {};
    // The unit of the subscription duration. Valid values:
    // * **Year**: yearly subscription.
    // * **Month**: monthly subscription.
    // 
    // > This parameter is required if **PayType** is set to **Prepaid**.
    shared_ptr<string> period_ {};
    // The coupon code.
    shared_ptr<string> promotionCode_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The subscription duration. Valid values:
    // * If **Period** is set to **Year**, the valid values of UsedTime are **1 to 5**.
    // * If **Period** is set to **Month**, the valid values of UsedTime are **1 to 11**.
    // 
    // > This parameter is required if PayType is set to **Prepaid**.
    shared_ptr<int32_t> usedTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
