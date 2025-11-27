// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNRCINSTANCESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNRCINSTANCESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunRCInstancesShrinkRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class RunRCInstancesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunRCInstancesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcuType, acuType_);
      DARABONBA_PTR_TO_JSON(Amount, amount_);
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(AutoUseCoupon, autoUseCoupon_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CreateAckEdgeParam, createAckEdgeParamShrink_);
      DARABONBA_PTR_TO_JSON(CreateExtraParam, createExtraParam_);
      DARABONBA_PTR_TO_JSON(CreateMode, createMode_);
      DARABONBA_PTR_TO_JSON(DataDisk, dataDiskShrink_);
      DARABONBA_PTR_TO_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_TO_JSON(DeploymentSetId, deploymentSetId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(HostName, hostName_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_TO_JSON(InternetMaxBandwidthOut, internetMaxBandwidthOut_);
      DARABONBA_PTR_TO_JSON(IoOptimized, ioOptimized_);
      DARABONBA_PTR_TO_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(PasswordInherit, passwordInherit_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(PromotionCode, promotionCode_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ScheduledRule, scheduledRule_);
      DARABONBA_PTR_TO_JSON(SecurityEnhancementStrategy, securityEnhancementStrategy_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(SpotStrategy, spotStrategy_);
      DARABONBA_PTR_TO_JSON(SupportCase, supportCase_);
      DARABONBA_PTR_TO_JSON(SystemDisk, systemDiskShrink_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
      DARABONBA_PTR_TO_JSON(UserDataInBase64, userDataInBase64_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, RunRCInstancesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcuType, acuType_);
      DARABONBA_PTR_FROM_JSON(Amount, amount_);
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(AutoUseCoupon, autoUseCoupon_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CreateAckEdgeParam, createAckEdgeParamShrink_);
      DARABONBA_PTR_FROM_JSON(CreateExtraParam, createExtraParam_);
      DARABONBA_PTR_FROM_JSON(CreateMode, createMode_);
      DARABONBA_PTR_FROM_JSON(DataDisk, dataDiskShrink_);
      DARABONBA_PTR_FROM_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_FROM_JSON(DeploymentSetId, deploymentSetId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(HostName, hostName_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_FROM_JSON(InternetMaxBandwidthOut, internetMaxBandwidthOut_);
      DARABONBA_PTR_FROM_JSON(IoOptimized, ioOptimized_);
      DARABONBA_PTR_FROM_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(PasswordInherit, passwordInherit_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(PromotionCode, promotionCode_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ScheduledRule, scheduledRule_);
      DARABONBA_PTR_FROM_JSON(SecurityEnhancementStrategy, securityEnhancementStrategy_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(SpotStrategy, spotStrategy_);
      DARABONBA_PTR_FROM_JSON(SupportCase, supportCase_);
      DARABONBA_PTR_FROM_JSON(SystemDisk, systemDiskShrink_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
      DARABONBA_PTR_FROM_JSON(UserDataInBase64, userDataInBase64_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    RunRCInstancesShrinkRequest() = default ;
    RunRCInstancesShrinkRequest(const RunRCInstancesShrinkRequest &) = default ;
    RunRCInstancesShrinkRequest(RunRCInstancesShrinkRequest &&) = default ;
    RunRCInstancesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunRCInstancesShrinkRequest() = default ;
    RunRCInstancesShrinkRequest& operator=(const RunRCInstancesShrinkRequest &) = default ;
    RunRCInstancesShrinkRequest& operator=(RunRCInstancesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acuType_ == nullptr
        && return this->amount_ == nullptr && return this->autoPay_ == nullptr && return this->autoRenew_ == nullptr && return this->autoUseCoupon_ == nullptr && return this->clientToken_ == nullptr
        && return this->createAckEdgeParamShrink_ == nullptr && return this->createExtraParam_ == nullptr && return this->createMode_ == nullptr && return this->dataDiskShrink_ == nullptr && return this->deletionProtection_ == nullptr
        && return this->deploymentSetId_ == nullptr && return this->description_ == nullptr && return this->dryRun_ == nullptr && return this->hostName_ == nullptr && return this->imageId_ == nullptr
        && return this->instanceChargeType_ == nullptr && return this->instanceName_ == nullptr && return this->instanceType_ == nullptr && return this->internetChargeType_ == nullptr && return this->internetMaxBandwidthOut_ == nullptr
        && return this->ioOptimized_ == nullptr && return this->keyPairName_ == nullptr && return this->password_ == nullptr && return this->passwordInherit_ == nullptr && return this->period_ == nullptr
        && return this->periodUnit_ == nullptr && return this->promotionCode_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->scheduledRule_ == nullptr
        && return this->securityEnhancementStrategy_ == nullptr && return this->securityGroupId_ == nullptr && return this->spotStrategy_ == nullptr && return this->supportCase_ == nullptr && return this->systemDiskShrink_ == nullptr
        && return this->tag_ == nullptr && return this->userData_ == nullptr && return this->userDataInBase64_ == nullptr && return this->vSwitchId_ == nullptr && return this->zoneId_ == nullptr; };
    // acuType Field Functions 
    bool hasAcuType() const { return this->acuType_ != nullptr;};
    void deleteAcuType() { this->acuType_ = nullptr;};
    inline string acuType() const { DARABONBA_PTR_GET_DEFAULT(acuType_, "") };
    inline RunRCInstancesShrinkRequest& setAcuType(string acuType) { DARABONBA_PTR_SET_VALUE(acuType_, acuType) };


    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline int32_t amount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0) };
    inline RunRCInstancesShrinkRequest& setAmount(int32_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool autoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline RunRCInstancesShrinkRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool autoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline RunRCInstancesShrinkRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // autoUseCoupon Field Functions 
    bool hasAutoUseCoupon() const { return this->autoUseCoupon_ != nullptr;};
    void deleteAutoUseCoupon() { this->autoUseCoupon_ = nullptr;};
    inline bool autoUseCoupon() const { DARABONBA_PTR_GET_DEFAULT(autoUseCoupon_, false) };
    inline RunRCInstancesShrinkRequest& setAutoUseCoupon(bool autoUseCoupon) { DARABONBA_PTR_SET_VALUE(autoUseCoupon_, autoUseCoupon) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline RunRCInstancesShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // createAckEdgeParamShrink Field Functions 
    bool hasCreateAckEdgeParamShrink() const { return this->createAckEdgeParamShrink_ != nullptr;};
    void deleteCreateAckEdgeParamShrink() { this->createAckEdgeParamShrink_ = nullptr;};
    inline string createAckEdgeParamShrink() const { DARABONBA_PTR_GET_DEFAULT(createAckEdgeParamShrink_, "") };
    inline RunRCInstancesShrinkRequest& setCreateAckEdgeParamShrink(string createAckEdgeParamShrink) { DARABONBA_PTR_SET_VALUE(createAckEdgeParamShrink_, createAckEdgeParamShrink) };


    // createExtraParam Field Functions 
    bool hasCreateExtraParam() const { return this->createExtraParam_ != nullptr;};
    void deleteCreateExtraParam() { this->createExtraParam_ = nullptr;};
    inline string createExtraParam() const { DARABONBA_PTR_GET_DEFAULT(createExtraParam_, "") };
    inline RunRCInstancesShrinkRequest& setCreateExtraParam(string createExtraParam) { DARABONBA_PTR_SET_VALUE(createExtraParam_, createExtraParam) };


    // createMode Field Functions 
    bool hasCreateMode() const { return this->createMode_ != nullptr;};
    void deleteCreateMode() { this->createMode_ = nullptr;};
    inline string createMode() const { DARABONBA_PTR_GET_DEFAULT(createMode_, "") };
    inline RunRCInstancesShrinkRequest& setCreateMode(string createMode) { DARABONBA_PTR_SET_VALUE(createMode_, createMode) };


    // dataDiskShrink Field Functions 
    bool hasDataDiskShrink() const { return this->dataDiskShrink_ != nullptr;};
    void deleteDataDiskShrink() { this->dataDiskShrink_ = nullptr;};
    inline string dataDiskShrink() const { DARABONBA_PTR_GET_DEFAULT(dataDiskShrink_, "") };
    inline RunRCInstancesShrinkRequest& setDataDiskShrink(string dataDiskShrink) { DARABONBA_PTR_SET_VALUE(dataDiskShrink_, dataDiskShrink) };


    // deletionProtection Field Functions 
    bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
    void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
    inline bool deletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
    inline RunRCInstancesShrinkRequest& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


    // deploymentSetId Field Functions 
    bool hasDeploymentSetId() const { return this->deploymentSetId_ != nullptr;};
    void deleteDeploymentSetId() { this->deploymentSetId_ = nullptr;};
    inline string deploymentSetId() const { DARABONBA_PTR_GET_DEFAULT(deploymentSetId_, "") };
    inline RunRCInstancesShrinkRequest& setDeploymentSetId(string deploymentSetId) { DARABONBA_PTR_SET_VALUE(deploymentSetId_, deploymentSetId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline RunRCInstancesShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline RunRCInstancesShrinkRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // hostName Field Functions 
    bool hasHostName() const { return this->hostName_ != nullptr;};
    void deleteHostName() { this->hostName_ = nullptr;};
    inline string hostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
    inline RunRCInstancesShrinkRequest& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline RunRCInstancesShrinkRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // instanceChargeType Field Functions 
    bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
    void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
    inline string instanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
    inline RunRCInstancesShrinkRequest& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline RunRCInstancesShrinkRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline RunRCInstancesShrinkRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // internetChargeType Field Functions 
    bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
    void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
    inline string internetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
    inline RunRCInstancesShrinkRequest& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


    // internetMaxBandwidthOut Field Functions 
    bool hasInternetMaxBandwidthOut() const { return this->internetMaxBandwidthOut_ != nullptr;};
    void deleteInternetMaxBandwidthOut() { this->internetMaxBandwidthOut_ = nullptr;};
    inline int32_t internetMaxBandwidthOut() const { DARABONBA_PTR_GET_DEFAULT(internetMaxBandwidthOut_, 0) };
    inline RunRCInstancesShrinkRequest& setInternetMaxBandwidthOut(int32_t internetMaxBandwidthOut) { DARABONBA_PTR_SET_VALUE(internetMaxBandwidthOut_, internetMaxBandwidthOut) };


    // ioOptimized Field Functions 
    bool hasIoOptimized() const { return this->ioOptimized_ != nullptr;};
    void deleteIoOptimized() { this->ioOptimized_ = nullptr;};
    inline string ioOptimized() const { DARABONBA_PTR_GET_DEFAULT(ioOptimized_, "") };
    inline RunRCInstancesShrinkRequest& setIoOptimized(string ioOptimized) { DARABONBA_PTR_SET_VALUE(ioOptimized_, ioOptimized) };


    // keyPairName Field Functions 
    bool hasKeyPairName() const { return this->keyPairName_ != nullptr;};
    void deleteKeyPairName() { this->keyPairName_ = nullptr;};
    inline string keyPairName() const { DARABONBA_PTR_GET_DEFAULT(keyPairName_, "") };
    inline RunRCInstancesShrinkRequest& setKeyPairName(string keyPairName) { DARABONBA_PTR_SET_VALUE(keyPairName_, keyPairName) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline RunRCInstancesShrinkRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // passwordInherit Field Functions 
    bool hasPasswordInherit() const { return this->passwordInherit_ != nullptr;};
    void deletePasswordInherit() { this->passwordInherit_ = nullptr;};
    inline bool passwordInherit() const { DARABONBA_PTR_GET_DEFAULT(passwordInherit_, false) };
    inline RunRCInstancesShrinkRequest& setPasswordInherit(bool passwordInherit) { DARABONBA_PTR_SET_VALUE(passwordInherit_, passwordInherit) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline RunRCInstancesShrinkRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string periodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline RunRCInstancesShrinkRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // promotionCode Field Functions 
    bool hasPromotionCode() const { return this->promotionCode_ != nullptr;};
    void deletePromotionCode() { this->promotionCode_ = nullptr;};
    inline string promotionCode() const { DARABONBA_PTR_GET_DEFAULT(promotionCode_, "") };
    inline RunRCInstancesShrinkRequest& setPromotionCode(string promotionCode) { DARABONBA_PTR_SET_VALUE(promotionCode_, promotionCode) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RunRCInstancesShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline RunRCInstancesShrinkRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // scheduledRule Field Functions 
    bool hasScheduledRule() const { return this->scheduledRule_ != nullptr;};
    void deleteScheduledRule() { this->scheduledRule_ = nullptr;};
    inline string scheduledRule() const { DARABONBA_PTR_GET_DEFAULT(scheduledRule_, "") };
    inline RunRCInstancesShrinkRequest& setScheduledRule(string scheduledRule) { DARABONBA_PTR_SET_VALUE(scheduledRule_, scheduledRule) };


    // securityEnhancementStrategy Field Functions 
    bool hasSecurityEnhancementStrategy() const { return this->securityEnhancementStrategy_ != nullptr;};
    void deleteSecurityEnhancementStrategy() { this->securityEnhancementStrategy_ = nullptr;};
    inline string securityEnhancementStrategy() const { DARABONBA_PTR_GET_DEFAULT(securityEnhancementStrategy_, "") };
    inline RunRCInstancesShrinkRequest& setSecurityEnhancementStrategy(string securityEnhancementStrategy) { DARABONBA_PTR_SET_VALUE(securityEnhancementStrategy_, securityEnhancementStrategy) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline RunRCInstancesShrinkRequest& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // spotStrategy Field Functions 
    bool hasSpotStrategy() const { return this->spotStrategy_ != nullptr;};
    void deleteSpotStrategy() { this->spotStrategy_ = nullptr;};
    inline string spotStrategy() const { DARABONBA_PTR_GET_DEFAULT(spotStrategy_, "") };
    inline RunRCInstancesShrinkRequest& setSpotStrategy(string spotStrategy) { DARABONBA_PTR_SET_VALUE(spotStrategy_, spotStrategy) };


    // supportCase Field Functions 
    bool hasSupportCase() const { return this->supportCase_ != nullptr;};
    void deleteSupportCase() { this->supportCase_ = nullptr;};
    inline string supportCase() const { DARABONBA_PTR_GET_DEFAULT(supportCase_, "") };
    inline RunRCInstancesShrinkRequest& setSupportCase(string supportCase) { DARABONBA_PTR_SET_VALUE(supportCase_, supportCase) };


    // systemDiskShrink Field Functions 
    bool hasSystemDiskShrink() const { return this->systemDiskShrink_ != nullptr;};
    void deleteSystemDiskShrink() { this->systemDiskShrink_ = nullptr;};
    inline string systemDiskShrink() const { DARABONBA_PTR_GET_DEFAULT(systemDiskShrink_, "") };
    inline RunRCInstancesShrinkRequest& setSystemDiskShrink(string systemDiskShrink) { DARABONBA_PTR_SET_VALUE(systemDiskShrink_, systemDiskShrink) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<RunRCInstancesShrinkRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<RunRCInstancesShrinkRequestTag>) };
    inline vector<RunRCInstancesShrinkRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<RunRCInstancesShrinkRequestTag>) };
    inline RunRCInstancesShrinkRequest& setTag(const vector<RunRCInstancesShrinkRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline RunRCInstancesShrinkRequest& setTag(vector<RunRCInstancesShrinkRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline RunRCInstancesShrinkRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    // userDataInBase64 Field Functions 
    bool hasUserDataInBase64() const { return this->userDataInBase64_ != nullptr;};
    void deleteUserDataInBase64() { this->userDataInBase64_ = nullptr;};
    inline bool userDataInBase64() const { DARABONBA_PTR_GET_DEFAULT(userDataInBase64_, false) };
    inline RunRCInstancesShrinkRequest& setUserDataInBase64(bool userDataInBase64) { DARABONBA_PTR_SET_VALUE(userDataInBase64_, userDataInBase64) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline RunRCInstancesShrinkRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline RunRCInstancesShrinkRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    std::shared_ptr<string> acuType_ = nullptr;
    // The number of RDS Custom instances that you want to create. The parameter is available if you want to create multiple RDS Custom instances at a time.
    // 
    // Valid values: **1** to **10**. Default value: **1**.
    std::shared_ptr<int32_t> amount_ = nullptr;
    // Specifies whether to enable the automatic payment feature. Valid values:
    // 
    // *   **true** (default): enables the feature. Make sure that your account balance is sufficient.
    // *   **false**: disables the feature. An unpaid order is generated.
    // 
    // >  If your account balance is insufficient, you can set the AutoPay parameter to false. In this case, an unpaid order is generated. You can complete the payment in the Expenses and Costs console.
    std::shared_ptr<bool> autoPay_ = nullptr;
    // Specifies whether to enable auto-renewal for the instance. Valid values:
    // 
    // *   **true** (default)
    // *   **false**
    std::shared_ptr<bool> autoRenew_ = nullptr;
    std::shared_ptr<bool> autoUseCoupon_ = nullptr;
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    std::shared_ptr<string> clientToken_ = nullptr;
    std::shared_ptr<string> createAckEdgeParamShrink_ = nullptr;
    std::shared_ptr<string> createExtraParam_ = nullptr;
    std::shared_ptr<string> createMode_ = nullptr;
    // The information about the data disks.
    std::shared_ptr<string> dataDiskShrink_ = nullptr;
    std::shared_ptr<bool> deletionProtection_ = nullptr;
    // The deployment set ID.
    std::shared_ptr<string> deploymentSetId_ = nullptr;
    // The instance description. The description must be 2 to 256 characters in length and cannot start with http:// or https://.
    std::shared_ptr<string> description_ = nullptr;
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // 
    // *   **true**: performs only a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, service limits, and insufficient inventory errors.
    // *   **false** (default): performs a dry run and performs the actual request. If the request passes the dry run, the instance is directly created.
    std::shared_ptr<bool> dryRun_ = nullptr;
    std::shared_ptr<string> hostName_ = nullptr;
    // The ID of the image used by the instance.
    std::shared_ptr<string> imageId_ = nullptr;
    // The billing method of the instance. Set the value to **Prepaid**, which indicates the subscription billing method.
    std::shared_ptr<string> instanceChargeType_ = nullptr;
    // The instance name.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The instance type. For more information about the instance types that are supported by RDS Custom instances, see [Instance types for RDS Custom instances](https://help.aliyun.com/document_detail/2844823.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceType_ = nullptr;
    // The reserved parameter. This parameter is not supported.
    std::shared_ptr<string> internetChargeType_ = nullptr;
    // The reserved parameter. This parameter is not supported.
    std::shared_ptr<int32_t> internetMaxBandwidthOut_ = nullptr;
    // The reserved parameter. This parameter is not supported.
    std::shared_ptr<string> ioOptimized_ = nullptr;
    // The name of the AccessKey pair. You can specify only one name.
    std::shared_ptr<string> keyPairName_ = nullptr;
    // The password of the account that is used to log on to the instance.
    std::shared_ptr<string> password_ = nullptr;
    std::shared_ptr<bool> passwordInherit_ = nullptr;
    // The subscription duration of the instance. Default value: **1**.
    std::shared_ptr<int32_t> period_ = nullptr;
    // The unit of the subscription duration. Valid values:
    // 
    // *   **Year**
    // *   **Month** (default)
    std::shared_ptr<string> periodUnit_ = nullptr;
    std::shared_ptr<string> promotionCode_ = nullptr;
    // The region ID. You can call the DescribeRegions operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> scheduledRule_ = nullptr;
    // The reserved parameter. This parameter is not supported.
    std::shared_ptr<string> securityEnhancementStrategy_ = nullptr;
    // The ID of the security group to which you want to add the new instance. Instances in the same security group can communicate with each other. The maximum number of instances allowed in a security group varies based on the type of the security group. For more information, see the "Security group limits" section in [Limits](https://help.aliyun.com/document_detail/25412.html).
    // 
    // >  The network type of the instance is determined by the security group specified by the SecurityGroupId parameter. For example, if the network type of the specified security group is VPC, the instance is a VPC-type instance. In this case, you must specify the VSwitchId parameter.
    std::shared_ptr<string> securityGroupId_ = nullptr;
    std::shared_ptr<string> spotStrategy_ = nullptr;
    std::shared_ptr<string> supportCase_ = nullptr;
    // The specification of the system disk.
    std::shared_ptr<string> systemDiskShrink_ = nullptr;
    std::shared_ptr<vector<RunRCInstancesShrinkRequestTag>> tag_ = nullptr;
    std::shared_ptr<string> userData_ = nullptr;
    std::shared_ptr<bool> userDataInBase64_ = nullptr;
    // The vSwitch ID of the instance. You must specify this parameter when you create an instance of the virtual private cloud (VPC) type. The specified vSwitch and security group must belong to the same VPC.
    // 
    // >  If you specify the VSwitchId parameter, the zone specified by the ZoneId parameter must be the same as the zone in which the specified vSwitch resides. You can leave the ZoneId parameter empty. In this case, the system uses the zone in which the specified vSwitch resides.
    // 
    // This parameter is required.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The zone ID of the instance. You can call the DescribeZones operation to query the zone IDs.
    // 
    // >  If you specify the VSwitchId parameter, the zone specified by the ZoneId parameter must be the same as the zone in which the specified vSwitch resides. You can leave the ZoneId parameter empty. In this case, the system uses the zone in which the specified vSwitch resides.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
