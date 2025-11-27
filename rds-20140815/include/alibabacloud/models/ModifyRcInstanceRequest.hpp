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
        && return this->autoUseCoupon_ == nullptr && return this->direction_ == nullptr && return this->dryRun_ == nullptr && return this->instanceId_ == nullptr && return this->instanceType_ == nullptr
        && return this->promotionCode_ == nullptr && return this->rebootTime_ == nullptr && return this->rebootWhenFinished_ == nullptr && return this->regionId_ == nullptr; };
    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool autoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline ModifyRCInstanceRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // autoUseCoupon Field Functions 
    bool hasAutoUseCoupon() const { return this->autoUseCoupon_ != nullptr;};
    void deleteAutoUseCoupon() { this->autoUseCoupon_ = nullptr;};
    inline bool autoUseCoupon() const { DARABONBA_PTR_GET_DEFAULT(autoUseCoupon_, false) };
    inline ModifyRCInstanceRequest& setAutoUseCoupon(bool autoUseCoupon) { DARABONBA_PTR_SET_VALUE(autoUseCoupon_, autoUseCoupon) };


    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string direction() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline ModifyRCInstanceRequest& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline ModifyRCInstanceRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyRCInstanceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline ModifyRCInstanceRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // promotionCode Field Functions 
    bool hasPromotionCode() const { return this->promotionCode_ != nullptr;};
    void deletePromotionCode() { this->promotionCode_ = nullptr;};
    inline string promotionCode() const { DARABONBA_PTR_GET_DEFAULT(promotionCode_, "") };
    inline ModifyRCInstanceRequest& setPromotionCode(string promotionCode) { DARABONBA_PTR_SET_VALUE(promotionCode_, promotionCode) };


    // rebootTime Field Functions 
    bool hasRebootTime() const { return this->rebootTime_ != nullptr;};
    void deleteRebootTime() { this->rebootTime_ = nullptr;};
    inline string rebootTime() const { DARABONBA_PTR_GET_DEFAULT(rebootTime_, "") };
    inline ModifyRCInstanceRequest& setRebootTime(string rebootTime) { DARABONBA_PTR_SET_VALUE(rebootTime_, rebootTime) };


    // rebootWhenFinished Field Functions 
    bool hasRebootWhenFinished() const { return this->rebootWhenFinished_ != nullptr;};
    void deleteRebootWhenFinished() { this->rebootWhenFinished_ = nullptr;};
    inline bool rebootWhenFinished() const { DARABONBA_PTR_GET_DEFAULT(rebootWhenFinished_, false) };
    inline ModifyRCInstanceRequest& setRebootWhenFinished(bool rebootWhenFinished) { DARABONBA_PTR_SET_VALUE(rebootWhenFinished_, rebootWhenFinished) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyRCInstanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // Specifies whether to enable the automatic payment feature. Valid values:
    // 
    // *   **true** (default): enables the feature. You must make sure that your account balance is sufficient.
    // *   **false**: disables the feature. An unpaid order is generated.
    // 
    // >  If your account balance is insufficient, you can set AutoPay to false. In this case, an unpaid order is generated. You can complete the payment in the Expenses and Costs console.
    std::shared_ptr<bool> autoPay_ = nullptr;
    std::shared_ptr<bool> autoUseCoupon_ = nullptr;
    // The type of the change that you want to perform on the instance. Valid values:
    // 
    // >  This parameter is optional. The system can automatically determine whether the instance change is an upgrade or a downgrade. If you want to specify this parameter, take note of the following items:
    // 
    // *   **Upgrade** (default): upgrades the instance type. Make sure that your account balance is sufficient.
    // *   **Down**: downgrades the instance type. If the new instance type specified by InstanceType has lower specifications than the current instance type, set Direction to Down.
    std::shared_ptr<string> direction_ = nullptr;
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // 
    // *   **true**: performs only a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, service limits, and resource inventory.
    // *   **false**: performs a dry run and performs the actual request. If the request passes the dry run, the operation is performed.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The new instance type. For more information about the instance types that are supported by RDS Custom instances, see [Instance types of RDS Custom instances](https://help.aliyun.com/document_detail/2844823.html).
    std::shared_ptr<string> instanceType_ = nullptr;
    std::shared_ptr<string> promotionCode_ = nullptr;
    std::shared_ptr<string> rebootTime_ = nullptr;
    std::shared_ptr<bool> rebootWhenFinished_ = nullptr;
    // The region ID of the instance.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
