// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDESKTOPGROUPDETAILRESPONSEBODYDESKTOPS_HPP_
#define ALIBABACLOUD_MODELS_GETDESKTOPGROUPDETAILRESPONSEBODYDESKTOPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetDesktopGroupDetailResponseBodyDesktopsScaleTimerInfos.hpp>
#include <alibabacloud/models/GetDesktopGroupDetailResponseBodyDesktopsTimerInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class GetDesktopGroupDetailResponseBodyDesktops : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDesktopGroupDetailResponseBodyDesktops& obj) { 
      DARABONBA_PTR_TO_JSON(AllowAutoSetup, allowAutoSetup_);
      DARABONBA_PTR_TO_JSON(AllowBufferCount, allowBufferCount_);
      DARABONBA_PTR_TO_JSON(BindAmount, bindAmount_);
      DARABONBA_PTR_TO_JSON(BuyDesktopsCount, buyDesktopsCount_);
      DARABONBA_PTR_TO_JSON(Comments, comments_);
      DARABONBA_PTR_TO_JSON(ConnectDuration, connectDuration_);
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(DataDiskCategory, dataDiskCategory_);
      DARABONBA_PTR_TO_JSON(DataDiskSize, dataDiskSize_);
      DARABONBA_PTR_TO_JSON(DesktopGroupId, desktopGroupId_);
      DARABONBA_PTR_TO_JSON(DesktopGroupName, desktopGroupName_);
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(DirectoryType, directoryType_);
      DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_TO_JSON(ExpiredTimes, expiredTimes_);
      DARABONBA_PTR_TO_JSON(GpuCount, gpuCount_);
      DARABONBA_PTR_TO_JSON(GpuSpec, gpuSpec_);
      DARABONBA_PTR_TO_JSON(IdleDisconnectDuration, idleDisconnectDuration_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(KeepDuration, keepDuration_);
      DARABONBA_PTR_TO_JSON(LoadPolicy, loadPolicy_);
      DARABONBA_PTR_TO_JSON(MaxDesktopsCount, maxDesktopsCount_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(MinDesktopsCount, minDesktopsCount_);
      DARABONBA_PTR_TO_JSON(NasFileSystemID, nasFileSystemID_);
      DARABONBA_PTR_TO_JSON(NasFileSystemName, nasFileSystemName_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(OfficeSiteName, officeSiteName_);
      DARABONBA_PTR_TO_JSON(OfficeSiteType, officeSiteType_);
      DARABONBA_PTR_TO_JSON(OsType, osType_);
      DARABONBA_PTR_TO_JSON(OwnBundleId, ownBundleId_);
      DARABONBA_PTR_TO_JSON(OwnBundleName, ownBundleName_);
      DARABONBA_PTR_TO_JSON(OwnType, ownType_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_TO_JSON(PolicyGroupIds, policyGroupIds_);
      DARABONBA_PTR_TO_JSON(PolicyGroupName, policyGroupName_);
      DARABONBA_PTR_TO_JSON(PolicyGroupNames, policyGroupNames_);
      DARABONBA_PTR_TO_JSON(ProfileFollowSwitch, profileFollowSwitch_);
      DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_TO_JSON(RatioThreshold, ratioThreshold_);
      DARABONBA_PTR_TO_JSON(ResType, resType_);
      DARABONBA_PTR_TO_JSON(ResetType, resetType_);
      DARABONBA_PTR_TO_JSON(ScaleTimerInfos, scaleTimerInfos_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StopDuration, stopDuration_);
      DARABONBA_PTR_TO_JSON(SystemDiskCategory, systemDiskCategory_);
      DARABONBA_PTR_TO_JSON(SystemDiskSize, systemDiskSize_);
      DARABONBA_PTR_TO_JSON(TimerInfos, timerInfos_);
      DARABONBA_PTR_TO_JSON(TimingStrategyInfo, timingStrategyInfo_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, GetDesktopGroupDetailResponseBodyDesktops& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowAutoSetup, allowAutoSetup_);
      DARABONBA_PTR_FROM_JSON(AllowBufferCount, allowBufferCount_);
      DARABONBA_PTR_FROM_JSON(BindAmount, bindAmount_);
      DARABONBA_PTR_FROM_JSON(BuyDesktopsCount, buyDesktopsCount_);
      DARABONBA_PTR_FROM_JSON(Comments, comments_);
      DARABONBA_PTR_FROM_JSON(ConnectDuration, connectDuration_);
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(DataDiskCategory, dataDiskCategory_);
      DARABONBA_PTR_FROM_JSON(DataDiskSize, dataDiskSize_);
      DARABONBA_PTR_FROM_JSON(DesktopGroupId, desktopGroupId_);
      DARABONBA_PTR_FROM_JSON(DesktopGroupName, desktopGroupName_);
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(DirectoryType, directoryType_);
      DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_FROM_JSON(ExpiredTimes, expiredTimes_);
      DARABONBA_PTR_FROM_JSON(GpuCount, gpuCount_);
      DARABONBA_PTR_FROM_JSON(GpuSpec, gpuSpec_);
      DARABONBA_PTR_FROM_JSON(IdleDisconnectDuration, idleDisconnectDuration_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(KeepDuration, keepDuration_);
      DARABONBA_PTR_FROM_JSON(LoadPolicy, loadPolicy_);
      DARABONBA_PTR_FROM_JSON(MaxDesktopsCount, maxDesktopsCount_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(MinDesktopsCount, minDesktopsCount_);
      DARABONBA_PTR_FROM_JSON(NasFileSystemID, nasFileSystemID_);
      DARABONBA_PTR_FROM_JSON(NasFileSystemName, nasFileSystemName_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteName, officeSiteName_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteType, officeSiteType_);
      DARABONBA_PTR_FROM_JSON(OsType, osType_);
      DARABONBA_PTR_FROM_JSON(OwnBundleId, ownBundleId_);
      DARABONBA_PTR_FROM_JSON(OwnBundleName, ownBundleName_);
      DARABONBA_PTR_FROM_JSON(OwnType, ownType_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_FROM_JSON(PolicyGroupIds, policyGroupIds_);
      DARABONBA_PTR_FROM_JSON(PolicyGroupName, policyGroupName_);
      DARABONBA_PTR_FROM_JSON(PolicyGroupNames, policyGroupNames_);
      DARABONBA_PTR_FROM_JSON(ProfileFollowSwitch, profileFollowSwitch_);
      DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_FROM_JSON(RatioThreshold, ratioThreshold_);
      DARABONBA_PTR_FROM_JSON(ResType, resType_);
      DARABONBA_PTR_FROM_JSON(ResetType, resetType_);
      DARABONBA_PTR_FROM_JSON(ScaleTimerInfos, scaleTimerInfos_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StopDuration, stopDuration_);
      DARABONBA_PTR_FROM_JSON(SystemDiskCategory, systemDiskCategory_);
      DARABONBA_PTR_FROM_JSON(SystemDiskSize, systemDiskSize_);
      DARABONBA_PTR_FROM_JSON(TimerInfos, timerInfos_);
      DARABONBA_PTR_FROM_JSON(TimingStrategyInfo, timingStrategyInfo_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    GetDesktopGroupDetailResponseBodyDesktops() = default ;
    GetDesktopGroupDetailResponseBodyDesktops(const GetDesktopGroupDetailResponseBodyDesktops &) = default ;
    GetDesktopGroupDetailResponseBodyDesktops(GetDesktopGroupDetailResponseBodyDesktops &&) = default ;
    GetDesktopGroupDetailResponseBodyDesktops(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDesktopGroupDetailResponseBodyDesktops() = default ;
    GetDesktopGroupDetailResponseBodyDesktops& operator=(const GetDesktopGroupDetailResponseBodyDesktops &) = default ;
    GetDesktopGroupDetailResponseBodyDesktops& operator=(GetDesktopGroupDetailResponseBodyDesktops &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowAutoSetup_ == nullptr
        && return this->allowBufferCount_ == nullptr && return this->bindAmount_ == nullptr && return this->buyDesktopsCount_ == nullptr && return this->comments_ == nullptr && return this->connectDuration_ == nullptr
        && return this->cpu_ == nullptr && return this->creationTime_ == nullptr && return this->creator_ == nullptr && return this->dataDiskCategory_ == nullptr && return this->dataDiskSize_ == nullptr
        && return this->desktopGroupId_ == nullptr && return this->desktopGroupName_ == nullptr && return this->directoryId_ == nullptr && return this->directoryType_ == nullptr && return this->expiredTime_ == nullptr
        && return this->expiredTimes_ == nullptr && return this->gpuCount_ == nullptr && return this->gpuSpec_ == nullptr && return this->idleDisconnectDuration_ == nullptr && return this->imageId_ == nullptr
        && return this->keepDuration_ == nullptr && return this->loadPolicy_ == nullptr && return this->maxDesktopsCount_ == nullptr && return this->memory_ == nullptr && return this->minDesktopsCount_ == nullptr
        && return this->nasFileSystemID_ == nullptr && return this->nasFileSystemName_ == nullptr && return this->officeSiteId_ == nullptr && return this->officeSiteName_ == nullptr && return this->officeSiteType_ == nullptr
        && return this->osType_ == nullptr && return this->ownBundleId_ == nullptr && return this->ownBundleName_ == nullptr && return this->ownType_ == nullptr && return this->payType_ == nullptr
        && return this->policyGroupId_ == nullptr && return this->policyGroupIds_ == nullptr && return this->policyGroupName_ == nullptr && return this->policyGroupNames_ == nullptr && return this->profileFollowSwitch_ == nullptr
        && return this->protocolType_ == nullptr && return this->ratioThreshold_ == nullptr && return this->resType_ == nullptr && return this->resetType_ == nullptr && return this->scaleTimerInfos_ == nullptr
        && return this->status_ == nullptr && return this->stopDuration_ == nullptr && return this->systemDiskCategory_ == nullptr && return this->systemDiskSize_ == nullptr && return this->timerInfos_ == nullptr
        && return this->timingStrategyInfo_ == nullptr && return this->version_ == nullptr; };
    // allowAutoSetup Field Functions 
    bool hasAllowAutoSetup() const { return this->allowAutoSetup_ != nullptr;};
    void deleteAllowAutoSetup() { this->allowAutoSetup_ = nullptr;};
    inline int32_t allowAutoSetup() const { DARABONBA_PTR_GET_DEFAULT(allowAutoSetup_, 0) };
    inline GetDesktopGroupDetailResponseBodyDesktops& setAllowAutoSetup(int32_t allowAutoSetup) { DARABONBA_PTR_SET_VALUE(allowAutoSetup_, allowAutoSetup) };


    // allowBufferCount Field Functions 
    bool hasAllowBufferCount() const { return this->allowBufferCount_ != nullptr;};
    void deleteAllowBufferCount() { this->allowBufferCount_ = nullptr;};
    inline int32_t allowBufferCount() const { DARABONBA_PTR_GET_DEFAULT(allowBufferCount_, 0) };
    inline GetDesktopGroupDetailResponseBodyDesktops& setAllowBufferCount(int32_t allowBufferCount) { DARABONBA_PTR_SET_VALUE(allowBufferCount_, allowBufferCount) };


    // bindAmount Field Functions 
    bool hasBindAmount() const { return this->bindAmount_ != nullptr;};
    void deleteBindAmount() { this->bindAmount_ = nullptr;};
    inline int32_t bindAmount() const { DARABONBA_PTR_GET_DEFAULT(bindAmount_, 0) };
    inline GetDesktopGroupDetailResponseBodyDesktops& setBindAmount(int32_t bindAmount) { DARABONBA_PTR_SET_VALUE(bindAmount_, bindAmount) };


    // buyDesktopsCount Field Functions 
    bool hasBuyDesktopsCount() const { return this->buyDesktopsCount_ != nullptr;};
    void deleteBuyDesktopsCount() { this->buyDesktopsCount_ = nullptr;};
    inline int32_t buyDesktopsCount() const { DARABONBA_PTR_GET_DEFAULT(buyDesktopsCount_, 0) };
    inline GetDesktopGroupDetailResponseBodyDesktops& setBuyDesktopsCount(int32_t buyDesktopsCount) { DARABONBA_PTR_SET_VALUE(buyDesktopsCount_, buyDesktopsCount) };


    // comments Field Functions 
    bool hasComments() const { return this->comments_ != nullptr;};
    void deleteComments() { this->comments_ = nullptr;};
    inline string comments() const { DARABONBA_PTR_GET_DEFAULT(comments_, "") };
    inline GetDesktopGroupDetailResponseBodyDesktops& setComments(string comments) { DARABONBA_PTR_SET_VALUE(comments_, comments) };


    // connectDuration Field Functions 
    bool hasConnectDuration() const { return this->connectDuration_ != nullptr;};
    void deleteConnectDuration() { this->connectDuration_ = nullptr;};
    inline int64_t connectDuration() const { DARABONBA_PTR_GET_DEFAULT(connectDuration_, 0L) };
    inline GetDesktopGroupDetailResponseBodyDesktops& setConnectDuration(int64_t connectDuration) { DARABONBA_PTR_SET_VALUE(connectDuration_, connectDuration) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline int32_t cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
    inline GetDesktopGroupDetailResponseBodyDesktops& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline GetDesktopGroupDetailResponseBodyDesktops& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline GetDesktopGroupDetailResponseBodyDesktops& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // dataDiskCategory Field Functions 
    bool hasDataDiskCategory() const { return this->dataDiskCategory_ != nullptr;};
    void deleteDataDiskCategory() { this->dataDiskCategory_ = nullptr;};
    inline string dataDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(dataDiskCategory_, "") };
    inline GetDesktopGroupDetailResponseBodyDesktops& setDataDiskCategory(string dataDiskCategory) { DARABONBA_PTR_SET_VALUE(dataDiskCategory_, dataDiskCategory) };


    // dataDiskSize Field Functions 
    bool hasDataDiskSize() const { return this->dataDiskSize_ != nullptr;};
    void deleteDataDiskSize() { this->dataDiskSize_ = nullptr;};
    inline string dataDiskSize() const { DARABONBA_PTR_GET_DEFAULT(dataDiskSize_, "") };
    inline GetDesktopGroupDetailResponseBodyDesktops& setDataDiskSize(string dataDiskSize) { DARABONBA_PTR_SET_VALUE(dataDiskSize_, dataDiskSize) };


    // desktopGroupId Field Functions 
    bool hasDesktopGroupId() const { return this->desktopGroupId_ != nullptr;};
    void deleteDesktopGroupId() { this->desktopGroupId_ = nullptr;};
    inline string desktopGroupId() const { DARABONBA_PTR_GET_DEFAULT(desktopGroupId_, "") };
    inline GetDesktopGroupDetailResponseBodyDesktops& setDesktopGroupId(string desktopGroupId) { DARABONBA_PTR_SET_VALUE(desktopGroupId_, desktopGroupId) };


    // desktopGroupName Field Functions 
    bool hasDesktopGroupName() const { return this->desktopGroupName_ != nullptr;};
    void deleteDesktopGroupName() { this->desktopGroupName_ = nullptr;};
    inline string desktopGroupName() const { DARABONBA_PTR_GET_DEFAULT(desktopGroupName_, "") };
    inline GetDesktopGroupDetailResponseBodyDesktops& setDesktopGroupName(string desktopGroupName) { DARABONBA_PTR_SET_VALUE(desktopGroupName_, desktopGroupName) };


    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string directoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline GetDesktopGroupDetailResponseBodyDesktops& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // directoryType Field Functions 
    bool hasDirectoryType() const { return this->directoryType_ != nullptr;};
    void deleteDirectoryType() { this->directoryType_ = nullptr;};
    inline string directoryType() const { DARABONBA_PTR_GET_DEFAULT(directoryType_, "") };
    inline GetDesktopGroupDetailResponseBodyDesktops& setDirectoryType(string directoryType) { DARABONBA_PTR_SET_VALUE(directoryType_, directoryType) };


    // expiredTime Field Functions 
    bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
    void deleteExpiredTime() { this->expiredTime_ = nullptr;};
    inline string expiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
    inline GetDesktopGroupDetailResponseBodyDesktops& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


    // expiredTimes Field Functions 
    bool hasExpiredTimes() const { return this->expiredTimes_ != nullptr;};
    void deleteExpiredTimes() { this->expiredTimes_ = nullptr;};
    inline const vector<string> & expiredTimes() const { DARABONBA_PTR_GET_CONST(expiredTimes_, vector<string>) };
    inline vector<string> expiredTimes() { DARABONBA_PTR_GET(expiredTimes_, vector<string>) };
    inline GetDesktopGroupDetailResponseBodyDesktops& setExpiredTimes(const vector<string> & expiredTimes) { DARABONBA_PTR_SET_VALUE(expiredTimes_, expiredTimes) };
    inline GetDesktopGroupDetailResponseBodyDesktops& setExpiredTimes(vector<string> && expiredTimes) { DARABONBA_PTR_SET_RVALUE(expiredTimes_, expiredTimes) };


    // gpuCount Field Functions 
    bool hasGpuCount() const { return this->gpuCount_ != nullptr;};
    void deleteGpuCount() { this->gpuCount_ = nullptr;};
    inline float gpuCount() const { DARABONBA_PTR_GET_DEFAULT(gpuCount_, 0.0) };
    inline GetDesktopGroupDetailResponseBodyDesktops& setGpuCount(float gpuCount) { DARABONBA_PTR_SET_VALUE(gpuCount_, gpuCount) };


    // gpuSpec Field Functions 
    bool hasGpuSpec() const { return this->gpuSpec_ != nullptr;};
    void deleteGpuSpec() { this->gpuSpec_ = nullptr;};
    inline string gpuSpec() const { DARABONBA_PTR_GET_DEFAULT(gpuSpec_, "") };
    inline GetDesktopGroupDetailResponseBodyDesktops& setGpuSpec(string gpuSpec) { DARABONBA_PTR_SET_VALUE(gpuSpec_, gpuSpec) };


    // idleDisconnectDuration Field Functions 
    bool hasIdleDisconnectDuration() const { return this->idleDisconnectDuration_ != nullptr;};
    void deleteIdleDisconnectDuration() { this->idleDisconnectDuration_ = nullptr;};
    inline int64_t idleDisconnectDuration() const { DARABONBA_PTR_GET_DEFAULT(idleDisconnectDuration_, 0L) };
    inline GetDesktopGroupDetailResponseBodyDesktops& setIdleDisconnectDuration(int64_t idleDisconnectDuration) { DARABONBA_PTR_SET_VALUE(idleDisconnectDuration_, idleDisconnectDuration) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline GetDesktopGroupDetailResponseBodyDesktops& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // keepDuration Field Functions 
    bool hasKeepDuration() const { return this->keepDuration_ != nullptr;};
    void deleteKeepDuration() { this->keepDuration_ = nullptr;};
    inline int64_t keepDuration() const { DARABONBA_PTR_GET_DEFAULT(keepDuration_, 0L) };
    inline GetDesktopGroupDetailResponseBodyDesktops& setKeepDuration(int64_t keepDuration) { DARABONBA_PTR_SET_VALUE(keepDuration_, keepDuration) };


    // loadPolicy Field Functions 
    bool hasLoadPolicy() const { return this->loadPolicy_ != nullptr;};
    void deleteLoadPolicy() { this->loadPolicy_ = nullptr;};
    inline int32_t loadPolicy() const { DARABONBA_PTR_GET_DEFAULT(loadPolicy_, 0) };
    inline GetDesktopGroupDetailResponseBodyDesktops& setLoadPolicy(int32_t loadPolicy) { DARABONBA_PTR_SET_VALUE(loadPolicy_, loadPolicy) };


    // maxDesktopsCount Field Functions 
    bool hasMaxDesktopsCount() const { return this->maxDesktopsCount_ != nullptr;};
    void deleteMaxDesktopsCount() { this->maxDesktopsCount_ = nullptr;};
    inline int32_t maxDesktopsCount() const { DARABONBA_PTR_GET_DEFAULT(maxDesktopsCount_, 0) };
    inline GetDesktopGroupDetailResponseBodyDesktops& setMaxDesktopsCount(int32_t maxDesktopsCount) { DARABONBA_PTR_SET_VALUE(maxDesktopsCount_, maxDesktopsCount) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int64_t memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0L) };
    inline GetDesktopGroupDetailResponseBodyDesktops& setMemory(int64_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // minDesktopsCount Field Functions 
    bool hasMinDesktopsCount() const { return this->minDesktopsCount_ != nullptr;};
    void deleteMinDesktopsCount() { this->minDesktopsCount_ = nullptr;};
    inline int32_t minDesktopsCount() const { DARABONBA_PTR_GET_DEFAULT(minDesktopsCount_, 0) };
    inline GetDesktopGroupDetailResponseBodyDesktops& setMinDesktopsCount(int32_t minDesktopsCount) { DARABONBA_PTR_SET_VALUE(minDesktopsCount_, minDesktopsCount) };


    // nasFileSystemID Field Functions 
    bool hasNasFileSystemID() const { return this->nasFileSystemID_ != nullptr;};
    void deleteNasFileSystemID() { this->nasFileSystemID_ = nullptr;};
    inline string nasFileSystemID() const { DARABONBA_PTR_GET_DEFAULT(nasFileSystemID_, "") };
    inline GetDesktopGroupDetailResponseBodyDesktops& setNasFileSystemID(string nasFileSystemID) { DARABONBA_PTR_SET_VALUE(nasFileSystemID_, nasFileSystemID) };


    // nasFileSystemName Field Functions 
    bool hasNasFileSystemName() const { return this->nasFileSystemName_ != nullptr;};
    void deleteNasFileSystemName() { this->nasFileSystemName_ = nullptr;};
    inline string nasFileSystemName() const { DARABONBA_PTR_GET_DEFAULT(nasFileSystemName_, "") };
    inline GetDesktopGroupDetailResponseBodyDesktops& setNasFileSystemName(string nasFileSystemName) { DARABONBA_PTR_SET_VALUE(nasFileSystemName_, nasFileSystemName) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string officeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline GetDesktopGroupDetailResponseBodyDesktops& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // officeSiteName Field Functions 
    bool hasOfficeSiteName() const { return this->officeSiteName_ != nullptr;};
    void deleteOfficeSiteName() { this->officeSiteName_ = nullptr;};
    inline string officeSiteName() const { DARABONBA_PTR_GET_DEFAULT(officeSiteName_, "") };
    inline GetDesktopGroupDetailResponseBodyDesktops& setOfficeSiteName(string officeSiteName) { DARABONBA_PTR_SET_VALUE(officeSiteName_, officeSiteName) };


    // officeSiteType Field Functions 
    bool hasOfficeSiteType() const { return this->officeSiteType_ != nullptr;};
    void deleteOfficeSiteType() { this->officeSiteType_ = nullptr;};
    inline string officeSiteType() const { DARABONBA_PTR_GET_DEFAULT(officeSiteType_, "") };
    inline GetDesktopGroupDetailResponseBodyDesktops& setOfficeSiteType(string officeSiteType) { DARABONBA_PTR_SET_VALUE(officeSiteType_, officeSiteType) };


    // osType Field Functions 
    bool hasOsType() const { return this->osType_ != nullptr;};
    void deleteOsType() { this->osType_ = nullptr;};
    inline string osType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
    inline GetDesktopGroupDetailResponseBodyDesktops& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


    // ownBundleId Field Functions 
    bool hasOwnBundleId() const { return this->ownBundleId_ != nullptr;};
    void deleteOwnBundleId() { this->ownBundleId_ = nullptr;};
    inline string ownBundleId() const { DARABONBA_PTR_GET_DEFAULT(ownBundleId_, "") };
    inline GetDesktopGroupDetailResponseBodyDesktops& setOwnBundleId(string ownBundleId) { DARABONBA_PTR_SET_VALUE(ownBundleId_, ownBundleId) };


    // ownBundleName Field Functions 
    bool hasOwnBundleName() const { return this->ownBundleName_ != nullptr;};
    void deleteOwnBundleName() { this->ownBundleName_ = nullptr;};
    inline string ownBundleName() const { DARABONBA_PTR_GET_DEFAULT(ownBundleName_, "") };
    inline GetDesktopGroupDetailResponseBodyDesktops& setOwnBundleName(string ownBundleName) { DARABONBA_PTR_SET_VALUE(ownBundleName_, ownBundleName) };


    // ownType Field Functions 
    bool hasOwnType() const { return this->ownType_ != nullptr;};
    void deleteOwnType() { this->ownType_ = nullptr;};
    inline int32_t ownType() const { DARABONBA_PTR_GET_DEFAULT(ownType_, 0) };
    inline GetDesktopGroupDetailResponseBodyDesktops& setOwnType(int32_t ownType) { DARABONBA_PTR_SET_VALUE(ownType_, ownType) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline GetDesktopGroupDetailResponseBodyDesktops& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // policyGroupId Field Functions 
    bool hasPolicyGroupId() const { return this->policyGroupId_ != nullptr;};
    void deletePolicyGroupId() { this->policyGroupId_ = nullptr;};
    inline string policyGroupId() const { DARABONBA_PTR_GET_DEFAULT(policyGroupId_, "") };
    inline GetDesktopGroupDetailResponseBodyDesktops& setPolicyGroupId(string policyGroupId) { DARABONBA_PTR_SET_VALUE(policyGroupId_, policyGroupId) };


    // policyGroupIds Field Functions 
    bool hasPolicyGroupIds() const { return this->policyGroupIds_ != nullptr;};
    void deletePolicyGroupIds() { this->policyGroupIds_ = nullptr;};
    inline const vector<string> & policyGroupIds() const { DARABONBA_PTR_GET_CONST(policyGroupIds_, vector<string>) };
    inline vector<string> policyGroupIds() { DARABONBA_PTR_GET(policyGroupIds_, vector<string>) };
    inline GetDesktopGroupDetailResponseBodyDesktops& setPolicyGroupIds(const vector<string> & policyGroupIds) { DARABONBA_PTR_SET_VALUE(policyGroupIds_, policyGroupIds) };
    inline GetDesktopGroupDetailResponseBodyDesktops& setPolicyGroupIds(vector<string> && policyGroupIds) { DARABONBA_PTR_SET_RVALUE(policyGroupIds_, policyGroupIds) };


    // policyGroupName Field Functions 
    bool hasPolicyGroupName() const { return this->policyGroupName_ != nullptr;};
    void deletePolicyGroupName() { this->policyGroupName_ = nullptr;};
    inline string policyGroupName() const { DARABONBA_PTR_GET_DEFAULT(policyGroupName_, "") };
    inline GetDesktopGroupDetailResponseBodyDesktops& setPolicyGroupName(string policyGroupName) { DARABONBA_PTR_SET_VALUE(policyGroupName_, policyGroupName) };


    // policyGroupNames Field Functions 
    bool hasPolicyGroupNames() const { return this->policyGroupNames_ != nullptr;};
    void deletePolicyGroupNames() { this->policyGroupNames_ = nullptr;};
    inline const vector<string> & policyGroupNames() const { DARABONBA_PTR_GET_CONST(policyGroupNames_, vector<string>) };
    inline vector<string> policyGroupNames() { DARABONBA_PTR_GET(policyGroupNames_, vector<string>) };
    inline GetDesktopGroupDetailResponseBodyDesktops& setPolicyGroupNames(const vector<string> & policyGroupNames) { DARABONBA_PTR_SET_VALUE(policyGroupNames_, policyGroupNames) };
    inline GetDesktopGroupDetailResponseBodyDesktops& setPolicyGroupNames(vector<string> && policyGroupNames) { DARABONBA_PTR_SET_RVALUE(policyGroupNames_, policyGroupNames) };


    // profileFollowSwitch Field Functions 
    bool hasProfileFollowSwitch() const { return this->profileFollowSwitch_ != nullptr;};
    void deleteProfileFollowSwitch() { this->profileFollowSwitch_ = nullptr;};
    inline bool profileFollowSwitch() const { DARABONBA_PTR_GET_DEFAULT(profileFollowSwitch_, false) };
    inline GetDesktopGroupDetailResponseBodyDesktops& setProfileFollowSwitch(bool profileFollowSwitch) { DARABONBA_PTR_SET_VALUE(profileFollowSwitch_, profileFollowSwitch) };


    // protocolType Field Functions 
    bool hasProtocolType() const { return this->protocolType_ != nullptr;};
    void deleteProtocolType() { this->protocolType_ = nullptr;};
    inline string protocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
    inline GetDesktopGroupDetailResponseBodyDesktops& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


    // ratioThreshold Field Functions 
    bool hasRatioThreshold() const { return this->ratioThreshold_ != nullptr;};
    void deleteRatioThreshold() { this->ratioThreshold_ = nullptr;};
    inline float ratioThreshold() const { DARABONBA_PTR_GET_DEFAULT(ratioThreshold_, 0.0) };
    inline GetDesktopGroupDetailResponseBodyDesktops& setRatioThreshold(float ratioThreshold) { DARABONBA_PTR_SET_VALUE(ratioThreshold_, ratioThreshold) };


    // resType Field Functions 
    bool hasResType() const { return this->resType_ != nullptr;};
    void deleteResType() { this->resType_ = nullptr;};
    inline int32_t resType() const { DARABONBA_PTR_GET_DEFAULT(resType_, 0) };
    inline GetDesktopGroupDetailResponseBodyDesktops& setResType(int32_t resType) { DARABONBA_PTR_SET_VALUE(resType_, resType) };


    // resetType Field Functions 
    bool hasResetType() const { return this->resetType_ != nullptr;};
    void deleteResetType() { this->resetType_ = nullptr;};
    inline int32_t resetType() const { DARABONBA_PTR_GET_DEFAULT(resetType_, 0) };
    inline GetDesktopGroupDetailResponseBodyDesktops& setResetType(int32_t resetType) { DARABONBA_PTR_SET_VALUE(resetType_, resetType) };


    // scaleTimerInfos Field Functions 
    bool hasScaleTimerInfos() const { return this->scaleTimerInfos_ != nullptr;};
    void deleteScaleTimerInfos() { this->scaleTimerInfos_ = nullptr;};
    inline const vector<Models::GetDesktopGroupDetailResponseBodyDesktopsScaleTimerInfos> & scaleTimerInfos() const { DARABONBA_PTR_GET_CONST(scaleTimerInfos_, vector<Models::GetDesktopGroupDetailResponseBodyDesktopsScaleTimerInfos>) };
    inline vector<Models::GetDesktopGroupDetailResponseBodyDesktopsScaleTimerInfos> scaleTimerInfos() { DARABONBA_PTR_GET(scaleTimerInfos_, vector<Models::GetDesktopGroupDetailResponseBodyDesktopsScaleTimerInfos>) };
    inline GetDesktopGroupDetailResponseBodyDesktops& setScaleTimerInfos(const vector<Models::GetDesktopGroupDetailResponseBodyDesktopsScaleTimerInfos> & scaleTimerInfos) { DARABONBA_PTR_SET_VALUE(scaleTimerInfos_, scaleTimerInfos) };
    inline GetDesktopGroupDetailResponseBodyDesktops& setScaleTimerInfos(vector<Models::GetDesktopGroupDetailResponseBodyDesktopsScaleTimerInfos> && scaleTimerInfos) { DARABONBA_PTR_SET_RVALUE(scaleTimerInfos_, scaleTimerInfos) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline GetDesktopGroupDetailResponseBodyDesktops& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // stopDuration Field Functions 
    bool hasStopDuration() const { return this->stopDuration_ != nullptr;};
    void deleteStopDuration() { this->stopDuration_ = nullptr;};
    inline int64_t stopDuration() const { DARABONBA_PTR_GET_DEFAULT(stopDuration_, 0L) };
    inline GetDesktopGroupDetailResponseBodyDesktops& setStopDuration(int64_t stopDuration) { DARABONBA_PTR_SET_VALUE(stopDuration_, stopDuration) };


    // systemDiskCategory Field Functions 
    bool hasSystemDiskCategory() const { return this->systemDiskCategory_ != nullptr;};
    void deleteSystemDiskCategory() { this->systemDiskCategory_ = nullptr;};
    inline string systemDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(systemDiskCategory_, "") };
    inline GetDesktopGroupDetailResponseBodyDesktops& setSystemDiskCategory(string systemDiskCategory) { DARABONBA_PTR_SET_VALUE(systemDiskCategory_, systemDiskCategory) };


    // systemDiskSize Field Functions 
    bool hasSystemDiskSize() const { return this->systemDiskSize_ != nullptr;};
    void deleteSystemDiskSize() { this->systemDiskSize_ = nullptr;};
    inline int32_t systemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSize_, 0) };
    inline GetDesktopGroupDetailResponseBodyDesktops& setSystemDiskSize(int32_t systemDiskSize) { DARABONBA_PTR_SET_VALUE(systemDiskSize_, systemDiskSize) };


    // timerInfos Field Functions 
    bool hasTimerInfos() const { return this->timerInfos_ != nullptr;};
    void deleteTimerInfos() { this->timerInfos_ = nullptr;};
    inline const vector<Models::GetDesktopGroupDetailResponseBodyDesktopsTimerInfos> & timerInfos() const { DARABONBA_PTR_GET_CONST(timerInfos_, vector<Models::GetDesktopGroupDetailResponseBodyDesktopsTimerInfos>) };
    inline vector<Models::GetDesktopGroupDetailResponseBodyDesktopsTimerInfos> timerInfos() { DARABONBA_PTR_GET(timerInfos_, vector<Models::GetDesktopGroupDetailResponseBodyDesktopsTimerInfos>) };
    inline GetDesktopGroupDetailResponseBodyDesktops& setTimerInfos(const vector<Models::GetDesktopGroupDetailResponseBodyDesktopsTimerInfos> & timerInfos) { DARABONBA_PTR_SET_VALUE(timerInfos_, timerInfos) };
    inline GetDesktopGroupDetailResponseBodyDesktops& setTimerInfos(vector<Models::GetDesktopGroupDetailResponseBodyDesktopsTimerInfos> && timerInfos) { DARABONBA_PTR_SET_RVALUE(timerInfos_, timerInfos) };


    // timingStrategyInfo Field Functions 
    bool hasTimingStrategyInfo() const { return this->timingStrategyInfo_ != nullptr;};
    void deleteTimingStrategyInfo() { this->timingStrategyInfo_ = nullptr;};
    inline string timingStrategyInfo() const { DARABONBA_PTR_GET_DEFAULT(timingStrategyInfo_, "") };
    inline GetDesktopGroupDetailResponseBodyDesktops& setTimingStrategyInfo(string timingStrategyInfo) { DARABONBA_PTR_SET_VALUE(timingStrategyInfo_, timingStrategyInfo) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline int64_t version() const { DARABONBA_PTR_GET_DEFAULT(version_, 0L) };
    inline GetDesktopGroupDetailResponseBodyDesktops& setVersion(int64_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // Specifies whether to enable batch-based automatic creation of cloud computers in the subscription cloud computer share.
    // 
    // Valid values:
    // 
    // *   0: enables batch-based automatic creation of cloud computers.
    // *   1: disables batch-based automatic creation of cloud computers.
    std::shared_ptr<int32_t> allowAutoSetup_ = nullptr;
    // This parameter applies to pay-as-you-go cloud computer shares and specifies the number of standby cloud computers that can be reserved per cloud computer share. Valid values:
    // 
    // *   0: does not reserve any cloud computers.
    // *   N: reserves N cloud computers (1≤ N ≤ 100).
    std::shared_ptr<int32_t> allowBufferCount_ = nullptr;
    // The maximum number of concurrent sessions allowed per cloud computer within the multi-session many-to-many share.
    std::shared_ptr<int32_t> bindAmount_ = nullptr;
    // *   The number of purchased cloud computers in the subscription share. Valid values: 0 to 200.
    // *   The minimum initial number of cloud computers created in the pay-as-you-go share. Default value: 1. Valid values: 0 to `MaxDesktopsCount`.
    std::shared_ptr<int32_t> buyDesktopsCount_ = nullptr;
    // The remarks.
    std::shared_ptr<string> comments_ = nullptr;
    // The maximum period of time during which the session is connected. When the specified maximum period of time is reached, the session is automatically disconnected. Unit: milliseconds.
    std::shared_ptr<int64_t> connectDuration_ = nullptr;
    // The number of vCPUs.
    std::shared_ptr<int32_t> cpu_ = nullptr;
    // The time when the desktop group was created. The time follows the ISO 8601 standard in the yyyy-MM-ddThh:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The Alibaba Cloud account that creates the cloud computer pool.
    std::shared_ptr<string> creator_ = nullptr;
    // The category of the user disk.
    std::shared_ptr<string> dataDiskCategory_ = nullptr;
    // The user disk capacity. Unit: GiB.
    std::shared_ptr<string> dataDiskSize_ = nullptr;
    // The ID of the cloud computer share.
    std::shared_ptr<string> desktopGroupId_ = nullptr;
    // The name of the cloud computer share.
    std::shared_ptr<string> desktopGroupName_ = nullptr;
    // The ID of the directory or office network.
    std::shared_ptr<string> directoryId_ = nullptr;
    // The type of the directory.
    std::shared_ptr<string> directoryType_ = nullptr;
    // The expiration date of the subscription cloud computer share.
    std::shared_ptr<string> expiredTime_ = nullptr;
    std::shared_ptr<vector<string>> expiredTimes_ = nullptr;
    // The number of vGPUs.
    std::shared_ptr<float> gpuCount_ = nullptr;
    // The GPU specifications.
    std::shared_ptr<string> gpuSpec_ = nullptr;
    // After an end user connects to a cloud computer, the session is established. If the system does not detect any inputs from the keyboard or mouse within the specified period of time, the session is closed. Unit: milliseconds.
    std::shared_ptr<int64_t> idleDisconnectDuration_ = nullptr;
    // The ID of the image.
    std::shared_ptr<string> imageId_ = nullptr;
    // The amount of time to retain a session after it is disconnected. Unit: milliseconds. Valid values: 180000 to 345600000. That is, the session can be retained for 3 to 5760 minutes (4 days). If you specify the value to 0, the session is permanently retained.
    // 
    // When a session is disconnected, take note of the following situations: If an end user does not resume the session within the specified duration, the session is closed and all unsaved data is cleared. If the end user resumes the session within the specified duration, the end user can still access data of the session.
    std::shared_ptr<int64_t> keepDuration_ = nullptr;
    // The load balancing policy for the multi-session many-to-many share.
    // 
    // Valid values:
    // 
    // *   0: depth-first.
    // *   1: breadth-first.
    std::shared_ptr<int32_t> loadPolicy_ = nullptr;
    // The maximum number of cloud computers allowed in the pay-as-you-go cloud computer share.
    std::shared_ptr<int32_t> maxDesktopsCount_ = nullptr;
    // The memory size. Unit: MiB.
    std::shared_ptr<int64_t> memory_ = nullptr;
    // The number of cloud computers created in the initial batch within the subscription cloud computer share.
    std::shared_ptr<int32_t> minDesktopsCount_ = nullptr;
    // The ID of the File Storage NAS (NAS) file system for the user data roaming feature.
    std::shared_ptr<string> nasFileSystemID_ = nullptr;
    // The name of the NAS file system for the user data roaming feature.
    std::shared_ptr<string> nasFileSystemName_ = nullptr;
    // The ID of the office network.
    std::shared_ptr<string> officeSiteId_ = nullptr;
    // The name of the office network in which the cloud computer resides.
    std::shared_ptr<string> officeSiteName_ = nullptr;
    // The office network type.
    // 
    // Valid values:
    // 
    // *   PERSONAL: individual office network
    // *   SIMPLE: convenience office network
    // *   AD_CONNECTOR: enterprise Active Directory (AD) office network
    // *   RAM: Resource Access Management (RAM)-based office network
    std::shared_ptr<string> officeSiteType_ = nullptr;
    std::shared_ptr<string> osType_ = nullptr;
    // The ID of the cloud computer template.
    std::shared_ptr<string> ownBundleId_ = nullptr;
    // The name of the cloud computer template.
    std::shared_ptr<string> ownBundleName_ = nullptr;
    // The type of the cloud computer share.
    // 
    // Valid values:
    // 
    // *   0: a one-to-many share.
    // *   1: a many-to-many share.
    std::shared_ptr<int32_t> ownType_ = nullptr;
    // The billing method.
    // 
    // Valid values:
    // 
    // *   PostPaid: pay-as-you-go.
    // 
    // *   PrePaid: subscription.
    std::shared_ptr<string> payType_ = nullptr;
    // The ID of the applied policy.
    std::shared_ptr<string> policyGroupId_ = nullptr;
    // The IDs of the applied policies.
    std::shared_ptr<vector<string>> policyGroupIds_ = nullptr;
    // The name of the applied policy.
    std::shared_ptr<string> policyGroupName_ = nullptr;
    // The names of the applied policies.
    std::shared_ptr<vector<string>> policyGroupNames_ = nullptr;
    // Indicates whether user data roaming is enabled.
    std::shared_ptr<bool> profileFollowSwitch_ = nullptr;
    std::shared_ptr<string> protocolType_ = nullptr;
    // The threshold for the ratio of connected sessions, which triggers automatic scaling of cloud computers within the multi-session many-to-many share. To calculate the ratio of connected sessions, use the following formula:
    // 
    // `Ratio of connected sessions = Number of connected sessions/(Total number of cloud computers × Maximum number of sessions allowed for each cloud computer) × 100%`.
    // 
    // If the session ratio exceeds the threshold, new cloud computers are provisioned. If it falls below the threshold, additional cloud computers are removed.
    std::shared_ptr<float> ratioThreshold_ = nullptr;
    // The type of the resource. Only Elastic Compute Service (ECS) instances are supported.
    // 
    // Valid value:
    // 
    // *   0: ECS
    std::shared_ptr<int32_t> resType_ = nullptr;
    // The disk reset type of the cloud computer.
    // 
    // Valid values:
    // 
    // *   0: does not reset disks.
    // *   1: resets only the system disk.
    // *   2: resets only the user disk.
    // *   3: resets the system disk and the user disk.
    std::shared_ptr<int32_t> resetType_ = nullptr;
    // The scheduled tasks.
    std::shared_ptr<vector<Models::GetDesktopGroupDetailResponseBodyDesktopsScaleTimerInfos>> scaleTimerInfos_ = nullptr;
    // The status of the cloud computer share.
    // 
    // Valid values:
    // 
    // *   0: The cloud computer share is unpaid.
    // *   1: The cloud computer share is normal.
    // *   2: The cloud computer share expired, or your account has an overdue payment.
    std::shared_ptr<int32_t> status_ = nullptr;
    // The period of time before the idle cloud computer enters the Stopped state. If the specified value is reached, the cloud computer is automatically stopped. If an end user connects to the stopped cloud computer, the cloud computer automatically starts. Unit: milliseconds.
    std::shared_ptr<int64_t> stopDuration_ = nullptr;
    // The category of the system disk.
    std::shared_ptr<string> systemDiskCategory_ = nullptr;
    // The system disk capacity. Unit: GiB.
    std::shared_ptr<int32_t> systemDiskSize_ = nullptr;
    // The list of scheduled points in time for desktop group tasks.
    std::shared_ptr<vector<Models::GetDesktopGroupDetailResponseBodyDesktopsTimerInfos>> timerInfos_ = nullptr;
    // The information about the scheduling policy.
    std::shared_ptr<string> timingStrategyInfo_ = nullptr;
    // The version number of the cloud computer share.
    std::shared_ptr<int64_t> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
