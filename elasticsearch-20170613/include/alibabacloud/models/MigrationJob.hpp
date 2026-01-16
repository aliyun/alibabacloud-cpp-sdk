// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MIGRATIONJOB_HPP_
#define ALIBABACLOUD_MODELS_MIGRATIONJOB_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class TargetCluster : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TargetCluster& obj) { 
        DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, TargetCluster& obj) { 
        DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(type, type_);
      };
      TargetCluster() = default ;
      TargetCluster(const TargetCluster &) = default ;
      TargetCluster(TargetCluster &&) = default ;
      TargetCluster(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TargetCluster() = default ;
      TargetCluster& operator=(const TargetCluster &) = default ;
      TargetCluster& operator=(TargetCluster &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->type_ == nullptr; };
      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline TargetCluster& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline TargetCluster& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> type_ {};
    };

    class StatusResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StatusResult& obj) { 
        DARABONBA_PTR_TO_JSON(code, code_);
        DARABONBA_PTR_TO_JSON(success, success_);
      };
      friend void from_json(const Darabonba::Json& j, StatusResult& obj) { 
        DARABONBA_PTR_FROM_JSON(code, code_);
        DARABONBA_PTR_FROM_JSON(success, success_);
      };
      StatusResult() = default ;
      StatusResult(const StatusResult &) = default ;
      StatusResult(StatusResult &&) = default ;
      StatusResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StatusResult() = default ;
      StatusResult& operator=(const StatusResult &) = default ;
      StatusResult& operator=(StatusResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->code_ == nullptr
        && this->success_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline StatusResult& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline StatusResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    protected:
      shared_ptr<string> code_ {};
      shared_ptr<bool> success_ {};
    };

    class SourceCluster : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SourceCluster& obj) { 
        DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, SourceCluster& obj) { 
        DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(type, type_);
      };
      SourceCluster() = default ;
      SourceCluster(const SourceCluster &) = default ;
      SourceCluster(SourceCluster &&) = default ;
      SourceCluster(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SourceCluster() = default ;
      SourceCluster& operator=(const SourceCluster &) = default ;
      SourceCluster& operator=(SourceCluster &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->type_ == nullptr; };
      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline SourceCluster& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline SourceCluster& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->currentState_ == nullptr
        && this->disableSourceClusterAuth_ == nullptr && this->disableTargetClusterAuth_ == nullptr && this->endTime_ == nullptr && this->migrationJobId_ == nullptr && this->phase_ == nullptr
        && this->sourceCluster_ == nullptr && this->startTime_ == nullptr && this->statusResult_ == nullptr && this->targetCluster_ == nullptr && this->updateTime_ == nullptr; };
    // currentState Field Functions 
    bool hasCurrentState() const { return this->currentState_ != nullptr;};
    void deleteCurrentState() { this->currentState_ = nullptr;};
    inline string getCurrentState() const { DARABONBA_PTR_GET_DEFAULT(currentState_, "") };
    inline MigrationJob& setCurrentState(string currentState) { DARABONBA_PTR_SET_VALUE(currentState_, currentState) };


    // disableSourceClusterAuth Field Functions 
    bool hasDisableSourceClusterAuth() const { return this->disableSourceClusterAuth_ != nullptr;};
    void deleteDisableSourceClusterAuth() { this->disableSourceClusterAuth_ = nullptr;};
    inline bool getDisableSourceClusterAuth() const { DARABONBA_PTR_GET_DEFAULT(disableSourceClusterAuth_, false) };
    inline MigrationJob& setDisableSourceClusterAuth(bool disableSourceClusterAuth) { DARABONBA_PTR_SET_VALUE(disableSourceClusterAuth_, disableSourceClusterAuth) };


    // disableTargetClusterAuth Field Functions 
    bool hasDisableTargetClusterAuth() const { return this->disableTargetClusterAuth_ != nullptr;};
    void deleteDisableTargetClusterAuth() { this->disableTargetClusterAuth_ = nullptr;};
    inline bool getDisableTargetClusterAuth() const { DARABONBA_PTR_GET_DEFAULT(disableTargetClusterAuth_, false) };
    inline MigrationJob& setDisableTargetClusterAuth(bool disableTargetClusterAuth) { DARABONBA_PTR_SET_VALUE(disableTargetClusterAuth_, disableTargetClusterAuth) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline MigrationJob& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // migrationJobId Field Functions 
    bool hasMigrationJobId() const { return this->migrationJobId_ != nullptr;};
    void deleteMigrationJobId() { this->migrationJobId_ = nullptr;};
    inline string getMigrationJobId() const { DARABONBA_PTR_GET_DEFAULT(migrationJobId_, "") };
    inline MigrationJob& setMigrationJobId(string migrationJobId) { DARABONBA_PTR_SET_VALUE(migrationJobId_, migrationJobId) };


    // phase Field Functions 
    bool hasPhase() const { return this->phase_ != nullptr;};
    void deletePhase() { this->phase_ = nullptr;};
    inline string getPhase() const { DARABONBA_PTR_GET_DEFAULT(phase_, "") };
    inline MigrationJob& setPhase(string phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


    // sourceCluster Field Functions 
    bool hasSourceCluster() const { return this->sourceCluster_ != nullptr;};
    void deleteSourceCluster() { this->sourceCluster_ = nullptr;};
    inline const MigrationJob::SourceCluster & getSourceCluster() const { DARABONBA_PTR_GET_CONST(sourceCluster_, MigrationJob::SourceCluster) };
    inline MigrationJob::SourceCluster getSourceCluster() { DARABONBA_PTR_GET(sourceCluster_, MigrationJob::SourceCluster) };
    inline MigrationJob& setSourceCluster(const MigrationJob::SourceCluster & sourceCluster) { DARABONBA_PTR_SET_VALUE(sourceCluster_, sourceCluster) };
    inline MigrationJob& setSourceCluster(MigrationJob::SourceCluster && sourceCluster) { DARABONBA_PTR_SET_RVALUE(sourceCluster_, sourceCluster) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline MigrationJob& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // statusResult Field Functions 
    bool hasStatusResult() const { return this->statusResult_ != nullptr;};
    void deleteStatusResult() { this->statusResult_ = nullptr;};
    inline const vector<MigrationJob::StatusResult> & getStatusResult() const { DARABONBA_PTR_GET_CONST(statusResult_, vector<MigrationJob::StatusResult>) };
    inline vector<MigrationJob::StatusResult> getStatusResult() { DARABONBA_PTR_GET(statusResult_, vector<MigrationJob::StatusResult>) };
    inline MigrationJob& setStatusResult(const vector<MigrationJob::StatusResult> & statusResult) { DARABONBA_PTR_SET_VALUE(statusResult_, statusResult) };
    inline MigrationJob& setStatusResult(vector<MigrationJob::StatusResult> && statusResult) { DARABONBA_PTR_SET_RVALUE(statusResult_, statusResult) };


    // targetCluster Field Functions 
    bool hasTargetCluster() const { return this->targetCluster_ != nullptr;};
    void deleteTargetCluster() { this->targetCluster_ = nullptr;};
    inline const MigrationJob::TargetCluster & getTargetCluster() const { DARABONBA_PTR_GET_CONST(targetCluster_, MigrationJob::TargetCluster) };
    inline MigrationJob::TargetCluster getTargetCluster() { DARABONBA_PTR_GET(targetCluster_, MigrationJob::TargetCluster) };
    inline MigrationJob& setTargetCluster(const MigrationJob::TargetCluster & targetCluster) { DARABONBA_PTR_SET_VALUE(targetCluster_, targetCluster) };
    inline MigrationJob& setTargetCluster(MigrationJob::TargetCluster && targetCluster) { DARABONBA_PTR_SET_RVALUE(targetCluster_, targetCluster) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline MigrationJob& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    shared_ptr<string> currentState_ {};
    shared_ptr<bool> disableSourceClusterAuth_ {};
    shared_ptr<bool> disableTargetClusterAuth_ {};
    shared_ptr<int64_t> endTime_ {};
    shared_ptr<string> migrationJobId_ {};
    shared_ptr<string> phase_ {};
    shared_ptr<MigrationJob::SourceCluster> sourceCluster_ {};
    shared_ptr<int64_t> startTime_ {};
    shared_ptr<vector<MigrationJob::StatusResult>> statusResult_ {};
    shared_ptr<MigrationJob::TargetCluster> targetCluster_ {};
    shared_ptr<int64_t> updateTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
