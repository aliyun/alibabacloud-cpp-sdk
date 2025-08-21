// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MIGRATIONJOB_HPP_
#define ALIBABACLOUD_MODELS_MIGRATIONJOB_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MigrationJobSourceCluster.hpp>
#include <vector>
#include <alibabacloud/models/MigrationJobStatusResult.hpp>
#include <alibabacloud/models/MigrationJobTargetCluster.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class MigrationJob : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MigrationJob& obj) { 
      DARABONBA_PTR_TO_JSON(currentState, currentState_);
      DARABONBA_PTR_TO_JSON(disableSourceClusterAuth, disableSourceClusterAuth_);
      DARABONBA_PTR_TO_JSON(disableTargetClusterAuth, disableTargetClusterAuth_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(migrationJobId, migrationJobId_);
      DARABONBA_PTR_TO_JSON(phase, phase_);
      DARABONBA_PTR_TO_JSON(sourceCluster, sourceCluster_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(statusResult, statusResult_);
      DARABONBA_PTR_TO_JSON(targetCluster, targetCluster_);
      DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, MigrationJob& obj) { 
      DARABONBA_PTR_FROM_JSON(currentState, currentState_);
      DARABONBA_PTR_FROM_JSON(disableSourceClusterAuth, disableSourceClusterAuth_);
      DARABONBA_PTR_FROM_JSON(disableTargetClusterAuth, disableTargetClusterAuth_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(migrationJobId, migrationJobId_);
      DARABONBA_PTR_FROM_JSON(phase, phase_);
      DARABONBA_PTR_FROM_JSON(sourceCluster, sourceCluster_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(statusResult, statusResult_);
      DARABONBA_PTR_FROM_JSON(targetCluster, targetCluster_);
      DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
    };
    MigrationJob() = default ;
    MigrationJob(const MigrationJob &) = default ;
    MigrationJob(MigrationJob &&) = default ;
    MigrationJob(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MigrationJob() = default ;
    MigrationJob& operator=(const MigrationJob &) = default ;
    MigrationJob& operator=(MigrationJob &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currentState_ != nullptr
        && this->disableSourceClusterAuth_ != nullptr && this->disableTargetClusterAuth_ != nullptr && this->endTime_ != nullptr && this->migrationJobId_ != nullptr && this->phase_ != nullptr
        && this->sourceCluster_ != nullptr && this->startTime_ != nullptr && this->statusResult_ != nullptr && this->targetCluster_ != nullptr && this->updateTime_ != nullptr; };
    // currentState Field Functions 
    bool hasCurrentState() const { return this->currentState_ != nullptr;};
    void deleteCurrentState() { this->currentState_ = nullptr;};
    inline string currentState() const { DARABONBA_PTR_GET_DEFAULT(currentState_, "") };
    inline MigrationJob& setCurrentState(string currentState) { DARABONBA_PTR_SET_VALUE(currentState_, currentState) };


    // disableSourceClusterAuth Field Functions 
    bool hasDisableSourceClusterAuth() const { return this->disableSourceClusterAuth_ != nullptr;};
    void deleteDisableSourceClusterAuth() { this->disableSourceClusterAuth_ = nullptr;};
    inline bool disableSourceClusterAuth() const { DARABONBA_PTR_GET_DEFAULT(disableSourceClusterAuth_, false) };
    inline MigrationJob& setDisableSourceClusterAuth(bool disableSourceClusterAuth) { DARABONBA_PTR_SET_VALUE(disableSourceClusterAuth_, disableSourceClusterAuth) };


    // disableTargetClusterAuth Field Functions 
    bool hasDisableTargetClusterAuth() const { return this->disableTargetClusterAuth_ != nullptr;};
    void deleteDisableTargetClusterAuth() { this->disableTargetClusterAuth_ = nullptr;};
    inline bool disableTargetClusterAuth() const { DARABONBA_PTR_GET_DEFAULT(disableTargetClusterAuth_, false) };
    inline MigrationJob& setDisableTargetClusterAuth(bool disableTargetClusterAuth) { DARABONBA_PTR_SET_VALUE(disableTargetClusterAuth_, disableTargetClusterAuth) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline MigrationJob& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // migrationJobId Field Functions 
    bool hasMigrationJobId() const { return this->migrationJobId_ != nullptr;};
    void deleteMigrationJobId() { this->migrationJobId_ = nullptr;};
    inline string migrationJobId() const { DARABONBA_PTR_GET_DEFAULT(migrationJobId_, "") };
    inline MigrationJob& setMigrationJobId(string migrationJobId) { DARABONBA_PTR_SET_VALUE(migrationJobId_, migrationJobId) };


    // phase Field Functions 
    bool hasPhase() const { return this->phase_ != nullptr;};
    void deletePhase() { this->phase_ = nullptr;};
    inline string phase() const { DARABONBA_PTR_GET_DEFAULT(phase_, "") };
    inline MigrationJob& setPhase(string phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


    // sourceCluster Field Functions 
    bool hasSourceCluster() const { return this->sourceCluster_ != nullptr;};
    void deleteSourceCluster() { this->sourceCluster_ = nullptr;};
    inline const MigrationJobSourceCluster & sourceCluster() const { DARABONBA_PTR_GET_CONST(sourceCluster_, MigrationJobSourceCluster) };
    inline MigrationJobSourceCluster sourceCluster() { DARABONBA_PTR_GET(sourceCluster_, MigrationJobSourceCluster) };
    inline MigrationJob& setSourceCluster(const MigrationJobSourceCluster & sourceCluster) { DARABONBA_PTR_SET_VALUE(sourceCluster_, sourceCluster) };
    inline MigrationJob& setSourceCluster(MigrationJobSourceCluster && sourceCluster) { DARABONBA_PTR_SET_RVALUE(sourceCluster_, sourceCluster) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline MigrationJob& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // statusResult Field Functions 
    bool hasStatusResult() const { return this->statusResult_ != nullptr;};
    void deleteStatusResult() { this->statusResult_ = nullptr;};
    inline const vector<MigrationJobStatusResult> & statusResult() const { DARABONBA_PTR_GET_CONST(statusResult_, vector<MigrationJobStatusResult>) };
    inline vector<MigrationJobStatusResult> statusResult() { DARABONBA_PTR_GET(statusResult_, vector<MigrationJobStatusResult>) };
    inline MigrationJob& setStatusResult(const vector<MigrationJobStatusResult> & statusResult) { DARABONBA_PTR_SET_VALUE(statusResult_, statusResult) };
    inline MigrationJob& setStatusResult(vector<MigrationJobStatusResult> && statusResult) { DARABONBA_PTR_SET_RVALUE(statusResult_, statusResult) };


    // targetCluster Field Functions 
    bool hasTargetCluster() const { return this->targetCluster_ != nullptr;};
    void deleteTargetCluster() { this->targetCluster_ = nullptr;};
    inline const MigrationJobTargetCluster & targetCluster() const { DARABONBA_PTR_GET_CONST(targetCluster_, MigrationJobTargetCluster) };
    inline MigrationJobTargetCluster targetCluster() { DARABONBA_PTR_GET(targetCluster_, MigrationJobTargetCluster) };
    inline MigrationJob& setTargetCluster(const MigrationJobTargetCluster & targetCluster) { DARABONBA_PTR_SET_VALUE(targetCluster_, targetCluster) };
    inline MigrationJob& setTargetCluster(MigrationJobTargetCluster && targetCluster) { DARABONBA_PTR_SET_RVALUE(targetCluster_, targetCluster) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline MigrationJob& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<string> currentState_ = nullptr;
    std::shared_ptr<bool> disableSourceClusterAuth_ = nullptr;
    std::shared_ptr<bool> disableTargetClusterAuth_ = nullptr;
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<string> migrationJobId_ = nullptr;
    std::shared_ptr<string> phase_ = nullptr;
    std::shared_ptr<MigrationJobSourceCluster> sourceCluster_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
    std::shared_ptr<vector<MigrationJobStatusResult>> statusResult_ = nullptr;
    std::shared_ptr<MigrationJobTargetCluster> targetCluster_ = nullptr;
    std::shared_ptr<int64_t> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
