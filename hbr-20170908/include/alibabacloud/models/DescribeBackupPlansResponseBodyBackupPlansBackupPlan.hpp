// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPPLANSRESPONSEBODYBACKUPPLANSBACKUPPLAN_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPPLANSRESPONSEBODYBACKUPPLANSBACKUPPLAN_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeBackupPlansResponseBodyBackupPlansBackupPlanHitTags.hpp>
#include <alibabacloud/models/DescribeBackupPlansResponseBodyBackupPlansBackupPlanOtsDetail.hpp>
#include <alibabacloud/models/DescribeBackupPlansResponseBodyBackupPlansBackupPlanPaths.hpp>
#include <alibabacloud/models/DescribeBackupPlansResponseBodyBackupPlansBackupPlanResources.hpp>
#include <alibabacloud/models/DescribeBackupPlansResponseBodyBackupPlansBackupPlanRules.hpp>
#include <alibabacloud/models/DescribeBackupPlansResponseBodyBackupPlansBackupPlanTrialInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeBackupPlansResponseBodyBackupPlansBackupPlan : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupPlansResponseBodyBackupPlansBackupPlan& obj) { 
      DARABONBA_PTR_TO_JSON(BackupSourceGroupId, backupSourceGroupId_);
      DARABONBA_PTR_TO_JSON(BackupType, backupType_);
      DARABONBA_PTR_TO_JSON(Bucket, bucket_);
      DARABONBA_PTR_TO_JSON(BusinessStatus, businessStatus_);
      DARABONBA_PTR_TO_JSON(ChangeListPath, changeListPath_);
      DARABONBA_PTR_TO_JSON(ClientId, clientId_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreatedByTag, createdByTag_);
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(CrossAccountRoleName, crossAccountRoleName_);
      DARABONBA_PTR_TO_JSON(CrossAccountType, crossAccountType_);
      DARABONBA_PTR_TO_JSON(CrossAccountUserId, crossAccountUserId_);
      DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_TO_JSON(DestDataSourceDetail, destDataSourceDetail_);
      DARABONBA_PTR_TO_JSON(DestDataSourceId, destDataSourceId_);
      DARABONBA_PTR_TO_JSON(DestSourceType, destSourceType_);
      DARABONBA_PTR_TO_JSON(Detail, detail_);
      DARABONBA_PTR_TO_JSON(Disabled, disabled_);
      DARABONBA_PTR_TO_JSON(Exclude, exclude_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(HitTags, hitTags_);
      DARABONBA_PTR_TO_JSON(Include, include_);
      DARABONBA_PTR_TO_JSON(InstanceGroupId, instanceGroupId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(KeepLatestSnapshots, keepLatestSnapshots_);
      DARABONBA_PTR_TO_JSON(LatestExecuteJobId, latestExecuteJobId_);
      DARABONBA_PTR_TO_JSON(Options, options_);
      DARABONBA_PTR_TO_JSON(OtsDetail, otsDetail_);
      DARABONBA_PTR_TO_JSON(Paths, paths_);
      DARABONBA_PTR_TO_JSON(PlanId, planId_);
      DARABONBA_PTR_TO_JSON(PlanName, planName_);
      DARABONBA_PTR_TO_JSON(Prefix, prefix_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
      DARABONBA_PTR_TO_JSON(Retention, retention_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
      DARABONBA_PTR_TO_JSON(Schedule, schedule_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(SpeedLimit, speedLimit_);
      DARABONBA_PTR_TO_JSON(TrialInfo, trialInfo_);
      DARABONBA_PTR_TO_JSON(UpdatedTime, updatedTime_);
      DARABONBA_PTR_TO_JSON(VaultId, vaultId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupPlansResponseBodyBackupPlansBackupPlan& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupSourceGroupId, backupSourceGroupId_);
      DARABONBA_PTR_FROM_JSON(BackupType, backupType_);
      DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
      DARABONBA_PTR_FROM_JSON(BusinessStatus, businessStatus_);
      DARABONBA_PTR_FROM_JSON(ChangeListPath, changeListPath_);
      DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreatedByTag, createdByTag_);
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(CrossAccountRoleName, crossAccountRoleName_);
      DARABONBA_PTR_FROM_JSON(CrossAccountType, crossAccountType_);
      DARABONBA_PTR_FROM_JSON(CrossAccountUserId, crossAccountUserId_);
      DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_FROM_JSON(DestDataSourceDetail, destDataSourceDetail_);
      DARABONBA_PTR_FROM_JSON(DestDataSourceId, destDataSourceId_);
      DARABONBA_PTR_FROM_JSON(DestSourceType, destSourceType_);
      DARABONBA_PTR_FROM_JSON(Detail, detail_);
      DARABONBA_PTR_FROM_JSON(Disabled, disabled_);
      DARABONBA_PTR_FROM_JSON(Exclude, exclude_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(HitTags, hitTags_);
      DARABONBA_PTR_FROM_JSON(Include, include_);
      DARABONBA_PTR_FROM_JSON(InstanceGroupId, instanceGroupId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(KeepLatestSnapshots, keepLatestSnapshots_);
      DARABONBA_PTR_FROM_JSON(LatestExecuteJobId, latestExecuteJobId_);
      DARABONBA_PTR_FROM_JSON(Options, options_);
      DARABONBA_PTR_FROM_JSON(OtsDetail, otsDetail_);
      DARABONBA_PTR_FROM_JSON(Paths, paths_);
      DARABONBA_PTR_FROM_JSON(PlanId, planId_);
      DARABONBA_PTR_FROM_JSON(PlanName, planName_);
      DARABONBA_PTR_FROM_JSON(Prefix, prefix_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
      DARABONBA_PTR_FROM_JSON(Retention, retention_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
      DARABONBA_PTR_FROM_JSON(Schedule, schedule_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(SpeedLimit, speedLimit_);
      DARABONBA_PTR_FROM_JSON(TrialInfo, trialInfo_);
      DARABONBA_PTR_FROM_JSON(UpdatedTime, updatedTime_);
      DARABONBA_PTR_FROM_JSON(VaultId, vaultId_);
    };
    DescribeBackupPlansResponseBodyBackupPlansBackupPlan() = default ;
    DescribeBackupPlansResponseBodyBackupPlansBackupPlan(const DescribeBackupPlansResponseBodyBackupPlansBackupPlan &) = default ;
    DescribeBackupPlansResponseBodyBackupPlansBackupPlan(DescribeBackupPlansResponseBodyBackupPlansBackupPlan &&) = default ;
    DescribeBackupPlansResponseBodyBackupPlansBackupPlan(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupPlansResponseBodyBackupPlansBackupPlan() = default ;
    DescribeBackupPlansResponseBodyBackupPlansBackupPlan& operator=(const DescribeBackupPlansResponseBodyBackupPlansBackupPlan &) = default ;
    DescribeBackupPlansResponseBodyBackupPlansBackupPlan& operator=(DescribeBackupPlansResponseBodyBackupPlansBackupPlan &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->backupSourceGroupId_ != nullptr
        && this->backupType_ != nullptr && this->bucket_ != nullptr && this->businessStatus_ != nullptr && this->changeListPath_ != nullptr && this->clientId_ != nullptr
        && this->clusterId_ != nullptr && this->createTime_ != nullptr && this->createdByTag_ != nullptr && this->createdTime_ != nullptr && this->crossAccountRoleName_ != nullptr
        && this->crossAccountType_ != nullptr && this->crossAccountUserId_ != nullptr && this->dataSourceId_ != nullptr && this->destDataSourceDetail_ != nullptr && this->destDataSourceId_ != nullptr
        && this->destSourceType_ != nullptr && this->detail_ != nullptr && this->disabled_ != nullptr && this->exclude_ != nullptr && this->fileSystemId_ != nullptr
        && this->hitTags_ != nullptr && this->include_ != nullptr && this->instanceGroupId_ != nullptr && this->instanceId_ != nullptr && this->instanceName_ != nullptr
        && this->keepLatestSnapshots_ != nullptr && this->latestExecuteJobId_ != nullptr && this->options_ != nullptr && this->otsDetail_ != nullptr && this->paths_ != nullptr
        && this->planId_ != nullptr && this->planName_ != nullptr && this->prefix_ != nullptr && this->resources_ != nullptr && this->retention_ != nullptr
        && this->rules_ != nullptr && this->schedule_ != nullptr && this->sourceType_ != nullptr && this->speedLimit_ != nullptr && this->trialInfo_ != nullptr
        && this->updatedTime_ != nullptr && this->vaultId_ != nullptr; };
    // backupSourceGroupId Field Functions 
    bool hasBackupSourceGroupId() const { return this->backupSourceGroupId_ != nullptr;};
    void deleteBackupSourceGroupId() { this->backupSourceGroupId_ = nullptr;};
    inline string backupSourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(backupSourceGroupId_, "") };
    inline DescribeBackupPlansResponseBodyBackupPlansBackupPlan& setBackupSourceGroupId(string backupSourceGroupId) { DARABONBA_PTR_SET_VALUE(backupSourceGroupId_, backupSourceGroupId) };


    // backupType Field Functions 
    bool hasBackupType() const { return this->backupType_ != nullptr;};
    void deleteBackupType() { this->backupType_ = nullptr;};
    inline string backupType() const { DARABONBA_PTR_GET_DEFAULT(backupType_, "") };
    inline DescribeBackupPlansResponseBodyBackupPlansBackupPlan& setBackupType(string backupType) { DARABONBA_PTR_SET_VALUE(backupType_, backupType) };


    // bucket Field Functions 
    bool hasBucket() const { return this->bucket_ != nullptr;};
    void deleteBucket() { this->bucket_ = nullptr;};
    inline string bucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
    inline DescribeBackupPlansResponseBodyBackupPlansBackupPlan& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


    // businessStatus Field Functions 
    bool hasBusinessStatus() const { return this->businessStatus_ != nullptr;};
    void deleteBusinessStatus() { this->businessStatus_ = nullptr;};
    inline string businessStatus() const { DARABONBA_PTR_GET_DEFAULT(businessStatus_, "") };
    inline DescribeBackupPlansResponseBodyBackupPlansBackupPlan& setBusinessStatus(string businessStatus) { DARABONBA_PTR_SET_VALUE(businessStatus_, businessStatus) };


    // changeListPath Field Functions 
    bool hasChangeListPath() const { return this->changeListPath_ != nullptr;};
    void deleteChangeListPath() { this->changeListPath_ = nullptr;};
    inline string changeListPath() const { DARABONBA_PTR_GET_DEFAULT(changeListPath_, "") };
    inline DescribeBackupPlansResponseBodyBackupPlansBackupPlan& setChangeListPath(string changeListPath) { DARABONBA_PTR_SET_VALUE(changeListPath_, changeListPath) };


    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string clientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline DescribeBackupPlansResponseBodyBackupPlansBackupPlan& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeBackupPlansResponseBodyBackupPlansBackupPlan& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline DescribeBackupPlansResponseBodyBackupPlansBackupPlan& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createdByTag Field Functions 
    bool hasCreatedByTag() const { return this->createdByTag_ != nullptr;};
    void deleteCreatedByTag() { this->createdByTag_ = nullptr;};
    inline bool createdByTag() const { DARABONBA_PTR_GET_DEFAULT(createdByTag_, false) };
    inline DescribeBackupPlansResponseBodyBackupPlansBackupPlan& setCreatedByTag(bool createdByTag) { DARABONBA_PTR_SET_VALUE(createdByTag_, createdByTag) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline int64_t createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, 0L) };
    inline DescribeBackupPlansResponseBodyBackupPlansBackupPlan& setCreatedTime(int64_t createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // crossAccountRoleName Field Functions 
    bool hasCrossAccountRoleName() const { return this->crossAccountRoleName_ != nullptr;};
    void deleteCrossAccountRoleName() { this->crossAccountRoleName_ = nullptr;};
    inline string crossAccountRoleName() const { DARABONBA_PTR_GET_DEFAULT(crossAccountRoleName_, "") };
    inline DescribeBackupPlansResponseBodyBackupPlansBackupPlan& setCrossAccountRoleName(string crossAccountRoleName) { DARABONBA_PTR_SET_VALUE(crossAccountRoleName_, crossAccountRoleName) };


    // crossAccountType Field Functions 
    bool hasCrossAccountType() const { return this->crossAccountType_ != nullptr;};
    void deleteCrossAccountType() { this->crossAccountType_ = nullptr;};
    inline string crossAccountType() const { DARABONBA_PTR_GET_DEFAULT(crossAccountType_, "") };
    inline DescribeBackupPlansResponseBodyBackupPlansBackupPlan& setCrossAccountType(string crossAccountType) { DARABONBA_PTR_SET_VALUE(crossAccountType_, crossAccountType) };


    // crossAccountUserId Field Functions 
    bool hasCrossAccountUserId() const { return this->crossAccountUserId_ != nullptr;};
    void deleteCrossAccountUserId() { this->crossAccountUserId_ = nullptr;};
    inline int64_t crossAccountUserId() const { DARABONBA_PTR_GET_DEFAULT(crossAccountUserId_, 0L) };
    inline DescribeBackupPlansResponseBodyBackupPlansBackupPlan& setCrossAccountUserId(int64_t crossAccountUserId) { DARABONBA_PTR_SET_VALUE(crossAccountUserId_, crossAccountUserId) };


    // dataSourceId Field Functions 
    bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
    void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
    inline string dataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, "") };
    inline DescribeBackupPlansResponseBodyBackupPlansBackupPlan& setDataSourceId(string dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


    // destDataSourceDetail Field Functions 
    bool hasDestDataSourceDetail() const { return this->destDataSourceDetail_ != nullptr;};
    void deleteDestDataSourceDetail() { this->destDataSourceDetail_ = nullptr;};
    inline string destDataSourceDetail() const { DARABONBA_PTR_GET_DEFAULT(destDataSourceDetail_, "") };
    inline DescribeBackupPlansResponseBodyBackupPlansBackupPlan& setDestDataSourceDetail(string destDataSourceDetail) { DARABONBA_PTR_SET_VALUE(destDataSourceDetail_, destDataSourceDetail) };


    // destDataSourceId Field Functions 
    bool hasDestDataSourceId() const { return this->destDataSourceId_ != nullptr;};
    void deleteDestDataSourceId() { this->destDataSourceId_ = nullptr;};
    inline string destDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(destDataSourceId_, "") };
    inline DescribeBackupPlansResponseBodyBackupPlansBackupPlan& setDestDataSourceId(string destDataSourceId) { DARABONBA_PTR_SET_VALUE(destDataSourceId_, destDataSourceId) };


    // destSourceType Field Functions 
    bool hasDestSourceType() const { return this->destSourceType_ != nullptr;};
    void deleteDestSourceType() { this->destSourceType_ = nullptr;};
    inline string destSourceType() const { DARABONBA_PTR_GET_DEFAULT(destSourceType_, "") };
    inline DescribeBackupPlansResponseBodyBackupPlansBackupPlan& setDestSourceType(string destSourceType) { DARABONBA_PTR_SET_VALUE(destSourceType_, destSourceType) };


    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline string detail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
    inline DescribeBackupPlansResponseBodyBackupPlansBackupPlan& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


    // disabled Field Functions 
    bool hasDisabled() const { return this->disabled_ != nullptr;};
    void deleteDisabled() { this->disabled_ = nullptr;};
    inline bool disabled() const { DARABONBA_PTR_GET_DEFAULT(disabled_, false) };
    inline DescribeBackupPlansResponseBodyBackupPlansBackupPlan& setDisabled(bool disabled) { DARABONBA_PTR_SET_VALUE(disabled_, disabled) };


    // exclude Field Functions 
    bool hasExclude() const { return this->exclude_ != nullptr;};
    void deleteExclude() { this->exclude_ = nullptr;};
    inline string exclude() const { DARABONBA_PTR_GET_DEFAULT(exclude_, "") };
    inline DescribeBackupPlansResponseBodyBackupPlansBackupPlan& setExclude(string exclude) { DARABONBA_PTR_SET_VALUE(exclude_, exclude) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string fileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline DescribeBackupPlansResponseBodyBackupPlansBackupPlan& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // hitTags Field Functions 
    bool hasHitTags() const { return this->hitTags_ != nullptr;};
    void deleteHitTags() { this->hitTags_ = nullptr;};
    inline const Models::DescribeBackupPlansResponseBodyBackupPlansBackupPlanHitTags & hitTags() const { DARABONBA_PTR_GET_CONST(hitTags_, Models::DescribeBackupPlansResponseBodyBackupPlansBackupPlanHitTags) };
    inline Models::DescribeBackupPlansResponseBodyBackupPlansBackupPlanHitTags hitTags() { DARABONBA_PTR_GET(hitTags_, Models::DescribeBackupPlansResponseBodyBackupPlansBackupPlanHitTags) };
    inline DescribeBackupPlansResponseBodyBackupPlansBackupPlan& setHitTags(const Models::DescribeBackupPlansResponseBodyBackupPlansBackupPlanHitTags & hitTags) { DARABONBA_PTR_SET_VALUE(hitTags_, hitTags) };
    inline DescribeBackupPlansResponseBodyBackupPlansBackupPlan& setHitTags(Models::DescribeBackupPlansResponseBodyBackupPlansBackupPlanHitTags && hitTags) { DARABONBA_PTR_SET_RVALUE(hitTags_, hitTags) };


    // include Field Functions 
    bool hasInclude() const { return this->include_ != nullptr;};
    void deleteInclude() { this->include_ = nullptr;};
    inline string include() const { DARABONBA_PTR_GET_DEFAULT(include_, "") };
    inline DescribeBackupPlansResponseBodyBackupPlansBackupPlan& setInclude(string include) { DARABONBA_PTR_SET_VALUE(include_, include) };


    // instanceGroupId Field Functions 
    bool hasInstanceGroupId() const { return this->instanceGroupId_ != nullptr;};
    void deleteInstanceGroupId() { this->instanceGroupId_ = nullptr;};
    inline string instanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(instanceGroupId_, "") };
    inline DescribeBackupPlansResponseBodyBackupPlansBackupPlan& setInstanceGroupId(string instanceGroupId) { DARABONBA_PTR_SET_VALUE(instanceGroupId_, instanceGroupId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeBackupPlansResponseBodyBackupPlansBackupPlan& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeBackupPlansResponseBodyBackupPlansBackupPlan& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // keepLatestSnapshots Field Functions 
    bool hasKeepLatestSnapshots() const { return this->keepLatestSnapshots_ != nullptr;};
    void deleteKeepLatestSnapshots() { this->keepLatestSnapshots_ = nullptr;};
    inline int64_t keepLatestSnapshots() const { DARABONBA_PTR_GET_DEFAULT(keepLatestSnapshots_, 0L) };
    inline DescribeBackupPlansResponseBodyBackupPlansBackupPlan& setKeepLatestSnapshots(int64_t keepLatestSnapshots) { DARABONBA_PTR_SET_VALUE(keepLatestSnapshots_, keepLatestSnapshots) };


    // latestExecuteJobId Field Functions 
    bool hasLatestExecuteJobId() const { return this->latestExecuteJobId_ != nullptr;};
    void deleteLatestExecuteJobId() { this->latestExecuteJobId_ = nullptr;};
    inline string latestExecuteJobId() const { DARABONBA_PTR_GET_DEFAULT(latestExecuteJobId_, "") };
    inline DescribeBackupPlansResponseBodyBackupPlansBackupPlan& setLatestExecuteJobId(string latestExecuteJobId) { DARABONBA_PTR_SET_VALUE(latestExecuteJobId_, latestExecuteJobId) };


    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline string options() const { DARABONBA_PTR_GET_DEFAULT(options_, "") };
    inline DescribeBackupPlansResponseBodyBackupPlansBackupPlan& setOptions(string options) { DARABONBA_PTR_SET_VALUE(options_, options) };


    // otsDetail Field Functions 
    bool hasOtsDetail() const { return this->otsDetail_ != nullptr;};
    void deleteOtsDetail() { this->otsDetail_ = nullptr;};
    inline const Models::DescribeBackupPlansResponseBodyBackupPlansBackupPlanOtsDetail & otsDetail() const { DARABONBA_PTR_GET_CONST(otsDetail_, Models::DescribeBackupPlansResponseBodyBackupPlansBackupPlanOtsDetail) };
    inline Models::DescribeBackupPlansResponseBodyBackupPlansBackupPlanOtsDetail otsDetail() { DARABONBA_PTR_GET(otsDetail_, Models::DescribeBackupPlansResponseBodyBackupPlansBackupPlanOtsDetail) };
    inline DescribeBackupPlansResponseBodyBackupPlansBackupPlan& setOtsDetail(const Models::DescribeBackupPlansResponseBodyBackupPlansBackupPlanOtsDetail & otsDetail) { DARABONBA_PTR_SET_VALUE(otsDetail_, otsDetail) };
    inline DescribeBackupPlansResponseBodyBackupPlansBackupPlan& setOtsDetail(Models::DescribeBackupPlansResponseBodyBackupPlansBackupPlanOtsDetail && otsDetail) { DARABONBA_PTR_SET_RVALUE(otsDetail_, otsDetail) };


    // paths Field Functions 
    bool hasPaths() const { return this->paths_ != nullptr;};
    void deletePaths() { this->paths_ = nullptr;};
    inline const Models::DescribeBackupPlansResponseBodyBackupPlansBackupPlanPaths & paths() const { DARABONBA_PTR_GET_CONST(paths_, Models::DescribeBackupPlansResponseBodyBackupPlansBackupPlanPaths) };
    inline Models::DescribeBackupPlansResponseBodyBackupPlansBackupPlanPaths paths() { DARABONBA_PTR_GET(paths_, Models::DescribeBackupPlansResponseBodyBackupPlansBackupPlanPaths) };
    inline DescribeBackupPlansResponseBodyBackupPlansBackupPlan& setPaths(const Models::DescribeBackupPlansResponseBodyBackupPlansBackupPlanPaths & paths) { DARABONBA_PTR_SET_VALUE(paths_, paths) };
    inline DescribeBackupPlansResponseBodyBackupPlansBackupPlan& setPaths(Models::DescribeBackupPlansResponseBodyBackupPlansBackupPlanPaths && paths) { DARABONBA_PTR_SET_RVALUE(paths_, paths) };


    // planId Field Functions 
    bool hasPlanId() const { return this->planId_ != nullptr;};
    void deletePlanId() { this->planId_ = nullptr;};
    inline string planId() const { DARABONBA_PTR_GET_DEFAULT(planId_, "") };
    inline DescribeBackupPlansResponseBodyBackupPlansBackupPlan& setPlanId(string planId) { DARABONBA_PTR_SET_VALUE(planId_, planId) };


    // planName Field Functions 
    bool hasPlanName() const { return this->planName_ != nullptr;};
    void deletePlanName() { this->planName_ = nullptr;};
    inline string planName() const { DARABONBA_PTR_GET_DEFAULT(planName_, "") };
    inline DescribeBackupPlansResponseBodyBackupPlansBackupPlan& setPlanName(string planName) { DARABONBA_PTR_SET_VALUE(planName_, planName) };


    // prefix Field Functions 
    bool hasPrefix() const { return this->prefix_ != nullptr;};
    void deletePrefix() { this->prefix_ = nullptr;};
    inline string prefix() const { DARABONBA_PTR_GET_DEFAULT(prefix_, "") };
    inline DescribeBackupPlansResponseBodyBackupPlansBackupPlan& setPrefix(string prefix) { DARABONBA_PTR_SET_VALUE(prefix_, prefix) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const Models::DescribeBackupPlansResponseBodyBackupPlansBackupPlanResources & resources() const { DARABONBA_PTR_GET_CONST(resources_, Models::DescribeBackupPlansResponseBodyBackupPlansBackupPlanResources) };
    inline Models::DescribeBackupPlansResponseBodyBackupPlansBackupPlanResources resources() { DARABONBA_PTR_GET(resources_, Models::DescribeBackupPlansResponseBodyBackupPlansBackupPlanResources) };
    inline DescribeBackupPlansResponseBodyBackupPlansBackupPlan& setResources(const Models::DescribeBackupPlansResponseBodyBackupPlansBackupPlanResources & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline DescribeBackupPlansResponseBodyBackupPlansBackupPlan& setResources(Models::DescribeBackupPlansResponseBodyBackupPlansBackupPlanResources && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


    // retention Field Functions 
    bool hasRetention() const { return this->retention_ != nullptr;};
    void deleteRetention() { this->retention_ = nullptr;};
    inline int64_t retention() const { DARABONBA_PTR_GET_DEFAULT(retention_, 0L) };
    inline DescribeBackupPlansResponseBodyBackupPlansBackupPlan& setRetention(int64_t retention) { DARABONBA_PTR_SET_VALUE(retention_, retention) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const Models::DescribeBackupPlansResponseBodyBackupPlansBackupPlanRules & rules() const { DARABONBA_PTR_GET_CONST(rules_, Models::DescribeBackupPlansResponseBodyBackupPlansBackupPlanRules) };
    inline Models::DescribeBackupPlansResponseBodyBackupPlansBackupPlanRules rules() { DARABONBA_PTR_GET(rules_, Models::DescribeBackupPlansResponseBodyBackupPlansBackupPlanRules) };
    inline DescribeBackupPlansResponseBodyBackupPlansBackupPlan& setRules(const Models::DescribeBackupPlansResponseBodyBackupPlansBackupPlanRules & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline DescribeBackupPlansResponseBodyBackupPlansBackupPlan& setRules(Models::DescribeBackupPlansResponseBodyBackupPlansBackupPlanRules && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    // schedule Field Functions 
    bool hasSchedule() const { return this->schedule_ != nullptr;};
    void deleteSchedule() { this->schedule_ = nullptr;};
    inline string schedule() const { DARABONBA_PTR_GET_DEFAULT(schedule_, "") };
    inline DescribeBackupPlansResponseBodyBackupPlansBackupPlan& setSchedule(string schedule) { DARABONBA_PTR_SET_VALUE(schedule_, schedule) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline DescribeBackupPlansResponseBodyBackupPlansBackupPlan& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // speedLimit Field Functions 
    bool hasSpeedLimit() const { return this->speedLimit_ != nullptr;};
    void deleteSpeedLimit() { this->speedLimit_ = nullptr;};
    inline string speedLimit() const { DARABONBA_PTR_GET_DEFAULT(speedLimit_, "") };
    inline DescribeBackupPlansResponseBodyBackupPlansBackupPlan& setSpeedLimit(string speedLimit) { DARABONBA_PTR_SET_VALUE(speedLimit_, speedLimit) };


    // trialInfo Field Functions 
    bool hasTrialInfo() const { return this->trialInfo_ != nullptr;};
    void deleteTrialInfo() { this->trialInfo_ = nullptr;};
    inline const Models::DescribeBackupPlansResponseBodyBackupPlansBackupPlanTrialInfo & trialInfo() const { DARABONBA_PTR_GET_CONST(trialInfo_, Models::DescribeBackupPlansResponseBodyBackupPlansBackupPlanTrialInfo) };
    inline Models::DescribeBackupPlansResponseBodyBackupPlansBackupPlanTrialInfo trialInfo() { DARABONBA_PTR_GET(trialInfo_, Models::DescribeBackupPlansResponseBodyBackupPlansBackupPlanTrialInfo) };
    inline DescribeBackupPlansResponseBodyBackupPlansBackupPlan& setTrialInfo(const Models::DescribeBackupPlansResponseBodyBackupPlansBackupPlanTrialInfo & trialInfo) { DARABONBA_PTR_SET_VALUE(trialInfo_, trialInfo) };
    inline DescribeBackupPlansResponseBodyBackupPlansBackupPlan& setTrialInfo(Models::DescribeBackupPlansResponseBodyBackupPlansBackupPlanTrialInfo && trialInfo) { DARABONBA_PTR_SET_RVALUE(trialInfo_, trialInfo) };


    // updatedTime Field Functions 
    bool hasUpdatedTime() const { return this->updatedTime_ != nullptr;};
    void deleteUpdatedTime() { this->updatedTime_ = nullptr;};
    inline int64_t updatedTime() const { DARABONBA_PTR_GET_DEFAULT(updatedTime_, 0L) };
    inline DescribeBackupPlansResponseBodyBackupPlansBackupPlan& setUpdatedTime(int64_t updatedTime) { DARABONBA_PTR_SET_VALUE(updatedTime_, updatedTime) };


    // vaultId Field Functions 
    bool hasVaultId() const { return this->vaultId_ != nullptr;};
    void deleteVaultId() { this->vaultId_ = nullptr;};
    inline string vaultId() const { DARABONBA_PTR_GET_DEFAULT(vaultId_, "") };
    inline DescribeBackupPlansResponseBodyBackupPlansBackupPlan& setVaultId(string vaultId) { DARABONBA_PTR_SET_VALUE(vaultId_, vaultId) };


  protected:
    // The ID of the data source group.
    std::shared_ptr<string> backupSourceGroupId_ = nullptr;
    // The backup type. Valid value: **COMPLETE**, which indicates full backup.
    std::shared_ptr<string> backupType_ = nullptr;
    // This parameter is valid only when **SourceType** is set to **OSS**. This parameter indicates the name of the OSS bucket.
    std::shared_ptr<string> bucket_ = nullptr;
    std::shared_ptr<string> businessStatus_ = nullptr;
    // The configurations of the incremental file synchronization. This parameter is returned only for data synchronization.
    std::shared_ptr<string> changeListPath_ = nullptr;
    // The ID of the backup client.
    std::shared_ptr<string> clientId_ = nullptr;
    // The ID of the client group.
    std::shared_ptr<string> clusterId_ = nullptr;
    // This parameter is valid only when **SourceType** is set to **NAS**. This parameter indicates the time when the file system was created. This value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // Indicates whether a backup plan is automatically created based on tags.
    std::shared_ptr<bool> createdByTag_ = nullptr;
    // The time when the backup plan was created. This value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int64_t> createdTime_ = nullptr;
    // The name of the Resource Access Management (RAM) role that is created within the source Alibaba Cloud account and assigned to the current Alibaba Cloud account to authorize the current Alibaba Cloud account to back up data across Alibaba Cloud accounts.
    std::shared_ptr<string> crossAccountRoleName_ = nullptr;
    // Indicates whether data is backed up within the same Alibaba Cloud account or across Alibaba Cloud accounts. Valid values:
    // 
    // *   SELF_ACCOUNT
    // *   CROSS_ACCOUNT
    std::shared_ptr<string> crossAccountType_ = nullptr;
    // The ID of the source Alibaba Cloud account that authorizes the current Alibaba Cloud account to back up data across Alibaba Cloud accounts.
    std::shared_ptr<int64_t> crossAccountUserId_ = nullptr;
    // The ID of the data source.
    std::shared_ptr<string> dataSourceId_ = nullptr;
    // The data source details at the destination. This parameter is returned only for data synchronization.
    std::shared_ptr<string> destDataSourceDetail_ = nullptr;
    // The data source ID at the destination. This parameter is returned only for data synchronization.
    std::shared_ptr<string> destDataSourceId_ = nullptr;
    // The data source type at the destination. This parameter is returned only for data synchronization.
    std::shared_ptr<string> destSourceType_ = nullptr;
    // The details about ECS instance backup.
    std::shared_ptr<string> detail_ = nullptr;
    // Indicates whether the backup plan is disabled. Valid values:
    // 
    // *   true: The backup plan is disabled.
    // *   false: The backup plan is enabled.
    std::shared_ptr<bool> disabled_ = nullptr;
    // This parameter is valid only when **SourceType** is set to **ECS_FILE**. This parameter indicates the paths to the files that are excluded from the backup job.
    std::shared_ptr<string> exclude_ = nullptr;
    // This parameter is valid only when **SourceType** is set to **NAS**. This parameter indicates the ID of the NAS file system.
    std::shared_ptr<string> fileSystemId_ = nullptr;
    // The matched tag rules.
    std::shared_ptr<Models::DescribeBackupPlansResponseBodyBackupPlansBackupPlanHitTags> hitTags_ = nullptr;
    // This parameter is valid only when **SourceType** is set to **ECS_FILE**. This parameter indicates the paths to the files that are backed up.
    std::shared_ptr<string> include_ = nullptr;
    // The ID of the instance group.
    std::shared_ptr<string> instanceGroupId_ = nullptr;
    // This parameter is valid only when **SourceType** is set to **ECS_FILE**. This parameter indicates the ID of the ECS instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the Tablestore instance.
    std::shared_ptr<string> instanceName_ = nullptr;
    // Indicates whether the feature of keeping at least one backup version is enabled. Valid values:
    // 
    // *   0: The feature is disabled.
    // *   1: The feature is enabled.
    std::shared_ptr<int64_t> keepLatestSnapshots_ = nullptr;
    // The latest execution job id of plan.
    std::shared_ptr<string> latestExecuteJobId_ = nullptr;
    // This parameter is valid only when **SourceType** is set to **ECS_FILE**. This parameter indicates whether Windows Volume Shadow Copy Service (VSS) is used to define a source path.
    std::shared_ptr<string> options_ = nullptr;
    // The details about the Tablestore instance.
    std::shared_ptr<Models::DescribeBackupPlansResponseBodyBackupPlansBackupPlanOtsDetail> otsDetail_ = nullptr;
    // The source paths. This parameter is valid only when **SourceType** is set to **ECS_FILE**.
    std::shared_ptr<Models::DescribeBackupPlansResponseBodyBackupPlansBackupPlanPaths> paths_ = nullptr;
    // The ID of the backup plan.
    std::shared_ptr<string> planId_ = nullptr;
    // The name of the backup plan.
    std::shared_ptr<string> planName_ = nullptr;
    // This parameter is valid only when **SourceType** is set to **OSS**. This parameter indicates the prefix of the objects that are backed up.
    std::shared_ptr<string> prefix_ = nullptr;
    // The backup resources. This parameter is valid only for disk backup.
    std::shared_ptr<Models::DescribeBackupPlansResponseBodyBackupPlansBackupPlanResources> resources_ = nullptr;
    // The retention period of the backup data. Unit: days.
    std::shared_ptr<int64_t> retention_ = nullptr;
    // The backup policies. This parameter is valid only for disk backup.
    std::shared_ptr<Models::DescribeBackupPlansResponseBodyBackupPlansBackupPlanRules> rules_ = nullptr;
    // The backup policy. Format: `I|{startTime}|{interval}`. The system runs the first backup job at a point in time that is specified by `{startTime}` and the subsequent backup jobs at an interval that is specified by `{interval}`. The system does not run a backup job before the specified point in time. Each backup job, except the first one, starts only after the previous backup job is completed. For example, `I|1631685600|P1D` indicates that the system runs the first backup job at 14:00:00 on September 15, 2021 and the subsequent backup jobs once a day.
    // 
    // *   **startTime**: the time at which the system starts to run a backup job. The time follows the UNIX time format. Unit: seconds.
    // *   **interval**: the interval at which the system runs a backup job. The interval follows the ISO 8601 standard. For example, PT1H indicates an interval of 1 hour. P1D indicates an interval of one day.
    std::shared_ptr<string> schedule_ = nullptr;
    // The type of the data source. Valid values:
    // 
    // *   **ECS_FILE**: ECS files
    // *   **OSS**: OSS buckets
    // *   **NAS**: NAS file systems
    // *   **OTS**: Tablestore instances
    // *   **UDM_ECS**: ECS instances
    // *   **SYNC**: data synchronization
    std::shared_ptr<string> sourceType_ = nullptr;
    // This parameter is valid only when **SourceType** is set to **ECS_FILE**. This parameter indicates the throttling rules. Format: `{start}|{end}|{bandwidth}`. Multiple throttling rules are separated with vertical bars (`|`). A time range cannot overlap with another one.
    // 
    // *   start: the start hour.
    // *   end: the end hour.
    // *   bandwidth: the bandwidth. Unit: KB.
    std::shared_ptr<string> speedLimit_ = nullptr;
    // The free trial information.
    std::shared_ptr<Models::DescribeBackupPlansResponseBodyBackupPlansBackupPlanTrialInfo> trialInfo_ = nullptr;
    // The time when the backup plan was updated. This value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int64_t> updatedTime_ = nullptr;
    // The ID of the backup vault.
    std::shared_ptr<string> vaultId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
