// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WORKFLOWINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_WORKFLOWINSTANCE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/LogInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class WorkflowInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WorkflowInstance& obj) { 
      DARABONBA_PTR_TO_JSON(BatchProgress, batchProgress_);
      DARABONBA_PTR_TO_JSON(DlfWorkflowId, dlfWorkflowId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ExternalInstanceId, externalInstanceId_);
      DARABONBA_PTR_TO_JSON(RuntimeLogs, runtimeLogs_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, WorkflowInstance& obj) { 
      DARABONBA_PTR_FROM_JSON(BatchProgress, batchProgress_);
      DARABONBA_PTR_FROM_JSON(DlfWorkflowId, dlfWorkflowId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ExternalInstanceId, externalInstanceId_);
      DARABONBA_PTR_FROM_JSON(RuntimeLogs, runtimeLogs_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    WorkflowInstance() = default ;
    WorkflowInstance(const WorkflowInstance &) = default ;
    WorkflowInstance(WorkflowInstance &&) = default ;
    WorkflowInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WorkflowInstance() = default ;
    WorkflowInstance& operator=(const WorkflowInstance &) = default ;
    WorkflowInstance& operator=(WorkflowInstance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->batchProgress_ == nullptr
        && return this->dlfWorkflowId_ == nullptr && return this->endTime_ == nullptr && return this->externalInstanceId_ == nullptr && return this->runtimeLogs_ == nullptr && return this->startTime_ == nullptr
        && return this->status_ == nullptr; };
    // batchProgress Field Functions 
    bool hasBatchProgress() const { return this->batchProgress_ != nullptr;};
    void deleteBatchProgress() { this->batchProgress_ = nullptr;};
    inline int32_t batchProgress() const { DARABONBA_PTR_GET_DEFAULT(batchProgress_, 0) };
    inline WorkflowInstance& setBatchProgress(int32_t batchProgress) { DARABONBA_PTR_SET_VALUE(batchProgress_, batchProgress) };


    // dlfWorkflowId Field Functions 
    bool hasDlfWorkflowId() const { return this->dlfWorkflowId_ != nullptr;};
    void deleteDlfWorkflowId() { this->dlfWorkflowId_ = nullptr;};
    inline string dlfWorkflowId() const { DARABONBA_PTR_GET_DEFAULT(dlfWorkflowId_, "") };
    inline WorkflowInstance& setDlfWorkflowId(string dlfWorkflowId) { DARABONBA_PTR_SET_VALUE(dlfWorkflowId_, dlfWorkflowId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline WorkflowInstance& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // externalInstanceId Field Functions 
    bool hasExternalInstanceId() const { return this->externalInstanceId_ != nullptr;};
    void deleteExternalInstanceId() { this->externalInstanceId_ = nullptr;};
    inline string externalInstanceId() const { DARABONBA_PTR_GET_DEFAULT(externalInstanceId_, "") };
    inline WorkflowInstance& setExternalInstanceId(string externalInstanceId) { DARABONBA_PTR_SET_VALUE(externalInstanceId_, externalInstanceId) };


    // runtimeLogs Field Functions 
    bool hasRuntimeLogs() const { return this->runtimeLogs_ != nullptr;};
    void deleteRuntimeLogs() { this->runtimeLogs_ = nullptr;};
    inline const vector<LogInfo> & runtimeLogs() const { DARABONBA_PTR_GET_CONST(runtimeLogs_, vector<LogInfo>) };
    inline vector<LogInfo> runtimeLogs() { DARABONBA_PTR_GET(runtimeLogs_, vector<LogInfo>) };
    inline WorkflowInstance& setRuntimeLogs(const vector<LogInfo> & runtimeLogs) { DARABONBA_PTR_SET_VALUE(runtimeLogs_, runtimeLogs) };
    inline WorkflowInstance& setRuntimeLogs(vector<LogInfo> && runtimeLogs) { DARABONBA_PTR_SET_RVALUE(runtimeLogs_, runtimeLogs) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline WorkflowInstance& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline WorkflowInstance& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<int32_t> batchProgress_ = nullptr;
    std::shared_ptr<string> dlfWorkflowId_ = nullptr;
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<string> externalInstanceId_ = nullptr;
    std::shared_ptr<vector<LogInfo>> runtimeLogs_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
