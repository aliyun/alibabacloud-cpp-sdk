// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAUTOPROVISIONINGGROUPREQUESTLAUNCHCONFIGURATION_HPP_
#define ALIBABACLOUD_MODELS_CREATEAUTOPROVISIONINGGROUPREQUESTLAUNCHCONFIGURATION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateAutoProvisioningGroupRequestLaunchConfigurationArn.hpp>
#include <alibabacloud/models/CreateAutoProvisioningGroupRequestLaunchConfigurationDataDisk.hpp>
#include <alibabacloud/models/CreateAutoProvisioningGroupRequestLaunchConfigurationSystemDisk.hpp>
#include <alibabacloud/models/CreateAutoProvisioningGroupRequestLaunchConfigurationTag.hpp>
#include <alibabacloud/models/CreateAutoProvisioningGroupRequestLaunchConfigurationCpuOptions.hpp>
#include <alibabacloud/models/CreateAutoProvisioningGroupRequestLaunchConfigurationImageOptions.hpp>
#include <alibabacloud/models/CreateAutoProvisioningGroupRequestLaunchConfigurationSchedulerOptions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class CreateAutoProvisioningGroupRequestLaunchConfiguration : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAutoProvisioningGroupRequestLaunchConfiguration& obj) { 
      DARABONBA_PTR_TO_JSON(Arn, arn_);
      DARABONBA_PTR_TO_JSON(AutoReleaseTime, autoReleaseTime_);
      DARABONBA_PTR_TO_JSON(CreditSpecification, creditSpecification_);
      DARABONBA_PTR_TO_JSON(DataDisk, dataDisk_);
      DARABONBA_PTR_TO_JSON(DeploymentSetId, deploymentSetId_);
      DARABONBA_PTR_TO_JSON(HostName, hostName_);
      DARABONBA_PTR_TO_JSON(HostNames, hostNames_);
      DARABONBA_PTR_TO_JSON(ImageFamily, imageFamily_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(InstanceDescription, instanceDescription_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_TO_JSON(InternetMaxBandwidthIn, internetMaxBandwidthIn_);
      DARABONBA_PTR_TO_JSON(InternetMaxBandwidthOut, internetMaxBandwidthOut_);
      DARABONBA_PTR_TO_JSON(IoOptimized, ioOptimized_);
      DARABONBA_PTR_TO_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(PasswordInherit, passwordInherit_);
      DARABONBA_PTR_TO_JSON(RamRoleName, ramRoleName_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityEnhancementStrategy, securityEnhancementStrategy_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupIds, securityGroupIds_);
      DARABONBA_PTR_TO_JSON(SystemDisk, systemDisk_);
      DARABONBA_PTR_TO_JSON(SystemDiskCategory, systemDiskCategory_);
      DARABONBA_PTR_TO_JSON(SystemDiskDescription, systemDiskDescription_);
      DARABONBA_PTR_TO_JSON(SystemDiskName, systemDiskName_);
      DARABONBA_PTR_TO_JSON(SystemDiskPerformanceLevel, systemDiskPerformanceLevel_);
      DARABONBA_PTR_TO_JSON(SystemDiskSize, systemDiskSize_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(AutoRenewPeriod, autoRenewPeriod_);
      DARABONBA_PTR_TO_JSON(CpuOptions, cpuOptions_);
      DARABONBA_PTR_TO_JSON(ImageOptions, imageOptions_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(SchedulerOptions, schedulerOptions_);
      DARABONBA_PTR_TO_JSON(SpotDuration, spotDuration_);
      DARABONBA_PTR_TO_JSON(SpotInterruptionBehavior, spotInterruptionBehavior_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAutoProvisioningGroupRequestLaunchConfiguration& obj) { 
      DARABONBA_PTR_FROM_JSON(Arn, arn_);
      DARABONBA_PTR_FROM_JSON(AutoReleaseTime, autoReleaseTime_);
      DARABONBA_PTR_FROM_JSON(CreditSpecification, creditSpecification_);
      DARABONBA_PTR_FROM_JSON(DataDisk, dataDisk_);
      DARABONBA_PTR_FROM_JSON(DeploymentSetId, deploymentSetId_);
      DARABONBA_PTR_FROM_JSON(HostName, hostName_);
      DARABONBA_PTR_FROM_JSON(HostNames, hostNames_);
      DARABONBA_PTR_FROM_JSON(ImageFamily, imageFamily_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(InstanceDescription, instanceDescription_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_FROM_JSON(InternetMaxBandwidthIn, internetMaxBandwidthIn_);
      DARABONBA_PTR_FROM_JSON(InternetMaxBandwidthOut, internetMaxBandwidthOut_);
      DARABONBA_PTR_FROM_JSON(IoOptimized, ioOptimized_);
      DARABONBA_PTR_FROM_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(PasswordInherit, passwordInherit_);
      DARABONBA_PTR_FROM_JSON(RamRoleName, ramRoleName_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityEnhancementStrategy, securityEnhancementStrategy_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupIds, securityGroupIds_);
      DARABONBA_PTR_FROM_JSON(SystemDisk, systemDisk_);
      DARABONBA_PTR_FROM_JSON(SystemDiskCategory, systemDiskCategory_);
      DARABONBA_PTR_FROM_JSON(SystemDiskDescription, systemDiskDescription_);
      DARABONBA_PTR_FROM_JSON(SystemDiskName, systemDiskName_);
      DARABONBA_PTR_FROM_JSON(SystemDiskPerformanceLevel, systemDiskPerformanceLevel_);
      DARABONBA_PTR_FROM_JSON(SystemDiskSize, systemDiskSize_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(AutoRenewPeriod, autoRenewPeriod_);
      DARABONBA_PTR_FROM_JSON(CpuOptions, cpuOptions_);
      DARABONBA_PTR_FROM_JSON(ImageOptions, imageOptions_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(SchedulerOptions, schedulerOptions_);
      DARABONBA_PTR_FROM_JSON(SpotDuration, spotDuration_);
      DARABONBA_PTR_FROM_JSON(SpotInterruptionBehavior, spotInterruptionBehavior_);
    };
    CreateAutoProvisioningGroupRequestLaunchConfiguration() = default ;
    CreateAutoProvisioningGroupRequestLaunchConfiguration(const CreateAutoProvisioningGroupRequestLaunchConfiguration &) = default ;
    CreateAutoProvisioningGroupRequestLaunchConfiguration(CreateAutoProvisioningGroupRequestLaunchConfiguration &&) = default ;
    CreateAutoProvisioningGroupRequestLaunchConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAutoProvisioningGroupRequestLaunchConfiguration() = default ;
    CreateAutoProvisioningGroupRequestLaunchConfiguration& operator=(const CreateAutoProvisioningGroupRequestLaunchConfiguration &) = default ;
    CreateAutoProvisioningGroupRequestLaunchConfiguration& operator=(CreateAutoProvisioningGroupRequestLaunchConfiguration &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->arn_ != nullptr
        && this->autoReleaseTime_ != nullptr && this->creditSpecification_ != nullptr && this->dataDisk_ != nullptr && this->deploymentSetId_ != nullptr && this->hostName_ != nullptr
        && this->hostNames_ != nullptr && this->imageFamily_ != nullptr && this->imageId_ != nullptr && this->instanceDescription_ != nullptr && this->instanceName_ != nullptr
        && this->internetChargeType_ != nullptr && this->internetMaxBandwidthIn_ != nullptr && this->internetMaxBandwidthOut_ != nullptr && this->ioOptimized_ != nullptr && this->keyPairName_ != nullptr
        && this->password_ != nullptr && this->passwordInherit_ != nullptr && this->ramRoleName_ != nullptr && this->resourceGroupId_ != nullptr && this->securityEnhancementStrategy_ != nullptr
        && this->securityGroupId_ != nullptr && this->securityGroupIds_ != nullptr && this->systemDisk_ != nullptr && this->systemDiskCategory_ != nullptr && this->systemDiskDescription_ != nullptr
        && this->systemDiskName_ != nullptr && this->systemDiskPerformanceLevel_ != nullptr && this->systemDiskSize_ != nullptr && this->tag_ != nullptr && this->userData_ != nullptr
        && this->autoRenew_ != nullptr && this->autoRenewPeriod_ != nullptr && this->cpuOptions_ != nullptr && this->imageOptions_ != nullptr && this->period_ != nullptr
        && this->periodUnit_ != nullptr && this->schedulerOptions_ != nullptr && this->spotDuration_ != nullptr && this->spotInterruptionBehavior_ != nullptr; };
    // arn Field Functions 
    bool hasArn() const { return this->arn_ != nullptr;};
    void deleteArn() { this->arn_ = nullptr;};
    inline const vector<Models::CreateAutoProvisioningGroupRequestLaunchConfigurationArn> & arn() const { DARABONBA_PTR_GET_CONST(arn_, vector<Models::CreateAutoProvisioningGroupRequestLaunchConfigurationArn>) };
    inline vector<Models::CreateAutoProvisioningGroupRequestLaunchConfigurationArn> arn() { DARABONBA_PTR_GET(arn_, vector<Models::CreateAutoProvisioningGroupRequestLaunchConfigurationArn>) };
    inline CreateAutoProvisioningGroupRequestLaunchConfiguration& setArn(const vector<Models::CreateAutoProvisioningGroupRequestLaunchConfigurationArn> & arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };
    inline CreateAutoProvisioningGroupRequestLaunchConfiguration& setArn(vector<Models::CreateAutoProvisioningGroupRequestLaunchConfigurationArn> && arn) { DARABONBA_PTR_SET_RVALUE(arn_, arn) };


    // autoReleaseTime Field Functions 
    bool hasAutoReleaseTime() const { return this->autoReleaseTime_ != nullptr;};
    void deleteAutoReleaseTime() { this->autoReleaseTime_ = nullptr;};
    inline string autoReleaseTime() const { DARABONBA_PTR_GET_DEFAULT(autoReleaseTime_, "") };
    inline CreateAutoProvisioningGroupRequestLaunchConfiguration& setAutoReleaseTime(string autoReleaseTime) { DARABONBA_PTR_SET_VALUE(autoReleaseTime_, autoReleaseTime) };


    // creditSpecification Field Functions 
    bool hasCreditSpecification() const { return this->creditSpecification_ != nullptr;};
    void deleteCreditSpecification() { this->creditSpecification_ = nullptr;};
    inline string creditSpecification() const { DARABONBA_PTR_GET_DEFAULT(creditSpecification_, "") };
    inline CreateAutoProvisioningGroupRequestLaunchConfiguration& setCreditSpecification(string creditSpecification) { DARABONBA_PTR_SET_VALUE(creditSpecification_, creditSpecification) };


    // dataDisk Field Functions 
    bool hasDataDisk() const { return this->dataDisk_ != nullptr;};
    void deleteDataDisk() { this->dataDisk_ = nullptr;};
    inline const vector<Models::CreateAutoProvisioningGroupRequestLaunchConfigurationDataDisk> & dataDisk() const { DARABONBA_PTR_GET_CONST(dataDisk_, vector<Models::CreateAutoProvisioningGroupRequestLaunchConfigurationDataDisk>) };
    inline vector<Models::CreateAutoProvisioningGroupRequestLaunchConfigurationDataDisk> dataDisk() { DARABONBA_PTR_GET(dataDisk_, vector<Models::CreateAutoProvisioningGroupRequestLaunchConfigurationDataDisk>) };
    inline CreateAutoProvisioningGroupRequestLaunchConfiguration& setDataDisk(const vector<Models::CreateAutoProvisioningGroupRequestLaunchConfigurationDataDisk> & dataDisk) { DARABONBA_PTR_SET_VALUE(dataDisk_, dataDisk) };
    inline CreateAutoProvisioningGroupRequestLaunchConfiguration& setDataDisk(vector<Models::CreateAutoProvisioningGroupRequestLaunchConfigurationDataDisk> && dataDisk) { DARABONBA_PTR_SET_RVALUE(dataDisk_, dataDisk) };


    // deploymentSetId Field Functions 
    bool hasDeploymentSetId() const { return this->deploymentSetId_ != nullptr;};
    void deleteDeploymentSetId() { this->deploymentSetId_ = nullptr;};
    inline string deploymentSetId() const { DARABONBA_PTR_GET_DEFAULT(deploymentSetId_, "") };
    inline CreateAutoProvisioningGroupRequestLaunchConfiguration& setDeploymentSetId(string deploymentSetId) { DARABONBA_PTR_SET_VALUE(deploymentSetId_, deploymentSetId) };


    // hostName Field Functions 
    bool hasHostName() const { return this->hostName_ != nullptr;};
    void deleteHostName() { this->hostName_ = nullptr;};
    inline string hostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
    inline CreateAutoProvisioningGroupRequestLaunchConfiguration& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


    // hostNames Field Functions 
    bool hasHostNames() const { return this->hostNames_ != nullptr;};
    void deleteHostNames() { this->hostNames_ = nullptr;};
    inline const vector<string> & hostNames() const { DARABONBA_PTR_GET_CONST(hostNames_, vector<string>) };
    inline vector<string> hostNames() { DARABONBA_PTR_GET(hostNames_, vector<string>) };
    inline CreateAutoProvisioningGroupRequestLaunchConfiguration& setHostNames(const vector<string> & hostNames) { DARABONBA_PTR_SET_VALUE(hostNames_, hostNames) };
    inline CreateAutoProvisioningGroupRequestLaunchConfiguration& setHostNames(vector<string> && hostNames) { DARABONBA_PTR_SET_RVALUE(hostNames_, hostNames) };


    // imageFamily Field Functions 
    bool hasImageFamily() const { return this->imageFamily_ != nullptr;};
    void deleteImageFamily() { this->imageFamily_ = nullptr;};
    inline string imageFamily() const { DARABONBA_PTR_GET_DEFAULT(imageFamily_, "") };
    inline CreateAutoProvisioningGroupRequestLaunchConfiguration& setImageFamily(string imageFamily) { DARABONBA_PTR_SET_VALUE(imageFamily_, imageFamily) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline CreateAutoProvisioningGroupRequestLaunchConfiguration& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // instanceDescription Field Functions 
    bool hasInstanceDescription() const { return this->instanceDescription_ != nullptr;};
    void deleteInstanceDescription() { this->instanceDescription_ = nullptr;};
    inline string instanceDescription() const { DARABONBA_PTR_GET_DEFAULT(instanceDescription_, "") };
    inline CreateAutoProvisioningGroupRequestLaunchConfiguration& setInstanceDescription(string instanceDescription) { DARABONBA_PTR_SET_VALUE(instanceDescription_, instanceDescription) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline CreateAutoProvisioningGroupRequestLaunchConfiguration& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // internetChargeType Field Functions 
    bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
    void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
    inline string internetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
    inline CreateAutoProvisioningGroupRequestLaunchConfiguration& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


    // internetMaxBandwidthIn Field Functions 
    bool hasInternetMaxBandwidthIn() const { return this->internetMaxBandwidthIn_ != nullptr;};
    void deleteInternetMaxBandwidthIn() { this->internetMaxBandwidthIn_ = nullptr;};
    inline int32_t internetMaxBandwidthIn() const { DARABONBA_PTR_GET_DEFAULT(internetMaxBandwidthIn_, 0) };
    inline CreateAutoProvisioningGroupRequestLaunchConfiguration& setInternetMaxBandwidthIn(int32_t internetMaxBandwidthIn) { DARABONBA_PTR_SET_VALUE(internetMaxBandwidthIn_, internetMaxBandwidthIn) };


    // internetMaxBandwidthOut Field Functions 
    bool hasInternetMaxBandwidthOut() const { return this->internetMaxBandwidthOut_ != nullptr;};
    void deleteInternetMaxBandwidthOut() { this->internetMaxBandwidthOut_ = nullptr;};
    inline int32_t internetMaxBandwidthOut() const { DARABONBA_PTR_GET_DEFAULT(internetMaxBandwidthOut_, 0) };
    inline CreateAutoProvisioningGroupRequestLaunchConfiguration& setInternetMaxBandwidthOut(int32_t internetMaxBandwidthOut) { DARABONBA_PTR_SET_VALUE(internetMaxBandwidthOut_, internetMaxBandwidthOut) };


    // ioOptimized Field Functions 
    bool hasIoOptimized() const { return this->ioOptimized_ != nullptr;};
    void deleteIoOptimized() { this->ioOptimized_ = nullptr;};
    inline string ioOptimized() const { DARABONBA_PTR_GET_DEFAULT(ioOptimized_, "") };
    inline CreateAutoProvisioningGroupRequestLaunchConfiguration& setIoOptimized(string ioOptimized) { DARABONBA_PTR_SET_VALUE(ioOptimized_, ioOptimized) };


    // keyPairName Field Functions 
    bool hasKeyPairName() const { return this->keyPairName_ != nullptr;};
    void deleteKeyPairName() { this->keyPairName_ = nullptr;};
    inline string keyPairName() const { DARABONBA_PTR_GET_DEFAULT(keyPairName_, "") };
    inline CreateAutoProvisioningGroupRequestLaunchConfiguration& setKeyPairName(string keyPairName) { DARABONBA_PTR_SET_VALUE(keyPairName_, keyPairName) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline CreateAutoProvisioningGroupRequestLaunchConfiguration& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // passwordInherit Field Functions 
    bool hasPasswordInherit() const { return this->passwordInherit_ != nullptr;};
    void deletePasswordInherit() { this->passwordInherit_ = nullptr;};
    inline bool passwordInherit() const { DARABONBA_PTR_GET_DEFAULT(passwordInherit_, false) };
    inline CreateAutoProvisioningGroupRequestLaunchConfiguration& setPasswordInherit(bool passwordInherit) { DARABONBA_PTR_SET_VALUE(passwordInherit_, passwordInherit) };


    // ramRoleName Field Functions 
    bool hasRamRoleName() const { return this->ramRoleName_ != nullptr;};
    void deleteRamRoleName() { this->ramRoleName_ = nullptr;};
    inline string ramRoleName() const { DARABONBA_PTR_GET_DEFAULT(ramRoleName_, "") };
    inline CreateAutoProvisioningGroupRequestLaunchConfiguration& setRamRoleName(string ramRoleName) { DARABONBA_PTR_SET_VALUE(ramRoleName_, ramRoleName) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateAutoProvisioningGroupRequestLaunchConfiguration& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // securityEnhancementStrategy Field Functions 
    bool hasSecurityEnhancementStrategy() const { return this->securityEnhancementStrategy_ != nullptr;};
    void deleteSecurityEnhancementStrategy() { this->securityEnhancementStrategy_ = nullptr;};
    inline string securityEnhancementStrategy() const { DARABONBA_PTR_GET_DEFAULT(securityEnhancementStrategy_, "") };
    inline CreateAutoProvisioningGroupRequestLaunchConfiguration& setSecurityEnhancementStrategy(string securityEnhancementStrategy) { DARABONBA_PTR_SET_VALUE(securityEnhancementStrategy_, securityEnhancementStrategy) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline CreateAutoProvisioningGroupRequestLaunchConfiguration& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // securityGroupIds Field Functions 
    bool hasSecurityGroupIds() const { return this->securityGroupIds_ != nullptr;};
    void deleteSecurityGroupIds() { this->securityGroupIds_ = nullptr;};
    inline const vector<string> & securityGroupIds() const { DARABONBA_PTR_GET_CONST(securityGroupIds_, vector<string>) };
    inline vector<string> securityGroupIds() { DARABONBA_PTR_GET(securityGroupIds_, vector<string>) };
    inline CreateAutoProvisioningGroupRequestLaunchConfiguration& setSecurityGroupIds(const vector<string> & securityGroupIds) { DARABONBA_PTR_SET_VALUE(securityGroupIds_, securityGroupIds) };
    inline CreateAutoProvisioningGroupRequestLaunchConfiguration& setSecurityGroupIds(vector<string> && securityGroupIds) { DARABONBA_PTR_SET_RVALUE(securityGroupIds_, securityGroupIds) };


    // systemDisk Field Functions 
    bool hasSystemDisk() const { return this->systemDisk_ != nullptr;};
    void deleteSystemDisk() { this->systemDisk_ = nullptr;};
    inline const Models::CreateAutoProvisioningGroupRequestLaunchConfigurationSystemDisk & systemDisk() const { DARABONBA_PTR_GET_CONST(systemDisk_, Models::CreateAutoProvisioningGroupRequestLaunchConfigurationSystemDisk) };
    inline Models::CreateAutoProvisioningGroupRequestLaunchConfigurationSystemDisk systemDisk() { DARABONBA_PTR_GET(systemDisk_, Models::CreateAutoProvisioningGroupRequestLaunchConfigurationSystemDisk) };
    inline CreateAutoProvisioningGroupRequestLaunchConfiguration& setSystemDisk(const Models::CreateAutoProvisioningGroupRequestLaunchConfigurationSystemDisk & systemDisk) { DARABONBA_PTR_SET_VALUE(systemDisk_, systemDisk) };
    inline CreateAutoProvisioningGroupRequestLaunchConfiguration& setSystemDisk(Models::CreateAutoProvisioningGroupRequestLaunchConfigurationSystemDisk && systemDisk) { DARABONBA_PTR_SET_RVALUE(systemDisk_, systemDisk) };


    // systemDiskCategory Field Functions 
    bool hasSystemDiskCategory() const { return this->systemDiskCategory_ != nullptr;};
    void deleteSystemDiskCategory() { this->systemDiskCategory_ = nullptr;};
    inline string systemDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(systemDiskCategory_, "") };
    inline CreateAutoProvisioningGroupRequestLaunchConfiguration& setSystemDiskCategory(string systemDiskCategory) { DARABONBA_PTR_SET_VALUE(systemDiskCategory_, systemDiskCategory) };


    // systemDiskDescription Field Functions 
    bool hasSystemDiskDescription() const { return this->systemDiskDescription_ != nullptr;};
    void deleteSystemDiskDescription() { this->systemDiskDescription_ = nullptr;};
    inline string systemDiskDescription() const { DARABONBA_PTR_GET_DEFAULT(systemDiskDescription_, "") };
    inline CreateAutoProvisioningGroupRequestLaunchConfiguration& setSystemDiskDescription(string systemDiskDescription) { DARABONBA_PTR_SET_VALUE(systemDiskDescription_, systemDiskDescription) };


    // systemDiskName Field Functions 
    bool hasSystemDiskName() const { return this->systemDiskName_ != nullptr;};
    void deleteSystemDiskName() { this->systemDiskName_ = nullptr;};
    inline string systemDiskName() const { DARABONBA_PTR_GET_DEFAULT(systemDiskName_, "") };
    inline CreateAutoProvisioningGroupRequestLaunchConfiguration& setSystemDiskName(string systemDiskName) { DARABONBA_PTR_SET_VALUE(systemDiskName_, systemDiskName) };


    // systemDiskPerformanceLevel Field Functions 
    bool hasSystemDiskPerformanceLevel() const { return this->systemDiskPerformanceLevel_ != nullptr;};
    void deleteSystemDiskPerformanceLevel() { this->systemDiskPerformanceLevel_ = nullptr;};
    inline string systemDiskPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(systemDiskPerformanceLevel_, "") };
    inline CreateAutoProvisioningGroupRequestLaunchConfiguration& setSystemDiskPerformanceLevel(string systemDiskPerformanceLevel) { DARABONBA_PTR_SET_VALUE(systemDiskPerformanceLevel_, systemDiskPerformanceLevel) };


    // systemDiskSize Field Functions 
    bool hasSystemDiskSize() const { return this->systemDiskSize_ != nullptr;};
    void deleteSystemDiskSize() { this->systemDiskSize_ = nullptr;};
    inline int32_t systemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSize_, 0) };
    inline CreateAutoProvisioningGroupRequestLaunchConfiguration& setSystemDiskSize(int32_t systemDiskSize) { DARABONBA_PTR_SET_VALUE(systemDiskSize_, systemDiskSize) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::CreateAutoProvisioningGroupRequestLaunchConfigurationTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::CreateAutoProvisioningGroupRequestLaunchConfigurationTag>) };
    inline vector<Models::CreateAutoProvisioningGroupRequestLaunchConfigurationTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::CreateAutoProvisioningGroupRequestLaunchConfigurationTag>) };
    inline CreateAutoProvisioningGroupRequestLaunchConfiguration& setTag(const vector<Models::CreateAutoProvisioningGroupRequestLaunchConfigurationTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateAutoProvisioningGroupRequestLaunchConfiguration& setTag(vector<Models::CreateAutoProvisioningGroupRequestLaunchConfigurationTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline CreateAutoProvisioningGroupRequestLaunchConfiguration& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool autoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline CreateAutoProvisioningGroupRequestLaunchConfiguration& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // autoRenewPeriod Field Functions 
    bool hasAutoRenewPeriod() const { return this->autoRenewPeriod_ != nullptr;};
    void deleteAutoRenewPeriod() { this->autoRenewPeriod_ = nullptr;};
    inline int32_t autoRenewPeriod() const { DARABONBA_PTR_GET_DEFAULT(autoRenewPeriod_, 0) };
    inline CreateAutoProvisioningGroupRequestLaunchConfiguration& setAutoRenewPeriod(int32_t autoRenewPeriod) { DARABONBA_PTR_SET_VALUE(autoRenewPeriod_, autoRenewPeriod) };


    // cpuOptions Field Functions 
    bool hasCpuOptions() const { return this->cpuOptions_ != nullptr;};
    void deleteCpuOptions() { this->cpuOptions_ = nullptr;};
    inline const Models::CreateAutoProvisioningGroupRequestLaunchConfigurationCpuOptions & cpuOptions() const { DARABONBA_PTR_GET_CONST(cpuOptions_, Models::CreateAutoProvisioningGroupRequestLaunchConfigurationCpuOptions) };
    inline Models::CreateAutoProvisioningGroupRequestLaunchConfigurationCpuOptions cpuOptions() { DARABONBA_PTR_GET(cpuOptions_, Models::CreateAutoProvisioningGroupRequestLaunchConfigurationCpuOptions) };
    inline CreateAutoProvisioningGroupRequestLaunchConfiguration& setCpuOptions(const Models::CreateAutoProvisioningGroupRequestLaunchConfigurationCpuOptions & cpuOptions) { DARABONBA_PTR_SET_VALUE(cpuOptions_, cpuOptions) };
    inline CreateAutoProvisioningGroupRequestLaunchConfiguration& setCpuOptions(Models::CreateAutoProvisioningGroupRequestLaunchConfigurationCpuOptions && cpuOptions) { DARABONBA_PTR_SET_RVALUE(cpuOptions_, cpuOptions) };


    // imageOptions Field Functions 
    bool hasImageOptions() const { return this->imageOptions_ != nullptr;};
    void deleteImageOptions() { this->imageOptions_ = nullptr;};
    inline const Models::CreateAutoProvisioningGroupRequestLaunchConfigurationImageOptions & imageOptions() const { DARABONBA_PTR_GET_CONST(imageOptions_, Models::CreateAutoProvisioningGroupRequestLaunchConfigurationImageOptions) };
    inline Models::CreateAutoProvisioningGroupRequestLaunchConfigurationImageOptions imageOptions() { DARABONBA_PTR_GET(imageOptions_, Models::CreateAutoProvisioningGroupRequestLaunchConfigurationImageOptions) };
    inline CreateAutoProvisioningGroupRequestLaunchConfiguration& setImageOptions(const Models::CreateAutoProvisioningGroupRequestLaunchConfigurationImageOptions & imageOptions) { DARABONBA_PTR_SET_VALUE(imageOptions_, imageOptions) };
    inline CreateAutoProvisioningGroupRequestLaunchConfiguration& setImageOptions(Models::CreateAutoProvisioningGroupRequestLaunchConfigurationImageOptions && imageOptions) { DARABONBA_PTR_SET_RVALUE(imageOptions_, imageOptions) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline CreateAutoProvisioningGroupRequestLaunchConfiguration& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string periodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline CreateAutoProvisioningGroupRequestLaunchConfiguration& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // schedulerOptions Field Functions 
    bool hasSchedulerOptions() const { return this->schedulerOptions_ != nullptr;};
    void deleteSchedulerOptions() { this->schedulerOptions_ = nullptr;};
    inline const Models::CreateAutoProvisioningGroupRequestLaunchConfigurationSchedulerOptions & schedulerOptions() const { DARABONBA_PTR_GET_CONST(schedulerOptions_, Models::CreateAutoProvisioningGroupRequestLaunchConfigurationSchedulerOptions) };
    inline Models::CreateAutoProvisioningGroupRequestLaunchConfigurationSchedulerOptions schedulerOptions() { DARABONBA_PTR_GET(schedulerOptions_, Models::CreateAutoProvisioningGroupRequestLaunchConfigurationSchedulerOptions) };
    inline CreateAutoProvisioningGroupRequestLaunchConfiguration& setSchedulerOptions(const Models::CreateAutoProvisioningGroupRequestLaunchConfigurationSchedulerOptions & schedulerOptions) { DARABONBA_PTR_SET_VALUE(schedulerOptions_, schedulerOptions) };
    inline CreateAutoProvisioningGroupRequestLaunchConfiguration& setSchedulerOptions(Models::CreateAutoProvisioningGroupRequestLaunchConfigurationSchedulerOptions && schedulerOptions) { DARABONBA_PTR_SET_RVALUE(schedulerOptions_, schedulerOptions) };


    // spotDuration Field Functions 
    bool hasSpotDuration() const { return this->spotDuration_ != nullptr;};
    void deleteSpotDuration() { this->spotDuration_ = nullptr;};
    inline int32_t spotDuration() const { DARABONBA_PTR_GET_DEFAULT(spotDuration_, 0) };
    inline CreateAutoProvisioningGroupRequestLaunchConfiguration& setSpotDuration(int32_t spotDuration) { DARABONBA_PTR_SET_VALUE(spotDuration_, spotDuration) };


    // spotInterruptionBehavior Field Functions 
    bool hasSpotInterruptionBehavior() const { return this->spotInterruptionBehavior_ != nullptr;};
    void deleteSpotInterruptionBehavior() { this->spotInterruptionBehavior_ = nullptr;};
    inline string spotInterruptionBehavior() const { DARABONBA_PTR_GET_DEFAULT(spotInterruptionBehavior_, "") };
    inline CreateAutoProvisioningGroupRequestLaunchConfiguration& setSpotInterruptionBehavior(string spotInterruptionBehavior) { DARABONBA_PTR_SET_VALUE(spotInterruptionBehavior_, spotInterruptionBehavior) };


  protected:
    // >  This parameter is in invitational preview and is not publicly available.
    std::shared_ptr<vector<Models::CreateAutoProvisioningGroupRequestLaunchConfigurationArn>> arn_ = nullptr;
    // The automatic release time of the pay-as-you-go instance. Specify the time in the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the `yyyy-MM-ddTHH:mm:ssZ` format. The time must be in Coordinated Universal Time (UTC).
    // 
    // *   If the value of `ss` is not `00`, the start time is automatically rounded down to the nearest minute based on the value of `mm`.
    // *   The specified time must be at least 30 minutes later than the current time.
    // *   The specified time can be at most three years later than the current time.
    std::shared_ptr<string> autoReleaseTime_ = nullptr;
    // The performance mode of the burstable instance. Valid values:
    // 
    // *   Standard: the standard mode. For more information, see the "Standard mode" section in the [Overview of burstable instances](https://help.aliyun.com/document_detail/59977.html) topic.
    // *   Unlimited: the unlimited mode. For more information, see the "Unlimited mode" section in the [Overview of burstable instances](https://help.aliyun.com/document_detail/59977.html) topic.
    // 
    // This parameter is empty by default.
    // 
    // When both LaunchTemplateId and LaunchConfiguration.\\* parameters are specified, LaunchTemplateId takes precedence.
    std::shared_ptr<string> creditSpecification_ = nullptr;
    // The cloud disks in the extended configurations of the launch template.
    std::shared_ptr<vector<Models::CreateAutoProvisioningGroupRequestLaunchConfigurationDataDisk>> dataDisk_ = nullptr;
    // The ID of the deployment set.
    std::shared_ptr<string> deploymentSetId_ = nullptr;
    // The instance hostname. Take note of the following items:
    // 
    // *   The hostname cannot start or end with a period (.) or hyphen (-). The hostname cannot contain consecutive periods (.) or hyphens (-).
    // *   For Windows instances, the hostname must be 2 to 15 characters in length and cannot contain periods (.) or contain only digits. It can contain letters, digits, and hyphens (-).
    // *   For instances that run other operating systems such as Linux, the hostname must be 2 to 64 characters in length. You can use periods (.) to separate a hostname into multiple segments. Each segment can contain letters, digits, and hyphens (-).
    // *   You cannot specify both `LaunchConfiguration.HostName` and `LaunchConfiguration.HostNames.N`. Otherwise, an error is returned.
    // *   When both LaunchTemplateId and LaunchConfiguration.\\* parameters are specified, LaunchTemplateId takes precedence.
    std::shared_ptr<string> hostName_ = nullptr;
    // The hostname of instance N. You can use this parameter to specify different hostnames for multiple instances. Take note of the following items:
    // 
    // - This parameter takes effect only when `AutoProvisioningGroupType` is set to instant. 
    // - The value of N indicates the number of instances. Valid values of N: 1 to 1000. The value of N must be the same as the TotalTargetCapacity value. 
    // - The hostname cannot start or end with a period (.) or hyphen (-). The hostname cannot contain consecutive periods (.) or hyphens (-). 
    // - For Windows instances, the hostname must be 2 to 15 characters in length and cannot contain periods (.) or contain only digits. The hostname can contain letters, digits, and hyphens (-). 
    // - For instances that run other operating systems such as Linux, the hostname must be 2 to 64 characters in length. You can use periods (.) to separate the hostname into multiple segments. Each segment can contain letters, digits, and hyphens (-). 
    // - You cannot specify both `LaunchConfiguration.HostName` and `LaunchConfiguration.HostNames.N`. Otherwise, an error is returned. 
    // - When both LaunchTemplateId and LaunchConfiguration.* parameters are specified, LaunchTemplateId takes precedence.
    std::shared_ptr<vector<string>> hostNames_ = nullptr;
    // The name of the image family. The name must be 2 to 128 characters in length. The name must start with a letter and cannot start with `aliyun` or `acs:`. The name cannot contain `http://` or `https://`. The name can contain letters, digits, colons (:), underscores (_), and hyphens (-).
    std::shared_ptr<string> imageFamily_ = nullptr;
    // The ID of the image to be used to create the instance. You can call the [DescribeImages](https://help.aliyun.com/document_detail/25534.html) operation to query available image resources. When both LaunchTemplateId and LaunchConfiguration.\\* parameters are specified, LaunchTemplateId takes precedence.
    std::shared_ptr<string> imageId_ = nullptr;
    // The instance description. The description must be 2 to 256 characters in length. The description can contain letters and cannot start with `http://` or `https://`. When both LaunchTemplateId and LaunchConfiguration.\\* parameters are specified, LaunchTemplateId takes precedence.
    std::shared_ptr<string> instanceDescription_ = nullptr;
    // The instance name. The name must be 2 to 128 characters in length. The name must start with a letter and cannot start with `http://` or `https://`. The name can contain letters, digits, colons (:), underscores (_), periods (.), and hyphens (-).
    // 
    // The default value of this parameter is the `InstanceId` value.
    // 
    // When you batch create instances, you can batch configure sequential names for the instances. For more information, see [Batch configure sequential names or hostnames for multiple instances](https://help.aliyun.com/document_detail/196048.html).
    // 
    // When both LaunchTemplateId and LaunchConfiguration.\\* parameters are specified, LaunchTemplateId takes precedence.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The billing method for network usage. Valid values:
    // 
    // *   PayByBandwidth: pay-by-bandwidth
    // *   PayByTraffic: pay-by-traffic
    // 
    // >  When the pay-by-traffic billing method for network usage is used, the maximum inbound and outbound bandwidth values are used as the upper limits of bandwidth instead of guaranteed performance specifications. When demands outstrip resource supplies, the maximum bandwidths may be limited. If you want guaranteed bandwidth for your instance, use the pay-by-bandwidth billing method.
    // 
    // When both LaunchTemplateId and LaunchConfiguration.\\* parameters are specified, LaunchTemplateId takes precedence.
    std::shared_ptr<string> internetChargeType_ = nullptr;
    // The maximum inbound public bandwidth. Unit: Mbit/s. Valid values:
    // 
    // *   When the maximum outbound public bandwidth is less than or equal to 10 Mbit/s, the valid values of this parameter are 1 to 10 and the default value is 10.
    // *   When the maximum outbound public bandwidth is greater than 10 Mbit/s, the valid values of this parameter are 1 to the value of `LaunchConfiguration.InternetMaxBandwidthOut`, and the default value is the value of `LaunchConfiguration.InternetMaxBandwidthOut`.
    // 
    // When both LaunchTemplateId and LaunchConfiguration.\\* parameters are specified, LaunchTemplateId takes precedence.
    std::shared_ptr<int32_t> internetMaxBandwidthIn_ = nullptr;
    // The maximum outbound public bandwidth. Unit: Mbit/s. Valid values: 0 to 100.
    // 
    // Default value: 0.
    // 
    // When both LaunchTemplateId and LaunchConfiguration.\\* parameters are specified, LaunchTemplateId takes precedence.
    std::shared_ptr<int32_t> internetMaxBandwidthOut_ = nullptr;
    // Specifies whether the instance is I/O optimized. Valid values:
    // 
    // *   none: The instance is not I/O optimized.
    // *   optimized: The instance is I/O optimized.
    // 
    // For instances of retired instance types, the default value is none. For instances of other instance types, the default value is optimized.
    // 
    // When both LaunchTemplateId and LaunchConfiguration.\\* parameters are specified, LaunchTemplateId takes precedence.
    std::shared_ptr<string> ioOptimized_ = nullptr;
    // The key pair name.
    // 
    // *   For Windows instances, this parameter is ignored. This parameter is empty by default.
    // *   By default, password-based logon is disabled for Linux instances.
    // 
    // When both LaunchTemplateId and LaunchConfiguration.\\* parameters are specified, LaunchTemplateId takes precedence.
    std::shared_ptr<string> keyPairName_ = nullptr;
    // The instance password. The password must be 8 to 30 characters in length and contain at least three of the following character types: uppercase letters, lowercase letters, digits, and special characters. The password can contain the following special characters:
    // 
    // ``( ) ` ~ ! @ # $ % ^ & * - _ + = | { }  ``: ; \\" < > , . ? /``  For Windows instances, the password cannot start with a forward slash (/). When both LaunchTemplateId and LaunchConfiguration.* parameters are specified, LaunchTemplateId takes precedence. `
    std::shared_ptr<string> password_ = nullptr;
    // Specifies whether to use the password preset in the image. Valid values:
    // 
    // *   true: uses the password preset in the image.
    // *   false: does not use the password preset in the image.
    // 
    // When both LaunchTemplateId and LaunchConfiguration.\\* parameters are specified, LaunchTemplateId takes precedence.
    std::shared_ptr<bool> passwordInherit_ = nullptr;
    // The name of the instance Resource Access Management (RAM) role. You can call the [ListRoles](https://help.aliyun.com/document_detail/28713.html) operation provided by RAM to query the instance RAM roles that you created. When both LaunchTemplateId and LaunchConfiguration.\\* parameters are specified, LaunchTemplateId takes precedence.
    std::shared_ptr<string> ramRoleName_ = nullptr;
    // The ID of the resource group to which to assign the instance. When both LaunchTemplateId and LaunchConfiguration.\\* parameters are specified, LaunchTemplateId takes precedence.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // Specifies whether to enable security hardening. Valid values:
    // 
    // *   Active: enables security hardening. This value is applicable only to public images.
    // *   Deactive: disables security hardening. This value is applicable to all image types.
    // 
    // When both LaunchTemplateId and LaunchConfiguration.\\* parameters are specified, LaunchTemplateId takes precedence.
    std::shared_ptr<string> securityEnhancementStrategy_ = nullptr;
    // The ID of the security group to which to assign the instance. When both LaunchTemplateId and LaunchConfiguration.\\* parameters are specified, LaunchTemplateId takes precedence.
    std::shared_ptr<string> securityGroupId_ = nullptr;
    // The IDs of the security groups to which the new ECS instances belong.
    std::shared_ptr<vector<string>> securityGroupIds_ = nullptr;
    // The system disk information of instances. When both LaunchTemplateId and LaunchConfiguration.\\* parameters are specified, LaunchTemplateId takes precedence.
    std::shared_ptr<Models::CreateAutoProvisioningGroupRequestLaunchConfigurationSystemDisk> systemDisk_ = nullptr;
    // The category of the system disk. Valid values:
    // 
    // *   cloud_efficiency: ultra disk
    // *   cloud_ssd: standard SSD
    // *   cloud_essd: enhanced SSD (ESSD)
    // *   cloud: basic disk
    // 
    // For non-I/O optimized instances of retired instance types, the default value is cloud. For other instances, the default value is cloud_efficiency.
    // 
    // When both LaunchTemplateId and LaunchConfiguration.\\* parameters are specified, LaunchTemplateId takes precedence.
    std::shared_ptr<string> systemDiskCategory_ = nullptr;
    // The description of the system disk. The description must be 2 to 256 characters in length. The description can contain letters and cannot start with `http://` or `https://`.
    // 
    // When both LaunchTemplateId and LaunchConfiguration.\\* parameters are specified, LaunchTemplateId takes precedence.
    std::shared_ptr<string> systemDiskDescription_ = nullptr;
    // The name of the system disk. The name must be 2 to 128 characters in length. The name must start with a letter and cannot start with `http://` or `https://`. The name can contain letters, digits, periods (.), colons (:), underscores (_), and hyphens (-).
    // 
    // This parameter is empty by default.
    // 
    // When both LaunchTemplateId and LaunchConfiguration.\\* parameters are specified, LaunchTemplateId takes precedence.
    std::shared_ptr<string> systemDiskName_ = nullptr;
    // The performance level of the ESSD to be used as the system disk. Valid values:
    // 
    // *   PL0 (default): A single ESSD can deliver up to 10,000 random read/write IOPS.
    // *   PL1: A single ESSD can deliver up to 50,000 random read/write IOPS.
    // *   PL2: A single ESSD can deliver up to 100,000 random read/write IOPS.
    // *   PL3: A single ESSD can deliver up to 1,000,000 random read/write IOPS.
    // 
    // For more information about ESSD performance levels, see [ESSDs](https://help.aliyun.com/document_detail/122389.html).
    // 
    // When both LaunchTemplateId and LaunchConfiguration.\\* parameters are specified, LaunchTemplateId takes precedence.
    std::shared_ptr<string> systemDiskPerformanceLevel_ = nullptr;
    // The size of the system disk. Valid values: 20 to 500. Unit: GiB. The value must be at least 20 and greater than or equal to the size of the image specified by LaunchConfiguration.ImageId.
    // 
    // Default value: 40 or the size of the image specified by LaunchConfiguration.ImageId, whichever is greater.
    // 
    // When both LaunchTemplateId and LaunchConfiguration.\\* parameters are specified, LaunchTemplateId takes precedence.
    std::shared_ptr<int32_t> systemDiskSize_ = nullptr;
    // The tag in the extended configurations of the launch template.
    std::shared_ptr<vector<Models::CreateAutoProvisioningGroupRequestLaunchConfigurationTag>> tag_ = nullptr;
    // The instance user data. The user data must be encoded in Base64. The raw data can be up to 32 KB in size. When both LaunchTemplateId and LaunchConfiguration.\\* parameters are specified, LaunchTemplateId takes precedence.
    std::shared_ptr<string> userData_ = nullptr;
    // Specifies whether to enable auto-renewal for the reserved instance. This parameter is required only when the instance uses the subscription billing method. Valid values:
    // 
    // *   true
    // *   false (default)
    std::shared_ptr<bool> autoRenew_ = nullptr;
    // The auto-renewal period of the instance. Valid values:
    // 
    // Valid values when PeriodUnit is set to Month: 1, 2, 3, 6, 12, 24, 36, 48, and 60.
    // 
    // Default value: 1.
    std::shared_ptr<int32_t> autoRenewPeriod_ = nullptr;
    std::shared_ptr<Models::CreateAutoProvisioningGroupRequestLaunchConfigurationCpuOptions> cpuOptions_ = nullptr;
    // The image options.
    // 
    // When you specify this parameter, take note of the following items:
    // 
    // *   This parameter takes effect only when the AutoProvisioningGroupType parameter is set to instant.
    std::shared_ptr<Models::CreateAutoProvisioningGroupRequestLaunchConfigurationImageOptions> imageOptions_ = nullptr;
    // The subscription period of the instance. The unit is specified by `PeriodUnit`. This parameter takes effect and is required only if the subscription billing method is selected. Valid values:
    // 
    // Valid values if PeriodUnit is set to Month: 1, 2, 3, 6, and 12.
    std::shared_ptr<int32_t> period_ = nullptr;
    // The unit of the subscription period. Default value: Month. Valid values:
    // 
    // Month
    std::shared_ptr<string> periodUnit_ = nullptr;
    std::shared_ptr<Models::CreateAutoProvisioningGroupRequestLaunchConfigurationSchedulerOptions> schedulerOptions_ = nullptr;
    // The protection period of the spot instance. Unit: hours. Default value: 1. Valid values: Valid values:
    // 
    // *   1: After a spot instance is created, Alibaba Cloud ensures that the instance is not automatically released within 1 hour. After the 1-hour protection period ends, the system compares the bid price with the market price and checks the resource inventory to determine whether to retain or release the instance.
    // *   0: After a spot instance is created, Alibaba Cloud does not ensure that the instance runs for 1 hour. The system compares the bid price with the market price and checks the resource inventory to determine whether to retain or release the instance.
    // 
    // Alibaba Cloud sends an ECS system event to notify you 5 minutes before the instance is released. The spot instance is billed by second. We recommend that you specify an appropriate protection period based on your business requirements.
    // 
    // When you specify this parameter, take note of the following items:
    // 
    // *   This parameter takes effect only when the AutoProvisioningGroupType parameter is set to instant.
    std::shared_ptr<int32_t> spotDuration_ = nullptr;
    // The interruption event of the spot instances. Valid values:
    // 
    // *   Terminate: The instance is released.
    // *   Stop: The instance is stopped in economical mode.
    // 
    // For information about the economical mode, see [Economical mode](https://help.aliyun.com/document_detail/63353.html).
    // 
    // Default value: Terminate.
    // 
    // When you specify this parameter, take note of the following items:
    // 
    // *   This parameter takes effect only when the AutoProvisioningGroupType parameter is set to instant.
    std::shared_ptr<string> spotInterruptionBehavior_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
