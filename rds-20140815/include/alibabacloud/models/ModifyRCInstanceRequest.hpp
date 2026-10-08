// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYRCINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYRCINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ModifyRCInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyRCInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(AutoUseCoupon, autoUseCoupon_);
      DARABONBA_PTR_TO_JSON(BusinessInfo, businessInfo_);
      DARABONBA_PTR_TO_JSON(Direction, direction_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(PromotionCode, promotionCode_);
      DARABONBA_PTR_TO_JSON(RebootTime, rebootTime_);
      DARABONBA_PTR_TO_JSON(RebootWhenFinished, rebootWhenFinished_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyRCInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(AutoUseCoupon, autoUseCoupon_);
      DARABONBA_PTR_FROM_JSON(BusinessInfo, businessInfo_);
      DARABONBA_PTR_FROM_JSON(Direction, direction_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(PromotionCode, promotionCode_);
      DARABONBA_PTR_FROM_JSON(RebootTime, rebootTime_);
      DARABONBA_PTR_FROM_JSON(RebootWhenFinished, rebootWhenFinished_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyRCInstanceRequest() = default ;
    ModifyRCInstanceRequest(const ModifyRCInstanceRequest &) = default ;
    ModifyRCInstanceRequest(ModifyRCInstanceRequest &&) = default ;
    ModifyRCInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyRCInstanceRequest() = default ;
    ModifyRCInstanceRequest& operator=(const ModifyRCInstanceRequest &) = default ;
    ModifyRCInstanceRequest& operator=(ModifyRCInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoPay_ == nullptr
        && this->autoUseCoupon_ == nullptr && this->businessInfo_ == nullptr && this->direction_ == nullptr && this->dryRun_ == nullptr && this->instanceId_ == nullptr
        && this->instanceType_ == nullptr && this->promotionCode_ == nullptr && this->rebootTime_ == nullptr && this->rebootWhenFinished_ == nullptr && this->regionId_ == nullptr; };
    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline ModifyRCInstanceRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // autoUseCoupon Field Functions 
    bool hasAutoUseCoupon() const { return this->autoUseCoupon_ != nullptr;};
    void deleteAutoUseCoupon() { this->autoUseCoupon_ = nullptr;};
    inline bool getAutoUseCoupon() const { DARABONBA_PTR_GET_DEFAULT(autoUseCoupon_, false) };
    inline ModifyRCInstanceRequest& setAutoUseCoupon(bool autoUseCoupon) { DARABONBA_PTR_SET_VALUE(autoUseCoupon_, autoUseCoupon) };


    // businessInfo Field Functions 
    bool hasBusinessInfo() const { return this->businessInfo_ != nullptr;};
    void deleteBusinessInfo() { this->businessInfo_ = nullptr;};
    inline string getBusinessInfo() const { DARABONBA_PTR_GET_DEFAULT(businessInfo_, "") };
    inline ModifyRCInstanceRequest& setBusinessInfo(string businessInfo) { DARABONBA_PTR_SET_VALUE(businessInfo_, businessInfo) };


    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline ModifyRCInstanceRequest& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline ModifyRCInstanceRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyRCInstanceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline ModifyRCInstanceRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // promotionCode Field Functions 
    bool hasPromotionCode() const { return this->promotionCode_ != nullptr;};
    void deletePromotionCode() { this->promotionCode_ = nullptr;};
    inline string getPromotionCode() const { DARABONBA_PTR_GET_DEFAULT(promotionCode_, "") };
    inline ModifyRCInstanceRequest& setPromotionCode(string promotionCode) { DARABONBA_PTR_SET_VALUE(promotionCode_, promotionCode) };


    // rebootTime Field Functions 
    bool hasRebootTime() const { return this->rebootTime_ != nullptr;};
    void deleteRebootTime() { this->rebootTime_ = nullptr;};
    inline string getRebootTime() const { DARABONBA_PTR_GET_DEFAULT(rebootTime_, "") };
    inline ModifyRCInstanceRequest& setRebootTime(string rebootTime) { DARABONBA_PTR_SET_VALUE(rebootTime_, rebootTime) };


    // rebootWhenFinished Field Functions 
    bool hasRebootWhenFinished() const { return this->rebootWhenFinished_ != nullptr;};
    void deleteRebootWhenFinished() { this->rebootWhenFinished_ = nullptr;};
    inline bool getRebootWhenFinished() const { DARABONBA_PTR_GET_DEFAULT(rebootWhenFinished_, false) };
    inline ModifyRCInstanceRequest& setRebootWhenFinished(bool rebootWhenFinished) { DARABONBA_PTR_SET_VALUE(rebootWhenFinished_, rebootWhenFinished) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyRCInstanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // Specifies whether to enable automatic payment. Valid values:
    // - **true** (default): Automatic payment is enabled. Make sure that your account balance is sufficient.
    // - **false**: An order is generated but payment is not automatically made.
    // > If your payment method balance is insufficient, set the parameter AutoPay to false. An unpaid order is generated, and you can log on to the ApsaraDB RDS console to complete the payment.
    // >
    shared_ptr<bool> autoPay_ {};
    // Specifies whether to automatically use coupons. Valid values:
    // * **true** (default): Coupons are automatically used.
    // * **false**: Coupons are not used.
    // 
    // > If you use coupons and then perform a downgrade, the amount deducted by coupons is not refunded.
    shared_ptr<bool> autoUseCoupon_ {};
    shared_ptr<string> businessInfo_ {};
    // The type of the Upgrade/Downgrade. Valid values:
    // > This parameter does not need to be uploaded. The system can automatically determine whether the change is an upgrade or a downgrade. If you upload this parameter, follow the rules below.
    // - **Up** (default): Upgrades the instance type. Make sure that your account payment method balance is sufficient.
    // - **Down**: Downgrades the instance type. Set Direction to down when the instance type specified by InstanceType is lower than the current instance type.
    shared_ptr<string> direction_ {};
    // Specifies whether to perform a dry run. Valid values:
    // * **true**: Performs a dry run without creating the instance. The system checks items such as the request parameters, request format, service limits, and available resources.
    // * **false** (default): Sends the request. If the request passes the check, the instance is created.
    shared_ptr<bool> dryRun_ {};
    // The instance ID.
    shared_ptr<string> instanceId_ {};
    // The target instance type. For information about the instance types supported by RDS Custom instances, see [RDS Custom instance types](https://help.aliyun.com/document_detail/2844823.html).
    shared_ptr<string> instanceType_ {};
    // The coupon code.
    shared_ptr<string> promotionCode_ {};
    // The restart time of the instance.
    // 
    // - If **RebootWhenFinished** is set to **false** and the instance status is **Running**, you **must** set a restart time within 48 hours.
    // - The time follows the ISO 8601 standard in UTC+0. Format: `yyyy-MM-ddTHH:mmZ`.
    shared_ptr<string> rebootTime_ {};
    // Specifies whether to immediately restart the instance after the specification change is complete. Valid values:
    // 
    // - **true** (default): The instance is restarted immediately.
    // - **false**: The instance is not restarted.
    // 
    // > If the instance is in the **Stopped** state, the instance remains in the Stopped state and is not restarted even if you set `RebootWhenFinished=true`.
    shared_ptr<bool> rebootWhenFinished_ {};
    // The region ID of the instance.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
