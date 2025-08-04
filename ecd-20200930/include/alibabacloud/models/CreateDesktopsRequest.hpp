// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDESKTOPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDESKTOPSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateDesktopsRequestBundleModels.hpp>
#include <alibabacloud/models/CreateDesktopsRequestDesktopAttachment.hpp>
#include <alibabacloud/models/CreateDesktopsRequestDesktopTimers.hpp>
#include <alibabacloud/models/CreateDesktopsRequestMonthDesktopSetting.hpp>
#include <alibabacloud/models/CreateDesktopsRequestTag.hpp>
#include <alibabacloud/models/CreateDesktopsRequestUserCommands.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class CreateDesktopsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDesktopsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Amount, amount_);
      DARABONBA_PTR_TO_JSON(AppRuleId, appRuleId_);
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(BundleId, bundleId_);
      DARABONBA_PTR_TO_JSON(BundleModels, bundleModels_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(DesktopAttachment, desktopAttachment_);
      DARABONBA_PTR_TO_JSON(DesktopMemberIp, desktopMemberIp_);
      DARABONBA_PTR_TO_JSON(DesktopName, desktopName_);
      DARABONBA_PTR_TO_JSON(DesktopNameSuffix, desktopNameSuffix_);
      DARABONBA_PTR_TO_JSON(DesktopTimers, desktopTimers_);
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(ExtendInfo, extendInfo_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Hostname, hostname_);
      DARABONBA_PTR_TO_JSON(MonthDesktopSetting, monthDesktopSetting_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_TO_JSON(PromotionId, promotionId_);
      DARABONBA_PTR_TO_JSON(QosRuleId, qosRuleId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResellerOwnerUid, resellerOwnerUid_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SavingPlanId, savingPlanId_);
      DARABONBA_PTR_TO_JSON(SnapshotPolicyId, snapshotPolicyId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TimerGroupId, timerGroupId_);
      DARABONBA_PTR_TO_JSON(UserAssignMode, userAssignMode_);
      DARABONBA_PTR_TO_JSON(UserCommands, userCommands_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
      DARABONBA_PTR_TO_JSON(VolumeEncryptionEnabled, volumeEncryptionEnabled_);
      DARABONBA_PTR_TO_JSON(VolumeEncryptionKey, volumeEncryptionKey_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDesktopsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Amount, amount_);
      DARABONBA_PTR_FROM_JSON(AppRuleId, appRuleId_);
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(BundleId, bundleId_);
      DARABONBA_PTR_FROM_JSON(BundleModels, bundleModels_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(DesktopAttachment, desktopAttachment_);
      DARABONBA_PTR_FROM_JSON(DesktopMemberIp, desktopMemberIp_);
      DARABONBA_PTR_FROM_JSON(DesktopName, desktopName_);
      DARABONBA_PTR_FROM_JSON(DesktopNameSuffix, desktopNameSuffix_);
      DARABONBA_PTR_FROM_JSON(DesktopTimers, desktopTimers_);
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(ExtendInfo, extendInfo_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Hostname, hostname_);
      DARABONBA_PTR_FROM_JSON(MonthDesktopSetting, monthDesktopSetting_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_FROM_JSON(PromotionId, promotionId_);
      DARABONBA_PTR_FROM_JSON(QosRuleId, qosRuleId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResellerOwnerUid, resellerOwnerUid_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SavingPlanId, savingPlanId_);
      DARABONBA_PTR_FROM_JSON(SnapshotPolicyId, snapshotPolicyId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TimerGroupId, timerGroupId_);
      DARABONBA_PTR_FROM_JSON(UserAssignMode, userAssignMode_);
      DARABONBA_PTR_FROM_JSON(UserCommands, userCommands_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
      DARABONBA_PTR_FROM_JSON(VolumeEncryptionEnabled, volumeEncryptionEnabled_);
      DARABONBA_PTR_FROM_JSON(VolumeEncryptionKey, volumeEncryptionKey_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    CreateDesktopsRequest() = default ;
    CreateDesktopsRequest(const CreateDesktopsRequest &) = default ;
    CreateDesktopsRequest(CreateDesktopsRequest &&) = default ;
    CreateDesktopsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDesktopsRequest() = default ;
    CreateDesktopsRequest& operator=(const CreateDesktopsRequest &) = default ;
    CreateDesktopsRequest& operator=(CreateDesktopsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->amount_ != nullptr
        && this->appRuleId_ != nullptr && this->autoPay_ != nullptr && this->autoRenew_ != nullptr && this->bundleId_ != nullptr && this->bundleModels_ != nullptr
        && this->chargeType_ != nullptr && this->desktopAttachment_ != nullptr && this->desktopMemberIp_ != nullptr && this->desktopName_ != nullptr && this->desktopNameSuffix_ != nullptr
        && this->desktopTimers_ != nullptr && this->directoryId_ != nullptr && this->endUserId_ != nullptr && this->extendInfo_ != nullptr && this->groupId_ != nullptr
        && this->hostname_ != nullptr && this->monthDesktopSetting_ != nullptr && this->officeSiteId_ != nullptr && this->period_ != nullptr && this->periodUnit_ != nullptr
        && this->policyGroupId_ != nullptr && this->promotionId_ != nullptr && this->qosRuleId_ != nullptr && this->regionId_ != nullptr && this->resellerOwnerUid_ != nullptr
        && this->resourceGroupId_ != nullptr && this->savingPlanId_ != nullptr && this->snapshotPolicyId_ != nullptr && this->tag_ != nullptr && this->timerGroupId_ != nullptr
        && this->userAssignMode_ != nullptr && this->userCommands_ != nullptr && this->userName_ != nullptr && this->volumeEncryptionEnabled_ != nullptr && this->volumeEncryptionKey_ != nullptr
        && this->vpcId_ != nullptr; };
    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline int32_t amount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0) };
    inline CreateDesktopsRequest& setAmount(int32_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // appRuleId Field Functions 
    bool hasAppRuleId() const { return this->appRuleId_ != nullptr;};
    void deleteAppRuleId() { this->appRuleId_ = nullptr;};
    inline string appRuleId() const { DARABONBA_PTR_GET_DEFAULT(appRuleId_, "") };
    inline CreateDesktopsRequest& setAppRuleId(string appRuleId) { DARABONBA_PTR_SET_VALUE(appRuleId_, appRuleId) };


    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool autoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline CreateDesktopsRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool autoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline CreateDesktopsRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // bundleId Field Functions 
    bool hasBundleId() const { return this->bundleId_ != nullptr;};
    void deleteBundleId() { this->bundleId_ = nullptr;};
    inline string bundleId() const { DARABONBA_PTR_GET_DEFAULT(bundleId_, "") };
    inline CreateDesktopsRequest& setBundleId(string bundleId) { DARABONBA_PTR_SET_VALUE(bundleId_, bundleId) };


    // bundleModels Field Functions 
    bool hasBundleModels() const { return this->bundleModels_ != nullptr;};
    void deleteBundleModels() { this->bundleModels_ = nullptr;};
    inline const vector<CreateDesktopsRequestBundleModels> & bundleModels() const { DARABONBA_PTR_GET_CONST(bundleModels_, vector<CreateDesktopsRequestBundleModels>) };
    inline vector<CreateDesktopsRequestBundleModels> bundleModels() { DARABONBA_PTR_GET(bundleModels_, vector<CreateDesktopsRequestBundleModels>) };
    inline CreateDesktopsRequest& setBundleModels(const vector<CreateDesktopsRequestBundleModels> & bundleModels) { DARABONBA_PTR_SET_VALUE(bundleModels_, bundleModels) };
    inline CreateDesktopsRequest& setBundleModels(vector<CreateDesktopsRequestBundleModels> && bundleModels) { DARABONBA_PTR_SET_RVALUE(bundleModels_, bundleModels) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline CreateDesktopsRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // desktopAttachment Field Functions 
    bool hasDesktopAttachment() const { return this->desktopAttachment_ != nullptr;};
    void deleteDesktopAttachment() { this->desktopAttachment_ = nullptr;};
    inline const CreateDesktopsRequestDesktopAttachment & desktopAttachment() const { DARABONBA_PTR_GET_CONST(desktopAttachment_, CreateDesktopsRequestDesktopAttachment) };
    inline CreateDesktopsRequestDesktopAttachment desktopAttachment() { DARABONBA_PTR_GET(desktopAttachment_, CreateDesktopsRequestDesktopAttachment) };
    inline CreateDesktopsRequest& setDesktopAttachment(const CreateDesktopsRequestDesktopAttachment & desktopAttachment) { DARABONBA_PTR_SET_VALUE(desktopAttachment_, desktopAttachment) };
    inline CreateDesktopsRequest& setDesktopAttachment(CreateDesktopsRequestDesktopAttachment && desktopAttachment) { DARABONBA_PTR_SET_RVALUE(desktopAttachment_, desktopAttachment) };


    // desktopMemberIp Field Functions 
    bool hasDesktopMemberIp() const { return this->desktopMemberIp_ != nullptr;};
    void deleteDesktopMemberIp() { this->desktopMemberIp_ = nullptr;};
    inline string desktopMemberIp() const { DARABONBA_PTR_GET_DEFAULT(desktopMemberIp_, "") };
    inline CreateDesktopsRequest& setDesktopMemberIp(string desktopMemberIp) { DARABONBA_PTR_SET_VALUE(desktopMemberIp_, desktopMemberIp) };


    // desktopName Field Functions 
    bool hasDesktopName() const { return this->desktopName_ != nullptr;};
    void deleteDesktopName() { this->desktopName_ = nullptr;};
    inline string desktopName() const { DARABONBA_PTR_GET_DEFAULT(desktopName_, "") };
    inline CreateDesktopsRequest& setDesktopName(string desktopName) { DARABONBA_PTR_SET_VALUE(desktopName_, desktopName) };


    // desktopNameSuffix Field Functions 
    bool hasDesktopNameSuffix() const { return this->desktopNameSuffix_ != nullptr;};
    void deleteDesktopNameSuffix() { this->desktopNameSuffix_ = nullptr;};
    inline bool desktopNameSuffix() const { DARABONBA_PTR_GET_DEFAULT(desktopNameSuffix_, false) };
    inline CreateDesktopsRequest& setDesktopNameSuffix(bool desktopNameSuffix) { DARABONBA_PTR_SET_VALUE(desktopNameSuffix_, desktopNameSuffix) };


    // desktopTimers Field Functions 
    bool hasDesktopTimers() const { return this->desktopTimers_ != nullptr;};
    void deleteDesktopTimers() { this->desktopTimers_ = nullptr;};
    inline const vector<CreateDesktopsRequestDesktopTimers> & desktopTimers() const { DARABONBA_PTR_GET_CONST(desktopTimers_, vector<CreateDesktopsRequestDesktopTimers>) };
    inline vector<CreateDesktopsRequestDesktopTimers> desktopTimers() { DARABONBA_PTR_GET(desktopTimers_, vector<CreateDesktopsRequestDesktopTimers>) };
    inline CreateDesktopsRequest& setDesktopTimers(const vector<CreateDesktopsRequestDesktopTimers> & desktopTimers) { DARABONBA_PTR_SET_VALUE(desktopTimers_, desktopTimers) };
    inline CreateDesktopsRequest& setDesktopTimers(vector<CreateDesktopsRequestDesktopTimers> && desktopTimers) { DARABONBA_PTR_SET_RVALUE(desktopTimers_, desktopTimers) };


    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string directoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline CreateDesktopsRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline const vector<string> & endUserId() const { DARABONBA_PTR_GET_CONST(endUserId_, vector<string>) };
    inline vector<string> endUserId() { DARABONBA_PTR_GET(endUserId_, vector<string>) };
    inline CreateDesktopsRequest& setEndUserId(const vector<string> & endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };
    inline CreateDesktopsRequest& setEndUserId(vector<string> && endUserId) { DARABONBA_PTR_SET_RVALUE(endUserId_, endUserId) };


    // extendInfo Field Functions 
    bool hasExtendInfo() const { return this->extendInfo_ != nullptr;};
    void deleteExtendInfo() { this->extendInfo_ = nullptr;};
    inline string extendInfo() const { DARABONBA_PTR_GET_DEFAULT(extendInfo_, "") };
    inline CreateDesktopsRequest& setExtendInfo(string extendInfo) { DARABONBA_PTR_SET_VALUE(extendInfo_, extendInfo) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline CreateDesktopsRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // hostname Field Functions 
    bool hasHostname() const { return this->hostname_ != nullptr;};
    void deleteHostname() { this->hostname_ = nullptr;};
    inline string hostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
    inline CreateDesktopsRequest& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


    // monthDesktopSetting Field Functions 
    bool hasMonthDesktopSetting() const { return this->monthDesktopSetting_ != nullptr;};
    void deleteMonthDesktopSetting() { this->monthDesktopSetting_ = nullptr;};
    inline const CreateDesktopsRequestMonthDesktopSetting & monthDesktopSetting() const { DARABONBA_PTR_GET_CONST(monthDesktopSetting_, CreateDesktopsRequestMonthDesktopSetting) };
    inline CreateDesktopsRequestMonthDesktopSetting monthDesktopSetting() { DARABONBA_PTR_GET(monthDesktopSetting_, CreateDesktopsRequestMonthDesktopSetting) };
    inline CreateDesktopsRequest& setMonthDesktopSetting(const CreateDesktopsRequestMonthDesktopSetting & monthDesktopSetting) { DARABONBA_PTR_SET_VALUE(monthDesktopSetting_, monthDesktopSetting) };
    inline CreateDesktopsRequest& setMonthDesktopSetting(CreateDesktopsRequestMonthDesktopSetting && monthDesktopSetting) { DARABONBA_PTR_SET_RVALUE(monthDesktopSetting_, monthDesktopSetting) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string officeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline CreateDesktopsRequest& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline CreateDesktopsRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string periodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline CreateDesktopsRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // policyGroupId Field Functions 
    bool hasPolicyGroupId() const { return this->policyGroupId_ != nullptr;};
    void deletePolicyGroupId() { this->policyGroupId_ = nullptr;};
    inline string policyGroupId() const { DARABONBA_PTR_GET_DEFAULT(policyGroupId_, "") };
    inline CreateDesktopsRequest& setPolicyGroupId(string policyGroupId) { DARABONBA_PTR_SET_VALUE(policyGroupId_, policyGroupId) };


    // promotionId Field Functions 
    bool hasPromotionId() const { return this->promotionId_ != nullptr;};
    void deletePromotionId() { this->promotionId_ = nullptr;};
    inline string promotionId() const { DARABONBA_PTR_GET_DEFAULT(promotionId_, "") };
    inline CreateDesktopsRequest& setPromotionId(string promotionId) { DARABONBA_PTR_SET_VALUE(promotionId_, promotionId) };


    // qosRuleId Field Functions 
    bool hasQosRuleId() const { return this->qosRuleId_ != nullptr;};
    void deleteQosRuleId() { this->qosRuleId_ = nullptr;};
    inline string qosRuleId() const { DARABONBA_PTR_GET_DEFAULT(qosRuleId_, "") };
    inline CreateDesktopsRequest& setQosRuleId(string qosRuleId) { DARABONBA_PTR_SET_VALUE(qosRuleId_, qosRuleId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateDesktopsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resellerOwnerUid Field Functions 
    bool hasResellerOwnerUid() const { return this->resellerOwnerUid_ != nullptr;};
    void deleteResellerOwnerUid() { this->resellerOwnerUid_ = nullptr;};
    inline int64_t resellerOwnerUid() const { DARABONBA_PTR_GET_DEFAULT(resellerOwnerUid_, 0L) };
    inline CreateDesktopsRequest& setResellerOwnerUid(int64_t resellerOwnerUid) { DARABONBA_PTR_SET_VALUE(resellerOwnerUid_, resellerOwnerUid) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateDesktopsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // savingPlanId Field Functions 
    bool hasSavingPlanId() const { return this->savingPlanId_ != nullptr;};
    void deleteSavingPlanId() { this->savingPlanId_ = nullptr;};
    inline string savingPlanId() const { DARABONBA_PTR_GET_DEFAULT(savingPlanId_, "") };
    inline CreateDesktopsRequest& setSavingPlanId(string savingPlanId) { DARABONBA_PTR_SET_VALUE(savingPlanId_, savingPlanId) };


    // snapshotPolicyId Field Functions 
    bool hasSnapshotPolicyId() const { return this->snapshotPolicyId_ != nullptr;};
    void deleteSnapshotPolicyId() { this->snapshotPolicyId_ = nullptr;};
    inline string snapshotPolicyId() const { DARABONBA_PTR_GET_DEFAULT(snapshotPolicyId_, "") };
    inline CreateDesktopsRequest& setSnapshotPolicyId(string snapshotPolicyId) { DARABONBA_PTR_SET_VALUE(snapshotPolicyId_, snapshotPolicyId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateDesktopsRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateDesktopsRequestTag>) };
    inline vector<CreateDesktopsRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateDesktopsRequestTag>) };
    inline CreateDesktopsRequest& setTag(const vector<CreateDesktopsRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateDesktopsRequest& setTag(vector<CreateDesktopsRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // timerGroupId Field Functions 
    bool hasTimerGroupId() const { return this->timerGroupId_ != nullptr;};
    void deleteTimerGroupId() { this->timerGroupId_ = nullptr;};
    inline string timerGroupId() const { DARABONBA_PTR_GET_DEFAULT(timerGroupId_, "") };
    inline CreateDesktopsRequest& setTimerGroupId(string timerGroupId) { DARABONBA_PTR_SET_VALUE(timerGroupId_, timerGroupId) };


    // userAssignMode Field Functions 
    bool hasUserAssignMode() const { return this->userAssignMode_ != nullptr;};
    void deleteUserAssignMode() { this->userAssignMode_ = nullptr;};
    inline string userAssignMode() const { DARABONBA_PTR_GET_DEFAULT(userAssignMode_, "") };
    inline CreateDesktopsRequest& setUserAssignMode(string userAssignMode) { DARABONBA_PTR_SET_VALUE(userAssignMode_, userAssignMode) };


    // userCommands Field Functions 
    bool hasUserCommands() const { return this->userCommands_ != nullptr;};
    void deleteUserCommands() { this->userCommands_ = nullptr;};
    inline const vector<CreateDesktopsRequestUserCommands> & userCommands() const { DARABONBA_PTR_GET_CONST(userCommands_, vector<CreateDesktopsRequestUserCommands>) };
    inline vector<CreateDesktopsRequestUserCommands> userCommands() { DARABONBA_PTR_GET(userCommands_, vector<CreateDesktopsRequestUserCommands>) };
    inline CreateDesktopsRequest& setUserCommands(const vector<CreateDesktopsRequestUserCommands> & userCommands) { DARABONBA_PTR_SET_VALUE(userCommands_, userCommands) };
    inline CreateDesktopsRequest& setUserCommands(vector<CreateDesktopsRequestUserCommands> && userCommands) { DARABONBA_PTR_SET_RVALUE(userCommands_, userCommands) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline CreateDesktopsRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    // volumeEncryptionEnabled Field Functions 
    bool hasVolumeEncryptionEnabled() const { return this->volumeEncryptionEnabled_ != nullptr;};
    void deleteVolumeEncryptionEnabled() { this->volumeEncryptionEnabled_ = nullptr;};
    inline bool volumeEncryptionEnabled() const { DARABONBA_PTR_GET_DEFAULT(volumeEncryptionEnabled_, false) };
    inline CreateDesktopsRequest& setVolumeEncryptionEnabled(bool volumeEncryptionEnabled) { DARABONBA_PTR_SET_VALUE(volumeEncryptionEnabled_, volumeEncryptionEnabled) };


    // volumeEncryptionKey Field Functions 
    bool hasVolumeEncryptionKey() const { return this->volumeEncryptionKey_ != nullptr;};
    void deleteVolumeEncryptionKey() { this->volumeEncryptionKey_ = nullptr;};
    inline string volumeEncryptionKey() const { DARABONBA_PTR_GET_DEFAULT(volumeEncryptionKey_, "") };
    inline CreateDesktopsRequest& setVolumeEncryptionKey(string volumeEncryptionKey) { DARABONBA_PTR_SET_VALUE(volumeEncryptionKey_, volumeEncryptionKey) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateDesktopsRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The number of cloud computers that you want to create. Valid values: 1 to 300. Default value: 1.
    std::shared_ptr<int32_t> amount_ = nullptr;
    std::shared_ptr<string> appRuleId_ = nullptr;
    // Specifies whether to enable automatic payment.
    std::shared_ptr<bool> autoPay_ = nullptr;
    // Specifies whether to enable auto-renewal. This parameter takes effect only when the ChargeType parameter is set to PrePaid.
    std::shared_ptr<bool> autoRenew_ = nullptr;
    // The ID of the cloud computer template.
    std::shared_ptr<string> bundleId_ = nullptr;
    // The cloud computer templates.
    std::shared_ptr<vector<CreateDesktopsRequestBundleModels>> bundleModels_ = nullptr;
    // The billing method of the cloud computers.
    // 
    // Default value: PostPaid. Valid values:
    // 
    // *   Postpaid: pay-as-you-go
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   PrePaid: subscription
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<string> chargeType_ = nullptr;
    // The input parameters used when no templates are used.
    std::shared_ptr<CreateDesktopsRequestDesktopAttachment> desktopAttachment_ = nullptr;
    // The private IP address of the cloud computer.
    std::shared_ptr<string> desktopMemberIp_ = nullptr;
    // The name of the cloud computer. The name must meet the following requirements:
    // 
    // *   The name must be 1 to 64 characters in length.
    // *   The name must start with a letter but cannot start with `http://` or `https://`.
    // *   The name can only contain letters, digits, colons (:), underscores (_), periods (.), and hyphens (-).
    std::shared_ptr<string> desktopName_ = nullptr;
    // Specifies whether to automatically add suffixes to the names of cloud computers when you create multiple cloud computers at the same time.
    // 
    // Default value: true. Valid values:
    // 
    // *   true
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   False
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<bool> desktopNameSuffix_ = nullptr;
    // The details of the scheduled task on cloud computers.
    std::shared_ptr<vector<CreateDesktopsRequestDesktopTimers>> desktopTimers_ = nullptr;
    // >  This parameter is not publicly available.
    std::shared_ptr<string> directoryId_ = nullptr;
    // The IDs of the end users to which you want to assign the cloud computers. You can specify 1 to 100 IDs.
    std::shared_ptr<vector<string>> endUserId_ = nullptr;
    std::shared_ptr<string> extendInfo_ = nullptr;
    // The ID of the cloud computer pool.
    std::shared_ptr<string> groupId_ = nullptr;
    // The custom hostnames of the cloud computers. This parameter is valid only if the office network is an AD office network and the operating system type of the cloud computers is Windows.
    // 
    // The hostnames must meet the following requirements:
    // 
    // *   The hostnames must be 2 to 15 characters in length.
    // *   The hostnames can contain only letters, digits, and hyphens (-). The hostnames cannot start or end with a hyphen (-), contain consecutive hyphens (-), or contain only digits.
    // 
    // When you create multiple cloud computers, you can use the `name_prefix[begin_number,bits]name_suffix` naming format to name the cloud computers. For example, if you set the value of the Hostname parameter to ecd-[1,4]-test, the hostname of the first cloud computer is ecd-0001-test, the hostname of the second cloud computer is ecd-0002-test, and so on.
    // 
    // *   `name_prefix`: the prefix of the hostname.
    // *   `[begin_number,bits]`: the sequential number in the hostname. The `begin_number` value is the starting digit. Valid values of begin_number: 0 to 999999. Default value: 0. The `bits` value is the number of digits. Valid values: 1 to 6. Default value: 6.
    // *   `name_suffix`: the suffix of the hostname.
    std::shared_ptr<string> hostname_ = nullptr;
    // > This parameter is not publicly available.
    std::shared_ptr<CreateDesktopsRequestMonthDesktopSetting> monthDesktopSetting_ = nullptr;
    // The office network ID.
    std::shared_ptr<string> officeSiteId_ = nullptr;
    // The subscription duration of the cloud desktop that you want to create. The unit is specified by the `PeriodUnit` parameter. This parameter takes effect and is required only when the `ChargeType` parameter is set to `PrePaid`.
    // 
    // *   Valid values if the `PeriodUnit` parameter is set to `Month`:
    // 
    //     *   1
    //     *   2
    //     *   3
    //     *   6
    // 
    // *   Valid values if the `PeriodUnit` parameter is set to `Year`:
    // 
    //     *   1
    //     *   2
    //     *   3
    //     *   4
    //     *   5
    std::shared_ptr<int32_t> period_ = nullptr;
    // The unit of the subscription duration.
    std::shared_ptr<string> periodUnit_ = nullptr;
    // The ID of the policy.
    std::shared_ptr<string> policyGroupId_ = nullptr;
    // The ID of the sales promotion.
    std::shared_ptr<string> promotionId_ = nullptr;
    std::shared_ptr<string> qosRuleId_ = nullptr;
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<int64_t> resellerOwnerUid_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The ID of the saving plan.
    std::shared_ptr<string> savingPlanId_ = nullptr;
    // The ID of the auto-snapshot policy.
    std::shared_ptr<string> snapshotPolicyId_ = nullptr;
    // The tags that you want to add to the cloud desktop.
    std::shared_ptr<vector<CreateDesktopsRequestTag>> tag_ = nullptr;
    // The ID of the timer group.
    std::shared_ptr<string> timerGroupId_ = nullptr;
    // How the cloud computers are assigned.
    // 
    // >  If you do not specify the `EndUserId` parameter, the cloud computers are not assigned to end users after the cloud computers are created.
    // 
    // Default value: ALL. Valid values:
    // 
    // *   ALL: If you specify the EndUserId parameter, the cloud computers are assigned to all specified end users after the cloud computers are created.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   PER_USER: If you specify the EndUserId parameter, the cloud computers are evenly assigned to the specified end users after the cloud computers are created.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     In this case, you must make sure that the value of the Amount parameter can be divided by the N value of the EndUserId.N parameter that you specify.
    // 
    //     <!-- -->
    std::shared_ptr<string> userAssignMode_ = nullptr;
    // Details about the custom command scripts.
    std::shared_ptr<vector<CreateDesktopsRequestUserCommands>> userCommands_ = nullptr;
    // >  This parameter is not publicly available.
    std::shared_ptr<string> userName_ = nullptr;
    // Specifies whether to enable disk encryption.
    std::shared_ptr<bool> volumeEncryptionEnabled_ = nullptr;
    // The ID of the Key Management Service (KMS) key that you want to use when disk encryption is enabled. You can call the [ListKeys](https://help.aliyun.com/document_detail/28951.html) operation to obtain a list of KMS keys.
    std::shared_ptr<string> volumeEncryptionKey_ = nullptr;
    // >  This parameter is not publicly available.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
