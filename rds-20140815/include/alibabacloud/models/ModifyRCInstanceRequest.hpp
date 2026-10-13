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
    // - **true** (default): enables automatic payment. Make sure that your account balance is sufficient.
    // - **false**: generates an order without deducting fees.
    // > If your account balance is insufficient, you can set the AutoPay parameter to false. An unpaid order is generated. You can log on to the ApsaraDB RDS console to complete the payment.
    // >
    shared_ptr<bool> autoPay_ {};
    // Specifies whether to automatically use coupons. Valid values:
    // * **true**: automatically uses coupons. This is the default value.
    // * **false**: does not automatically use coupons.
    // 
    // > If you use a coupon and then downgrade the instance type, the amount deducted by the voucher is not refunded.
    shared_ptr<bool> autoUseCoupon_ {};
    shared_ptr<string> businessInfo_ {};
    // The instance upgrade or downgrade type. Valid values:
    // > You do not need to specify this parameter. The system automatically determines whether to upgrade or downgrade the instance type. If you want to specify it, follow these rules:
    // - **Up** (default): upgrades the instance type. Make sure that your account balance is sufficient.
    // - **Down**: downgrades the instance type. When the instance type specified in InstanceType is lower than the current instance type, set Direction to Down.
    shared_ptr<string> direction_ {};
    // Specifies whether to perform a precheck on the instance creation operation. Valid values:
    // * **true**: performs a precheck without creating an instance. Check items include request parameters, request format, service limits, and inventory.
    // * **false**: sends a normal request and directly creates the instance after the request passes the precheck. This is the default value.
    shared_ptr<bool> dryRun_ {};
    // The instance ID.
    shared_ptr<string> instanceId_ {};
    // The destination instance type. For more information about the instance types supported by RDS Target instances, see [RDS Target instance types](https://help.aliyun.com/document_detail/2844823.html).
    shared_ptr<string> instanceType_ {};
    // The coupon code.
    shared_ptr<string> promotionCode_ {};
    // The restart time of the instance.
    // 
    // - If **RebootWhenFinished** is set to **false** and the instance is in the **Running** state, you **must** specify a restart time within 48 hours.
    // - Specify the time in the ISO 8601 standard in the `yyyy-MM-ddTHH:mmZ` format. The time must be in UTC.
    shared_ptr<string> rebootTime_ {};
    // Specifies whether to immediately restart the instance after the instance type change is complete. Valid values:
    // 
    // - **true**: restarts the instance immediately. This is the default value.
    // - **false**: does not restart the instance immediately.
    // 
    // > If the instance is in the **Stopped** state, it remains in the Stopped state and is not restarted even if you set RebootWhenFinished to true.
    shared_ptr<bool> rebootWhenFinished_ {};
    // The region ID of the instance.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
