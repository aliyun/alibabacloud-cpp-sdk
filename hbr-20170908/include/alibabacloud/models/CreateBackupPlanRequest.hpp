// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBACKUPPLANREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEBACKUPPLANREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/OtsDetail.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class CreateBackupPlanRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBackupPlanRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupType, backupType_);
      DARABONBA_PTR_TO_JSON(Bucket, bucket_);
      DARABONBA_PTR_TO_JSON(ChangeListPath, changeListPath_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CrossAccountRoleName, crossAccountRoleName_);
      DARABONBA_PTR_TO_JSON(CrossAccountType, crossAccountType_);
      DARABONBA_PTR_TO_JSON(CrossAccountUserId, crossAccountUserId_);
      DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
      DARABONBA_ANY_TO_JSON(DestDataSourceDetail, destDataSourceDetail_);
      DARABONBA_PTR_TO_JSON(DestDataSourceId, destDataSourceId_);
      DARABONBA_PTR_TO_JSON(DestSourceType, destSourceType_);
      DARABONBA_ANY_TO_JSON(Detail, detail_);
      DARABONBA_PTR_TO_JSON(Disabled, disabled_);
      DARABONBA_PTR_TO_JSON(Exclude, exclude_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(Include, include_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(KeepLatestSnapshots, keepLatestSnapshots_);
      DARABONBA_PTR_TO_JSON(Options, options_);
      DARABONBA_PTR_TO_JSON(OtsDetail, otsDetail_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(PlanName, planName_);
      DARABONBA_PTR_TO_JSON(Prefix, prefix_);
      DARABONBA_PTR_TO_JSON(Retention, retention_);
      DARABONBA_PTR_TO_JSON(Rule, rule_);
      DARABONBA_PTR_TO_JSON(Schedule, schedule_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(SpeedLimit, speedLimit_);
      DARABONBA_PTR_TO_JSON(UdmRegionId, udmRegionId_);
      DARABONBA_PTR_TO_JSON(VaultId, vaultId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBackupPlanRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupType, backupType_);
      DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
      DARABONBA_PTR_FROM_JSON(ChangeListPath, changeListPath_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CrossAccountRoleName, crossAccountRoleName_);
      DARABONBA_PTR_FROM_JSON(CrossAccountType, crossAccountType_);
      DARABONBA_PTR_FROM_JSON(CrossAccountUserId, crossAccountUserId_);
      DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
      DARABONBA_ANY_FROM_JSON(DestDataSourceDetail, destDataSourceDetail_);
      DARABONBA_PTR_FROM_JSON(DestDataSourceId, destDataSourceId_);
      DARABONBA_PTR_FROM_JSON(DestSourceType, destSourceType_);
      DARABONBA_ANY_FROM_JSON(Detail, detail_);
      DARABONBA_PTR_FROM_JSON(Disabled, disabled_);
      DARABONBA_PTR_FROM_JSON(Exclude, exclude_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(Include, include_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(KeepLatestSnapshots, keepLatestSnapshots_);
      DARABONBA_PTR_FROM_JSON(Options, options_);
      DARABONBA_PTR_FROM_JSON(OtsDetail, otsDetail_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(PlanName, planName_);
      DARABONBA_PTR_FROM_JSON(Prefix, prefix_);
      DARABONBA_PTR_FROM_JSON(Retention, retention_);
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
      DARABONBA_PTR_FROM_JSON(Schedule, schedule_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(SpeedLimit, speedLimit_);
      DARABONBA_PTR_FROM_JSON(UdmRegionId, udmRegionId_);
      DARABONBA_PTR_FROM_JSON(VaultId, vaultId_);
    };
    CreateBackupPlanRequest() = default ;
    CreateBackupPlanRequest(const CreateBackupPlanRequest &) = default ;
    CreateBackupPlanRequest(CreateBackupPlanRequest &&) = default ;
    CreateBackupPlanRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBackupPlanRequest() = default ;
    CreateBackupPlanRequest& operator=(const CreateBackupPlanRequest &) = default ;
    CreateBackupPlanRequest& operator=(CreateBackupPlanRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Rule : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Rule& obj) { 
        DARABONBA_PTR_TO_JSON(BackupType, backupType_);
        DARABONBA_PTR_TO_JSON(DestinationRegionId, destinationRegionId_);
        DARABONBA_PTR_TO_JSON(DestinationRetention, destinationRetention_);
        DARABONBA_PTR_TO_JSON(Disabled, disabled_);
        DARABONBA_PTR_TO_JSON(DoCopy, doCopy_);
        DARABONBA_PTR_TO_JSON(Retention, retention_);
        DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
        DARABONBA_PTR_TO_JSON(Schedule, schedule_);
      };
      friend void from_json(const Darabonba::Json& j, Rule& obj) { 
        DARABONBA_PTR_FROM_JSON(BackupType, backupType_);
        DARABONBA_PTR_FROM_JSON(DestinationRegionId, destinationRegionId_);
        DARABONBA_PTR_FROM_JSON(DestinationRetention, destinationRetention_);
        DARABONBA_PTR_FROM_JSON(Disabled, disabled_);
        DARABONBA_PTR_FROM_JSON(DoCopy, doCopy_);
        DARABONBA_PTR_FROM_JSON(Retention, retention_);
        DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
        DARABONBA_PTR_FROM_JSON(Schedule, schedule_);
      };
      Rule() = default ;
      Rule(const Rule &) = default ;
      Rule(Rule &&) = default ;
      Rule(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Rule() = default ;
      Rule& operator=(const Rule &) = default ;
      Rule& operator=(Rule &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->backupType_ == nullptr
        && this->destinationRegionId_ == nullptr && this->destinationRetention_ == nullptr && this->disabled_ == nullptr && this->doCopy_ == nullptr && this->retention_ == nullptr
        && this->ruleName_ == nullptr && this->schedule_ == nullptr; };
      // backupType Field Functions 
      bool hasBackupType() const { return this->backupType_ != nullptr;};
      void deleteBackupType() { this->backupType_ = nullptr;};
      inline string getBackupType() const { DARABONBA_PTR_GET_DEFAULT(backupType_, "") };
      inline Rule& setBackupType(string backupType) { DARABONBA_PTR_SET_VALUE(backupType_, backupType) };


      // destinationRegionId Field Functions 
      bool hasDestinationRegionId() const { return this->destinationRegionId_ != nullptr;};
      void deleteDestinationRegionId() { this->destinationRegionId_ = nullptr;};
      inline string getDestinationRegionId() const { DARABONBA_PTR_GET_DEFAULT(destinationRegionId_, "") };
      inline Rule& setDestinationRegionId(string destinationRegionId) { DARABONBA_PTR_SET_VALUE(destinationRegionId_, destinationRegionId) };


      // destinationRetention Field Functions 
      bool hasDestinationRetention() const { return this->destinationRetention_ != nullptr;};
      void deleteDestinationRetention() { this->destinationRetention_ = nullptr;};
      inline int64_t getDestinationRetention() const { DARABONBA_PTR_GET_DEFAULT(destinationRetention_, 0L) };
      inline Rule& setDestinationRetention(int64_t destinationRetention) { DARABONBA_PTR_SET_VALUE(destinationRetention_, destinationRetention) };


      // disabled Field Functions 
      bool hasDisabled() const { return this->disabled_ != nullptr;};
      void deleteDisabled() { this->disabled_ = nullptr;};
      inline bool getDisabled() const { DARABONBA_PTR_GET_DEFAULT(disabled_, false) };
      inline Rule& setDisabled(bool disabled) { DARABONBA_PTR_SET_VALUE(disabled_, disabled) };


      // doCopy Field Functions 
      bool hasDoCopy() const { return this->doCopy_ != nullptr;};
      void deleteDoCopy() { this->doCopy_ = nullptr;};
      inline bool getDoCopy() const { DARABONBA_PTR_GET_DEFAULT(doCopy_, false) };
      inline Rule& setDoCopy(bool doCopy) { DARABONBA_PTR_SET_VALUE(doCopy_, doCopy) };


      // retention Field Functions 
      bool hasRetention() const { return this->retention_ != nullptr;};
      void deleteRetention() { this->retention_ = nullptr;};
      inline int64_t getRetention() const { DARABONBA_PTR_GET_DEFAULT(retention_, 0L) };
      inline Rule& setRetention(int64_t retention) { DARABONBA_PTR_SET_VALUE(retention_, retention) };


      // ruleName Field Functions 
      bool hasRuleName() const { return this->ruleName_ != nullptr;};
      void deleteRuleName() { this->ruleName_ = nullptr;};
      inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
      inline Rule& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


      // schedule Field Functions 
      bool hasSchedule() const { return this->schedule_ != nullptr;};
      void deleteSchedule() { this->schedule_ = nullptr;};
      inline string getSchedule() const { DARABONBA_PTR_GET_DEFAULT(schedule_, "") };
      inline Rule& setSchedule(string schedule) { DARABONBA_PTR_SET_VALUE(schedule_, schedule) };


    protected:
      // Backup type.
      shared_ptr<string> backupType_ {};
      // ID of the region for offsite replication.
      shared_ptr<string> destinationRegionId_ {};
      // Number of days to retain offsite backups.
      shared_ptr<int64_t> destinationRetention_ {};
      // Whether the rule is enabled.
      shared_ptr<bool> disabled_ {};
      // Whether to enable offsite replication.
      shared_ptr<bool> doCopy_ {};
      // Backup retention period.
      shared_ptr<int64_t> retention_ {};
      // Rule name.
      shared_ptr<string> ruleName_ {};
      // Backup strategy. Optional format: I|{startTime}|{interval}. This means that a backup task is executed every {interval} starting from {startTime}. Backup tasks for past times will not be executed. If the previous backup task has not been completed, the next backup task will not be triggered. For example, I|1631685600|P1D means a backup is performed every day starting from 2021-09-15 14:00:00.
      // 
      // - startTime: The start time of the backup, in UNIX time, in seconds.
      // - interval: ISO8601 time interval. For example, PT1H means an interval of one hour. P1D means an interval of one day.
      shared_ptr<string> schedule_ {};
    };

    virtual bool empty() const override { return this->backupType_ == nullptr
        && this->bucket_ == nullptr && this->changeListPath_ == nullptr && this->clusterId_ == nullptr && this->createTime_ == nullptr && this->crossAccountRoleName_ == nullptr
        && this->crossAccountType_ == nullptr && this->crossAccountUserId_ == nullptr && this->dataSourceId_ == nullptr && this->destDataSourceDetail_ == nullptr && this->destDataSourceId_ == nullptr
        && this->destSourceType_ == nullptr && this->detail_ == nullptr && this->disabled_ == nullptr && this->exclude_ == nullptr && this->fileSystemId_ == nullptr
        && this->include_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->keepLatestSnapshots_ == nullptr && this->options_ == nullptr
        && this->otsDetail_ == nullptr && this->path_ == nullptr && this->planName_ == nullptr && this->prefix_ == nullptr && this->retention_ == nullptr
        && this->rule_ == nullptr && this->schedule_ == nullptr && this->sourceType_ == nullptr && this->speedLimit_ == nullptr && this->udmRegionId_ == nullptr
        && this->vaultId_ == nullptr; };
    // backupType Field Functions 
    bool hasBackupType() const { return this->backupType_ != nullptr;};
    void deleteBackupType() { this->backupType_ = nullptr;};
    inline string getBackupType() const { DARABONBA_PTR_GET_DEFAULT(backupType_, "") };
    inline CreateBackupPlanRequest& setBackupType(string backupType) { DARABONBA_PTR_SET_VALUE(backupType_, backupType) };


    // bucket Field Functions 
    bool hasBucket() const { return this->bucket_ != nullptr;};
    void deleteBucket() { this->bucket_ = nullptr;};
    inline string getBucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
    inline CreateBackupPlanRequest& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


    // changeListPath Field Functions 
    bool hasChangeListPath() const { return this->changeListPath_ != nullptr;};
    void deleteChangeListPath() { this->changeListPath_ = nullptr;};
    inline string getChangeListPath() const { DARABONBA_PTR_GET_DEFAULT(changeListPath_, "") };
    inline CreateBackupPlanRequest& setChangeListPath(string changeListPath) { DARABONBA_PTR_SET_VALUE(changeListPath_, changeListPath) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CreateBackupPlanRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline CreateBackupPlanRequest& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // crossAccountRoleName Field Functions 
    bool hasCrossAccountRoleName() const { return this->crossAccountRoleName_ != nullptr;};
    void deleteCrossAccountRoleName() { this->crossAccountRoleName_ = nullptr;};
    inline string getCrossAccountRoleName() const { DARABONBA_PTR_GET_DEFAULT(crossAccountRoleName_, "") };
    inline CreateBackupPlanRequest& setCrossAccountRoleName(string crossAccountRoleName) { DARABONBA_PTR_SET_VALUE(crossAccountRoleName_, crossAccountRoleName) };


    // crossAccountType Field Functions 
    bool hasCrossAccountType() const { return this->crossAccountType_ != nullptr;};
    void deleteCrossAccountType() { this->crossAccountType_ = nullptr;};
    inline string getCrossAccountType() const { DARABONBA_PTR_GET_DEFAULT(crossAccountType_, "") };
    inline CreateBackupPlanRequest& setCrossAccountType(string crossAccountType) { DARABONBA_PTR_SET_VALUE(crossAccountType_, crossAccountType) };


    // crossAccountUserId Field Functions 
    bool hasCrossAccountUserId() const { return this->crossAccountUserId_ != nullptr;};
    void deleteCrossAccountUserId() { this->crossAccountUserId_ = nullptr;};
    inline int64_t getCrossAccountUserId() const { DARABONBA_PTR_GET_DEFAULT(crossAccountUserId_, 0L) };
    inline CreateBackupPlanRequest& setCrossAccountUserId(int64_t crossAccountUserId) { DARABONBA_PTR_SET_VALUE(crossAccountUserId_, crossAccountUserId) };


    // dataSourceId Field Functions 
    bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
    void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
    inline string getDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, "") };
    inline CreateBackupPlanRequest& setDataSourceId(string dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


    // destDataSourceDetail Field Functions 
    bool hasDestDataSourceDetail() const { return this->destDataSourceDetail_ != nullptr;};
    void deleteDestDataSourceDetail() { this->destDataSourceDetail_ = nullptr;};
    inline     const Darabonba::Json & getDestDataSourceDetail() const { DARABONBA_GET(destDataSourceDetail_) };
    Darabonba::Json & getDestDataSourceDetail() { DARABONBA_GET(destDataSourceDetail_) };
    inline CreateBackupPlanRequest& setDestDataSourceDetail(const Darabonba::Json & destDataSourceDetail) { DARABONBA_SET_VALUE(destDataSourceDetail_, destDataSourceDetail) };
    inline CreateBackupPlanRequest& setDestDataSourceDetail(Darabonba::Json && destDataSourceDetail) { DARABONBA_SET_RVALUE(destDataSourceDetail_, destDataSourceDetail) };


    // destDataSourceId Field Functions 
    bool hasDestDataSourceId() const { return this->destDataSourceId_ != nullptr;};
    void deleteDestDataSourceId() { this->destDataSourceId_ = nullptr;};
    inline string getDestDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(destDataSourceId_, "") };
    inline CreateBackupPlanRequest& setDestDataSourceId(string destDataSourceId) { DARABONBA_PTR_SET_VALUE(destDataSourceId_, destDataSourceId) };


    // destSourceType Field Functions 
    bool hasDestSourceType() const { return this->destSourceType_ != nullptr;};
    void deleteDestSourceType() { this->destSourceType_ = nullptr;};
    inline string getDestSourceType() const { DARABONBA_PTR_GET_DEFAULT(destSourceType_, "") };
    inline CreateBackupPlanRequest& setDestSourceType(string destSourceType) { DARABONBA_PTR_SET_VALUE(destSourceType_, destSourceType) };


    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline     const Darabonba::Json & getDetail() const { DARABONBA_GET(detail_) };
    Darabonba::Json & getDetail() { DARABONBA_GET(detail_) };
    inline CreateBackupPlanRequest& setDetail(const Darabonba::Json & detail) { DARABONBA_SET_VALUE(detail_, detail) };
    inline CreateBackupPlanRequest& setDetail(Darabonba::Json && detail) { DARABONBA_SET_RVALUE(detail_, detail) };


    // disabled Field Functions 
    bool hasDisabled() const { return this->disabled_ != nullptr;};
    void deleteDisabled() { this->disabled_ = nullptr;};
    inline bool getDisabled() const { DARABONBA_PTR_GET_DEFAULT(disabled_, false) };
    inline CreateBackupPlanRequest& setDisabled(bool disabled) { DARABONBA_PTR_SET_VALUE(disabled_, disabled) };


    // exclude Field Functions 
    bool hasExclude() const { return this->exclude_ != nullptr;};
    void deleteExclude() { this->exclude_ = nullptr;};
    inline string getExclude() const { DARABONBA_PTR_GET_DEFAULT(exclude_, "") };
    inline CreateBackupPlanRequest& setExclude(string exclude) { DARABONBA_PTR_SET_VALUE(exclude_, exclude) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline CreateBackupPlanRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // include Field Functions 
    bool hasInclude() const { return this->include_ != nullptr;};
    void deleteInclude() { this->include_ = nullptr;};
    inline string getInclude() const { DARABONBA_PTR_GET_DEFAULT(include_, "") };
    inline CreateBackupPlanRequest& setInclude(string include) { DARABONBA_PTR_SET_VALUE(include_, include) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateBackupPlanRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline CreateBackupPlanRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // keepLatestSnapshots Field Functions 
    bool hasKeepLatestSnapshots() const { return this->keepLatestSnapshots_ != nullptr;};
    void deleteKeepLatestSnapshots() { this->keepLatestSnapshots_ = nullptr;};
    inline int64_t getKeepLatestSnapshots() const { DARABONBA_PTR_GET_DEFAULT(keepLatestSnapshots_, 0L) };
    inline CreateBackupPlanRequest& setKeepLatestSnapshots(int64_t keepLatestSnapshots) { DARABONBA_PTR_SET_VALUE(keepLatestSnapshots_, keepLatestSnapshots) };


    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline string getOptions() const { DARABONBA_PTR_GET_DEFAULT(options_, "") };
    inline CreateBackupPlanRequest& setOptions(string options) { DARABONBA_PTR_SET_VALUE(options_, options) };


    // otsDetail Field Functions 
    bool hasOtsDetail() const { return this->otsDetail_ != nullptr;};
    void deleteOtsDetail() { this->otsDetail_ = nullptr;};
    inline const OtsDetail & getOtsDetail() const { DARABONBA_PTR_GET_CONST(otsDetail_, OtsDetail) };
    inline OtsDetail getOtsDetail() { DARABONBA_PTR_GET(otsDetail_, OtsDetail) };
    inline CreateBackupPlanRequest& setOtsDetail(const OtsDetail & otsDetail) { DARABONBA_PTR_SET_VALUE(otsDetail_, otsDetail) };
    inline CreateBackupPlanRequest& setOtsDetail(OtsDetail && otsDetail) { DARABONBA_PTR_SET_RVALUE(otsDetail_, otsDetail) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline const vector<string> & getPath() const { DARABONBA_PTR_GET_CONST(path_, vector<string>) };
    inline vector<string> getPath() { DARABONBA_PTR_GET(path_, vector<string>) };
    inline CreateBackupPlanRequest& setPath(const vector<string> & path) { DARABONBA_PTR_SET_VALUE(path_, path) };
    inline CreateBackupPlanRequest& setPath(vector<string> && path) { DARABONBA_PTR_SET_RVALUE(path_, path) };


    // planName Field Functions 
    bool hasPlanName() const { return this->planName_ != nullptr;};
    void deletePlanName() { this->planName_ = nullptr;};
    inline string getPlanName() const { DARABONBA_PTR_GET_DEFAULT(planName_, "") };
    inline CreateBackupPlanRequest& setPlanName(string planName) { DARABONBA_PTR_SET_VALUE(planName_, planName) };


    // prefix Field Functions 
    bool hasPrefix() const { return this->prefix_ != nullptr;};
    void deletePrefix() { this->prefix_ = nullptr;};
    inline string getPrefix() const { DARABONBA_PTR_GET_DEFAULT(prefix_, "") };
    inline CreateBackupPlanRequest& setPrefix(string prefix) { DARABONBA_PTR_SET_VALUE(prefix_, prefix) };


    // retention Field Functions 
    bool hasRetention() const { return this->retention_ != nullptr;};
    void deleteRetention() { this->retention_ = nullptr;};
    inline int64_t getRetention() const { DARABONBA_PTR_GET_DEFAULT(retention_, 0L) };
    inline CreateBackupPlanRequest& setRetention(int64_t retention) { DARABONBA_PTR_SET_VALUE(retention_, retention) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline const vector<CreateBackupPlanRequest::Rule> & getRule() const { DARABONBA_PTR_GET_CONST(rule_, vector<CreateBackupPlanRequest::Rule>) };
    inline vector<CreateBackupPlanRequest::Rule> getRule() { DARABONBA_PTR_GET(rule_, vector<CreateBackupPlanRequest::Rule>) };
    inline CreateBackupPlanRequest& setRule(const vector<CreateBackupPlanRequest::Rule> & rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };
    inline CreateBackupPlanRequest& setRule(vector<CreateBackupPlanRequest::Rule> && rule) { DARABONBA_PTR_SET_RVALUE(rule_, rule) };


    // schedule Field Functions 
    bool hasSchedule() const { return this->schedule_ != nullptr;};
    void deleteSchedule() { this->schedule_ = nullptr;};
    inline string getSchedule() const { DARABONBA_PTR_GET_DEFAULT(schedule_, "") };
    inline CreateBackupPlanRequest& setSchedule(string schedule) { DARABONBA_PTR_SET_VALUE(schedule_, schedule) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline CreateBackupPlanRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // speedLimit Field Functions 
    bool hasSpeedLimit() const { return this->speedLimit_ != nullptr;};
    void deleteSpeedLimit() { this->speedLimit_ = nullptr;};
    inline string getSpeedLimit() const { DARABONBA_PTR_GET_DEFAULT(speedLimit_, "") };
    inline CreateBackupPlanRequest& setSpeedLimit(string speedLimit) { DARABONBA_PTR_SET_VALUE(speedLimit_, speedLimit) };


    // udmRegionId Field Functions 
    bool hasUdmRegionId() const { return this->udmRegionId_ != nullptr;};
    void deleteUdmRegionId() { this->udmRegionId_ = nullptr;};
    inline string getUdmRegionId() const { DARABONBA_PTR_GET_DEFAULT(udmRegionId_, "") };
    inline CreateBackupPlanRequest& setUdmRegionId(string udmRegionId) { DARABONBA_PTR_SET_VALUE(udmRegionId_, udmRegionId) };


    // vaultId Field Functions 
    bool hasVaultId() const { return this->vaultId_ != nullptr;};
    void deleteVaultId() { this->vaultId_ = nullptr;};
    inline string getVaultId() const { DARABONBA_PTR_GET_DEFAULT(vaultId_, "") };
    inline CreateBackupPlanRequest& setVaultId(string vaultId) { DARABONBA_PTR_SET_VALUE(vaultId_, vaultId) };


  protected:
    // Backup type. Value: **COMPLETE**, indicating a full backup.
    shared_ptr<string> backupType_ {};
    // This parameter is required when **SourceType** is set to **OSS**. It represents the OSS bucket name.
    shared_ptr<string> bucket_ {};
    // Configuration for the incremental file synchronization list. (Required only for synchronization)
    shared_ptr<string> changeListPath_ {};
    // The ID of the client group that executes the data synchronization plan. This parameter is required only for data synchronization.
    shared_ptr<string> clusterId_ {};
    // This parameter is required when **SourceType** is set to **NAS**. It represents the creation time of the file system, in UNIX timestamp, in seconds.
    shared_ptr<int64_t> createTime_ {};
    // The role name created in the RAM of the original account for cross-account backup.
    shared_ptr<string> crossAccountRoleName_ {};
    // Cross-account backup type. Supported values:
    // - SELF_ACCOUNT: Backup within the same account
    // - CROSS_ACCOUNT: Cross-account backup
    shared_ptr<string> crossAccountType_ {};
    // The original account ID used for cross-account backup.
    shared_ptr<int64_t> crossAccountUserId_ {};
    // The ID of the data source. This parameter is required only for data synchronization.
    shared_ptr<string> dataSourceId_ {};
    // Destination data source details. (Required only for synchronization)
    Darabonba::Json destDataSourceDetail_ {};
    // Destination data source ID. (Required only for synchronization)
    shared_ptr<string> destDataSourceId_ {};
    // Destination data source type. (Required only for synchronization)
    shared_ptr<string> destSourceType_ {};
    // Details of the whole machine backup, in JSON string format.
    // 
    // * snapshotGroup: Whether to use a consistent snapshot group (only valid if all instance disks are ESSD).
    // * appConsistent: Whether to use application consistency (requires the use of preScriptPath and postScriptPath parameters).
    // * preScriptPath: Path to the freeze script.
    // * postScriptPath: Path to the thaw script.
    Darabonba::Json detail_ {};
    // Is the plan disabled by default
    shared_ptr<bool> disabled_ {};
    // This parameter is required only when **SourceType** is set to **ECS_FILE**. It specifies the path that should not be backed up, meaning all files under this path will not be included in the backup. The maximum length is 255 characters.
    shared_ptr<string> exclude_ {};
    // This parameter is required when **SourceType** is set to **NAS**. It represents the file system ID.
    shared_ptr<string> fileSystemId_ {};
    // This parameter is required when **SourceType** is set to **ECS_FILE**. It represents the path to be backed up, and all files under this path will be backed up. Supports up to 255 characters.
    shared_ptr<string> include_ {};
    // This parameter is required when **SourceType** is set to **ECS_FILE**. It represents the ECS instance ID.
    shared_ptr<string> instanceId_ {};
    // Table store instance name.
    shared_ptr<string> instanceName_ {};
    // Whether to enable retaining at least one backup version.
    // - 0 - Do not retain
    // - 1 - Retain
    shared_ptr<int64_t> keepLatestSnapshots_ {};
    // This parameter is required when **SourceType** is set to **ECS_FILE**. It indicates whether to use the Windows system VSS to define the backup path.
    // 
    // - This feature only supports Windows type ECS instances.
    // - If there are data changes in the backup source and you need to ensure consistency between the backup data and the source data, you can configure it as `["UseVSS":true]`.
    // - After choosing to use VSS, multiple file directories cannot be backed up simultaneously.
    shared_ptr<string> options_ {};
    // The details about the Tablestore instance.
    shared_ptr<OtsDetail> otsDetail_ {};
    // Backup paths.
    shared_ptr<vector<string>> path_ {};
    // Name of the backup plan. 1 to 64 characters. The name must be unique for each data source type within a single backup vault.
    shared_ptr<string> planName_ {};
    // This parameter is required when **SourceType** is set to **OSS**. It represents the backup prefix. When specified, only objects matching the prefix are backed up.
    shared_ptr<string> prefix_ {};
    // Number of days to retain the backup, with a minimum value of 1, in days.
    shared_ptr<int64_t> retention_ {};
    // Backup plan rules.
    shared_ptr<vector<CreateBackupPlanRequest::Rule>> rule_ {};
    // Backup policy. Optional format: `I|{startTime}|{interval}`. This indicates that a backup task will be executed every `{interval}` starting from `{startTime}`. It does not compensate for missed backup tasks due to past time. If the previous backup task has not been completed, the next backup task will not be triggered. For example, `I|1631685600|P1D` means a backup is performed every day starting from 2021-09-15 14:00:00.
    // 
    // - **startTime**: Start time of the backup, in UNIX timestamp, in seconds.
    // - **interval**: ISO8601 time interval. For example, PT1H indicates an interval of one hour, and P1D indicates an interval of one day.
    shared_ptr<string> schedule_ {};
    // The type of the data source. Valid values:
    // 
    // *   **ECS_FILE**: Elastic Compute Service (ECS) files
    // *   **OSS**: Object Storage Service (OSS) buckets
    // *   **NAS**: File Storage NAS (NAS) file systems
    // *   **OTS**: Tablestore instances
    // *   **UDM_ECS**: ECS instances
    // *   **SYNC**: data synchronization
    // 
    // This parameter is required.
    shared_ptr<string> sourceType_ {};
    // This parameter is required when **SourceType** is set to **ECS_FILE**. It represents the backup traffic control. Format: `{start}:{end}:{bandwidth}`. Multiple traffic control configurations are separated by |, and the configured times should not overlap.
    // 
    // - **start**: Start hour.
    // - **end**: End hour.
    // - **bandwidth**: Limit rate, in KB/s.
    shared_ptr<string> speedLimit_ {};
    // Region where the whole machine backup instance is located.
    shared_ptr<string> udmRegionId_ {};
    // Backup vault ID.
    shared_ptr<string> vaultId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
