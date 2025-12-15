// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDONNODETEMPLATE_HPP_
#define ALIBABACLOUD_MODELS_ADDONNODETEMPLATE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddonNodeTemplateDataDisks.hpp>
#include <alibabacloud/models/AddonNodeTemplateSystemDisk.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class AddonNodeTemplate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddonNodeTemplate& obj) { 
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(AutoRenewPeriod, autoRenewPeriod_);
      DARABONBA_PTR_TO_JSON(DataDisks, dataDisks_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(EnableHT, enableHT_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(OsName, osName_);
      DARABONBA_PTR_TO_JSON(OsNameEN, osNameEN_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_TO_JSON(SpotPriceLimit, spotPriceLimit_);
      DARABONBA_PTR_TO_JSON(SpotStrategy, spotStrategy_);
      DARABONBA_PTR_TO_JSON(SystemDisk, systemDisk_);
    };
    friend void from_json(const Darabonba::Json& j, AddonNodeTemplate& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(AutoRenewPeriod, autoRenewPeriod_);
      DARABONBA_PTR_FROM_JSON(DataDisks, dataDisks_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(EnableHT, enableHT_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(OsName, osName_);
      DARABONBA_PTR_FROM_JSON(OsNameEN, osNameEN_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_FROM_JSON(SpotPriceLimit, spotPriceLimit_);
      DARABONBA_PTR_FROM_JSON(SpotStrategy, spotStrategy_);
      DARABONBA_PTR_FROM_JSON(SystemDisk, systemDisk_);
    };
    AddonNodeTemplate() = default ;
    AddonNodeTemplate(const AddonNodeTemplate &) = default ;
    AddonNodeTemplate(AddonNodeTemplate &&) = default ;
    AddonNodeTemplate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddonNodeTemplate() = default ;
    AddonNodeTemplate& operator=(const AddonNodeTemplate &) = default ;
    AddonNodeTemplate& operator=(AddonNodeTemplate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoRenew_ == nullptr
        && return this->autoRenewPeriod_ == nullptr && return this->dataDisks_ == nullptr && return this->duration_ == nullptr && return this->enableHT_ == nullptr && return this->imageId_ == nullptr
        && return this->instanceChargeType_ == nullptr && return this->instanceId_ == nullptr && return this->instanceType_ == nullptr && return this->osName_ == nullptr && return this->osNameEN_ == nullptr
        && return this->period_ == nullptr && return this->periodUnit_ == nullptr && return this->privateIpAddress_ == nullptr && return this->spotPriceLimit_ == nullptr && return this->spotStrategy_ == nullptr
        && return this->systemDisk_ == nullptr; };
    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool autoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline AddonNodeTemplate& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // autoRenewPeriod Field Functions 
    bool hasAutoRenewPeriod() const { return this->autoRenewPeriod_ != nullptr;};
    void deleteAutoRenewPeriod() { this->autoRenewPeriod_ = nullptr;};
    inline int32_t autoRenewPeriod() const { DARABONBA_PTR_GET_DEFAULT(autoRenewPeriod_, 0) };
    inline AddonNodeTemplate& setAutoRenewPeriod(int32_t autoRenewPeriod) { DARABONBA_PTR_SET_VALUE(autoRenewPeriod_, autoRenewPeriod) };


    // dataDisks Field Functions 
    bool hasDataDisks() const { return this->dataDisks_ != nullptr;};
    void deleteDataDisks() { this->dataDisks_ = nullptr;};
    inline const vector<AddonNodeTemplateDataDisks> & dataDisks() const { DARABONBA_PTR_GET_CONST(dataDisks_, vector<AddonNodeTemplateDataDisks>) };
    inline vector<AddonNodeTemplateDataDisks> dataDisks() { DARABONBA_PTR_GET(dataDisks_, vector<AddonNodeTemplateDataDisks>) };
    inline AddonNodeTemplate& setDataDisks(const vector<AddonNodeTemplateDataDisks> & dataDisks) { DARABONBA_PTR_SET_VALUE(dataDisks_, dataDisks) };
    inline AddonNodeTemplate& setDataDisks(vector<AddonNodeTemplateDataDisks> && dataDisks) { DARABONBA_PTR_SET_RVALUE(dataDisks_, dataDisks) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline AddonNodeTemplate& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // enableHT Field Functions 
    bool hasEnableHT() const { return this->enableHT_ != nullptr;};
    void deleteEnableHT() { this->enableHT_ = nullptr;};
    inline bool enableHT() const { DARABONBA_PTR_GET_DEFAULT(enableHT_, false) };
    inline AddonNodeTemplate& setEnableHT(bool enableHT) { DARABONBA_PTR_SET_VALUE(enableHT_, enableHT) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline AddonNodeTemplate& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // instanceChargeType Field Functions 
    bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
    void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
    inline string instanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
    inline AddonNodeTemplate& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AddonNodeTemplate& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline AddonNodeTemplate& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // osName Field Functions 
    bool hasOsName() const { return this->osName_ != nullptr;};
    void deleteOsName() { this->osName_ = nullptr;};
    inline string osName() const { DARABONBA_PTR_GET_DEFAULT(osName_, "") };
    inline AddonNodeTemplate& setOsName(string osName) { DARABONBA_PTR_SET_VALUE(osName_, osName) };


    // osNameEN Field Functions 
    bool hasOsNameEN() const { return this->osNameEN_ != nullptr;};
    void deleteOsNameEN() { this->osNameEN_ = nullptr;};
    inline string osNameEN() const { DARABONBA_PTR_GET_DEFAULT(osNameEN_, "") };
    inline AddonNodeTemplate& setOsNameEN(string osNameEN) { DARABONBA_PTR_SET_VALUE(osNameEN_, osNameEN) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline AddonNodeTemplate& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string periodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline AddonNodeTemplate& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // privateIpAddress Field Functions 
    bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
    void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
    inline string privateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddress_, "") };
    inline AddonNodeTemplate& setPrivateIpAddress(string privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };


    // spotPriceLimit Field Functions 
    bool hasSpotPriceLimit() const { return this->spotPriceLimit_ != nullptr;};
    void deleteSpotPriceLimit() { this->spotPriceLimit_ = nullptr;};
    inline float spotPriceLimit() const { DARABONBA_PTR_GET_DEFAULT(spotPriceLimit_, 0.0) };
    inline AddonNodeTemplate& setSpotPriceLimit(float spotPriceLimit) { DARABONBA_PTR_SET_VALUE(spotPriceLimit_, spotPriceLimit) };


    // spotStrategy Field Functions 
    bool hasSpotStrategy() const { return this->spotStrategy_ != nullptr;};
    void deleteSpotStrategy() { this->spotStrategy_ = nullptr;};
    inline string spotStrategy() const { DARABONBA_PTR_GET_DEFAULT(spotStrategy_, "") };
    inline AddonNodeTemplate& setSpotStrategy(string spotStrategy) { DARABONBA_PTR_SET_VALUE(spotStrategy_, spotStrategy) };


    // systemDisk Field Functions 
    bool hasSystemDisk() const { return this->systemDisk_ != nullptr;};
    void deleteSystemDisk() { this->systemDisk_ = nullptr;};
    inline const AddonNodeTemplateSystemDisk & systemDisk() const { DARABONBA_PTR_GET_CONST(systemDisk_, AddonNodeTemplateSystemDisk) };
    inline AddonNodeTemplateSystemDisk systemDisk() { DARABONBA_PTR_GET(systemDisk_, AddonNodeTemplateSystemDisk) };
    inline AddonNodeTemplate& setSystemDisk(const AddonNodeTemplateSystemDisk & systemDisk) { DARABONBA_PTR_SET_VALUE(systemDisk_, systemDisk) };
    inline AddonNodeTemplate& setSystemDisk(AddonNodeTemplateSystemDisk && systemDisk) { DARABONBA_PTR_SET_RVALUE(systemDisk_, systemDisk) };


  protected:
    std::shared_ptr<bool> autoRenew_ = nullptr;
    std::shared_ptr<int32_t> autoRenewPeriod_ = nullptr;
    std::shared_ptr<vector<AddonNodeTemplateDataDisks>> dataDisks_ = nullptr;
    std::shared_ptr<int32_t> duration_ = nullptr;
    std::shared_ptr<bool> enableHT_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> imageId_ = nullptr;
    std::shared_ptr<string> instanceChargeType_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> osName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> osNameEN_ = nullptr;
    std::shared_ptr<int32_t> period_ = nullptr;
    std::shared_ptr<string> periodUnit_ = nullptr;
    std::shared_ptr<string> privateIpAddress_ = nullptr;
    std::shared_ptr<float> spotPriceLimit_ = nullptr;
    std::shared_ptr<string> spotStrategy_ = nullptr;
    std::shared_ptr<AddonNodeTemplateSystemDisk> systemDisk_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
