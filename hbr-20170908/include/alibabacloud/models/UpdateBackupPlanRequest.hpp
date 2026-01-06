// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEBACKUPPLANREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEBACKUPPLANREQUEST_HPP_
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
  class UpdateBackupPlanRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateBackupPlanRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChangeListPath, changeListPath_);
      DARABONBA_ANY_TO_JSON(Detail, detail_);
      DARABONBA_PTR_TO_JSON(Edition, edition_);
      DARABONBA_PTR_TO_JSON(Exclude, exclude_);
      DARABONBA_PTR_TO_JSON(Include, include_);
      DARABONBA_PTR_TO_JSON(KeepLatestSnapshots, keepLatestSnapshots_);
      DARABONBA_PTR_TO_JSON(Options, options_);
      DARABONBA_PTR_TO_JSON(OtsDetail, otsDetail_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(PlanId, planId_);
      DARABONBA_PTR_TO_JSON(PlanName, planName_);
      DARABONBA_PTR_TO_JSON(Prefix, prefix_);
      DARABONBA_PTR_TO_JSON(Retention, retention_);
      DARABONBA_PTR_TO_JSON(Rule, rule_);
      DARABONBA_PTR_TO_JSON(Schedule, schedule_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(SpeedLimit, speedLimit_);
      DARABONBA_PTR_TO_JSON(UpdatePaths, updatePaths_);
      DARABONBA_PTR_TO_JSON(VaultId, vaultId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateBackupPlanRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChangeListPath, changeListPath_);
      DARABONBA_ANY_FROM_JSON(Detail, detail_);
      DARABONBA_PTR_FROM_JSON(Edition, edition_);
      DARABONBA_PTR_FROM_JSON(Exclude, exclude_);
      DARABONBA_PTR_FROM_JSON(Include, include_);
      DARABONBA_PTR_FROM_JSON(KeepLatestSnapshots, keepLatestSnapshots_);
      DARABONBA_PTR_FROM_JSON(Options, options_);
      DARABONBA_PTR_FROM_JSON(OtsDetail, otsDetail_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(PlanId, planId_);
      DARABONBA_PTR_FROM_JSON(PlanName, planName_);
      DARABONBA_PTR_FROM_JSON(Prefix, prefix_);
      DARABONBA_PTR_FROM_JSON(Retention, retention_);
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
      DARABONBA_PTR_FROM_JSON(Schedule, schedule_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(SpeedLimit, speedLimit_);
      DARABONBA_PTR_FROM_JSON(UpdatePaths, updatePaths_);
      DARABONBA_PTR_FROM_JSON(VaultId, vaultId_);
    };
    UpdateBackupPlanRequest() = default ;
    UpdateBackupPlanRequest(const UpdateBackupPlanRequest &) = default ;
    UpdateBackupPlanRequest(UpdateBackupPlanRequest &&) = default ;
    UpdateBackupPlanRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateBackupPlanRequest() = default ;
    UpdateBackupPlanRequest& operator=(const UpdateBackupPlanRequest &) = default ;
    UpdateBackupPlanRequest& operator=(UpdateBackupPlanRequest &&) = default ;
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
      // The backup type. Valid value: **COMPLETE**, which indicates full backup.
      shared_ptr<string> backupType_ {};
      // The ID of the region where the remote backup vault resides.
      shared_ptr<string> destinationRegionId_ {};
      // The retention period of the backup data. Unit: days.
      shared_ptr<int64_t> destinationRetention_ {};
      // Specifies whether to disable the policy.
      shared_ptr<bool> disabled_ {};
      // Specifies whether to enable remote replication.
      shared_ptr<bool> doCopy_ {};
      // The retention period of the backup data. Minimum value: 1. Unit: days.
      shared_ptr<int64_t> retention_ {};
      // The name of the backup policy.
      shared_ptr<string> ruleName_ {};
      // The backup policy. Format: I|{startTime}|{interval}. The system runs the first backup job at a point in time that is specified in the {startTime} parameter and the subsequent backup jobs at an interval that is specified in the {interval} parameter. The system does not run a backup job before the specified point in time. Each backup job, except the first one, starts only after the previous backup job is completed. For example, I|1631685600|P1D specifies that the system runs the first backup job at 14:00:00 on September 15, 2021 and the subsequent backup jobs once a day.
      // 
      // startTime: the time at which the system starts to run a backup job. The time must follow the UNIX time format. Unit: seconds. interval: the interval at which the system runs a backup job. The interval must follow the ISO 8601 standard. For example, PT1H specifies an interval of one hour. P1D specifies an interval of one day.
      shared_ptr<string> schedule_ {};
    };

    virtual bool empty() const override { return this->changeListPath_ == nullptr
        && this->detail_ == nullptr && this->edition_ == nullptr && this->exclude_ == nullptr && this->include_ == nullptr && this->keepLatestSnapshots_ == nullptr
        && this->options_ == nullptr && this->otsDetail_ == nullptr && this->path_ == nullptr && this->planId_ == nullptr && this->planName_ == nullptr
        && this->prefix_ == nullptr && this->retention_ == nullptr && this->rule_ == nullptr && this->schedule_ == nullptr && this->sourceType_ == nullptr
        && this->speedLimit_ == nullptr && this->updatePaths_ == nullptr && this->vaultId_ == nullptr; };
    // changeListPath Field Functions 
    bool hasChangeListPath() const { return this->changeListPath_ != nullptr;};
    void deleteChangeListPath() { this->changeListPath_ = nullptr;};
    inline string getChangeListPath() const { DARABONBA_PTR_GET_DEFAULT(changeListPath_, "") };
    inline UpdateBackupPlanRequest& setChangeListPath(string changeListPath) { DARABONBA_PTR_SET_VALUE(changeListPath_, changeListPath) };


    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline     const Darabonba::Json & getDetail() const { DARABONBA_GET(detail_) };
    Darabonba::Json & getDetail() { DARABONBA_GET(detail_) };
    inline UpdateBackupPlanRequest& setDetail(const Darabonba::Json & detail) { DARABONBA_SET_VALUE(detail_, detail) };
    inline UpdateBackupPlanRequest& setDetail(Darabonba::Json && detail) { DARABONBA_SET_RVALUE(detail_, detail) };


    // edition Field Functions 
    bool hasEdition() const { return this->edition_ != nullptr;};
    void deleteEdition() { this->edition_ = nullptr;};
    inline string getEdition() const { DARABONBA_PTR_GET_DEFAULT(edition_, "") };
    inline UpdateBackupPlanRequest& setEdition(string edition) { DARABONBA_PTR_SET_VALUE(edition_, edition) };


    // exclude Field Functions 
    bool hasExclude() const { return this->exclude_ != nullptr;};
    void deleteExclude() { this->exclude_ = nullptr;};
    inline string getExclude() const { DARABONBA_PTR_GET_DEFAULT(exclude_, "") };
    inline UpdateBackupPlanRequest& setExclude(string exclude) { DARABONBA_PTR_SET_VALUE(exclude_, exclude) };


    // include Field Functions 
    bool hasInclude() const { return this->include_ != nullptr;};
    void deleteInclude() { this->include_ = nullptr;};
    inline string getInclude() const { DARABONBA_PTR_GET_DEFAULT(include_, "") };
    inline UpdateBackupPlanRequest& setInclude(string include) { DARABONBA_PTR_SET_VALUE(include_, include) };


    // keepLatestSnapshots Field Functions 
    bool hasKeepLatestSnapshots() const { return this->keepLatestSnapshots_ != nullptr;};
    void deleteKeepLatestSnapshots() { this->keepLatestSnapshots_ = nullptr;};
    inline int64_t getKeepLatestSnapshots() const { DARABONBA_PTR_GET_DEFAULT(keepLatestSnapshots_, 0L) };
    inline UpdateBackupPlanRequest& setKeepLatestSnapshots(int64_t keepLatestSnapshots) { DARABONBA_PTR_SET_VALUE(keepLatestSnapshots_, keepLatestSnapshots) };


    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline string getOptions() const { DARABONBA_PTR_GET_DEFAULT(options_, "") };
    inline UpdateBackupPlanRequest& setOptions(string options) { DARABONBA_PTR_SET_VALUE(options_, options) };


    // otsDetail Field Functions 
    bool hasOtsDetail() const { return this->otsDetail_ != nullptr;};
    void deleteOtsDetail() { this->otsDetail_ = nullptr;};
    inline const OtsDetail & getOtsDetail() const { DARABONBA_PTR_GET_CONST(otsDetail_, OtsDetail) };
    inline OtsDetail getOtsDetail() { DARABONBA_PTR_GET(otsDetail_, OtsDetail) };
    inline UpdateBackupPlanRequest& setOtsDetail(const OtsDetail & otsDetail) { DARABONBA_PTR_SET_VALUE(otsDetail_, otsDetail) };
    inline UpdateBackupPlanRequest& setOtsDetail(OtsDetail && otsDetail) { DARABONBA_PTR_SET_RVALUE(otsDetail_, otsDetail) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline const vector<string> & getPath() const { DARABONBA_PTR_GET_CONST(path_, vector<string>) };
    inline vector<string> getPath() { DARABONBA_PTR_GET(path_, vector<string>) };
    inline UpdateBackupPlanRequest& setPath(const vector<string> & path) { DARABONBA_PTR_SET_VALUE(path_, path) };
    inline UpdateBackupPlanRequest& setPath(vector<string> && path) { DARABONBA_PTR_SET_RVALUE(path_, path) };


    // planId Field Functions 
    bool hasPlanId() const { return this->planId_ != nullptr;};
    void deletePlanId() { this->planId_ = nullptr;};
    inline string getPlanId() const { DARABONBA_PTR_GET_DEFAULT(planId_, "") };
    inline UpdateBackupPlanRequest& setPlanId(string planId) { DARABONBA_PTR_SET_VALUE(planId_, planId) };


    // planName Field Functions 
    bool hasPlanName() const { return this->planName_ != nullptr;};
    void deletePlanName() { this->planName_ = nullptr;};
    inline string getPlanName() const { DARABONBA_PTR_GET_DEFAULT(planName_, "") };
    inline UpdateBackupPlanRequest& setPlanName(string planName) { DARABONBA_PTR_SET_VALUE(planName_, planName) };


    // prefix Field Functions 
    bool hasPrefix() const { return this->prefix_ != nullptr;};
    void deletePrefix() { this->prefix_ = nullptr;};
    inline string getPrefix() const { DARABONBA_PTR_GET_DEFAULT(prefix_, "") };
    inline UpdateBackupPlanRequest& setPrefix(string prefix) { DARABONBA_PTR_SET_VALUE(prefix_, prefix) };


    // retention Field Functions 
    bool hasRetention() const { return this->retention_ != nullptr;};
    void deleteRetention() { this->retention_ = nullptr;};
    inline int64_t getRetention() const { DARABONBA_PTR_GET_DEFAULT(retention_, 0L) };
    inline UpdateBackupPlanRequest& setRetention(int64_t retention) { DARABONBA_PTR_SET_VALUE(retention_, retention) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline const vector<UpdateBackupPlanRequest::Rule> & getRule() const { DARABONBA_PTR_GET_CONST(rule_, vector<UpdateBackupPlanRequest::Rule>) };
    inline vector<UpdateBackupPlanRequest::Rule> getRule() { DARABONBA_PTR_GET(rule_, vector<UpdateBackupPlanRequest::Rule>) };
    inline UpdateBackupPlanRequest& setRule(const vector<UpdateBackupPlanRequest::Rule> & rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };
    inline UpdateBackupPlanRequest& setRule(vector<UpdateBackupPlanRequest::Rule> && rule) { DARABONBA_PTR_SET_RVALUE(rule_, rule) };


    // schedule Field Functions 
    bool hasSchedule() const { return this->schedule_ != nullptr;};
    void deleteSchedule() { this->schedule_ = nullptr;};
    inline string getSchedule() const { DARABONBA_PTR_GET_DEFAULT(schedule_, "") };
    inline UpdateBackupPlanRequest& setSchedule(string schedule) { DARABONBA_PTR_SET_VALUE(schedule_, schedule) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline UpdateBackupPlanRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // speedLimit Field Functions 
    bool hasSpeedLimit() const { return this->speedLimit_ != nullptr;};
    void deleteSpeedLimit() { this->speedLimit_ = nullptr;};
    inline string getSpeedLimit() const { DARABONBA_PTR_GET_DEFAULT(speedLimit_, "") };
    inline UpdateBackupPlanRequest& setSpeedLimit(string speedLimit) { DARABONBA_PTR_SET_VALUE(speedLimit_, speedLimit) };


    // updatePaths Field Functions 
    bool hasUpdatePaths() const { return this->updatePaths_ != nullptr;};
    void deleteUpdatePaths() { this->updatePaths_ = nullptr;};
    inline bool getUpdatePaths() const { DARABONBA_PTR_GET_DEFAULT(updatePaths_, false) };
    inline UpdateBackupPlanRequest& setUpdatePaths(bool updatePaths) { DARABONBA_PTR_SET_VALUE(updatePaths_, updatePaths) };


    // vaultId Field Functions 
    bool hasVaultId() const { return this->vaultId_ != nullptr;};
    void deleteVaultId() { this->vaultId_ = nullptr;};
    inline string getVaultId() const { DARABONBA_PTR_GET_DEFAULT(vaultId_, "") };
    inline UpdateBackupPlanRequest& setVaultId(string vaultId) { DARABONBA_PTR_SET_VALUE(vaultId_, vaultId) };


  protected:
    // The configurations of the incremental file synchronization. This parameter is required for data synchronization only.
    shared_ptr<string> changeListPath_ {};
    // The details about ECS instance backup. The value is a JSON string.
    // 
    // *   snapshotGroup: specifies whether to use a snapshot-consistent group. This parameter is valid only if all disks of the ECS instance are enhanced SSDs (ESSDs).
    // *   appConsistent: specifies whether to enable application consistency. If you set this parameter to true, you must also specify the preScriptPath and postScriptPath parameters.
    // *   preScriptPath: the path to the pre-freeze scripts.
    // *   postScriptPath: the path to the post-thaw scripts.
    Darabonba::Json detail_ {};
    shared_ptr<string> edition_ {};
    // This parameter is required only if the **SourceType** parameter is set to **ECS_FILE**. This parameter specifies the paths to the files that are excluded from the backup job. The value must be 1 to 255 characters in length.
    shared_ptr<string> exclude_ {};
    // This parameter is required only if the **SourceType** parameter is set to **ECS_FILE**. This parameter specifies the paths to the files that you want to back up. The value must be 1 to 255 characters in length.
    shared_ptr<string> include_ {};
    // Specifies whether to enable the feature of keeping at least one backup version. Valid values:
    // 
    // *   0: The feature is disabled.
    // *   1: The feature is enabled.
    shared_ptr<int64_t> keepLatestSnapshots_ {};
    // This parameter is required only if the **SourceType** parameter is set to **ECS_FILE**. This parameter specifies whether to use Windows Volume Shadow Copy Service (VSS) to define a source path.
    // 
    // *   This parameter is available only for Windows ECS instances.
    // *   If data changes occur in the backup source, the source data must be the same as the data to be backed up before you can set this parameter to `["UseVSS":true]`.
    // *   If you use VSS, you cannot back up data from multiple directories.
    shared_ptr<string> options_ {};
    // The details about the Tablestore instance.
    shared_ptr<OtsDetail> otsDetail_ {};
    // The source paths.
    shared_ptr<vector<string>> path_ {};
    // The ID of the backup plan.
    // 
    // This parameter is required.
    shared_ptr<string> planId_ {};
    // The name of the backup plan.
    shared_ptr<string> planName_ {};
    // This parameter is required only if the **SourceType** parameter is set to **OSS**. This parameter specifies the prefix of objects that you want to back up. After a prefix is specified, only objects whose names start with the prefix are backed up.
    shared_ptr<string> prefix_ {};
    // The retention period of the backup data. Minimum value: 1. Unit: days.
    shared_ptr<int64_t> retention_ {};
    // The rule of the backup plan.
    shared_ptr<vector<UpdateBackupPlanRequest::Rule>> rule_ {};
    // The backup policy. Format: `I|{startTime}|{interval}`. The system runs the first backup job at a point in time that is specified in the `{startTime}` parameter and the subsequent backup jobs at an interval that is specified in the `{interval}` parameter. The system does not run a backup job before the specified point in time. Each backup job, except the first one, starts only after the previous backup job is completed. For example, `I|1631685600|P1D` specifies that the system runs the first backup job at 14:00:00 on September 15, 2021 and the subsequent backup jobs once a day.
    // 
    // *   **startTime**: the time at which the system starts to run a backup job. The time must follow the UNIX time format. Unit: seconds.
    // *   **interval**: the interval at which the system runs a backup job. The interval must follow the ISO 8601 standard. For example, PT1H specifies an interval of one hour. P1D specifies an interval of one day.
    shared_ptr<string> schedule_ {};
    // The type of the data source. Valid values:
    // 
    // *   **ECS_FILE**: Elastic Compute Service (ECS) files
    // *   **OSS**: Object Storage Service (OSS) buckets
    // *   **NAS**: Apsara File Storage NAS file systems
    // *   **OTS**: Tablestore instances
    // *   **UDM_ECS**: ECS instances
    shared_ptr<string> sourceType_ {};
    // This parameter is required only if the **SourceType** parameter is set to **ECS_FILE**. This parameter specifies the throttling rules. To ensure business continuity, you can limit the bandwidth that is used for file backup during peak hours. Format: `{start}|{end}|{bandwidth}`. Separate multiple throttling rules with vertical bars (|). A specified time range cannot overlap with another time range.
    // 
    // *   **start**: the start hour
    // *   **end**: the end hour.
    // *   **bandwidth**: the bandwidth. Unit: KB/s.
    shared_ptr<string> speedLimit_ {};
    // Specifies whether to update the source path if the backup source is empty. Valid values:
    // 
    // *   true: The system replaces the original source path with the specified source path.
    // *   false: The system does not update the original source path. The system backs up data based on the source path that you specified when you created the backup plan.
    shared_ptr<bool> updatePaths_ {};
    // The ID of the backup vault.
    shared_ptr<string> vaultId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
