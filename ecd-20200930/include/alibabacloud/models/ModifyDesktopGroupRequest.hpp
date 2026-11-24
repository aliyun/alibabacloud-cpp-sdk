// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDESKTOPGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDESKTOPGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ModifyDesktopGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDesktopGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllowAutoSetup, allowAutoSetup_);
      DARABONBA_PTR_TO_JSON(AllowBufferCount, allowBufferCount_);
      DARABONBA_PTR_TO_JSON(BindAmount, bindAmount_);
      DARABONBA_PTR_TO_JSON(BuyDesktopsCount, buyDesktopsCount_);
      DARABONBA_PTR_TO_JSON(Classify, classify_);
      DARABONBA_PTR_TO_JSON(Comments, comments_);
      DARABONBA_PTR_TO_JSON(ConnectDuration, connectDuration_);
      DARABONBA_PTR_TO_JSON(DeleteDuration, deleteDuration_);
      DARABONBA_PTR_TO_JSON(DesktopGroupId, desktopGroupId_);
      DARABONBA_PTR_TO_JSON(DesktopGroupName, desktopGroupName_);
      DARABONBA_PTR_TO_JSON(DisableSessionConfig, disableSessionConfig_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(IdleDisconnectDuration, idleDisconnectDuration_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(KeepDuration, keepDuration_);
      DARABONBA_PTR_TO_JSON(LoadPolicy, loadPolicy_);
      DARABONBA_PTR_TO_JSON(MaxDesktopsCount, maxDesktopsCount_);
      DARABONBA_PTR_TO_JSON(MinDesktopsCount, minDesktopsCount_);
      DARABONBA_PTR_TO_JSON(OwnBundleId, ownBundleId_);
      DARABONBA_PTR_TO_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_TO_JSON(PolicyGroupIds, policyGroupIds_);
      DARABONBA_PTR_TO_JSON(ProfileFollowSwitch, profileFollowSwitch_);
      DARABONBA_PTR_TO_JSON(RatioThreshold, ratioThreshold_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResetType, resetType_);
      DARABONBA_PTR_TO_JSON(ScaleStrategyId, scaleStrategyId_);
      DARABONBA_PTR_TO_JSON(StopDuration, stopDuration_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDesktopGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowAutoSetup, allowAutoSetup_);
      DARABONBA_PTR_FROM_JSON(AllowBufferCount, allowBufferCount_);
      DARABONBA_PTR_FROM_JSON(BindAmount, bindAmount_);
      DARABONBA_PTR_FROM_JSON(BuyDesktopsCount, buyDesktopsCount_);
      DARABONBA_PTR_FROM_JSON(Classify, classify_);
      DARABONBA_PTR_FROM_JSON(Comments, comments_);
      DARABONBA_PTR_FROM_JSON(ConnectDuration, connectDuration_);
      DARABONBA_PTR_FROM_JSON(DeleteDuration, deleteDuration_);
      DARABONBA_PTR_FROM_JSON(DesktopGroupId, desktopGroupId_);
      DARABONBA_PTR_FROM_JSON(DesktopGroupName, desktopGroupName_);
      DARABONBA_PTR_FROM_JSON(DisableSessionConfig, disableSessionConfig_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(IdleDisconnectDuration, idleDisconnectDuration_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(KeepDuration, keepDuration_);
      DARABONBA_PTR_FROM_JSON(LoadPolicy, loadPolicy_);
      DARABONBA_PTR_FROM_JSON(MaxDesktopsCount, maxDesktopsCount_);
      DARABONBA_PTR_FROM_JSON(MinDesktopsCount, minDesktopsCount_);
      DARABONBA_PTR_FROM_JSON(OwnBundleId, ownBundleId_);
      DARABONBA_PTR_FROM_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_FROM_JSON(PolicyGroupIds, policyGroupIds_);
      DARABONBA_PTR_FROM_JSON(ProfileFollowSwitch, profileFollowSwitch_);
      DARABONBA_PTR_FROM_JSON(RatioThreshold, ratioThreshold_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResetType, resetType_);
      DARABONBA_PTR_FROM_JSON(ScaleStrategyId, scaleStrategyId_);
      DARABONBA_PTR_FROM_JSON(StopDuration, stopDuration_);
    };
    ModifyDesktopGroupRequest() = default ;
    ModifyDesktopGroupRequest(const ModifyDesktopGroupRequest &) = default ;
    ModifyDesktopGroupRequest(ModifyDesktopGroupRequest &&) = default ;
    ModifyDesktopGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDesktopGroupRequest() = default ;
    ModifyDesktopGroupRequest& operator=(const ModifyDesktopGroupRequest &) = default ;
    ModifyDesktopGroupRequest& operator=(ModifyDesktopGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowAutoSetup_ == nullptr
        && this->allowBufferCount_ == nullptr && this->bindAmount_ == nullptr && this->buyDesktopsCount_ == nullptr && this->classify_ == nullptr && this->comments_ == nullptr
        && this->connectDuration_ == nullptr && this->deleteDuration_ == nullptr && this->desktopGroupId_ == nullptr && this->desktopGroupName_ == nullptr && this->disableSessionConfig_ == nullptr
        && this->fileSystemId_ == nullptr && this->idleDisconnectDuration_ == nullptr && this->imageId_ == nullptr && this->keepDuration_ == nullptr && this->loadPolicy_ == nullptr
        && this->maxDesktopsCount_ == nullptr && this->minDesktopsCount_ == nullptr && this->ownBundleId_ == nullptr && this->policyGroupId_ == nullptr && this->policyGroupIds_ == nullptr
        && this->profileFollowSwitch_ == nullptr && this->ratioThreshold_ == nullptr && this->regionId_ == nullptr && this->resetType_ == nullptr && this->scaleStrategyId_ == nullptr
        && this->stopDuration_ == nullptr; };
    // allowAutoSetup Field Functions 
    bool hasAllowAutoSetup() const { return this->allowAutoSetup_ != nullptr;};
    void deleteAllowAutoSetup() { this->allowAutoSetup_ = nullptr;};
    inline int32_t getAllowAutoSetup() const { DARABONBA_PTR_GET_DEFAULT(allowAutoSetup_, 0) };
    inline ModifyDesktopGroupRequest& setAllowAutoSetup(int32_t allowAutoSetup) { DARABONBA_PTR_SET_VALUE(allowAutoSetup_, allowAutoSetup) };


    // allowBufferCount Field Functions 
    bool hasAllowBufferCount() const { return this->allowBufferCount_ != nullptr;};
    void deleteAllowBufferCount() { this->allowBufferCount_ = nullptr;};
    inline int32_t getAllowBufferCount() const { DARABONBA_PTR_GET_DEFAULT(allowBufferCount_, 0) };
    inline ModifyDesktopGroupRequest& setAllowBufferCount(int32_t allowBufferCount) { DARABONBA_PTR_SET_VALUE(allowBufferCount_, allowBufferCount) };


    // bindAmount Field Functions 
    bool hasBindAmount() const { return this->bindAmount_ != nullptr;};
    void deleteBindAmount() { this->bindAmount_ = nullptr;};
    inline int64_t getBindAmount() const { DARABONBA_PTR_GET_DEFAULT(bindAmount_, 0L) };
    inline ModifyDesktopGroupRequest& setBindAmount(int64_t bindAmount) { DARABONBA_PTR_SET_VALUE(bindAmount_, bindAmount) };


    // buyDesktopsCount Field Functions 
    bool hasBuyDesktopsCount() const { return this->buyDesktopsCount_ != nullptr;};
    void deleteBuyDesktopsCount() { this->buyDesktopsCount_ = nullptr;};
    inline int32_t getBuyDesktopsCount() const { DARABONBA_PTR_GET_DEFAULT(buyDesktopsCount_, 0) };
    inline ModifyDesktopGroupRequest& setBuyDesktopsCount(int32_t buyDesktopsCount) { DARABONBA_PTR_SET_VALUE(buyDesktopsCount_, buyDesktopsCount) };


    // classify Field Functions 
    bool hasClassify() const { return this->classify_ != nullptr;};
    void deleteClassify() { this->classify_ = nullptr;};
    inline string getClassify() const { DARABONBA_PTR_GET_DEFAULT(classify_, "") };
    inline ModifyDesktopGroupRequest& setClassify(string classify) { DARABONBA_PTR_SET_VALUE(classify_, classify) };


    // comments Field Functions 
    bool hasComments() const { return this->comments_ != nullptr;};
    void deleteComments() { this->comments_ = nullptr;};
    inline string getComments() const { DARABONBA_PTR_GET_DEFAULT(comments_, "") };
    inline ModifyDesktopGroupRequest& setComments(string comments) { DARABONBA_PTR_SET_VALUE(comments_, comments) };


    // connectDuration Field Functions 
    bool hasConnectDuration() const { return this->connectDuration_ != nullptr;};
    void deleteConnectDuration() { this->connectDuration_ = nullptr;};
    inline int64_t getConnectDuration() const { DARABONBA_PTR_GET_DEFAULT(connectDuration_, 0L) };
    inline ModifyDesktopGroupRequest& setConnectDuration(int64_t connectDuration) { DARABONBA_PTR_SET_VALUE(connectDuration_, connectDuration) };


    // deleteDuration Field Functions 
    bool hasDeleteDuration() const { return this->deleteDuration_ != nullptr;};
    void deleteDeleteDuration() { this->deleteDuration_ = nullptr;};
    inline int64_t getDeleteDuration() const { DARABONBA_PTR_GET_DEFAULT(deleteDuration_, 0L) };
    inline ModifyDesktopGroupRequest& setDeleteDuration(int64_t deleteDuration) { DARABONBA_PTR_SET_VALUE(deleteDuration_, deleteDuration) };


    // desktopGroupId Field Functions 
    bool hasDesktopGroupId() const { return this->desktopGroupId_ != nullptr;};
    void deleteDesktopGroupId() { this->desktopGroupId_ = nullptr;};
    inline string getDesktopGroupId() const { DARABONBA_PTR_GET_DEFAULT(desktopGroupId_, "") };
    inline ModifyDesktopGroupRequest& setDesktopGroupId(string desktopGroupId) { DARABONBA_PTR_SET_VALUE(desktopGroupId_, desktopGroupId) };


    // desktopGroupName Field Functions 
    bool hasDesktopGroupName() const { return this->desktopGroupName_ != nullptr;};
    void deleteDesktopGroupName() { this->desktopGroupName_ = nullptr;};
    inline string getDesktopGroupName() const { DARABONBA_PTR_GET_DEFAULT(desktopGroupName_, "") };
    inline ModifyDesktopGroupRequest& setDesktopGroupName(string desktopGroupName) { DARABONBA_PTR_SET_VALUE(desktopGroupName_, desktopGroupName) };


    // disableSessionConfig Field Functions 
    bool hasDisableSessionConfig() const { return this->disableSessionConfig_ != nullptr;};
    void deleteDisableSessionConfig() { this->disableSessionConfig_ = nullptr;};
    inline bool getDisableSessionConfig() const { DARABONBA_PTR_GET_DEFAULT(disableSessionConfig_, false) };
    inline ModifyDesktopGroupRequest& setDisableSessionConfig(bool disableSessionConfig) { DARABONBA_PTR_SET_VALUE(disableSessionConfig_, disableSessionConfig) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline ModifyDesktopGroupRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // idleDisconnectDuration Field Functions 
    bool hasIdleDisconnectDuration() const { return this->idleDisconnectDuration_ != nullptr;};
    void deleteIdleDisconnectDuration() { this->idleDisconnectDuration_ = nullptr;};
    inline int64_t getIdleDisconnectDuration() const { DARABONBA_PTR_GET_DEFAULT(idleDisconnectDuration_, 0L) };
    inline ModifyDesktopGroupRequest& setIdleDisconnectDuration(int64_t idleDisconnectDuration) { DARABONBA_PTR_SET_VALUE(idleDisconnectDuration_, idleDisconnectDuration) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline ModifyDesktopGroupRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // keepDuration Field Functions 
    bool hasKeepDuration() const { return this->keepDuration_ != nullptr;};
    void deleteKeepDuration() { this->keepDuration_ = nullptr;};
    inline int64_t getKeepDuration() const { DARABONBA_PTR_GET_DEFAULT(keepDuration_, 0L) };
    inline ModifyDesktopGroupRequest& setKeepDuration(int64_t keepDuration) { DARABONBA_PTR_SET_VALUE(keepDuration_, keepDuration) };


    // loadPolicy Field Functions 
    bool hasLoadPolicy() const { return this->loadPolicy_ != nullptr;};
    void deleteLoadPolicy() { this->loadPolicy_ = nullptr;};
    inline int64_t getLoadPolicy() const { DARABONBA_PTR_GET_DEFAULT(loadPolicy_, 0L) };
    inline ModifyDesktopGroupRequest& setLoadPolicy(int64_t loadPolicy) { DARABONBA_PTR_SET_VALUE(loadPolicy_, loadPolicy) };


    // maxDesktopsCount Field Functions 
    bool hasMaxDesktopsCount() const { return this->maxDesktopsCount_ != nullptr;};
    void deleteMaxDesktopsCount() { this->maxDesktopsCount_ = nullptr;};
    inline int32_t getMaxDesktopsCount() const { DARABONBA_PTR_GET_DEFAULT(maxDesktopsCount_, 0) };
    inline ModifyDesktopGroupRequest& setMaxDesktopsCount(int32_t maxDesktopsCount) { DARABONBA_PTR_SET_VALUE(maxDesktopsCount_, maxDesktopsCount) };


    // minDesktopsCount Field Functions 
    bool hasMinDesktopsCount() const { return this->minDesktopsCount_ != nullptr;};
    void deleteMinDesktopsCount() { this->minDesktopsCount_ = nullptr;};
    inline int32_t getMinDesktopsCount() const { DARABONBA_PTR_GET_DEFAULT(minDesktopsCount_, 0) };
    inline ModifyDesktopGroupRequest& setMinDesktopsCount(int32_t minDesktopsCount) { DARABONBA_PTR_SET_VALUE(minDesktopsCount_, minDesktopsCount) };


    // ownBundleId Field Functions 
    bool hasOwnBundleId() const { return this->ownBundleId_ != nullptr;};
    void deleteOwnBundleId() { this->ownBundleId_ = nullptr;};
    inline string getOwnBundleId() const { DARABONBA_PTR_GET_DEFAULT(ownBundleId_, "") };
    inline ModifyDesktopGroupRequest& setOwnBundleId(string ownBundleId) { DARABONBA_PTR_SET_VALUE(ownBundleId_, ownBundleId) };


    // policyGroupId Field Functions 
    bool hasPolicyGroupId() const { return this->policyGroupId_ != nullptr;};
    void deletePolicyGroupId() { this->policyGroupId_ = nullptr;};
    inline string getPolicyGroupId() const { DARABONBA_PTR_GET_DEFAULT(policyGroupId_, "") };
    inline ModifyDesktopGroupRequest& setPolicyGroupId(string policyGroupId) { DARABONBA_PTR_SET_VALUE(policyGroupId_, policyGroupId) };


    // policyGroupIds Field Functions 
    bool hasPolicyGroupIds() const { return this->policyGroupIds_ != nullptr;};
    void deletePolicyGroupIds() { this->policyGroupIds_ = nullptr;};
    inline const vector<string> & getPolicyGroupIds() const { DARABONBA_PTR_GET_CONST(policyGroupIds_, vector<string>) };
    inline vector<string> getPolicyGroupIds() { DARABONBA_PTR_GET(policyGroupIds_, vector<string>) };
    inline ModifyDesktopGroupRequest& setPolicyGroupIds(const vector<string> & policyGroupIds) { DARABONBA_PTR_SET_VALUE(policyGroupIds_, policyGroupIds) };
    inline ModifyDesktopGroupRequest& setPolicyGroupIds(vector<string> && policyGroupIds) { DARABONBA_PTR_SET_RVALUE(policyGroupIds_, policyGroupIds) };


    // profileFollowSwitch Field Functions 
    bool hasProfileFollowSwitch() const { return this->profileFollowSwitch_ != nullptr;};
    void deleteProfileFollowSwitch() { this->profileFollowSwitch_ = nullptr;};
    inline bool getProfileFollowSwitch() const { DARABONBA_PTR_GET_DEFAULT(profileFollowSwitch_, false) };
    inline ModifyDesktopGroupRequest& setProfileFollowSwitch(bool profileFollowSwitch) { DARABONBA_PTR_SET_VALUE(profileFollowSwitch_, profileFollowSwitch) };


    // ratioThreshold Field Functions 
    bool hasRatioThreshold() const { return this->ratioThreshold_ != nullptr;};
    void deleteRatioThreshold() { this->ratioThreshold_ = nullptr;};
    inline float getRatioThreshold() const { DARABONBA_PTR_GET_DEFAULT(ratioThreshold_, 0.0) };
    inline ModifyDesktopGroupRequest& setRatioThreshold(float ratioThreshold) { DARABONBA_PTR_SET_VALUE(ratioThreshold_, ratioThreshold) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyDesktopGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resetType Field Functions 
    bool hasResetType() const { return this->resetType_ != nullptr;};
    void deleteResetType() { this->resetType_ = nullptr;};
    inline int64_t getResetType() const { DARABONBA_PTR_GET_DEFAULT(resetType_, 0L) };
    inline ModifyDesktopGroupRequest& setResetType(int64_t resetType) { DARABONBA_PTR_SET_VALUE(resetType_, resetType) };


    // scaleStrategyId Field Functions 
    bool hasScaleStrategyId() const { return this->scaleStrategyId_ != nullptr;};
    void deleteScaleStrategyId() { this->scaleStrategyId_ = nullptr;};
    inline string getScaleStrategyId() const { DARABONBA_PTR_GET_DEFAULT(scaleStrategyId_, "") };
    inline ModifyDesktopGroupRequest& setScaleStrategyId(string scaleStrategyId) { DARABONBA_PTR_SET_VALUE(scaleStrategyId_, scaleStrategyId) };


    // stopDuration Field Functions 
    bool hasStopDuration() const { return this->stopDuration_ != nullptr;};
    void deleteStopDuration() { this->stopDuration_ = nullptr;};
    inline int64_t getStopDuration() const { DARABONBA_PTR_GET_DEFAULT(stopDuration_, 0L) };
    inline ModifyDesktopGroupRequest& setStopDuration(int64_t stopDuration) { DARABONBA_PTR_SET_VALUE(stopDuration_, stopDuration) };


  protected:
    // Specifies whether to allow automatic creation of cloud desktops in a subscription shared cloud desktop. This parameter takes effect and is required only when the `ChargeType` parameter is set to `PrePaid`.
    shared_ptr<int32_t> allowAutoSetup_ {};
    // The number of reserved cloud desktops allowed in a pay-as-you-go shared cloud desktop. This parameter takes effect and is required only when the `ChargeType` parameter is set to `PostPaid`. Valid values: 
    // - 0: No reserved cloud desktops.
    // - N: N reserved cloud desktops (1 ≤ N ≤ 100).
    // 
    // > If no available cloud desktops are reserved, when an end user initiates a connection request, the system must first create and start a cloud desktop and then assign it to the user, which takes a relatively long time. Reserve a certain number of cloud desktops as needed to ensure the user experience.
    shared_ptr<int32_t> allowBufferCount_ {};
    // The number of concurrent sessions allowed per cloud desktop in multi-session and multi-desktop shared cloud desktops.
    // 
    // > This parameter is not available.
    shared_ptr<int64_t> bindAmount_ {};
    // - For a subscription shared cloud desktop: the number of cloud desktops to purchase. Valid values: 0 to 200.
    // - For a pay-as-you-go shared cloud desktop: the minimum number of cloud desktops to create in the pool. Default value: 1. Valid values: 0 to the value of `MaxDesktopsCount`.
    shared_ptr<int32_t> buyDesktopsCount_ {};
    // The type of the shared cloud desktop.
    // 
    // > This parameter is not available.
    shared_ptr<string> classify_ {};
    // The description.
    shared_ptr<string> comments_ {};
    // The maximum duration for which a session can remain connected. When the session connection duration reaches this value, the session is automatically disconnected. Unit: milliseconds. Valid values: 900000 (15 minutes) to 345600000 (4 days).
    shared_ptr<int64_t> connectDuration_ {};
    // The retention period before a cloud desktop in the cloud desktop pool is automatically deleted.
    shared_ptr<int64_t> deleteDuration_ {};
    // The ID of the shared cloud desktop.
    // 
    // This parameter is required.
    shared_ptr<string> desktopGroupId_ {};
    // The name of the shared cloud desktop.
    shared_ptr<string> desktopGroupName_ {};
    // Specifies whether to disable session management.
    shared_ptr<bool> disableSessionConfig_ {};
    // The ID of the NAS file system used for the user data roaming feature.
    // 
    // > This parameter is not available.
    shared_ptr<string> fileSystemId_ {};
    // The maximum idle time before a user session is disconnected. If no keyboard or mouse operations are performed within this maximum duration after a user session is connected, the session is disconnected. Unit: milliseconds. Valid values: 360000 (6 minutes) to 3600000 (60 minutes).
    // 
    // 30 seconds before this duration is reached, the end user in the session receives a prompt message to save document data. The end user must save the document data promptly to avoid data loss.
    // 
    // > This parameter applies only to cloud desktops with an image version of 1.0.2 or later.
    shared_ptr<int64_t> idleDisconnectDuration_ {};
    // The image ID.
    shared_ptr<string> imageId_ {};
    // The retention period after a session is disconnected. Unit: milliseconds. Valid values: 180000 (3 minutes) to 345600000 (4 days). A value of 0 indicates that the session is always retained.
    // 
    // If a session is disconnected intentionally by the user or unexpectedly due to other factors, the retention period starts from the time of disconnection. If the user does not reconnect to the session within this period, the session is logged off and unsaved data is destroyed. If the user successfully reconnects within this period, the user can enter the original session and access the data before the disconnection.
    shared_ptr<int64_t> keepDuration_ {};
    // The load balancing policy for multi-session and multi-desktop shared cloud desktops.
    // 
    // > This parameter is not available.
    shared_ptr<int64_t> loadPolicy_ {};
    // The maximum number of cloud desktops that can be accommodated in a pay-as-you-go shared cloud desktop. Valid values: 0 to 500.
    shared_ptr<int32_t> maxDesktopsCount_ {};
    // The upper limit for the automatic creation of cloud desktops in a subscription shared cloud desktop. This parameter takes effect and is required only when the `ChargeType` parameter is set to `PrePaid`. Default value: 1. Valid values: 0 to the value of `MaxDesktopsCount`.
    shared_ptr<int32_t> minDesktopsCount_ {};
    // The ID of the cloud desktop template.
    shared_ptr<string> ownBundleId_ {};
    // The ID of the policy.
    shared_ptr<string> policyGroupId_ {};
    // The list of policy group IDs.
    shared_ptr<vector<string>> policyGroupIds_ {};
    // Specifies whether to enable user data roaming.
    // 
    // > This parameter is not available.
    shared_ptr<bool> profileFollowSwitch_ {};
    // The session usage threshold, which is used as the trigger for automatic scaling of multi-session and multi-desktop shared cloud desktops. The formula for session usage is:
    // 
    // ```Session usage = Number of attached sessions / (Total number of cloud desktop resources × Maximum number of sessions supported per cloud desktop) × 100%```
    // 
    // When the session usage reaches this threshold, new cloud desktops are created. When the session usage does not reach this threshold, excess cloud desktops are deleted.
    // 
    // > This parameter is not available.
    shared_ptr<float> ratioThreshold_ {};
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the regions supported by Elastic Desktop Service.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The reset type of the cloud desktop.
    shared_ptr<int64_t> resetType_ {};
    // The ID of the scaling policy group.
    // 
    // > This parameter is not available.
    shared_ptr<string> scaleStrategyId_ {};
    // The idle shutdown time. When the idle time of a cloud desktop reaches this value, the cloud desktop is automatically shut down. If a user connects to the cloud desktop after it is shut down, the cloud desktop is automatically started. Unit: milliseconds.
    shared_ptr<int64_t> stopDuration_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
