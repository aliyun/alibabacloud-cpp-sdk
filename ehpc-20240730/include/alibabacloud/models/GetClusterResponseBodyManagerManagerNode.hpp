// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLUSTERRESPONSEBODYMANAGERMANAGERNODE_HPP_
#define ALIBABACLOUD_MODELS_GETCLUSTERRESPONSEBODYMANAGERMANAGERNODE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetClusterResponseBodyManagerManagerNodeSystemDisk.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class GetClusterResponseBodyManagerManagerNode : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClusterResponseBodyManagerManagerNode& obj) { 
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(AutoRenewPeriod, autoRenewPeriod_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(EnableHt, enableHt_);
      DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(SpotPriceLimit, spotPriceLimit_);
      DARABONBA_PTR_TO_JSON(SpotStrategy, spotStrategy_);
      DARABONBA_PTR_TO_JSON(SystemDisk, systemDisk_);
    };
    friend void from_json(const Darabonba::Json& j, GetClusterResponseBodyManagerManagerNode& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(AutoRenewPeriod, autoRenewPeriod_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(EnableHt, enableHt_);
      DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(SpotPriceLimit, spotPriceLimit_);
      DARABONBA_PTR_FROM_JSON(SpotStrategy, spotStrategy_);
      DARABONBA_PTR_FROM_JSON(SystemDisk, systemDisk_);
    };
    GetClusterResponseBodyManagerManagerNode() = default ;
    GetClusterResponseBodyManagerManagerNode(const GetClusterResponseBodyManagerManagerNode &) = default ;
    GetClusterResponseBodyManagerManagerNode(GetClusterResponseBodyManagerManagerNode &&) = default ;
    GetClusterResponseBodyManagerManagerNode(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClusterResponseBodyManagerManagerNode() = default ;
    GetClusterResponseBodyManagerManagerNode& operator=(const GetClusterResponseBodyManagerManagerNode &) = default ;
    GetClusterResponseBodyManagerManagerNode& operator=(GetClusterResponseBodyManagerManagerNode &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoRenew_ == nullptr
        && return this->autoRenewPeriod_ == nullptr && return this->duration_ == nullptr && return this->enableHt_ == nullptr && return this->expiredTime_ == nullptr && return this->imageId_ == nullptr
        && return this->instanceChargeType_ == nullptr && return this->instanceId_ == nullptr && return this->instanceType_ == nullptr && return this->period_ == nullptr && return this->periodUnit_ == nullptr
        && return this->spotPriceLimit_ == nullptr && return this->spotStrategy_ == nullptr && return this->systemDisk_ == nullptr; };
    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool autoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline GetClusterResponseBodyManagerManagerNode& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // autoRenewPeriod Field Functions 
    bool hasAutoRenewPeriod() const { return this->autoRenewPeriod_ != nullptr;};
    void deleteAutoRenewPeriod() { this->autoRenewPeriod_ = nullptr;};
    inline int64_t autoRenewPeriod() const { DARABONBA_PTR_GET_DEFAULT(autoRenewPeriod_, 0L) };
    inline GetClusterResponseBodyManagerManagerNode& setAutoRenewPeriod(int64_t autoRenewPeriod) { DARABONBA_PTR_SET_VALUE(autoRenewPeriod_, autoRenewPeriod) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline GetClusterResponseBodyManagerManagerNode& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // enableHt Field Functions 
    bool hasEnableHt() const { return this->enableHt_ != nullptr;};
    void deleteEnableHt() { this->enableHt_ = nullptr;};
    inline bool enableHt() const { DARABONBA_PTR_GET_DEFAULT(enableHt_, false) };
    inline GetClusterResponseBodyManagerManagerNode& setEnableHt(bool enableHt) { DARABONBA_PTR_SET_VALUE(enableHt_, enableHt) };


    // expiredTime Field Functions 
    bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
    void deleteExpiredTime() { this->expiredTime_ = nullptr;};
    inline string expiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
    inline GetClusterResponseBodyManagerManagerNode& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline GetClusterResponseBodyManagerManagerNode& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // instanceChargeType Field Functions 
    bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
    void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
    inline string instanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
    inline GetClusterResponseBodyManagerManagerNode& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetClusterResponseBodyManagerManagerNode& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline GetClusterResponseBodyManagerManagerNode& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int64_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0L) };
    inline GetClusterResponseBodyManagerManagerNode& setPeriod(int64_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string periodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline GetClusterResponseBodyManagerManagerNode& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // spotPriceLimit Field Functions 
    bool hasSpotPriceLimit() const { return this->spotPriceLimit_ != nullptr;};
    void deleteSpotPriceLimit() { this->spotPriceLimit_ = nullptr;};
    inline float spotPriceLimit() const { DARABONBA_PTR_GET_DEFAULT(spotPriceLimit_, 0.0) };
    inline GetClusterResponseBodyManagerManagerNode& setSpotPriceLimit(float spotPriceLimit) { DARABONBA_PTR_SET_VALUE(spotPriceLimit_, spotPriceLimit) };


    // spotStrategy Field Functions 
    bool hasSpotStrategy() const { return this->spotStrategy_ != nullptr;};
    void deleteSpotStrategy() { this->spotStrategy_ = nullptr;};
    inline string spotStrategy() const { DARABONBA_PTR_GET_DEFAULT(spotStrategy_, "") };
    inline GetClusterResponseBodyManagerManagerNode& setSpotStrategy(string spotStrategy) { DARABONBA_PTR_SET_VALUE(spotStrategy_, spotStrategy) };


    // systemDisk Field Functions 
    bool hasSystemDisk() const { return this->systemDisk_ != nullptr;};
    void deleteSystemDisk() { this->systemDisk_ = nullptr;};
    inline const Models::GetClusterResponseBodyManagerManagerNodeSystemDisk & systemDisk() const { DARABONBA_PTR_GET_CONST(systemDisk_, Models::GetClusterResponseBodyManagerManagerNodeSystemDisk) };
    inline Models::GetClusterResponseBodyManagerManagerNodeSystemDisk systemDisk() { DARABONBA_PTR_GET(systemDisk_, Models::GetClusterResponseBodyManagerManagerNodeSystemDisk) };
    inline GetClusterResponseBodyManagerManagerNode& setSystemDisk(const Models::GetClusterResponseBodyManagerManagerNodeSystemDisk & systemDisk) { DARABONBA_PTR_SET_VALUE(systemDisk_, systemDisk) };
    inline GetClusterResponseBodyManagerManagerNode& setSystemDisk(Models::GetClusterResponseBodyManagerManagerNodeSystemDisk && systemDisk) { DARABONBA_PTR_SET_RVALUE(systemDisk_, systemDisk) };


  protected:
    std::shared_ptr<bool> autoRenew_ = nullptr;
    std::shared_ptr<int64_t> autoRenewPeriod_ = nullptr;
    std::shared_ptr<int64_t> duration_ = nullptr;
    std::shared_ptr<bool> enableHt_ = nullptr;
    // The expiration time of the management node.
    std::shared_ptr<string> expiredTime_ = nullptr;
    std::shared_ptr<string> imageId_ = nullptr;
    // The instance billing method of the management node. Valid values:
    // 
    // *   PostPaid: pay-as-you-go
    // *   PrePaid: subscription
    std::shared_ptr<string> instanceChargeType_ = nullptr;
    // The instance ID of the management node.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The instance type of the management node.
    std::shared_ptr<string> instanceType_ = nullptr;
    std::shared_ptr<int64_t> period_ = nullptr;
    std::shared_ptr<string> periodUnit_ = nullptr;
    std::shared_ptr<float> spotPriceLimit_ = nullptr;
    std::shared_ptr<string> spotStrategy_ = nullptr;
    std::shared_ptr<Models::GetClusterResponseBodyManagerManagerNodeSystemDisk> systemDisk_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
