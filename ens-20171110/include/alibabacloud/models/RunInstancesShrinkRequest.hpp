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
      DARABONBA_PTR_TO_JSON(AutoInstallCloudAssistant, autoInstallCloudAssistant_);
      DARABONBA_PTR_TO_JSON(AutoReleaseTime, autoReleaseTime_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(AutoUseCoupon, autoUseCoupon_);
      DARABONBA_PTR_TO_JSON(BillingCycle, billingCycle_);
      DARABONBA_PTR_TO_JSON(Carrier, carrier_);
      DARABONBA_PTR_TO_JSON(CloudAssistantRegion, cloudAssistantRegion_);
      DARABONBA_PTR_TO_JSON(DataDisk, dataDiskShrink_);
      DARABONBA_PTR_TO_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_TO_JSON(DeploymentSetId, deploymentSetId_);
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
      DARABONBA_PTR_TO_JSON(VpdId, vpdId_);
      DARABONBA_PTR_TO_JSON(VpdVSwitchIds, vpdVSwitchIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, RunInstancesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Amount, amount_);
      DARABONBA_PTR_FROM_JSON(AutoInstallCloudAssistant, autoInstallCloudAssistant_);
      DARABONBA_PTR_FROM_JSON(AutoReleaseTime, autoReleaseTime_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(AutoUseCoupon, autoUseCoupon_);
      DARABONBA_PTR_FROM_JSON(BillingCycle, billingCycle_);
      DARABONBA_PTR_FROM_JSON(Carrier, carrier_);
      DARABONBA_PTR_FROM_JSON(CloudAssistantRegion, cloudAssistantRegion_);
      DARABONBA_PTR_FROM_JSON(DataDisk, dataDiskShrink_);
      DARABONBA_PTR_FROM_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_FROM_JSON(DeploymentSetId, deploymentSetId_);
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
      DARABONBA_PTR_FROM_JSON(VpdId, vpdId_);
      DARABONBA_PTR_FROM_JSON(VpdVSwitchIds, vpdVSwitchIdsShrink_);
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
      // The custom tag key.
      shared_ptr<string> key_ {};
      // The tag value. The tag value cannot exceed 128 characters in length, and cannot start with `aliyun` or `acs:`, or contain `http://` or `https://`.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->amount_ == nullptr
        && this->autoInstallCloudAssistant_ == nullptr && this->autoReleaseTime_ == nullptr && this->autoRenew_ == nullptr && this->autoUseCoupon_ == nullptr && this->billingCycle_ == nullptr
        && this->carrier_ == nullptr && this->cloudAssistantRegion_ == nullptr && this->dataDiskShrink_ == nullptr && this->deletionProtection_ == nullptr && this->deploymentSetId_ == nullptr
        && this->ensRegionId_ == nullptr && this->hostName_ == nullptr && this->imageId_ == nullptr && this->instanceChargeStrategy_ == nullptr && this->instanceChargeType_ == nullptr
        && this->instanceName_ == nullptr && this->instanceType_ == nullptr && this->internetChargeType_ == nullptr && this->internetMaxBandwidthOut_ == nullptr && this->ipType_ == nullptr
        && this->ipv6AddressCount_ == nullptr && this->keyPairName_ == nullptr && this->launchTemplateId_ == nullptr && this->launchTemplateName_ == nullptr && this->launchTemplateVersion_ == nullptr
        && this->netDistrictCode_ == nullptr && this->netWorkId_ == nullptr && this->password_ == nullptr && this->passwordInherit_ == nullptr && this->period_ == nullptr
        && this->periodUnit_ == nullptr && this->privateIpAddress_ == nullptr && this->publicIpIdentification_ == nullptr && this->scheduleAreaLevel_ == nullptr && this->schedulingPriceStrategy_ == nullptr
        && this->schedulingStrategy_ == nullptr && this->securityId_ == nullptr && this->spotDuration_ == nullptr && this->spotStrategy_ == nullptr && this->systemDiskShrink_ == nullptr
        && this->tag_ == nullptr && this->uniqueSuffix_ == nullptr && this->userData_ == nullptr && this->vSwitchId_ == nullptr && this->vpdId_ == nullptr
        && this->vpdVSwitchIdsShrink_ == nullptr; };
    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline int64_t getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0L) };
    inline RunInstancesShrinkRequest& setAmount(int64_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // autoInstallCloudAssistant Field Functions 
    bool hasAutoInstallCloudAssistant() const { return this->autoInstallCloudAssistant_ != nullptr;};
    void deleteAutoInstallCloudAssistant() { this->autoInstallCloudAssistant_ = nullptr;};
    inline bool getAutoInstallCloudAssistant() const { DARABONBA_PTR_GET_DEFAULT(autoInstallCloudAssistant_, false) };
    inline RunInstancesShrinkRequest& setAutoInstallCloudAssistant(bool autoInstallCloudAssistant) { DARABONBA_PTR_SET_VALUE(autoInstallCloudAssistant_, autoInstallCloudAssistant) };


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


    // cloudAssistantRegion Field Functions 
    bool hasCloudAssistantRegion() const { return this->cloudAssistantRegion_ != nullptr;};
    void deleteCloudAssistantRegion() { this->cloudAssistantRegion_ = nullptr;};
    inline string getCloudAssistantRegion() const { DARABONBA_PTR_GET_DEFAULT(cloudAssistantRegion_, "") };
    inline RunInstancesShrinkRequest& setCloudAssistantRegion(string cloudAssistantRegion) { DARABONBA_PTR_SET_VALUE(cloudAssistantRegion_, cloudAssistantRegion) };


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


    // deploymentSetId Field Functions 
    bool hasDeploymentSetId() const { return this->deploymentSetId_ != nullptr;};
    void deleteDeploymentSetId() { this->deploymentSetId_ = nullptr;};
    inline string getDeploymentSetId() const { DARABONBA_PTR_GET_DEFAULT(deploymentSetId_, "") };
    inline RunInstancesShrinkRequest& setDeploymentSetId(string deploymentSetId) { DARABONBA_PTR_SET_VALUE(deploymentSetId_, deploymentSetId) };


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


    // vpdId Field Functions 
    bool hasVpdId() const { return this->vpdId_ != nullptr;};
    void deleteVpdId() { this->vpdId_ = nullptr;};
    inline string getVpdId() const { DARABONBA_PTR_GET_DEFAULT(vpdId_, "") };
    inline RunInstancesShrinkRequest& setVpdId(string vpdId) { DARABONBA_PTR_SET_VALUE(vpdId_, vpdId) };


    // vpdVSwitchIdsShrink Field Functions 
    bool hasVpdVSwitchIdsShrink() const { return this->vpdVSwitchIdsShrink_ != nullptr;};
    void deleteVpdVSwitchIdsShrink() { this->vpdVSwitchIdsShrink_ = nullptr;};
    inline string getVpdVSwitchIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(vpdVSwitchIdsShrink_, "") };
    inline RunInstancesShrinkRequest& setVpdVSwitchIdsShrink(string vpdVSwitchIdsShrink) { DARABONBA_PTR_SET_VALUE(vpdVSwitchIdsShrink_, vpdVSwitchIdsShrink) };


  protected:
    // The number of instances to create. Valid values: 1 to 100.
    shared_ptr<int64_t> amount_ {};
    // Specifies whether to automatically install the Cloud Assistant client on the instance.
    shared_ptr<bool> autoInstallCloudAssistant_ {};
    // The automatic release time of the pay-as-you-go instance. Specify the time in the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the `yyyy-MM-ddTHH:mm:ssZ` format. The time must be in UTC.
    // 
    // - If the value of seconds (`ss`) is not `00`, the time is automatically set to the start of the current minute (`mm`).
    // 
    // - The earliest release time is one hour after the current time.
    // 
    // Use the UTC time format: yyyy-MM-ddTHH:mmZ
    shared_ptr<string> autoReleaseTime_ {};
    // Specifies whether to enable auto-renewal. Valid values:
    // 
    // - **true**: enables auto-renewal.
    // - **false**: does not enable auto-renewal. (Default)
    // 
    // >This parameter is invalid for pay-as-you-go instances.
    shared_ptr<bool> autoRenew_ {};
    // Specifies whether to use coupons. Default value: true (AutoUseCoupon=true).
    shared_ptr<string> autoUseCoupon_ {};
    // The billing cycle for instance compute resources. Only instance-level pay-as-you-go is supported. Valid values:
    // 
    // - **Day**: daily billing.
    // 
    // - **Month**: monthly billing.
    shared_ptr<string> billingCycle_ {};
    // The carrier.
    // >This parameter is required for region-level scheduling.</br>
    // >For node-level scheduling, if a node has multiple carriers and you do not specify a carrier, instances are created for each carrier on the node. For example, if a node has both China Mobile and China Unicom carriers, instances with two ISPs are created.</br>You can call [DescribeRegionIsps](https://help.aliyun.com/document_detail/2637461.html) to query the carrier information of a node.
    shared_ptr<string> carrier_ {};
    // The region for Cloud Assistant access. Valid values: cn-zhangjiakou (Zhangjiakou) and ap-southeast-1 (Singapore).
    shared_ptr<string> cloudAssistantRegion_ {};
    // The data cloud disk specifications.
    shared_ptr<string> dataDiskShrink_ {};
    // The release protection property of the instance. Specifies whether the instance can be released from the console or by calling an API operation. Valid values: 
    // 
    // -  true: Enables instance release protection.
    // -  false: Disables instance release protection.
    // 
    // Default value: false.
    // 
    // > This property applies only to pay-as-you-go instances and can only restrict manual release operations. It does not take effect on system-initiated release operations.
    shared_ptr<bool> deletionProtection_ {};
    // The deployment set ID.
    shared_ptr<string> deploymentSetId_ {};
    // The node ID.
    // 
    // > This parameter is required for node-level scheduling and is invalid for region-level scheduling.
    shared_ptr<string> ensRegionId_ {};
    // The hostname.
    shared_ptr<string> hostName_ {};
    // The image ID. This parameter cannot be specified for ARM-based instances. This parameter is required for other instance types.
    shared_ptr<string> imageId_ {};
    // The instance billing strategy. Valid values:
    // 
    // - **instance**: instance-level billing.
    // - If not specified, the default is user-level billing.
    shared_ptr<string> instanceChargeStrategy_ {};
    // The billing method of the instance. Valid values:
    // - **PrePaid**: subscription.
    // - **PostPaid**: pay-as-you-go.
    shared_ptr<string> instanceChargeType_ {};
    // The instance name. The name must be 2 to 128 characters in length and must start with a letter or Chinese character. It cannot start with `http://` or `https://`. It can contain Chinese characters, letters, digits, colons (:), underscores (_), periods (.), or hyphens (-).
    // 
    // Default value: the InstanceId of the instance.
    shared_ptr<string> instanceName_ {};
    // The instance type.
    shared_ptr<string> instanceType_ {};
    // Billable methods for bandwidth. Valid values:
    // - **BandwidthByDay**: daily peak bandwidth
    // - **95BandwidthByMonth**: monthly 95th percentile bandwidth
    // 
    // > You can select a billing method only for the first purchase. Subsequent purchases use the billing method selected during the first purchase by default.
    shared_ptr<string> internetChargeType_ {};
    // The maximum public bandwidth. If the value of this parameter is greater than 0, a public IP address is automatically assigned to the instance.
    shared_ptr<int64_t> internetMaxBandwidthOut_ {};
    // The IP type. Valid values:
    // 
    // - **ipv4** (default): IPv4.
    // 
    // - **ipv6**: IPv6.
    // 
    // - **ipv4Andipv6**: IPv4 and IPv6 (single stack).
    // - **ipv4Withipv6**: IPv4 and IPv6 (dual-stack).
    shared_ptr<string> ipType_ {};
    // The number of randomly generated IPv6 addresses to assign to the primary ENI of the private network.
    shared_ptr<int64_t> ipv6AddressCount_ {};
    // The key pair name.
    // > Specify at least one of **Password**, **KeyPairName**, and **PasswordInherit**.
    shared_ptr<string> keyPairName_ {};
    // The ID of the instance launch template.
    shared_ptr<string> launchTemplateId_ {};
    // The name of the instance launch template.
    shared_ptr<string> launchTemplateName_ {};
    // The version of the instance launch template.
    shared_ptr<int32_t> launchTemplateVersion_ {};
    // The region code.
    // >This parameter is required for region-level scheduling and is invalid for node-level scheduling.
    shared_ptr<string> netDistrictCode_ {};
    // The network ID.
    // 
    // >This parameter can only be used for node-level scheduling. An error is returned if this parameter is specified for region-level scheduling. If you do not specify vSwitch information, only the validity of the network ID is verified. The actual resource creation does not use this network ID.
    shared_ptr<string> netWorkId_ {};
    // The instance password.
    // 
    // > Specify at least one of **Password**, **KeyPairName**, and **PasswordInherit**.
    shared_ptr<string> password_ {};
    // Specifies whether to use the preset password of the image. Valid values:
    // 
    // - **true**: uses the preset password.
    // - **false**: does not use the preset password.
    // 
    // > Specify at least one of **Password**, **KeyPairName**, and **PasswordInherit**.
    shared_ptr<bool> passwordInherit_ {};
    // The duration of the purchased resource.
    // 
    // - If **PeriodUnit** is set to **Day**, **Period** can only be set to **3**.
    // 
    // - If **PeriodUnit** is set to **Month**, **Period** can be set to **1-9** or **12**.
    shared_ptr<int64_t> period_ {};
    // The unit of the purchase duration. Valid values:
    // - **Month** (default): monthly purchase.
    // - **Day**: daily purchase.
    shared_ptr<string> periodUnit_ {};
    // The private IP address.
    // >This parameter can only be used for node-level scheduling. An error is returned if this parameter is specified for region-level scheduling.
    // If a private IP address is specified, the number of instances can only be 1. The private IP address takes effect only when both the private IP address and vSwitch ID are specified.
    shared_ptr<string> privateIpAddress_ {};
    // Specifies whether to enable public IP identification. Valid values:
    // 
    // - true: enables public IP identification.
    // 
    // - false: does not enable public IP identification.
    // 
    // Default value: true.
    shared_ptr<bool> publicIpIdentification_ {};
    // The scheduling level. Use this parameter to specify node-level or region-level scheduling. Valid values:
    // 
    // - **Big**: major area
    // - **Middle**: province
    // - **Small**: city
    // - **Region**: node
    shared_ptr<string> scheduleAreaLevel_ {};
    // The scheduling price strategy. Valid values:
    // 
    // - **PriceHighPriority**: high price first
    // - **PriceLowPriority**: low price first
    shared_ptr<string> schedulingPriceStrategy_ {};
    // The scheduling strategy. Valid values:
    // 
    // - **Concentrate**: concentrated
    // - **Disperse**: dispersed
    // 
    // > For node-level scheduling, the value is **Concentrate**. For region-level scheduling, select a value based on your requirements.
    shared_ptr<string> schedulingStrategy_ {};
    // The security group ID.
    shared_ptr<string> securityId_ {};
    // The protection period of the spot instance.
    // 
    // Unit: hours.
    shared_ptr<int32_t> spotDuration_ {};
    // The bidding policy for the pay-as-you-go instance. This parameter takes effect when the `InstanceChargeType` parameter is set to `PostPaid`. Valid values:
    // 
    // - NoSpot: a regular pay-as-you-go instance.
    // - SpotAsPriceGo: the system automatically bids at the current market price.
    // 
    // Default value: NoSpot.
    shared_ptr<string> spotStrategy_ {};
    // The system cloud disk specifications.
    shared_ptr<string> systemDiskShrink_ {};
    // The tags that are bound to the instance.
    shared_ptr<vector<RunInstancesShrinkRequest::Tag>> tag_ {};
    // Specifies whether to add sequential suffixes to **HostName** and **InstanceName**. The sequential suffixes start from 001 and cannot exceed 999.
    shared_ptr<bool> uniqueSuffix_ {};
    // The custom user data. Maximum size: 16 KB. You can pass in **UserData** information. **UserData** is Base64-encoded.
    shared_ptr<string> userData_ {};
    // The vSwitch ID.
    // 
    // >This parameter can only be used for node-level scheduling. An error is returned if this parameter is specified for region-level scheduling.
    shared_ptr<string> vSwitchId_ {};
    // The VPD network ID.
    shared_ptr<string> vpdId_ {};
    // The list of VPD vSwitch IDs.
    shared_ptr<string> vpdVSwitchIdsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
