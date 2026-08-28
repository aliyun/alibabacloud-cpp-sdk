// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TUNINGHISTORY_HPP_
#define ALIBABACLOUD_MODELS_TUNINGHISTORY_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class TuningHistory : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TuningHistory& obj) { 
      DARABONBA_PTR_TO_JSON(actionType, actionType_);
      DARABONBA_PTR_TO_JSON(annotations, annotations_);
      DARABONBA_PTR_TO_JSON(deploymentName, deploymentName_);
      DARABONBA_PTR_TO_JSON(isHotUpdate, isHotUpdate_);
      DARABONBA_PTR_TO_JSON(jobId, jobId_);
      DARABONBA_PTR_TO_JSON(newResourceSetting, newResourceSetting_);
      DARABONBA_PTR_TO_JSON(oldResourceSetting, oldResourceSetting_);
      DARABONBA_PTR_TO_JSON(triggerTime, triggerTime_);
      DARABONBA_PTR_TO_JSON(tuningId, tuningId_);
      DARABONBA_PTR_TO_JSON(tuningMessage, tuningMessage_);
      DARABONBA_PTR_TO_JSON(tuningState, tuningState_);
    };
    friend void from_json(const Darabonba::Json& j, TuningHistory& obj) { 
      DARABONBA_PTR_FROM_JSON(actionType, actionType_);
      DARABONBA_PTR_FROM_JSON(annotations, annotations_);
      DARABONBA_PTR_FROM_JSON(deploymentName, deploymentName_);
      DARABONBA_PTR_FROM_JSON(isHotUpdate, isHotUpdate_);
      DARABONBA_PTR_FROM_JSON(jobId, jobId_);
      DARABONBA_PTR_FROM_JSON(newResourceSetting, newResourceSetting_);
      DARABONBA_PTR_FROM_JSON(oldResourceSetting, oldResourceSetting_);
      DARABONBA_PTR_FROM_JSON(triggerTime, triggerTime_);
      DARABONBA_PTR_FROM_JSON(tuningId, tuningId_);
      DARABONBA_PTR_FROM_JSON(tuningMessage, tuningMessage_);
      DARABONBA_PTR_FROM_JSON(tuningState, tuningState_);
    };
    TuningHistory() = default ;
    TuningHistory(const TuningHistory &) = default ;
    TuningHistory(TuningHistory &&) = default ;
    TuningHistory(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TuningHistory() = default ;
    TuningHistory& operator=(const TuningHistory &) = default ;
    TuningHistory& operator=(TuningHistory &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OldResourceSetting : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OldResourceSetting& obj) { 
        DARABONBA_PTR_TO_JSON(cpu, cpu_);
        DARABONBA_PTR_TO_JSON(memory, memory_);
        DARABONBA_PTR_TO_JSON(parallelism, parallelism_);
      };
      friend void from_json(const Darabonba::Json& j, OldResourceSetting& obj) { 
        DARABONBA_PTR_FROM_JSON(cpu, cpu_);
        DARABONBA_PTR_FROM_JSON(memory, memory_);
        DARABONBA_PTR_FROM_JSON(parallelism, parallelism_);
      };
      OldResourceSetting() = default ;
      OldResourceSetting(const OldResourceSetting &) = default ;
      OldResourceSetting(OldResourceSetting &&) = default ;
      OldResourceSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OldResourceSetting() = default ;
      OldResourceSetting& operator=(const OldResourceSetting &) = default ;
      OldResourceSetting& operator=(OldResourceSetting &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cpu_ == nullptr
        && this->memory_ == nullptr && this->parallelism_ == nullptr; };
      // cpu Field Functions 
      bool hasCpu() const { return this->cpu_ != nullptr;};
      void deleteCpu() { this->cpu_ = nullptr;};
      inline double getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0.0) };
      inline OldResourceSetting& setCpu(double cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


      // memory Field Functions 
      bool hasMemory() const { return this->memory_ != nullptr;};
      void deleteMemory() { this->memory_ = nullptr;};
      inline string getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, "") };
      inline OldResourceSetting& setMemory(string memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


      // parallelism Field Functions 
      bool hasParallelism() const { return this->parallelism_ != nullptr;};
      void deleteParallelism() { this->parallelism_ = nullptr;};
      inline int32_t getParallelism() const { DARABONBA_PTR_GET_DEFAULT(parallelism_, 0) };
      inline OldResourceSetting& setParallelism(int32_t parallelism) { DARABONBA_PTR_SET_VALUE(parallelism_, parallelism) };


    protected:
      // The number of CPU cores per TaskManager.
      shared_ptr<double> cpu_ {};
      // The memory per TaskManager, in a format such as 4 Gi.
      shared_ptr<string> memory_ {};
      // The parallelism.
      shared_ptr<int32_t> parallelism_ {};
    };

    class NewResourceSetting : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NewResourceSetting& obj) { 
        DARABONBA_PTR_TO_JSON(cpu, cpu_);
        DARABONBA_PTR_TO_JSON(memory, memory_);
        DARABONBA_PTR_TO_JSON(parallelism, parallelism_);
      };
      friend void from_json(const Darabonba::Json& j, NewResourceSetting& obj) { 
        DARABONBA_PTR_FROM_JSON(cpu, cpu_);
        DARABONBA_PTR_FROM_JSON(memory, memory_);
        DARABONBA_PTR_FROM_JSON(parallelism, parallelism_);
      };
      NewResourceSetting() = default ;
      NewResourceSetting(const NewResourceSetting &) = default ;
      NewResourceSetting(NewResourceSetting &&) = default ;
      NewResourceSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NewResourceSetting() = default ;
      NewResourceSetting& operator=(const NewResourceSetting &) = default ;
      NewResourceSetting& operator=(NewResourceSetting &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cpu_ == nullptr
        && this->memory_ == nullptr && this->parallelism_ == nullptr; };
      // cpu Field Functions 
      bool hasCpu() const { return this->cpu_ != nullptr;};
      void deleteCpu() { this->cpu_ = nullptr;};
      inline double getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0.0) };
      inline NewResourceSetting& setCpu(double cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


      // memory Field Functions 
      bool hasMemory() const { return this->memory_ != nullptr;};
      void deleteMemory() { this->memory_ = nullptr;};
      inline string getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, "") };
      inline NewResourceSetting& setMemory(string memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


      // parallelism Field Functions 
      bool hasParallelism() const { return this->parallelism_ != nullptr;};
      void deleteParallelism() { this->parallelism_ = nullptr;};
      inline int32_t getParallelism() const { DARABONBA_PTR_GET_DEFAULT(parallelism_, 0) };
      inline NewResourceSetting& setParallelism(int32_t parallelism) { DARABONBA_PTR_SET_VALUE(parallelism_, parallelism) };


    protected:
      // The number of CPU cores per TaskManager.
      shared_ptr<double> cpu_ {};
      // The memory per TaskManager, in a format such as 4 Gi.
      shared_ptr<string> memory_ {};
      // The parallelism.
      shared_ptr<int32_t> parallelism_ {};
    };

    virtual bool empty() const override { return this->actionType_ == nullptr
        && this->annotations_ == nullptr && this->deploymentName_ == nullptr && this->isHotUpdate_ == nullptr && this->jobId_ == nullptr && this->newResourceSetting_ == nullptr
        && this->oldResourceSetting_ == nullptr && this->triggerTime_ == nullptr && this->tuningId_ == nullptr && this->tuningMessage_ == nullptr && this->tuningState_ == nullptr; };
    // actionType Field Functions 
    bool hasActionType() const { return this->actionType_ != nullptr;};
    void deleteActionType() { this->actionType_ = nullptr;};
    inline string getActionType() const { DARABONBA_PTR_GET_DEFAULT(actionType_, "") };
    inline TuningHistory& setActionType(string actionType) { DARABONBA_PTR_SET_VALUE(actionType_, actionType) };


    // annotations Field Functions 
    bool hasAnnotations() const { return this->annotations_ != nullptr;};
    void deleteAnnotations() { this->annotations_ = nullptr;};
    inline const map<string, string> & getAnnotations() const { DARABONBA_PTR_GET_CONST(annotations_, map<string, string>) };
    inline map<string, string> getAnnotations() { DARABONBA_PTR_GET(annotations_, map<string, string>) };
    inline TuningHistory& setAnnotations(const map<string, string> & annotations) { DARABONBA_PTR_SET_VALUE(annotations_, annotations) };
    inline TuningHistory& setAnnotations(map<string, string> && annotations) { DARABONBA_PTR_SET_RVALUE(annotations_, annotations) };


    // deploymentName Field Functions 
    bool hasDeploymentName() const { return this->deploymentName_ != nullptr;};
    void deleteDeploymentName() { this->deploymentName_ = nullptr;};
    inline string getDeploymentName() const { DARABONBA_PTR_GET_DEFAULT(deploymentName_, "") };
    inline TuningHistory& setDeploymentName(string deploymentName) { DARABONBA_PTR_SET_VALUE(deploymentName_, deploymentName) };


    // isHotUpdate Field Functions 
    bool hasIsHotUpdate() const { return this->isHotUpdate_ != nullptr;};
    void deleteIsHotUpdate() { this->isHotUpdate_ = nullptr;};
    inline bool getIsHotUpdate() const { DARABONBA_PTR_GET_DEFAULT(isHotUpdate_, false) };
    inline TuningHistory& setIsHotUpdate(bool isHotUpdate) { DARABONBA_PTR_SET_VALUE(isHotUpdate_, isHotUpdate) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline TuningHistory& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // newResourceSetting Field Functions 
    bool hasNewResourceSetting() const { return this->newResourceSetting_ != nullptr;};
    void deleteNewResourceSetting() { this->newResourceSetting_ = nullptr;};
    inline const TuningHistory::NewResourceSetting & getNewResourceSetting() const { DARABONBA_PTR_GET_CONST(newResourceSetting_, TuningHistory::NewResourceSetting) };
    inline TuningHistory::NewResourceSetting getNewResourceSetting() { DARABONBA_PTR_GET(newResourceSetting_, TuningHistory::NewResourceSetting) };
    inline TuningHistory& setNewResourceSetting(const TuningHistory::NewResourceSetting & newResourceSetting) { DARABONBA_PTR_SET_VALUE(newResourceSetting_, newResourceSetting) };
    inline TuningHistory& setNewResourceSetting(TuningHistory::NewResourceSetting && newResourceSetting) { DARABONBA_PTR_SET_RVALUE(newResourceSetting_, newResourceSetting) };


    // oldResourceSetting Field Functions 
    bool hasOldResourceSetting() const { return this->oldResourceSetting_ != nullptr;};
    void deleteOldResourceSetting() { this->oldResourceSetting_ = nullptr;};
    inline const TuningHistory::OldResourceSetting & getOldResourceSetting() const { DARABONBA_PTR_GET_CONST(oldResourceSetting_, TuningHistory::OldResourceSetting) };
    inline TuningHistory::OldResourceSetting getOldResourceSetting() { DARABONBA_PTR_GET(oldResourceSetting_, TuningHistory::OldResourceSetting) };
    inline TuningHistory& setOldResourceSetting(const TuningHistory::OldResourceSetting & oldResourceSetting) { DARABONBA_PTR_SET_VALUE(oldResourceSetting_, oldResourceSetting) };
    inline TuningHistory& setOldResourceSetting(TuningHistory::OldResourceSetting && oldResourceSetting) { DARABONBA_PTR_SET_RVALUE(oldResourceSetting_, oldResourceSetting) };


    // triggerTime Field Functions 
    bool hasTriggerTime() const { return this->triggerTime_ != nullptr;};
    void deleteTriggerTime() { this->triggerTime_ = nullptr;};
    inline int64_t getTriggerTime() const { DARABONBA_PTR_GET_DEFAULT(triggerTime_, 0L) };
    inline TuningHistory& setTriggerTime(int64_t triggerTime) { DARABONBA_PTR_SET_VALUE(triggerTime_, triggerTime) };


    // tuningId Field Functions 
    bool hasTuningId() const { return this->tuningId_ != nullptr;};
    void deleteTuningId() { this->tuningId_ = nullptr;};
    inline string getTuningId() const { DARABONBA_PTR_GET_DEFAULT(tuningId_, "") };
    inline TuningHistory& setTuningId(string tuningId) { DARABONBA_PTR_SET_VALUE(tuningId_, tuningId) };


    // tuningMessage Field Functions 
    bool hasTuningMessage() const { return this->tuningMessage_ != nullptr;};
    void deleteTuningMessage() { this->tuningMessage_ = nullptr;};
    inline string getTuningMessage() const { DARABONBA_PTR_GET_DEFAULT(tuningMessage_, "") };
    inline TuningHistory& setTuningMessage(string tuningMessage) { DARABONBA_PTR_SET_VALUE(tuningMessage_, tuningMessage) };


    // tuningState Field Functions 
    bool hasTuningState() const { return this->tuningState_ != nullptr;};
    void deleteTuningState() { this->tuningState_ = nullptr;};
    inline string getTuningState() const { DARABONBA_PTR_GET_DEFAULT(tuningState_, "") };
    inline TuningHistory& setTuningState(string tuningState) { DARABONBA_PTR_SET_VALUE(tuningState_, tuningState) };


  protected:
    // The action type. Valid values:
    // - SCALE_UP_PARALLELISM: scales up parallelism.
    // - SCALE_DOWN_PARALLELISM: scales down parallelism.
    // - SCALE_UP_MEMORY: scales up memory.
    // - RESTART: restarts the job.
    shared_ptr<string> actionType_ {};
    // The additional annotations.
    shared_ptr<map<string, string>> annotations_ {};
    // The full path name of the deployment.
    shared_ptr<string> deploymentName_ {};
    // Indicates whether this is a hot update. A value of true indicates that the change takes effect without restarting the job. A value of false indicates that the job must be restarted.
    shared_ptr<bool> isHotUpdate_ {};
    // The ID of the associated job.
    shared_ptr<string> jobId_ {};
    // The resource configuration after tuning. This value may be null if the tuning failed.
    shared_ptr<TuningHistory::NewResourceSetting> newResourceSetting_ {};
    // The resource configuration before tuning.
    shared_ptr<TuningHistory::OldResourceSetting> oldResourceSetting_ {};
    // The trigger timestamp in milliseconds.
    shared_ptr<int64_t> triggerTime_ {};
    // The UUID of the tuning record.
    shared_ptr<string> tuningId_ {};
    // The tuning message. This is an internationalized, human-readable string that is not recommended for programmatic parsing.
    shared_ptr<string> tuningMessage_ {};
    // The tuning state. Valid values:
    // - SUCCESS: The tuning succeeded.
    // - FAILED: The tuning failed.
    // - EXECUTING: The tuning is in progress.
    // - TERMINATED: The tuning was terminated.
    // - FAILED_WITH_ROLLBACK_SUCCESS: The tuning failed but the rollback succeeded.
    // - FAILED_WITH_ROLLBACK_FAILED: The tuning failed and the rollback also failed.
    // - FAILED_WITH_RESOURCE_LACK: The tuning failed due to insufficient resources.
    // - FAILED_WITH_SAME_RESOURCE_SETTING: The tuning failed because the resource configuration did not change.
    shared_ptr<string> tuningState_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
