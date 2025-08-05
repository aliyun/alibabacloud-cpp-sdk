// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEBACKUPPLANREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEBACKUPPLANREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateBackupPlanRequestRule.hpp>
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
    virtual bool empty() const override { this->changeListPath_ != nullptr
        && this->detail_ != nullptr && this->exclude_ != nullptr && this->include_ != nullptr && this->keepLatestSnapshots_ != nullptr && this->options_ != nullptr
        && this->otsDetail_ != nullptr && this->path_ != nullptr && this->planId_ != nullptr && this->planName_ != nullptr && this->prefix_ != nullptr
        && this->retention_ != nullptr && this->rule_ != nullptr && this->schedule_ != nullptr && this->sourceType_ != nullptr && this->speedLimit_ != nullptr
        && this->updatePaths_ != nullptr && this->vaultId_ != nullptr; };
    // changeListPath Field Functions 
    bool hasChangeListPath() const { return this->changeListPath_ != nullptr;};
    void deleteChangeListPath() { this->changeListPath_ = nullptr;};
    inline string changeListPath() const { DARABONBA_PTR_GET_DEFAULT(changeListPath_, "") };
    inline UpdateBackupPlanRequest& setChangeListPath(string changeListPath) { DARABONBA_PTR_SET_VALUE(changeListPath_, changeListPath) };


    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline     const Darabonba::Json & detail() const { DARABONBA_GET(detail_) };
    Darabonba::Json & detail() { DARABONBA_GET(detail_) };
    inline UpdateBackupPlanRequest& setDetail(const Darabonba::Json & detail) { DARABONBA_SET_VALUE(detail_, detail) };
    inline UpdateBackupPlanRequest& setDetail(Darabonba::Json & detail) { DARABONBA_SET_RVALUE(detail_, detail) };


    // exclude Field Functions 
    bool hasExclude() const { return this->exclude_ != nullptr;};
    void deleteExclude() { this->exclude_ = nullptr;};
    inline string exclude() const { DARABONBA_PTR_GET_DEFAULT(exclude_, "") };
    inline UpdateBackupPlanRequest& setExclude(string exclude) { DARABONBA_PTR_SET_VALUE(exclude_, exclude) };


    // include Field Functions 
    bool hasInclude() const { return this->include_ != nullptr;};
    void deleteInclude() { this->include_ = nullptr;};
    inline string include() const { DARABONBA_PTR_GET_DEFAULT(include_, "") };
    inline UpdateBackupPlanRequest& setInclude(string include) { DARABONBA_PTR_SET_VALUE(include_, include) };


    // keepLatestSnapshots Field Functions 
    bool hasKeepLatestSnapshots() const { return this->keepLatestSnapshots_ != nullptr;};
    void deleteKeepLatestSnapshots() { this->keepLatestSnapshots_ = nullptr;};
    inline int64_t keepLatestSnapshots() const { DARABONBA_PTR_GET_DEFAULT(keepLatestSnapshots_, 0L) };
    inline UpdateBackupPlanRequest& setKeepLatestSnapshots(int64_t keepLatestSnapshots) { DARABONBA_PTR_SET_VALUE(keepLatestSnapshots_, keepLatestSnapshots) };


    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline string options() const { DARABONBA_PTR_GET_DEFAULT(options_, "") };
    inline UpdateBackupPlanRequest& setOptions(string options) { DARABONBA_PTR_SET_VALUE(options_, options) };


    // otsDetail Field Functions 
    bool hasOtsDetail() const { return this->otsDetail_ != nullptr;};
    void deleteOtsDetail() { this->otsDetail_ = nullptr;};
    inline const OtsDetail & otsDetail() const { DARABONBA_PTR_GET_CONST(otsDetail_, OtsDetail) };
    inline OtsDetail otsDetail() { DARABONBA_PTR_GET(otsDetail_, OtsDetail) };
    inline UpdateBackupPlanRequest& setOtsDetail(const OtsDetail & otsDetail) { DARABONBA_PTR_SET_VALUE(otsDetail_, otsDetail) };
    inline UpdateBackupPlanRequest& setOtsDetail(OtsDetail && otsDetail) { DARABONBA_PTR_SET_RVALUE(otsDetail_, otsDetail) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline const vector<string> & path() const { DARABONBA_PTR_GET_CONST(path_, vector<string>) };
    inline vector<string> path() { DARABONBA_PTR_GET(path_, vector<string>) };
    inline UpdateBackupPlanRequest& setPath(const vector<string> & path) { DARABONBA_PTR_SET_VALUE(path_, path) };
    inline UpdateBackupPlanRequest& setPath(vector<string> && path) { DARABONBA_PTR_SET_RVALUE(path_, path) };


    // planId Field Functions 
    bool hasPlanId() const { return this->planId_ != nullptr;};
    void deletePlanId() { this->planId_ = nullptr;};
    inline string planId() const { DARABONBA_PTR_GET_DEFAULT(planId_, "") };
    inline UpdateBackupPlanRequest& setPlanId(string planId) { DARABONBA_PTR_SET_VALUE(planId_, planId) };


    // planName Field Functions 
    bool hasPlanName() const { return this->planName_ != nullptr;};
    void deletePlanName() { this->planName_ = nullptr;};
    inline string planName() const { DARABONBA_PTR_GET_DEFAULT(planName_, "") };
    inline UpdateBackupPlanRequest& setPlanName(string planName) { DARABONBA_PTR_SET_VALUE(planName_, planName) };


    // prefix Field Functions 
    bool hasPrefix() const { return this->prefix_ != nullptr;};
    void deletePrefix() { this->prefix_ = nullptr;};
    inline string prefix() const { DARABONBA_PTR_GET_DEFAULT(prefix_, "") };
    inline UpdateBackupPlanRequest& setPrefix(string prefix) { DARABONBA_PTR_SET_VALUE(prefix_, prefix) };


    // retention Field Functions 
    bool hasRetention() const { return this->retention_ != nullptr;};
    void deleteRetention() { this->retention_ = nullptr;};
    inline int64_t retention() const { DARABONBA_PTR_GET_DEFAULT(retention_, 0L) };
    inline UpdateBackupPlanRequest& setRetention(int64_t retention) { DARABONBA_PTR_SET_VALUE(retention_, retention) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline const vector<UpdateBackupPlanRequestRule> & rule() const { DARABONBA_PTR_GET_CONST(rule_, vector<UpdateBackupPlanRequestRule>) };
    inline vector<UpdateBackupPlanRequestRule> rule() { DARABONBA_PTR_GET(rule_, vector<UpdateBackupPlanRequestRule>) };
    inline UpdateBackupPlanRequest& setRule(const vector<UpdateBackupPlanRequestRule> & rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };
    inline UpdateBackupPlanRequest& setRule(vector<UpdateBackupPlanRequestRule> && rule) { DARABONBA_PTR_SET_RVALUE(rule_, rule) };


    // schedule Field Functions 
    bool hasSchedule() const { return this->schedule_ != nullptr;};
    void deleteSchedule() { this->schedule_ = nullptr;};
    inline string schedule() const { DARABONBA_PTR_GET_DEFAULT(schedule_, "") };
    inline UpdateBackupPlanRequest& setSchedule(string schedule) { DARABONBA_PTR_SET_VALUE(schedule_, schedule) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline UpdateBackupPlanRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // speedLimit Field Functions 
    bool hasSpeedLimit() const { return this->speedLimit_ != nullptr;};
    void deleteSpeedLimit() { this->speedLimit_ = nullptr;};
    inline string speedLimit() const { DARABONBA_PTR_GET_DEFAULT(speedLimit_, "") };
    inline UpdateBackupPlanRequest& setSpeedLimit(string speedLimit) { DARABONBA_PTR_SET_VALUE(speedLimit_, speedLimit) };


    // updatePaths Field Functions 
    bool hasUpdatePaths() const { return this->updatePaths_ != nullptr;};
    void deleteUpdatePaths() { this->updatePaths_ = nullptr;};
    inline bool updatePaths() const { DARABONBA_PTR_GET_DEFAULT(updatePaths_, false) };
    inline UpdateBackupPlanRequest& setUpdatePaths(bool updatePaths) { DARABONBA_PTR_SET_VALUE(updatePaths_, updatePaths) };


    // vaultId Field Functions 
    bool hasVaultId() const { return this->vaultId_ != nullptr;};
    void deleteVaultId() { this->vaultId_ = nullptr;};
    inline string vaultId() const { DARABONBA_PTR_GET_DEFAULT(vaultId_, "") };
    inline UpdateBackupPlanRequest& setVaultId(string vaultId) { DARABONBA_PTR_SET_VALUE(vaultId_, vaultId) };


  protected:
    // The configurations of the incremental file synchronization. This parameter is required for data synchronization only.
    std::shared_ptr<string> changeListPath_ = nullptr;
    // The details about ECS instance backup. The value is a JSON string.
    // 
    // *   snapshotGroup: specifies whether to use a snapshot-consistent group. This parameter is valid only if all disks of the ECS instance are enhanced SSDs (ESSDs).
    // *   appConsistent: specifies whether to enable application consistency. If you set this parameter to true, you must also specify the preScriptPath and postScriptPath parameters.
    // *   preScriptPath: the path to the pre-freeze scripts.
    // *   postScriptPath: the path to the post-thaw scripts.
    Darabonba::Json detail_ = nullptr;
    // This parameter is required only if the **SourceType** parameter is set to **ECS_FILE**. This parameter specifies the paths to the files that are excluded from the backup job. The value must be 1 to 255 characters in length.
    std::shared_ptr<string> exclude_ = nullptr;
    // This parameter is required only if the **SourceType** parameter is set to **ECS_FILE**. This parameter specifies the paths to the files that you want to back up. The value must be 1 to 255 characters in length.
    std::shared_ptr<string> include_ = nullptr;
    // Specifies whether to enable the feature of keeping at least one backup version. Valid values:
    // 
    // *   0: The feature is disabled.
    // *   1: The feature is enabled.
    std::shared_ptr<int64_t> keepLatestSnapshots_ = nullptr;
    // This parameter is required only if the **SourceType** parameter is set to **ECS_FILE**. This parameter specifies whether to use Windows Volume Shadow Copy Service (VSS) to define a source path.
    // 
    // *   This parameter is available only for Windows ECS instances.
    // *   If data changes occur in the backup source, the source data must be the same as the data to be backed up before you can set this parameter to `["UseVSS":true]`.
    // *   If you use VSS, you cannot back up data from multiple directories.
    std::shared_ptr<string> options_ = nullptr;
    // The details about the Tablestore instance.
    std::shared_ptr<OtsDetail> otsDetail_ = nullptr;
    // The source paths.
    std::shared_ptr<vector<string>> path_ = nullptr;
    // The ID of the backup plan.
    // 
    // This parameter is required.
    std::shared_ptr<string> planId_ = nullptr;
    // The name of the backup plan.
    std::shared_ptr<string> planName_ = nullptr;
    // This parameter is required only if the **SourceType** parameter is set to **OSS**. This parameter specifies the prefix of objects that you want to back up. After a prefix is specified, only objects whose names start with the prefix are backed up.
    std::shared_ptr<string> prefix_ = nullptr;
    // The retention period of the backup data. Minimum value: 1. Unit: days.
    std::shared_ptr<int64_t> retention_ = nullptr;
    // The rule of the backup plan.
    std::shared_ptr<vector<UpdateBackupPlanRequestRule>> rule_ = nullptr;
    // The backup policy. Format: `I|{startTime}|{interval}`. The system runs the first backup job at a point in time that is specified in the `{startTime}` parameter and the subsequent backup jobs at an interval that is specified in the `{interval}` parameter. The system does not run a backup job before the specified point in time. Each backup job, except the first one, starts only after the previous backup job is completed. For example, `I|1631685600|P1D` specifies that the system runs the first backup job at 14:00:00 on September 15, 2021 and the subsequent backup jobs once a day.
    // 
    // *   **startTime**: the time at which the system starts to run a backup job. The time must follow the UNIX time format. Unit: seconds.
    // *   **interval**: the interval at which the system runs a backup job. The interval must follow the ISO 8601 standard. For example, PT1H specifies an interval of one hour. P1D specifies an interval of one day.
    std::shared_ptr<string> schedule_ = nullptr;
    // The type of the data source. Valid values:
    // 
    // *   **ECS_FILE**: Elastic Compute Service (ECS) files
    // *   **OSS**: Object Storage Service (OSS) buckets
    // *   **NAS**: Apsara File Storage NAS file systems
    // *   **OTS**: Tablestore instances
    // *   **UDM_ECS**: ECS instances
    std::shared_ptr<string> sourceType_ = nullptr;
    // This parameter is required only if the **SourceType** parameter is set to **ECS_FILE**. This parameter specifies the throttling rules. To ensure business continuity, you can limit the bandwidth that is used for file backup during peak hours. Format: `{start}|{end}|{bandwidth}`. Separate multiple throttling rules with vertical bars (|). A specified time range cannot overlap with another time range.
    // 
    // *   **start**: the start hour
    // *   **end**: the end hour.
    // *   **bandwidth**: the bandwidth. Unit: KB/s.
    std::shared_ptr<string> speedLimit_ = nullptr;
    // Specifies whether to update the source path if the backup source is empty. Valid values:
    // 
    // *   true: The system replaces the original source path with the specified source path.
    // *   false: The system does not update the original source path. The system backs up data based on the source path that you specified when you created the backup plan.
    std::shared_ptr<bool> updatePaths_ = nullptr;
    // The ID of the backup vault.
    std::shared_ptr<string> vaultId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
