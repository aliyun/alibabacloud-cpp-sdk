// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDESKTOPGROUPSRESPONSEBODYDESKTOPGROUPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDESKTOPGROUPSRESPONSEBODYDESKTOPGROUPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDesktopGroupsResponseBodyDesktopGroupsCountPerStatus.hpp>
#include <alibabacloud/models/DescribeDesktopGroupsResponseBodyDesktopGroupsTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeDesktopGroupsResponseBodyDesktopGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDesktopGroupsResponseBodyDesktopGroups& obj) { 
      DARABONBA_PTR_TO_JSON(BindAmount, bindAmount_);
      DARABONBA_PTR_TO_JSON(BuyDesktopsCount, buyDesktopsCount_);
      DARABONBA_PTR_TO_JSON(Comments, comments_);
      DARABONBA_PTR_TO_JSON(ConnectDuration, connectDuration_);
      DARABONBA_PTR_TO_JSON(CountPerStatus, countPerStatus_);
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(DataDiskCategory, dataDiskCategory_);
      DARABONBA_PTR_TO_JSON(DataDiskSize, dataDiskSize_);
      DARABONBA_PTR_TO_JSON(DesktopCount, desktopCount_);
      DARABONBA_PTR_TO_JSON(DesktopGroupId, desktopGroupId_);
      DARABONBA_PTR_TO_JSON(DesktopGroupName, desktopGroupName_);
      DARABONBA_PTR_TO_JSON(DesktopType, desktopType_);
      DARABONBA_PTR_TO_JSON(EndUserCount, endUserCount_);
      DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_TO_JSON(ExpiredTimes, expiredTimes_);
      DARABONBA_PTR_TO_JSON(GpuCount, gpuCount_);
      DARABONBA_PTR_TO_JSON(GpuDriverVersion, gpuDriverVersion_);
      DARABONBA_PTR_TO_JSON(GpuSpec, gpuSpec_);
      DARABONBA_PTR_TO_JSON(IdleDisconnectDuration, idleDisconnectDuration_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(IsLdap, isLdap_);
      DARABONBA_PTR_TO_JSON(KeepDuration, keepDuration_);
      DARABONBA_PTR_TO_JSON(LoadPolicy, loadPolicy_);
      DARABONBA_PTR_TO_JSON(MaxDesktopsCount, maxDesktopsCount_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(MinDesktopsCount, minDesktopsCount_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(OfficeSiteName, officeSiteName_);
      DARABONBA_PTR_TO_JSON(OfficeSiteType, officeSiteType_);
      DARABONBA_PTR_TO_JSON(OsType, osType_);
      DARABONBA_PTR_TO_JSON(OwnBundleId, ownBundleId_);
      DARABONBA_PTR_TO_JSON(OwnBundleName, ownBundleName_);
      DARABONBA_PTR_TO_JSON(OwnType, ownType_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_TO_JSON(PolicyGroupIdList, policyGroupIdList_);
      DARABONBA_PTR_TO_JSON(PolicyGroupName, policyGroupName_);
      DARABONBA_PTR_TO_JSON(PolicyGroupNameList, policyGroupNameList_);
      DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_TO_JSON(RatioThreshold, ratioThreshold_);
      DARABONBA_PTR_TO_JSON(ResetType, resetType_);
      DARABONBA_PTR_TO_JSON(SimpleUserGroupId, simpleUserGroupId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StopDuration, stopDuration_);
      DARABONBA_PTR_TO_JSON(SubnetId, subnetId_);
      DARABONBA_PTR_TO_JSON(SystemDiskCategory, systemDiskCategory_);
      DARABONBA_PTR_TO_JSON(SystemDiskSize, systemDiskSize_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(UserGroupName, userGroupName_);
      DARABONBA_PTR_TO_JSON(UserOuPath, userOuPath_);
      DARABONBA_PTR_TO_JSON(Version, version_);
      DARABONBA_PTR_TO_JSON(VolumeEncryptionEnabled, volumeEncryptionEnabled_);
      DARABONBA_PTR_TO_JSON(VolumeEncryptionKey, volumeEncryptionKey_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDesktopGroupsResponseBodyDesktopGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(BindAmount, bindAmount_);
      DARABONBA_PTR_FROM_JSON(BuyDesktopsCount, buyDesktopsCount_);
      DARABONBA_PTR_FROM_JSON(Comments, comments_);
      DARABONBA_PTR_FROM_JSON(ConnectDuration, connectDuration_);
      DARABONBA_PTR_FROM_JSON(CountPerStatus, countPerStatus_);
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(DataDiskCategory, dataDiskCategory_);
      DARABONBA_PTR_FROM_JSON(DataDiskSize, dataDiskSize_);
      DARABONBA_PTR_FROM_JSON(DesktopCount, desktopCount_);
      DARABONBA_PTR_FROM_JSON(DesktopGroupId, desktopGroupId_);
      DARABONBA_PTR_FROM_JSON(DesktopGroupName, desktopGroupName_);
      DARABONBA_PTR_FROM_JSON(DesktopType, desktopType_);
      DARABONBA_PTR_FROM_JSON(EndUserCount, endUserCount_);
      DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_FROM_JSON(ExpiredTimes, expiredTimes_);
      DARABONBA_PTR_FROM_JSON(GpuCount, gpuCount_);
      DARABONBA_PTR_FROM_JSON(GpuDriverVersion, gpuDriverVersion_);
      DARABONBA_PTR_FROM_JSON(GpuSpec, gpuSpec_);
      DARABONBA_PTR_FROM_JSON(IdleDisconnectDuration, idleDisconnectDuration_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(IsLdap, isLdap_);
      DARABONBA_PTR_FROM_JSON(KeepDuration, keepDuration_);
      DARABONBA_PTR_FROM_JSON(LoadPolicy, loadPolicy_);
      DARABONBA_PTR_FROM_JSON(MaxDesktopsCount, maxDesktopsCount_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(MinDesktopsCount, minDesktopsCount_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteName, officeSiteName_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteType, officeSiteType_);
      DARABONBA_PTR_FROM_JSON(OsType, osType_);
      DARABONBA_PTR_FROM_JSON(OwnBundleId, ownBundleId_);
      DARABONBA_PTR_FROM_JSON(OwnBundleName, ownBundleName_);
      DARABONBA_PTR_FROM_JSON(OwnType, ownType_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_FROM_JSON(PolicyGroupIdList, policyGroupIdList_);
      DARABONBA_PTR_FROM_JSON(PolicyGroupName, policyGroupName_);
      DARABONBA_PTR_FROM_JSON(PolicyGroupNameList, policyGroupNameList_);
      DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_FROM_JSON(RatioThreshold, ratioThreshold_);
      DARABONBA_PTR_FROM_JSON(ResetType, resetType_);
      DARABONBA_PTR_FROM_JSON(SimpleUserGroupId, simpleUserGroupId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StopDuration, stopDuration_);
      DARABONBA_PTR_FROM_JSON(SubnetId, subnetId_);
      DARABONBA_PTR_FROM_JSON(SystemDiskCategory, systemDiskCategory_);
      DARABONBA_PTR_FROM_JSON(SystemDiskSize, systemDiskSize_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(UserGroupName, userGroupName_);
      DARABONBA_PTR_FROM_JSON(UserOuPath, userOuPath_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
      DARABONBA_PTR_FROM_JSON(VolumeEncryptionEnabled, volumeEncryptionEnabled_);
      DARABONBA_PTR_FROM_JSON(VolumeEncryptionKey, volumeEncryptionKey_);
    };
    DescribeDesktopGroupsResponseBodyDesktopGroups() = default ;
    DescribeDesktopGroupsResponseBodyDesktopGroups(const DescribeDesktopGroupsResponseBodyDesktopGroups &) = default ;
    DescribeDesktopGroupsResponseBodyDesktopGroups(DescribeDesktopGroupsResponseBodyDesktopGroups &&) = default ;
    DescribeDesktopGroupsResponseBodyDesktopGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDesktopGroupsResponseBodyDesktopGroups() = default ;
    DescribeDesktopGroupsResponseBodyDesktopGroups& operator=(const DescribeDesktopGroupsResponseBodyDesktopGroups &) = default ;
    DescribeDesktopGroupsResponseBodyDesktopGroups& operator=(DescribeDesktopGroupsResponseBodyDesktopGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bindAmount_ != nullptr
        && this->buyDesktopsCount_ != nullptr && this->comments_ != nullptr && this->connectDuration_ != nullptr && this->countPerStatus_ != nullptr && this->cpu_ != nullptr
        && this->createTime_ != nullptr && this->creator_ != nullptr && this->dataDiskCategory_ != nullptr && this->dataDiskSize_ != nullptr && this->desktopCount_ != nullptr
        && this->desktopGroupId_ != nullptr && this->desktopGroupName_ != nullptr && this->desktopType_ != nullptr && this->endUserCount_ != nullptr && this->expiredTime_ != nullptr
        && this->expiredTimes_ != nullptr && this->gpuCount_ != nullptr && this->gpuDriverVersion_ != nullptr && this->gpuSpec_ != nullptr && this->idleDisconnectDuration_ != nullptr
        && this->imageId_ != nullptr && this->isLdap_ != nullptr && this->keepDuration_ != nullptr && this->loadPolicy_ != nullptr && this->maxDesktopsCount_ != nullptr
        && this->memory_ != nullptr && this->minDesktopsCount_ != nullptr && this->officeSiteId_ != nullptr && this->officeSiteName_ != nullptr && this->officeSiteType_ != nullptr
        && this->osType_ != nullptr && this->ownBundleId_ != nullptr && this->ownBundleName_ != nullptr && this->ownType_ != nullptr && this->payType_ != nullptr
        && this->policyGroupId_ != nullptr && this->policyGroupIdList_ != nullptr && this->policyGroupName_ != nullptr && this->policyGroupNameList_ != nullptr && this->protocolType_ != nullptr
        && this->ratioThreshold_ != nullptr && this->resetType_ != nullptr && this->simpleUserGroupId_ != nullptr && this->status_ != nullptr && this->stopDuration_ != nullptr
        && this->subnetId_ != nullptr && this->systemDiskCategory_ != nullptr && this->systemDiskSize_ != nullptr && this->tags_ != nullptr && this->userGroupName_ != nullptr
        && this->userOuPath_ != nullptr && this->version_ != nullptr && this->volumeEncryptionEnabled_ != nullptr && this->volumeEncryptionKey_ != nullptr; };
    // bindAmount Field Functions 
    bool hasBindAmount() const { return this->bindAmount_ != nullptr;};
    void deleteBindAmount() { this->bindAmount_ = nullptr;};
    inline int64_t bindAmount() const { DARABONBA_PTR_GET_DEFAULT(bindAmount_, 0L) };
    inline DescribeDesktopGroupsResponseBodyDesktopGroups& setBindAmount(int64_t bindAmount) { DARABONBA_PTR_SET_VALUE(bindAmount_, bindAmount) };


    // buyDesktopsCount Field Functions 
    bool hasBuyDesktopsCount() const { return this->buyDesktopsCount_ != nullptr;};
    void deleteBuyDesktopsCount() { this->buyDesktopsCount_ = nullptr;};
    inline int32_t buyDesktopsCount() const { DARABONBA_PTR_GET_DEFAULT(buyDesktopsCount_, 0) };
    inline DescribeDesktopGroupsResponseBodyDesktopGroups& setBuyDesktopsCount(int32_t buyDesktopsCount) { DARABONBA_PTR_SET_VALUE(buyDesktopsCount_, buyDesktopsCount) };


    // comments Field Functions 
    bool hasComments() const { return this->comments_ != nullptr;};
    void deleteComments() { this->comments_ = nullptr;};
    inline string comments() const { DARABONBA_PTR_GET_DEFAULT(comments_, "") };
    inline DescribeDesktopGroupsResponseBodyDesktopGroups& setComments(string comments) { DARABONBA_PTR_SET_VALUE(comments_, comments) };


    // connectDuration Field Functions 
    bool hasConnectDuration() const { return this->connectDuration_ != nullptr;};
    void deleteConnectDuration() { this->connectDuration_ = nullptr;};
    inline int64_t connectDuration() const { DARABONBA_PTR_GET_DEFAULT(connectDuration_, 0L) };
    inline DescribeDesktopGroupsResponseBodyDesktopGroups& setConnectDuration(int64_t connectDuration) { DARABONBA_PTR_SET_VALUE(connectDuration_, connectDuration) };


    // countPerStatus Field Functions 
    bool hasCountPerStatus() const { return this->countPerStatus_ != nullptr;};
    void deleteCountPerStatus() { this->countPerStatus_ = nullptr;};
    inline const vector<Models::DescribeDesktopGroupsResponseBodyDesktopGroupsCountPerStatus> & countPerStatus() const { DARABONBA_PTR_GET_CONST(countPerStatus_, vector<Models::DescribeDesktopGroupsResponseBodyDesktopGroupsCountPerStatus>) };
    inline vector<Models::DescribeDesktopGroupsResponseBodyDesktopGroupsCountPerStatus> countPerStatus() { DARABONBA_PTR_GET(countPerStatus_, vector<Models::DescribeDesktopGroupsResponseBodyDesktopGroupsCountPerStatus>) };
    inline DescribeDesktopGroupsResponseBodyDesktopGroups& setCountPerStatus(const vector<Models::DescribeDesktopGroupsResponseBodyDesktopGroupsCountPerStatus> & countPerStatus) { DARABONBA_PTR_SET_VALUE(countPerStatus_, countPerStatus) };
    inline DescribeDesktopGroupsResponseBodyDesktopGroups& setCountPerStatus(vector<Models::DescribeDesktopGroupsResponseBodyDesktopGroupsCountPerStatus> && countPerStatus) { DARABONBA_PTR_SET_RVALUE(countPerStatus_, countPerStatus) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline int32_t cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
    inline DescribeDesktopGroupsResponseBodyDesktopGroups& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeDesktopGroupsResponseBodyDesktopGroups& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline DescribeDesktopGroupsResponseBodyDesktopGroups& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // dataDiskCategory Field Functions 
    bool hasDataDiskCategory() const { return this->dataDiskCategory_ != nullptr;};
    void deleteDataDiskCategory() { this->dataDiskCategory_ = nullptr;};
    inline string dataDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(dataDiskCategory_, "") };
    inline DescribeDesktopGroupsResponseBodyDesktopGroups& setDataDiskCategory(string dataDiskCategory) { DARABONBA_PTR_SET_VALUE(dataDiskCategory_, dataDiskCategory) };


    // dataDiskSize Field Functions 
    bool hasDataDiskSize() const { return this->dataDiskSize_ != nullptr;};
    void deleteDataDiskSize() { this->dataDiskSize_ = nullptr;};
    inline string dataDiskSize() const { DARABONBA_PTR_GET_DEFAULT(dataDiskSize_, "") };
    inline DescribeDesktopGroupsResponseBodyDesktopGroups& setDataDiskSize(string dataDiskSize) { DARABONBA_PTR_SET_VALUE(dataDiskSize_, dataDiskSize) };


    // desktopCount Field Functions 
    bool hasDesktopCount() const { return this->desktopCount_ != nullptr;};
    void deleteDesktopCount() { this->desktopCount_ = nullptr;};
    inline int32_t desktopCount() const { DARABONBA_PTR_GET_DEFAULT(desktopCount_, 0) };
    inline DescribeDesktopGroupsResponseBodyDesktopGroups& setDesktopCount(int32_t desktopCount) { DARABONBA_PTR_SET_VALUE(desktopCount_, desktopCount) };


    // desktopGroupId Field Functions 
    bool hasDesktopGroupId() const { return this->desktopGroupId_ != nullptr;};
    void deleteDesktopGroupId() { this->desktopGroupId_ = nullptr;};
    inline string desktopGroupId() const { DARABONBA_PTR_GET_DEFAULT(desktopGroupId_, "") };
    inline DescribeDesktopGroupsResponseBodyDesktopGroups& setDesktopGroupId(string desktopGroupId) { DARABONBA_PTR_SET_VALUE(desktopGroupId_, desktopGroupId) };


    // desktopGroupName Field Functions 
    bool hasDesktopGroupName() const { return this->desktopGroupName_ != nullptr;};
    void deleteDesktopGroupName() { this->desktopGroupName_ = nullptr;};
    inline string desktopGroupName() const { DARABONBA_PTR_GET_DEFAULT(desktopGroupName_, "") };
    inline DescribeDesktopGroupsResponseBodyDesktopGroups& setDesktopGroupName(string desktopGroupName) { DARABONBA_PTR_SET_VALUE(desktopGroupName_, desktopGroupName) };


    // desktopType Field Functions 
    bool hasDesktopType() const { return this->desktopType_ != nullptr;};
    void deleteDesktopType() { this->desktopType_ = nullptr;};
    inline string desktopType() const { DARABONBA_PTR_GET_DEFAULT(desktopType_, "") };
    inline DescribeDesktopGroupsResponseBodyDesktopGroups& setDesktopType(string desktopType) { DARABONBA_PTR_SET_VALUE(desktopType_, desktopType) };


    // endUserCount Field Functions 
    bool hasEndUserCount() const { return this->endUserCount_ != nullptr;};
    void deleteEndUserCount() { this->endUserCount_ = nullptr;};
    inline int32_t endUserCount() const { DARABONBA_PTR_GET_DEFAULT(endUserCount_, 0) };
    inline DescribeDesktopGroupsResponseBodyDesktopGroups& setEndUserCount(int32_t endUserCount) { DARABONBA_PTR_SET_VALUE(endUserCount_, endUserCount) };


    // expiredTime Field Functions 
    bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
    void deleteExpiredTime() { this->expiredTime_ = nullptr;};
    inline string expiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
    inline DescribeDesktopGroupsResponseBodyDesktopGroups& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


    // expiredTimes Field Functions 
    bool hasExpiredTimes() const { return this->expiredTimes_ != nullptr;};
    void deleteExpiredTimes() { this->expiredTimes_ = nullptr;};
    inline const vector<string> & expiredTimes() const { DARABONBA_PTR_GET_CONST(expiredTimes_, vector<string>) };
    inline vector<string> expiredTimes() { DARABONBA_PTR_GET(expiredTimes_, vector<string>) };
    inline DescribeDesktopGroupsResponseBodyDesktopGroups& setExpiredTimes(const vector<string> & expiredTimes) { DARABONBA_PTR_SET_VALUE(expiredTimes_, expiredTimes) };
    inline DescribeDesktopGroupsResponseBodyDesktopGroups& setExpiredTimes(vector<string> && expiredTimes) { DARABONBA_PTR_SET_RVALUE(expiredTimes_, expiredTimes) };


    // gpuCount Field Functions 
    bool hasGpuCount() const { return this->gpuCount_ != nullptr;};
    void deleteGpuCount() { this->gpuCount_ = nullptr;};
    inline float gpuCount() const { DARABONBA_PTR_GET_DEFAULT(gpuCount_, 0.0) };
    inline DescribeDesktopGroupsResponseBodyDesktopGroups& setGpuCount(float gpuCount) { DARABONBA_PTR_SET_VALUE(gpuCount_, gpuCount) };


    // gpuDriverVersion Field Functions 
    bool hasGpuDriverVersion() const { return this->gpuDriverVersion_ != nullptr;};
    void deleteGpuDriverVersion() { this->gpuDriverVersion_ = nullptr;};
    inline string gpuDriverVersion() const { DARABONBA_PTR_GET_DEFAULT(gpuDriverVersion_, "") };
    inline DescribeDesktopGroupsResponseBodyDesktopGroups& setGpuDriverVersion(string gpuDriverVersion) { DARABONBA_PTR_SET_VALUE(gpuDriverVersion_, gpuDriverVersion) };


    // gpuSpec Field Functions 
    bool hasGpuSpec() const { return this->gpuSpec_ != nullptr;};
    void deleteGpuSpec() { this->gpuSpec_ = nullptr;};
    inline string gpuSpec() const { DARABONBA_PTR_GET_DEFAULT(gpuSpec_, "") };
    inline DescribeDesktopGroupsResponseBodyDesktopGroups& setGpuSpec(string gpuSpec) { DARABONBA_PTR_SET_VALUE(gpuSpec_, gpuSpec) };


    // idleDisconnectDuration Field Functions 
    bool hasIdleDisconnectDuration() const { return this->idleDisconnectDuration_ != nullptr;};
    void deleteIdleDisconnectDuration() { this->idleDisconnectDuration_ = nullptr;};
    inline int64_t idleDisconnectDuration() const { DARABONBA_PTR_GET_DEFAULT(idleDisconnectDuration_, 0L) };
    inline DescribeDesktopGroupsResponseBodyDesktopGroups& setIdleDisconnectDuration(int64_t idleDisconnectDuration) { DARABONBA_PTR_SET_VALUE(idleDisconnectDuration_, idleDisconnectDuration) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline DescribeDesktopGroupsResponseBodyDesktopGroups& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // isLdap Field Functions 
    bool hasIsLdap() const { return this->isLdap_ != nullptr;};
    void deleteIsLdap() { this->isLdap_ = nullptr;};
    inline bool isLdap() const { DARABONBA_PTR_GET_DEFAULT(isLdap_, false) };
    inline DescribeDesktopGroupsResponseBodyDesktopGroups& setIsLdap(bool isLdap) { DARABONBA_PTR_SET_VALUE(isLdap_, isLdap) };


    // keepDuration Field Functions 
    bool hasKeepDuration() const { return this->keepDuration_ != nullptr;};
    void deleteKeepDuration() { this->keepDuration_ = nullptr;};
    inline int64_t keepDuration() const { DARABONBA_PTR_GET_DEFAULT(keepDuration_, 0L) };
    inline DescribeDesktopGroupsResponseBodyDesktopGroups& setKeepDuration(int64_t keepDuration) { DARABONBA_PTR_SET_VALUE(keepDuration_, keepDuration) };


    // loadPolicy Field Functions 
    bool hasLoadPolicy() const { return this->loadPolicy_ != nullptr;};
    void deleteLoadPolicy() { this->loadPolicy_ = nullptr;};
    inline int64_t loadPolicy() const { DARABONBA_PTR_GET_DEFAULT(loadPolicy_, 0L) };
    inline DescribeDesktopGroupsResponseBodyDesktopGroups& setLoadPolicy(int64_t loadPolicy) { DARABONBA_PTR_SET_VALUE(loadPolicy_, loadPolicy) };


    // maxDesktopsCount Field Functions 
    bool hasMaxDesktopsCount() const { return this->maxDesktopsCount_ != nullptr;};
    void deleteMaxDesktopsCount() { this->maxDesktopsCount_ = nullptr;};
    inline int32_t maxDesktopsCount() const { DARABONBA_PTR_GET_DEFAULT(maxDesktopsCount_, 0) };
    inline DescribeDesktopGroupsResponseBodyDesktopGroups& setMaxDesktopsCount(int32_t maxDesktopsCount) { DARABONBA_PTR_SET_VALUE(maxDesktopsCount_, maxDesktopsCount) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int64_t memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0L) };
    inline DescribeDesktopGroupsResponseBodyDesktopGroups& setMemory(int64_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // minDesktopsCount Field Functions 
    bool hasMinDesktopsCount() const { return this->minDesktopsCount_ != nullptr;};
    void deleteMinDesktopsCount() { this->minDesktopsCount_ = nullptr;};
    inline int32_t minDesktopsCount() const { DARABONBA_PTR_GET_DEFAULT(minDesktopsCount_, 0) };
    inline DescribeDesktopGroupsResponseBodyDesktopGroups& setMinDesktopsCount(int32_t minDesktopsCount) { DARABONBA_PTR_SET_VALUE(minDesktopsCount_, minDesktopsCount) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string officeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline DescribeDesktopGroupsResponseBodyDesktopGroups& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // officeSiteName Field Functions 
    bool hasOfficeSiteName() const { return this->officeSiteName_ != nullptr;};
    void deleteOfficeSiteName() { this->officeSiteName_ = nullptr;};
    inline string officeSiteName() const { DARABONBA_PTR_GET_DEFAULT(officeSiteName_, "") };
    inline DescribeDesktopGroupsResponseBodyDesktopGroups& setOfficeSiteName(string officeSiteName) { DARABONBA_PTR_SET_VALUE(officeSiteName_, officeSiteName) };


    // officeSiteType Field Functions 
    bool hasOfficeSiteType() const { return this->officeSiteType_ != nullptr;};
    void deleteOfficeSiteType() { this->officeSiteType_ = nullptr;};
    inline string officeSiteType() const { DARABONBA_PTR_GET_DEFAULT(officeSiteType_, "") };
    inline DescribeDesktopGroupsResponseBodyDesktopGroups& setOfficeSiteType(string officeSiteType) { DARABONBA_PTR_SET_VALUE(officeSiteType_, officeSiteType) };


    // osType Field Functions 
    bool hasOsType() const { return this->osType_ != nullptr;};
    void deleteOsType() { this->osType_ = nullptr;};
    inline string osType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
    inline DescribeDesktopGroupsResponseBodyDesktopGroups& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


    // ownBundleId Field Functions 
    bool hasOwnBundleId() const { return this->ownBundleId_ != nullptr;};
    void deleteOwnBundleId() { this->ownBundleId_ = nullptr;};
    inline string ownBundleId() const { DARABONBA_PTR_GET_DEFAULT(ownBundleId_, "") };
    inline DescribeDesktopGroupsResponseBodyDesktopGroups& setOwnBundleId(string ownBundleId) { DARABONBA_PTR_SET_VALUE(ownBundleId_, ownBundleId) };


    // ownBundleName Field Functions 
    bool hasOwnBundleName() const { return this->ownBundleName_ != nullptr;};
    void deleteOwnBundleName() { this->ownBundleName_ = nullptr;};
    inline string ownBundleName() const { DARABONBA_PTR_GET_DEFAULT(ownBundleName_, "") };
    inline DescribeDesktopGroupsResponseBodyDesktopGroups& setOwnBundleName(string ownBundleName) { DARABONBA_PTR_SET_VALUE(ownBundleName_, ownBundleName) };


    // ownType Field Functions 
    bool hasOwnType() const { return this->ownType_ != nullptr;};
    void deleteOwnType() { this->ownType_ = nullptr;};
    inline int64_t ownType() const { DARABONBA_PTR_GET_DEFAULT(ownType_, 0L) };
    inline DescribeDesktopGroupsResponseBodyDesktopGroups& setOwnType(int64_t ownType) { DARABONBA_PTR_SET_VALUE(ownType_, ownType) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribeDesktopGroupsResponseBodyDesktopGroups& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // policyGroupId Field Functions 
    bool hasPolicyGroupId() const { return this->policyGroupId_ != nullptr;};
    void deletePolicyGroupId() { this->policyGroupId_ = nullptr;};
    inline string policyGroupId() const { DARABONBA_PTR_GET_DEFAULT(policyGroupId_, "") };
    inline DescribeDesktopGroupsResponseBodyDesktopGroups& setPolicyGroupId(string policyGroupId) { DARABONBA_PTR_SET_VALUE(policyGroupId_, policyGroupId) };


    // policyGroupIdList Field Functions 
    bool hasPolicyGroupIdList() const { return this->policyGroupIdList_ != nullptr;};
    void deletePolicyGroupIdList() { this->policyGroupIdList_ = nullptr;};
    inline const vector<string> & policyGroupIdList() const { DARABONBA_PTR_GET_CONST(policyGroupIdList_, vector<string>) };
    inline vector<string> policyGroupIdList() { DARABONBA_PTR_GET(policyGroupIdList_, vector<string>) };
    inline DescribeDesktopGroupsResponseBodyDesktopGroups& setPolicyGroupIdList(const vector<string> & policyGroupIdList) { DARABONBA_PTR_SET_VALUE(policyGroupIdList_, policyGroupIdList) };
    inline DescribeDesktopGroupsResponseBodyDesktopGroups& setPolicyGroupIdList(vector<string> && policyGroupIdList) { DARABONBA_PTR_SET_RVALUE(policyGroupIdList_, policyGroupIdList) };


    // policyGroupName Field Functions 
    bool hasPolicyGroupName() const { return this->policyGroupName_ != nullptr;};
    void deletePolicyGroupName() { this->policyGroupName_ = nullptr;};
    inline string policyGroupName() const { DARABONBA_PTR_GET_DEFAULT(policyGroupName_, "") };
    inline DescribeDesktopGroupsResponseBodyDesktopGroups& setPolicyGroupName(string policyGroupName) { DARABONBA_PTR_SET_VALUE(policyGroupName_, policyGroupName) };


    // policyGroupNameList Field Functions 
    bool hasPolicyGroupNameList() const { return this->policyGroupNameList_ != nullptr;};
    void deletePolicyGroupNameList() { this->policyGroupNameList_ = nullptr;};
    inline const vector<string> & policyGroupNameList() const { DARABONBA_PTR_GET_CONST(policyGroupNameList_, vector<string>) };
    inline vector<string> policyGroupNameList() { DARABONBA_PTR_GET(policyGroupNameList_, vector<string>) };
    inline DescribeDesktopGroupsResponseBodyDesktopGroups& setPolicyGroupNameList(const vector<string> & policyGroupNameList) { DARABONBA_PTR_SET_VALUE(policyGroupNameList_, policyGroupNameList) };
    inline DescribeDesktopGroupsResponseBodyDesktopGroups& setPolicyGroupNameList(vector<string> && policyGroupNameList) { DARABONBA_PTR_SET_RVALUE(policyGroupNameList_, policyGroupNameList) };


    // protocolType Field Functions 
    bool hasProtocolType() const { return this->protocolType_ != nullptr;};
    void deleteProtocolType() { this->protocolType_ = nullptr;};
    inline string protocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
    inline DescribeDesktopGroupsResponseBodyDesktopGroups& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


    // ratioThreshold Field Functions 
    bool hasRatioThreshold() const { return this->ratioThreshold_ != nullptr;};
    void deleteRatioThreshold() { this->ratioThreshold_ = nullptr;};
    inline float ratioThreshold() const { DARABONBA_PTR_GET_DEFAULT(ratioThreshold_, 0.0) };
    inline DescribeDesktopGroupsResponseBodyDesktopGroups& setRatioThreshold(float ratioThreshold) { DARABONBA_PTR_SET_VALUE(ratioThreshold_, ratioThreshold) };


    // resetType Field Functions 
    bool hasResetType() const { return this->resetType_ != nullptr;};
    void deleteResetType() { this->resetType_ = nullptr;};
    inline int64_t resetType() const { DARABONBA_PTR_GET_DEFAULT(resetType_, 0L) };
    inline DescribeDesktopGroupsResponseBodyDesktopGroups& setResetType(int64_t resetType) { DARABONBA_PTR_SET_VALUE(resetType_, resetType) };


    // simpleUserGroupId Field Functions 
    bool hasSimpleUserGroupId() const { return this->simpleUserGroupId_ != nullptr;};
    void deleteSimpleUserGroupId() { this->simpleUserGroupId_ = nullptr;};
    inline string simpleUserGroupId() const { DARABONBA_PTR_GET_DEFAULT(simpleUserGroupId_, "") };
    inline DescribeDesktopGroupsResponseBodyDesktopGroups& setSimpleUserGroupId(string simpleUserGroupId) { DARABONBA_PTR_SET_VALUE(simpleUserGroupId_, simpleUserGroupId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeDesktopGroupsResponseBodyDesktopGroups& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // stopDuration Field Functions 
    bool hasStopDuration() const { return this->stopDuration_ != nullptr;};
    void deleteStopDuration() { this->stopDuration_ = nullptr;};
    inline int64_t stopDuration() const { DARABONBA_PTR_GET_DEFAULT(stopDuration_, 0L) };
    inline DescribeDesktopGroupsResponseBodyDesktopGroups& setStopDuration(int64_t stopDuration) { DARABONBA_PTR_SET_VALUE(stopDuration_, stopDuration) };


    // subnetId Field Functions 
    bool hasSubnetId() const { return this->subnetId_ != nullptr;};
    void deleteSubnetId() { this->subnetId_ = nullptr;};
    inline string subnetId() const { DARABONBA_PTR_GET_DEFAULT(subnetId_, "") };
    inline DescribeDesktopGroupsResponseBodyDesktopGroups& setSubnetId(string subnetId) { DARABONBA_PTR_SET_VALUE(subnetId_, subnetId) };


    // systemDiskCategory Field Functions 
    bool hasSystemDiskCategory() const { return this->systemDiskCategory_ != nullptr;};
    void deleteSystemDiskCategory() { this->systemDiskCategory_ = nullptr;};
    inline string systemDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(systemDiskCategory_, "") };
    inline DescribeDesktopGroupsResponseBodyDesktopGroups& setSystemDiskCategory(string systemDiskCategory) { DARABONBA_PTR_SET_VALUE(systemDiskCategory_, systemDiskCategory) };


    // systemDiskSize Field Functions 
    bool hasSystemDiskSize() const { return this->systemDiskSize_ != nullptr;};
    void deleteSystemDiskSize() { this->systemDiskSize_ = nullptr;};
    inline int32_t systemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSize_, 0) };
    inline DescribeDesktopGroupsResponseBodyDesktopGroups& setSystemDiskSize(int32_t systemDiskSize) { DARABONBA_PTR_SET_VALUE(systemDiskSize_, systemDiskSize) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::DescribeDesktopGroupsResponseBodyDesktopGroupsTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::DescribeDesktopGroupsResponseBodyDesktopGroupsTags>) };
    inline vector<Models::DescribeDesktopGroupsResponseBodyDesktopGroupsTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::DescribeDesktopGroupsResponseBodyDesktopGroupsTags>) };
    inline DescribeDesktopGroupsResponseBodyDesktopGroups& setTags(const vector<Models::DescribeDesktopGroupsResponseBodyDesktopGroupsTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeDesktopGroupsResponseBodyDesktopGroups& setTags(vector<Models::DescribeDesktopGroupsResponseBodyDesktopGroupsTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // userGroupName Field Functions 
    bool hasUserGroupName() const { return this->userGroupName_ != nullptr;};
    void deleteUserGroupName() { this->userGroupName_ = nullptr;};
    inline string userGroupName() const { DARABONBA_PTR_GET_DEFAULT(userGroupName_, "") };
    inline DescribeDesktopGroupsResponseBodyDesktopGroups& setUserGroupName(string userGroupName) { DARABONBA_PTR_SET_VALUE(userGroupName_, userGroupName) };


    // userOuPath Field Functions 
    bool hasUserOuPath() const { return this->userOuPath_ != nullptr;};
    void deleteUserOuPath() { this->userOuPath_ = nullptr;};
    inline string userOuPath() const { DARABONBA_PTR_GET_DEFAULT(userOuPath_, "") };
    inline DescribeDesktopGroupsResponseBodyDesktopGroups& setUserOuPath(string userOuPath) { DARABONBA_PTR_SET_VALUE(userOuPath_, userOuPath) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline int32_t version() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
    inline DescribeDesktopGroupsResponseBodyDesktopGroups& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // volumeEncryptionEnabled Field Functions 
    bool hasVolumeEncryptionEnabled() const { return this->volumeEncryptionEnabled_ != nullptr;};
    void deleteVolumeEncryptionEnabled() { this->volumeEncryptionEnabled_ = nullptr;};
    inline bool volumeEncryptionEnabled() const { DARABONBA_PTR_GET_DEFAULT(volumeEncryptionEnabled_, false) };
    inline DescribeDesktopGroupsResponseBodyDesktopGroups& setVolumeEncryptionEnabled(bool volumeEncryptionEnabled) { DARABONBA_PTR_SET_VALUE(volumeEncryptionEnabled_, volumeEncryptionEnabled) };


    // volumeEncryptionKey Field Functions 
    bool hasVolumeEncryptionKey() const { return this->volumeEncryptionKey_ != nullptr;};
    void deleteVolumeEncryptionKey() { this->volumeEncryptionKey_ = nullptr;};
    inline string volumeEncryptionKey() const { DARABONBA_PTR_GET_DEFAULT(volumeEncryptionKey_, "") };
    inline DescribeDesktopGroupsResponseBodyDesktopGroups& setVolumeEncryptionKey(string volumeEncryptionKey) { DARABONBA_PTR_SET_VALUE(volumeEncryptionKey_, volumeEncryptionKey) };


  protected:
    // The number of concurrent sessions allowed for each cloud computer within the multi-session many-to-many share.
    std::shared_ptr<int64_t> bindAmount_ = nullptr;
    // This parameter is applicable only to subscription cloud computer shares. It defines the initial number of cloud computers that are purchased. Valid values: 0 to 200.
    std::shared_ptr<int32_t> buyDesktopsCount_ = nullptr;
    // The remarks.
    std::shared_ptr<string> comments_ = nullptr;
    // The maximum period of time during which a session is connected. When the specified maximum period of time is reached, the session is automatically disconnected. Unit: milliseconds.
    std::shared_ptr<int64_t> connectDuration_ = nullptr;
    // The number of cloud computers in each state.
    std::shared_ptr<vector<Models::DescribeDesktopGroupsResponseBodyDesktopGroupsCountPerStatus>> countPerStatus_ = nullptr;
    // The number of vCPUs.
    std::shared_ptr<int32_t> cpu_ = nullptr;
    // The time when the cloud computer pool was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The Alibaba Cloud account that creates the cloud computer pool.
    std::shared_ptr<string> creator_ = nullptr;
    // The category of the user disk.
    // 
    // Valid values:
    // 
    // *   cloud_efficiency: ultra disk
    // *   cloud_ssd: standard SSD
    // *   cloud_essd: enhanced SSD (ESSD)
    std::shared_ptr<string> dataDiskCategory_ = nullptr;
    // The user disk capacity. Unit: GiB.
    std::shared_ptr<string> dataDiskSize_ = nullptr;
    // The number of cloud computers that are created.
    std::shared_ptr<int32_t> desktopCount_ = nullptr;
    // The ID of the cloud computer share.
    std::shared_ptr<string> desktopGroupId_ = nullptr;
    // The name of the cloud computer share.
    std::shared_ptr<string> desktopGroupName_ = nullptr;
    // The cloud computer type. You can call the [DescribeDesktopTypes](https://help.aliyun.com/document_detail/188882.html) operation to query the IDs of the cloud computer types supported by WUYING Workspace.
    std::shared_ptr<string> desktopType_ = nullptr;
    // The number of users who can access the cloud computer share.
    std::shared_ptr<int32_t> endUserCount_ = nullptr;
    // The expiration date of the subscription cloud computer share.
    std::shared_ptr<string> expiredTime_ = nullptr;
    std::shared_ptr<vector<string>> expiredTimes_ = nullptr;
    // The number of GPUs.
    std::shared_ptr<float> gpuCount_ = nullptr;
    // The version of the GPU driver.
    std::shared_ptr<string> gpuDriverVersion_ = nullptr;
    // The GPU memory.
    std::shared_ptr<string> gpuSpec_ = nullptr;
    // The period of time after which a session is closed. After an end user connects to a cloud computer, the session is established. If the system does not detect inputs from the keyboard or mouse within the specified period of time, the session is closed. Unit: milliseconds.
    std::shared_ptr<int64_t> idleDisconnectDuration_ = nullptr;
    // The ID of the image.
    std::shared_ptr<string> imageId_ = nullptr;
    std::shared_ptr<bool> isLdap_ = nullptr;
    // The keep-alive duration of a session after the session is disconnected. Valid values: 180000 (3 minutes) to 345600000 (4 days). Unit: milliseconds. If you set this parameter to 0, the session is permanently retained after it is disconnected.
    // 
    // When a session is disconnected, take note of the following situations: If an end user does not resume the session within the specified duration, the session is closed and all unsaved data is cleared. If the end user resumes the session within the specified duration, the end user can continue to access data of the session.
    std::shared_ptr<int64_t> keepDuration_ = nullptr;
    // The load balancing policy for the multi-session many-to-many share.
    // 
    // Valid values:
    // 
    // *   0: depth-first
    // *   1: breadth-first
    std::shared_ptr<int64_t> loadPolicy_ = nullptr;
    // *   For pay-as-you-go cloud computer shares, this parameter defines the maximum number of cloud computers allowed.
    // *   For subscription cloud computer shares, this parameter defines the total number of cloud computers, including both the initially purchased cloud computers (`BuyDesktopsCount`) and those that can be auto-created.
    std::shared_ptr<int32_t> maxDesktopsCount_ = nullptr;
    // The memory size. Unit: MiB.
    std::shared_ptr<int64_t> memory_ = nullptr;
    // *   For pay-as-you-go cloud computer shares, this parameter defines the minimum number of cloud computers allowed.
    // *   For subscription cloud computer shares, this parameter defines the number of cloud computers that are initially purchased (`BuyDesktopsCount`).
    std::shared_ptr<int32_t> minDesktopsCount_ = nullptr;
    // The ID of the office network in which the cloud computer network resides.
    std::shared_ptr<string> officeSiteId_ = nullptr;
    // The ID of the office network in which the cloud computer share resides.
    std::shared_ptr<string> officeSiteName_ = nullptr;
    // The account type of the office network.
    // 
    // Valid values:
    // 
    // *   PERSONAL: individual office network
    // *   SIMPLE: convenience office network
    // *   AD_CONNECTOR: enterprise Active Directory (AD) office network
    // *   RAM: Resource Access Management (RAM)-based office network
    std::shared_ptr<string> officeSiteType_ = nullptr;
    // The OS.
    // 
    // Valid values:
    // 
    // *   Linux
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Windows
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<string> osType_ = nullptr;
    // The ID of the cloud computer template.
    std::shared_ptr<string> ownBundleId_ = nullptr;
    // The name of the cloud computer template.
    std::shared_ptr<string> ownBundleName_ = nullptr;
    // The type of the cloud computer share.
    // 
    // Valid values:
    // 
    // *   0: a single-session many-to-many share.
    // *   1: a multi-session many-to-many share.
    std::shared_ptr<int64_t> ownType_ = nullptr;
    // The billing method of the cloud computer pool.
    // 
    // Valid values:
    // 
    // *   PostPaid: pay-as-you-go
    // *   PrePaid: subscription
    std::shared_ptr<string> payType_ = nullptr;
    // The ID of the applied policy.
    std::shared_ptr<string> policyGroupId_ = nullptr;
    std::shared_ptr<vector<string>> policyGroupIdList_ = nullptr;
    // The name of the applied policy.
    std::shared_ptr<string> policyGroupName_ = nullptr;
    std::shared_ptr<vector<string>> policyGroupNameList_ = nullptr;
    // The protocol type.
    // 
    // Valid values:
    // 
    // *   HDX
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   ASP
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<string> protocolType_ = nullptr;
    // The threshold for the ratio of connected sessions, which triggers automatic scaling of cloud computers within the multi-session many-to-many share. To calculate the ratio of connected sessions, use the following formula:
    // 
    // `Ratio of connected sessions = Number of connected sessions/(Total number of cloud computers × Maximum number of sessions allowed for each cloud computer) × 100%`
    // 
    // When the specified threshold is reached, new cloud computers are automatically created. When the specified threshold is not reached, idle cloud computers are released.
    std::shared_ptr<float> ratioThreshold_ = nullptr;
    // The reset option for the cloud computer share.
    // 
    // Valid values:
    // 
    // *   0: does not reset any disk.
    // *   1: resets only the system disk.
    // *   2: resets only the data disk.
    // *   3: resets the system disk and data disk.
    std::shared_ptr<int64_t> resetType_ = nullptr;
    std::shared_ptr<string> simpleUserGroupId_ = nullptr;
    // The status of the cloud computer share.
    // 
    // Valid values:
    // 
    // *   0: The cloud computer share is unpaid.
    // *   1: The cloud computer share is normal.
    // *   2: The cloud computer share expired, or your account has an overdue payment.
    std::shared_ptr<int32_t> status_ = nullptr;
    // The period of time after which an idle cloud computer is stopped. When the specified period of time is reached, the cloud computer is automatically stopped. If an end user connects to the stopped cloud computer, the cloud computer is automatically started. Unit: milliseconds.
    std::shared_ptr<int64_t> stopDuration_ = nullptr;
    // The ID of the subnet.
    std::shared_ptr<string> subnetId_ = nullptr;
    // The category of the system disk.
    // 
    // Valid values:
    // 
    // *   cloud_efficiency: ultra disk
    // *   cloud_ssd: standard SSD
    // *   cloud_essd: enhanced SSD (ESSD)
    std::shared_ptr<string> systemDiskCategory_ = nullptr;
    // The system disk capacity. Unit: GiB.
    std::shared_ptr<int32_t> systemDiskSize_ = nullptr;
    // The tags.
    std::shared_ptr<vector<Models::DescribeDesktopGroupsResponseBodyDesktopGroupsTags>> tags_ = nullptr;
    std::shared_ptr<string> userGroupName_ = nullptr;
    // The user\\"s organizational unit path.
    std::shared_ptr<string> userOuPath_ = nullptr;
    // The version number of the cloud computer share.
    std::shared_ptr<int32_t> version_ = nullptr;
    // Indicates whether disk encryption is enabled.
    std::shared_ptr<bool> volumeEncryptionEnabled_ = nullptr;
    // The ID of the Key Management Service (KMS) key for disk encryption.
    std::shared_ptr<string> volumeEncryptionKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
