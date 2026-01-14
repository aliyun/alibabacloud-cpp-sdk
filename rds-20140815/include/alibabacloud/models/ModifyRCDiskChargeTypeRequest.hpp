// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYRCDISKCHARGETYPEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYRCDISKCHARGETYPEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ModifyRCDiskChargeTypeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyRCDiskChargeTypeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(AutoUseCoupon, autoUseCoupon_);
      DARABONBA_PTR_TO_JSON(BusinessInfo, businessInfo_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PromotionCode, promotionCode_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(UsedTime, usedTime_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyRCDiskChargeTypeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(AutoUseCoupon, autoUseCoupon_);
      DARABONBA_PTR_FROM_JSON(BusinessInfo, businessInfo_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PromotionCode, promotionCode_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(UsedTime, usedTime_);
    };
    ModifyRCDiskChargeTypeRequest() = default ;
    ModifyRCDiskChargeTypeRequest(const ModifyRCDiskChargeTypeRequest &) = default ;
    ModifyRCDiskChargeTypeRequest(ModifyRCDiskChargeTypeRequest &&) = default ;
    ModifyRCDiskChargeTypeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyRCDiskChargeTypeRequest() = default ;
    ModifyRCDiskChargeTypeRequest& operator=(const ModifyRCDiskChargeTypeRequest &) = default ;
    ModifyRCDiskChargeTypeRequest& operator=(ModifyRCDiskChargeTypeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoPay_ == nullptr
        && this->autoRenew_ == nullptr && this->autoUseCoupon_ == nullptr && this->businessInfo_ == nullptr && this->clientToken_ == nullptr && this->instanceId_ == nullptr
        && this->payType_ == nullptr && this->period_ == nullptr && this->promotionCode_ == nullptr && this->regionId_ == nullptr && this->usedTime_ == nullptr; };
    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline ModifyRCDiskChargeTypeRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline string getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, "") };
    inline ModifyRCDiskChargeTypeRequest& setAutoRenew(string autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // autoUseCoupon Field Functions 
    bool hasAutoUseCoupon() const { return this->autoUseCoupon_ != nullptr;};
    void deleteAutoUseCoupon() { this->autoUseCoupon_ = nullptr;};
    inline bool getAutoUseCoupon() const { DARABONBA_PTR_GET_DEFAULT(autoUseCoupon_, false) };
    inline ModifyRCDiskChargeTypeRequest& setAutoUseCoupon(bool autoUseCoupon) { DARABONBA_PTR_SET_VALUE(autoUseCoupon_, autoUseCoupon) };


    // businessInfo Field Functions 
    bool hasBusinessInfo() const { return this->businessInfo_ != nullptr;};
    void deleteBusinessInfo() { this->businessInfo_ = nullptr;};
    inline string getBusinessInfo() const { DARABONBA_PTR_GET_DEFAULT(businessInfo_, "") };
    inline ModifyRCDiskChargeTypeRequest& setBusinessInfo(string businessInfo) { DARABONBA_PTR_SET_VALUE(businessInfo_, businessInfo) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyRCDiskChargeTypeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyRCDiskChargeTypeRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline ModifyRCDiskChargeTypeRequest& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline ModifyRCDiskChargeTypeRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // promotionCode Field Functions 
    bool hasPromotionCode() const { return this->promotionCode_ != nullptr;};
    void deletePromotionCode() { this->promotionCode_ = nullptr;};
    inline string getPromotionCode() const { DARABONBA_PTR_GET_DEFAULT(promotionCode_, "") };
    inline ModifyRCDiskChargeTypeRequest& setPromotionCode(string promotionCode) { DARABONBA_PTR_SET_VALUE(promotionCode_, promotionCode) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyRCDiskChargeTypeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // usedTime Field Functions 
    bool hasUsedTime() const { return this->usedTime_ != nullptr;};
    void deleteUsedTime() { this->usedTime_ = nullptr;};
    inline int32_t getUsedTime() const { DARABONBA_PTR_GET_DEFAULT(usedTime_, 0) };
    inline ModifyRCDiskChargeTypeRequest& setUsedTime(int32_t usedTime) { DARABONBA_PTR_SET_VALUE(usedTime_, usedTime) };


  protected:
    shared_ptr<bool> autoPay_ {};
    shared_ptr<string> autoRenew_ {};
    shared_ptr<bool> autoUseCoupon_ {};
    shared_ptr<string> businessInfo_ {};
    shared_ptr<string> clientToken_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> payType_ {};
    shared_ptr<string> period_ {};
    shared_ptr<string> promotionCode_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<int32_t> usedTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
