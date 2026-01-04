// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNINSTANCESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNINSTANCESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class RunInstancesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunInstancesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Amount, amount_);
      DARABONBA_PTR_TO_JSON(AutoReleaseTime, autoReleaseTime_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(AutoUseCoupon, autoUseCoupon_);
      DARABONBA_PTR_TO_JSON(BillingCycle, billingCycle_);
      DARABONBA_PTR_TO_JSON(Carrier, carrier_);
      DARABONBA_PTR_TO_JSON(DataDisk, dataDiskShrink_);
      DARABONBA_PTR_TO_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_TO_JSON(HostName, hostName_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(InstanceChargeStrategy, instanceChargeStrategy_);
      DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_TO_JSON(InternetMaxBandwidthOut, internetMaxBandwidthOut_);
      DARABONBA_PTR_TO_JSON(IpType, ipType_);
      DARABONBA_PTR_TO_JSON(Ipv6AddressCount, ipv6AddressCount_);
      DARABONBA_PTR_TO_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_TO_JSON(LaunchTemplateId, launchTemplateId_);
      DARABONBA_PTR_TO_JSON(LaunchTemplateName, launchTemplateName_);
      DARABONBA_PTR_TO_JSON(LaunchTemplateVersion, launchTemplateVersion_);
      DARABONBA_PTR_TO_JSON(NetDistrictCode, netDistrictCode_);
      DARABONBA_PTR_TO_JSON(NetWorkId, netWorkId_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(PasswordInherit, passwordInherit_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_TO_JSON(PublicIpIdentification, publicIpIdentification_);
      DARABONBA_PTR_TO_JSON(ScheduleAreaLevel, scheduleAreaLevel_);
      DARABONBA_PTR_TO_JSON(SchedulingPriceStrategy, schedulingPriceStrategy_);
      DARABONBA_PTR_TO_JSON(SchedulingStrategy, schedulingStrategy_);
      DARABONBA_PTR_TO_JSON(SecurityId, securityId_);
      DARABONBA_PTR_TO_JSON(SpotDuration, spotDuration_);
      DARABONBA_PTR_TO_JSON(SpotStrategy, spotStrategy_);
      DARABONBA_PTR_TO_JSON(SystemDisk, systemDiskShrink_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(UniqueSuffix, uniqueSuffix_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
    };
    friend void from_json(const Darabonba::Json& j, RunInstancesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Amount, amount_);
      DARABONBA_PTR_FROM_JSON(AutoReleaseTime, autoReleaseTime_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(AutoUseCoupon, autoUseCoupon_);
      DARABONBA_PTR_FROM_JSON(BillingCycle, billingCycle_);
      DARABONBA_PTR_FROM_JSON(Carrier, carrier_);
      DARABONBA_PTR_FROM_JSON(DataDisk, dataDiskShrink_);
      DARABONBA_PTR_FROM_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_FROM_JSON(HostName, hostName_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(InstanceChargeStrategy, instanceChargeStrategy_);
      DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_FROM_JSON(InternetMaxBandwidthOut, internetMaxBandwidthOut_);
      DARABONBA_PTR_FROM_JSON(IpType, ipType_);
      DARABONBA_PTR_FROM_JSON(Ipv6AddressCount, ipv6AddressCount_);
      DARABONBA_PTR_FROM_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_FROM_JSON(LaunchTemplateId, launchTemplateId_);
      DARABONBA_PTR_FROM_JSON(LaunchTemplateName, launchTemplateName_);
      DARABONBA_PTR_FROM_JSON(LaunchTemplateVersion, launchTemplateVersion_);
      DARABONBA_PTR_FROM_JSON(NetDistrictCode, netDistrictCode_);
      DARABONBA_PTR_FROM_JSON(NetWorkId, netWorkId_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(PasswordInherit, passwordInherit_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_FROM_JSON(PublicIpIdentification, publicIpIdentification_);
      DARABONBA_PTR_FROM_JSON(ScheduleAreaLevel, scheduleAreaLevel_);
      DARABONBA_PTR_FROM_JSON(SchedulingPriceStrategy, schedulingPriceStrategy_);
      DARABONBA_PTR_FROM_JSON(SchedulingStrategy, schedulingStrategy_);
      DARABONBA_PTR_FROM_JSON(SecurityId, securityId_);
      DARABONBA_PTR_FROM_JSON(SpotDuration, spotDuration_);
      DARABONBA_PTR_FROM_JSON(SpotStrategy, spotStrategy_);
      DARABONBA_PTR_FROM_JSON(SystemDisk, systemDiskShrink_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(UniqueSuffix, uniqueSuffix_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
    };
    RunInstancesShrinkRequest() = default ;
    RunInstancesShrinkRequest(const RunInstancesShrinkRequest &) = default ;
    RunInstancesShrinkRequest(RunInstancesShrinkRequest &&) = default ;
    RunInstancesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunInstancesShrinkRequest() = default ;
    RunInstancesShrinkRequest& operator=(const RunInstancesShrinkRequest &) = default ;
    RunInstancesShrinkRequest& operator=(RunInstancesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The key of the tag.
      shared_ptr<string> key_ {};
      // The value of the tag.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->amount_ == nullptr
        && this->autoReleaseTime_ == nullptr && this->autoRenew_ == nullptr && this->autoUseCoupon_ == nullptr && this->billingCycle_ == nullptr && this->carrier_ == nullptr
        && this->dataDiskShrink_ == nullptr && this->deletionProtection_ == nullptr && this->ensRegionId_ == nullptr && this->hostName_ == nullptr && this->imageId_ == nullptr
        && this->instanceChargeStrategy_ == nullptr && this->instanceChargeType_ == nullptr && this->instanceName_ == nullptr && this->instanceType_ == nullptr && this->internetChargeType_ == nullptr
        && this->internetMaxBandwidthOut_ == nullptr && this->ipType_ == nullptr && this->ipv6AddressCount_ == nullptr && this->keyPairName_ == nullptr && this->launchTemplateId_ == nullptr
        && this->launchTemplateName_ == nullptr && this->launchTemplateVersion_ == nullptr && this->netDistrictCode_ == nullptr && this->netWorkId_ == nullptr && this->password_ == nullptr
        && this->passwordInherit_ == nullptr && this->period_ == nullptr && this->periodUnit_ == nullptr && this->privateIpAddress_ == nullptr && this->publicIpIdentification_ == nullptr
        && this->scheduleAreaLevel_ == nullptr && this->schedulingPriceStrategy_ == nullptr && this->schedulingStrategy_ == nullptr && this->securityId_ == nullptr && this->spotDuration_ == nullptr
        && this->spotStrategy_ == nullptr && this->systemDiskShrink_ == nullptr && this->tag_ == nullptr && this->uniqueSuffix_ == nullptr && this->userData_ == nullptr
        && this->vSwitchId_ == nullptr; };
    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline int64_t getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0L) };
    inline RunInstancesShrinkRequest& setAmount(int64_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // autoReleaseTime Field Functions 
    bool hasAutoReleaseTime() const { return this->autoReleaseTime_ != nullptr;};
    void deleteAutoReleaseTime() { this->autoReleaseTime_ = nullptr;};
    inline string getAutoReleaseTime() const { DARABONBA_PTR_GET_DEFAULT(autoReleaseTime_, "") };
    inline RunInstancesShrinkRequest& setAutoReleaseTime(string autoReleaseTime) { DARABONBA_PTR_SET_VALUE(autoReleaseTime_, autoReleaseTime) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline RunInstancesShrinkRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // autoUseCoupon Field Functions 
    bool hasAutoUseCoupon() const { return this->autoUseCoupon_ != nullptr;};
    void deleteAutoUseCoupon() { this->autoUseCoupon_ = nullptr;};
    inline string getAutoUseCoupon() const { DARABONBA_PTR_GET_DEFAULT(autoUseCoupon_, "") };
    inline RunInstancesShrinkRequest& setAutoUseCoupon(string autoUseCoupon) { DARABONBA_PTR_SET_VALUE(autoUseCoupon_, autoUseCoupon) };


    // billingCycle Field Functions 
    bool hasBillingCycle() const { return this->billingCycle_ != nullptr;};
    void deleteBillingCycle() { this->billingCycle_ = nullptr;};
    inline string getBillingCycle() const { DARABONBA_PTR_GET_DEFAULT(billingCycle_, "") };
    inline RunInstancesShrinkRequest& setBillingCycle(string billingCycle) { DARABONBA_PTR_SET_VALUE(billingCycle_, billingCycle) };


    // carrier Field Functions 
    bool hasCarrier() const { return this->carrier_ != nullptr;};
    void deleteCarrier() { this->carrier_ = nullptr;};
    inline string getCarrier() const { DARABONBA_PTR_GET_DEFAULT(carrier_, "") };
    inline RunInstancesShrinkRequest& setCarrier(string carrier) { DARABONBA_PTR_SET_VALUE(carrier_, carrier) };


    // dataDiskShrink Field Functions 
    bool hasDataDiskShrink() const { return this->dataDiskShrink_ != nullptr;};
    void deleteDataDiskShrink() { this->dataDiskShrink_ = nullptr;};
    inline string getDataDiskShrink() const { DARABONBA_PTR_GET_DEFAULT(dataDiskShrink_, "") };
    inline RunInstancesShrinkRequest& setDataDiskShrink(string dataDiskShrink) { DARABONBA_PTR_SET_VALUE(dataDiskShrink_, dataDiskShrink) };


    // deletionProtection Field Functions 
    bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
    void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
    inline bool getDeletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
    inline RunInstancesShrinkRequest& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string getEnsRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline RunInstancesShrinkRequest& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // hostName Field Functions 
    bool hasHostName() const { return this->hostName_ != nullptr;};
    void deleteHostName() { this->hostName_ = nullptr;};
    inline string getHostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
    inline RunInstancesShrinkRequest& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline RunInstancesShrinkRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // instanceChargeStrategy Field Functions 
    bool hasInstanceChargeStrategy() const { return this->instanceChargeStrategy_ != nullptr;};
    void deleteInstanceChargeStrategy() { this->instanceChargeStrategy_ = nullptr;};
    inline string getInstanceChargeStrategy() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeStrategy_, "") };
    inline RunInstancesShrinkRequest& setInstanceChargeStrategy(string instanceChargeStrategy) { DARABONBA_PTR_SET_VALUE(instanceChargeStrategy_, instanceChargeStrategy) };


    // instanceChargeType Field Functions 
    bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
    void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
    inline string getInstanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
    inline RunInstancesShrinkRequest& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline RunInstancesShrinkRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline RunInstancesShrinkRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // internetChargeType Field Functions 
    bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
    void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
    inline string getInternetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
    inline RunInstancesShrinkRequest& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


    // internetMaxBandwidthOut Field Functions 
    bool hasInternetMaxBandwidthOut() const { return this->internetMaxBandwidthOut_ != nullptr;};
    void deleteInternetMaxBandwidthOut() { this->internetMaxBandwidthOut_ = nullptr;};
    inline int64_t getInternetMaxBandwidthOut() const { DARABONBA_PTR_GET_DEFAULT(internetMaxBandwidthOut_, 0L) };
    inline RunInstancesShrinkRequest& setInternetMaxBandwidthOut(int64_t internetMaxBandwidthOut) { DARABONBA_PTR_SET_VALUE(internetMaxBandwidthOut_, internetMaxBandwidthOut) };


    // ipType Field Functions 
    bool hasIpType() const { return this->ipType_ != nullptr;};
    void deleteIpType() { this->ipType_ = nullptr;};
    inline string getIpType() const { DARABONBA_PTR_GET_DEFAULT(ipType_, "") };
    inline RunInstancesShrinkRequest& setIpType(string ipType) { DARABONBA_PTR_SET_VALUE(ipType_, ipType) };


    // ipv6AddressCount Field Functions 
    bool hasIpv6AddressCount() const { return this->ipv6AddressCount_ != nullptr;};
    void deleteIpv6AddressCount() { this->ipv6AddressCount_ = nullptr;};
    inline int64_t getIpv6AddressCount() const { DARABONBA_PTR_GET_DEFAULT(ipv6AddressCount_, 0L) };
    inline RunInstancesShrinkRequest& setIpv6AddressCount(int64_t ipv6AddressCount) { DARABONBA_PTR_SET_VALUE(ipv6AddressCount_, ipv6AddressCount) };


    // keyPairName Field Functions 
    bool hasKeyPairName() const { return this->keyPairName_ != nullptr;};
    void deleteKeyPairName() { this->keyPairName_ = nullptr;};
    inline string getKeyPairName() const { DARABONBA_PTR_GET_DEFAULT(keyPairName_, "") };
    inline RunInstancesShrinkRequest& setKeyPairName(string keyPairName) { DARABONBA_PTR_SET_VALUE(keyPairName_, keyPairName) };


    // launchTemplateId Field Functions 
    bool hasLaunchTemplateId() const { return this->launchTemplateId_ != nullptr;};
    void deleteLaunchTemplateId() { this->launchTemplateId_ = nullptr;};
    inline string getLaunchTemplateId() const { DARABONBA_PTR_GET_DEFAULT(launchTemplateId_, "") };
    inline RunInstancesShrinkRequest& setLaunchTemplateId(string launchTemplateId) { DARABONBA_PTR_SET_VALUE(launchTemplateId_, launchTemplateId) };


    // launchTemplateName Field Functions 
    bool hasLaunchTemplateName() const { return this->launchTemplateName_ != nullptr;};
    void deleteLaunchTemplateName() { this->launchTemplateName_ = nullptr;};
    inline string getLaunchTemplateName() const { DARABONBA_PTR_GET_DEFAULT(launchTemplateName_, "") };
    inline RunInstancesShrinkRequest& setLaunchTemplateName(string launchTemplateName) { DARABONBA_PTR_SET_VALUE(launchTemplateName_, launchTemplateName) };


    // launchTemplateVersion Field Functions 
    bool hasLaunchTemplateVersion() const { return this->launchTemplateVersion_ != nullptr;};
    void deleteLaunchTemplateVersion() { this->launchTemplateVersion_ = nullptr;};
    inline int32_t getLaunchTemplateVersion() const { DARABONBA_PTR_GET_DEFAULT(launchTemplateVersion_, 0) };
    inline RunInstancesShrinkRequest& setLaunchTemplateVersion(int32_t launchTemplateVersion) { DARABONBA_PTR_SET_VALUE(launchTemplateVersion_, launchTemplateVersion) };


    // netDistrictCode Field Functions 
    bool hasNetDistrictCode() const { return this->netDistrictCode_ != nullptr;};
    void deleteNetDistrictCode() { this->netDistrictCode_ = nullptr;};
    inline string getNetDistrictCode() const { DARABONBA_PTR_GET_DEFAULT(netDistrictCode_, "") };
    inline RunInstancesShrinkRequest& setNetDistrictCode(string netDistrictCode) { DARABONBA_PTR_SET_VALUE(netDistrictCode_, netDistrictCode) };


    // netWorkId Field Functions 
    bool hasNetWorkId() const { return this->netWorkId_ != nullptr;};
    void deleteNetWorkId() { this->netWorkId_ = nullptr;};
    inline string getNetWorkId() const { DARABONBA_PTR_GET_DEFAULT(netWorkId_, "") };
    inline RunInstancesShrinkRequest& setNetWorkId(string netWorkId) { DARABONBA_PTR_SET_VALUE(netWorkId_, netWorkId) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline RunInstancesShrinkRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // passwordInherit Field Functions 
    bool hasPasswordInherit() const { return this->passwordInherit_ != nullptr;};
    void deletePasswordInherit() { this->passwordInherit_ = nullptr;};
    inline bool getPasswordInherit() const { DARABONBA_PTR_GET_DEFAULT(passwordInherit_, false) };
    inline RunInstancesShrinkRequest& setPasswordInherit(bool passwordInherit) { DARABONBA_PTR_SET_VALUE(passwordInherit_, passwordInherit) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int64_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0L) };
    inline RunInstancesShrinkRequest& setPeriod(int64_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline RunInstancesShrinkRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // privateIpAddress Field Functions 
    bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
    void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
    inline string getPrivateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddress_, "") };
    inline RunInstancesShrinkRequest& setPrivateIpAddress(string privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };


    // publicIpIdentification Field Functions 
    bool hasPublicIpIdentification() const { return this->publicIpIdentification_ != nullptr;};
    void deletePublicIpIdentification() { this->publicIpIdentification_ = nullptr;};
    inline bool getPublicIpIdentification() const { DARABONBA_PTR_GET_DEFAULT(publicIpIdentification_, false) };
    inline RunInstancesShrinkRequest& setPublicIpIdentification(bool publicIpIdentification) { DARABONBA_PTR_SET_VALUE(publicIpIdentification_, publicIpIdentification) };


    // scheduleAreaLevel Field Functions 
    bool hasScheduleAreaLevel() const { return this->scheduleAreaLevel_ != nullptr;};
    void deleteScheduleAreaLevel() { this->scheduleAreaLevel_ = nullptr;};
    inline string getScheduleAreaLevel() const { DARABONBA_PTR_GET_DEFAULT(scheduleAreaLevel_, "") };
    inline RunInstancesShrinkRequest& setScheduleAreaLevel(string scheduleAreaLevel) { DARABONBA_PTR_SET_VALUE(scheduleAreaLevel_, scheduleAreaLevel) };


    // schedulingPriceStrategy Field Functions 
    bool hasSchedulingPriceStrategy() const { return this->schedulingPriceStrategy_ != nullptr;};
    void deleteSchedulingPriceStrategy() { this->schedulingPriceStrategy_ = nullptr;};
    inline string getSchedulingPriceStrategy() const { DARABONBA_PTR_GET_DEFAULT(schedulingPriceStrategy_, "") };
    inline RunInstancesShrinkRequest& setSchedulingPriceStrategy(string schedulingPriceStrategy) { DARABONBA_PTR_SET_VALUE(schedulingPriceStrategy_, schedulingPriceStrategy) };


    // schedulingStrategy Field Functions 
    bool hasSchedulingStrategy() const { return this->schedulingStrategy_ != nullptr;};
    void deleteSchedulingStrategy() { this->schedulingStrategy_ = nullptr;};
    inline string getSchedulingStrategy() const { DARABONBA_PTR_GET_DEFAULT(schedulingStrategy_, "") };
    inline RunInstancesShrinkRequest& setSchedulingStrategy(string schedulingStrategy) { DARABONBA_PTR_SET_VALUE(schedulingStrategy_, schedulingStrategy) };


    // securityId Field Functions 
    bool hasSecurityId() const { return this->securityId_ != nullptr;};
    void deleteSecurityId() { this->securityId_ = nullptr;};
    inline string getSecurityId() const { DARABONBA_PTR_GET_DEFAULT(securityId_, "") };
    inline RunInstancesShrinkRequest& setSecurityId(string securityId) { DARABONBA_PTR_SET_VALUE(securityId_, securityId) };


    // spotDuration Field Functions 
    bool hasSpotDuration() const { return this->spotDuration_ != nullptr;};
    void deleteSpotDuration() { this->spotDuration_ = nullptr;};
    inline int32_t getSpotDuration() const { DARABONBA_PTR_GET_DEFAULT(spotDuration_, 0) };
    inline RunInstancesShrinkRequest& setSpotDuration(int32_t spotDuration) { DARABONBA_PTR_SET_VALUE(spotDuration_, spotDuration) };


    // spotStrategy Field Functions 
    bool hasSpotStrategy() const { return this->spotStrategy_ != nullptr;};
    void deleteSpotStrategy() { this->spotStrategy_ = nullptr;};
    inline string getSpotStrategy() const { DARABONBA_PTR_GET_DEFAULT(spotStrategy_, "") };
    inline RunInstancesShrinkRequest& setSpotStrategy(string spotStrategy) { DARABONBA_PTR_SET_VALUE(spotStrategy_, spotStrategy) };


    // systemDiskShrink Field Functions 
    bool hasSystemDiskShrink() const { return this->systemDiskShrink_ != nullptr;};
    void deleteSystemDiskShrink() { this->systemDiskShrink_ = nullptr;};
    inline string getSystemDiskShrink() const { DARABONBA_PTR_GET_DEFAULT(systemDiskShrink_, "") };
    inline RunInstancesShrinkRequest& setSystemDiskShrink(string systemDiskShrink) { DARABONBA_PTR_SET_VALUE(systemDiskShrink_, systemDiskShrink) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<RunInstancesShrinkRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<RunInstancesShrinkRequest::Tag>) };
    inline vector<RunInstancesShrinkRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<RunInstancesShrinkRequest::Tag>) };
    inline RunInstancesShrinkRequest& setTag(const vector<RunInstancesShrinkRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline RunInstancesShrinkRequest& setTag(vector<RunInstancesShrinkRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // uniqueSuffix Field Functions 
    bool hasUniqueSuffix() const { return this->uniqueSuffix_ != nullptr;};
    void deleteUniqueSuffix() { this->uniqueSuffix_ = nullptr;};
    inline bool getUniqueSuffix() const { DARABONBA_PTR_GET_DEFAULT(uniqueSuffix_, false) };
    inline RunInstancesShrinkRequest& setUniqueSuffix(bool uniqueSuffix) { DARABONBA_PTR_SET_VALUE(uniqueSuffix_, uniqueSuffix) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline RunInstancesShrinkRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline RunInstancesShrinkRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


  protected:
    // The number of instances that you want to create. Valid values: 1 to 100.
    shared_ptr<int64_t> amount_ {};
    // The time when to automatically release the pay-as-you-go instance. Specify the time in the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the `yyyy-MM-ddTHH:mm:ssZ` format. The time must be in Coordinated Universal Time (UTC).
    // 
    // *   If the value of `ss` is not `00`, the start time is automatically rounded down to the nearest minute based on the value of `mm`.
    // *   The specified time must be at least one hour later than the current time.
    // 
    // Use the UTC time format: yyyy-MM-ddTHH:mmZ
    shared_ptr<string> autoReleaseTime_ {};
    // Specifies whether to enable auto-renewal for the premium bandwidth plan. Valid values:
    // 
    // *   **true**.
    // *   **false** (default).
    // 
    // >  This parameter is not available when InstanceChargeType is set to PostPaid.
    shared_ptr<bool> autoRenew_ {};
    // Specifies whether to use coupons. Default value: true.
    shared_ptr<string> autoUseCoupon_ {};
    // The billing cycle of computing resources of the instance. Only pay-as-you-go instances are supported. Valid values:
    // 
    // *   **Day**.
    // *   **Month**.
    shared_ptr<string> billingCycle_ {};
    // The Internet service provider (ISP).
    // 
    // >  This parameter required if ScheduleAreaLevel is set to Region.\\
    // If you set ScheduleAreaLevel to Region, a node has multiple ISPs, and you do not specify an ISP, then the create instance uses the ISP of the node. If the node has two ISPs, such as China Mobile and China Unicom, the created instance has two ISPs.\\
    // You can call the DescribeRegionIsps operation to query ISPs of the edge node.[](~~2637461~~)
    shared_ptr<string> carrier_ {};
    // The specifications of data disks.
    shared_ptr<string> dataDiskShrink_ {};
    shared_ptr<bool> deletionProtection_ {};
    // The ID of the node.
    // 
    // >  This parameter is required if ScheduleAreaLevel is set to Region and is not available if ScheduleAreaLevel is set to other values.
    shared_ptr<string> ensRegionId_ {};
    // The name of the host.
    shared_ptr<string> hostName_ {};
    // The ID of the image. For ARM PCB-based server instances, leave this parameter empty. For other instances, this parameter is required.
    shared_ptr<string> imageId_ {};
    // The billing policy of the instance. Valid values:
    // 
    // *   **instance**: Bills are generated based on instances.
    // *   If you do not specify this parameter, bills are generated based on users.
    shared_ptr<string> instanceChargeStrategy_ {};
    // The billing method of the instance. Valid values:
    // 
    // *   **PrePaid**: subscription.
    // *   **PostPaid:** pay-as-you-go.
    shared_ptr<string> instanceChargeType_ {};
    // The name of the instance. The name must be 2 to 128 characters in length. It must start with a letter and cannot start with `http://` or `https://`. It can contain letters, digits, colons (:), underscores (_), periods (.), and hyphens (-).
    // 
    // The default value of this parameter is the value of the InstanceId parameter.
    shared_ptr<string> instanceName_ {};
    // The instance type.
    shared_ptr<string> instanceType_ {};
    // The bandwidth billing method. Valid values:
    // 
    // *   **BandwidthByDay**: pay by daily peak bandwidth
    // *   **95BandwidthByMonth**: pay by monthly 95th percentile bandwidth
    // 
    // >  This parameter is required if you purchase an ENS instance for the first time. The value that you specified is used as the default value for subsequent purchases.
    shared_ptr<string> internetChargeType_ {};
    // The maximum public bandwidth. If the value of this parameter is greater than 0, a public IP address is assigned to the instance.
    shared_ptr<int64_t> internetMaxBandwidthOut_ {};
    // The type of the IP address. Valid values:
    // 
    // *   **ipv4** (default).
    // *   **ipv6**.
    // *   **ipv4Andipv6** (single stack).
    // *   **ipv4Withipv6** (dual stack).
    shared_ptr<string> ipType_ {};
    shared_ptr<int64_t> ipv6AddressCount_ {};
    // The name of the key pair.
    // 
    // >  You need to specify at least one of **Password**, **KeyPairName**, and **PasswordInherit**.
    shared_ptr<string> keyPairName_ {};
    shared_ptr<string> launchTemplateId_ {};
    shared_ptr<string> launchTemplateName_ {};
    shared_ptr<int32_t> launchTemplateVersion_ {};
    // The code of the region.
    // 
    // >  This parameter is not available if ScheduleAreaLevel is set to Region and is required if ScheduleAreaLevel is set to other values.
    shared_ptr<string> netDistrictCode_ {};
    // The ID of the network.
    // 
    // >  This parameter is available only if ScheduleAreaLevel is set to Region and cannot be configured if ScheduleAreaLevel is set to other values. Otherwise, an error occurs.
    shared_ptr<string> netWorkId_ {};
    // The password that is used to connect to the instance.
    // 
    // >  You need to specify at least one of **Password**, **KeyPairName**, and **PasswordInherit**.
    shared_ptr<string> password_ {};
    // Specifies whether to use the preset password of the image. Valid values:
    // 
    // *   **true**
    // *   **false**
    // 
    // >  You need to specify at least one of **Password**, **KeyPairName**, and **PasswordInherit**.
    shared_ptr<bool> passwordInherit_ {};
    // The unit of the subscription period.
    // 
    // *   If **PeriodUnit** is set to **Day**, **Period** can only be set to **3**.
    // *   If **PeriodUnit** is **Month**, **Period** can be set to **1 to 9** or **12**.
    shared_ptr<int64_t> period_ {};
    // The unit of the subscription period. Valid values:
    // 
    // *   **Month** (default).
    // *   **Day**.
    shared_ptr<string> periodUnit_ {};
    // The private IP address.
    // 
    // >  This parameter is available only if ScheduleAreaLevel is set to Region and cannot be configured if ScheduleAreaLevel is set to other values. Otherwise, an error occurs. If you specify a private IP address, the number of instances must be 1. The private IP address takes effect only when the private IP address and the vSwitch ID are not empty.
    shared_ptr<string> privateIpAddress_ {};
    // Specifies whether to enable public IP address identification. Valid values: true and false. Default value: false.
    shared_ptr<bool> publicIpIdentification_ {};
    // The scheduling level. This parameter specifies area-level scheduling or node-level scheduling. Valid values:
    // 
    // *   **Big**: greater area
    // *   **Middle**: province
    // *   **Small**: city
    // *   **Region**: node
    shared_ptr<string> scheduleAreaLevel_ {};
    // The scheduling price policy. Valid values:
    // 
    // *   **PriceHighPriority**: The high price prevails.
    // *   **PriceLowPriority**: The low price prevails.
    shared_ptr<string> schedulingPriceStrategy_ {};
    // The scheduling policy of the taint. Valid values:
    // 
    // *   **Concentrate**
    // *   **Disperse**
    // 
    // >  If ScheduleAreaLevel is set to Region, set this parameter to **Concentrate**. If ScheduleAreaLevel is set to other values, set this parameter to Concentrate or Disperse based on your business requirements.
    shared_ptr<string> schedulingStrategy_ {};
    // The ID of security group.
    shared_ptr<string> securityId_ {};
    // The protection period of the preemptible instance. Unit: hours. Default value: 1. Valid values:
    // 
    // *   1: After a preemptible instance is created, Alibaba Cloud ensures that the instance is not automatically released within 1 hour. After the 1-hour protection period ends, the system compares the bid price with the market price and checks the resource inventory to determine whether to retain or release the instance.
    // *   0: After a preemptible instance is created, Alibaba Cloud does not ensure that the instance runs for 1 hour. The system compares the bid price with the market price and checks the resource inventory to determine whether to retain or release the instance.
    // 
    // Alibaba Cloud sends an ECS system event to notify you 5 minutes before the instance is released. Preemptible instances are billed by second. We recommend that you specify an appropriate protection period based on your business requirements.
    shared_ptr<int32_t> spotDuration_ {};
    // The bidding policy for the pay-as-you-go instance. This parameter is valid only when the `InstanceChargeType` parameter is set to `PostPaid`. Valid values:
    // 
    // *   NoSpot: The elastic container instances are pay-as-you-go instances.
    // *   SpotAsPriceGo: The instance is a preemptible instance for which the market price at the time of purchase is automatically used as the bidding price.
    // 
    // Default value: NoSpot.
    shared_ptr<string> spotStrategy_ {};
    // The specification of the system disk.
    shared_ptr<string> systemDiskShrink_ {};
    // The tags.
    shared_ptr<vector<RunInstancesShrinkRequest::Tag>> tag_ {};
    // Specifies whether to append sequential suffixes to the hostname specified by the **HostName** parameter and to the instance name specified by the **InstanceName** parameter. The sequential suffixes range from 001 to 999.
    shared_ptr<bool> uniqueSuffix_ {};
    // The custom data. The maximum data size is 16 KB. You can specify **UserData**. **UserData** must be Base64-encoded.
    shared_ptr<string> userData_ {};
    // The ID of the vSwitch.
    // 
    // >  This parameter is available only if ScheduleAreaLevel is set to Region and cannot be configured if ScheduleAreaLevel is set to other values. Otherwise, an error occurs.
    shared_ptr<string> vSwitchId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
