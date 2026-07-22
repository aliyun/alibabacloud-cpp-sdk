// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPERATERETRYJOBEXECUTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OPERATERETRYJOBEXECUTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class OperateRetryJobExecutionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OperateRetryJobExecutionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppGroupId, appGroupId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(JobExecutionId, jobExecutionId_);
      DARABONBA_PTR_TO_JSON(TaskList, taskList_);
      DARABONBA_PTR_TO_JSON(TriggerChild, triggerChild_);
    };
    friend void from_json(const Darabonba::Json& j, OperateRetryJobExecutionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppGroupId, appGroupId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(JobExecutionId, jobExecutionId_);
      DARABONBA_PTR_FROM_JSON(TaskList, taskList_);
      DARABONBA_PTR_FROM_JSON(TriggerChild, triggerChild_);
    };
    OperateRetryJobExecutionRequest() = default ;
    OperateRetryJobExecutionRequest(const OperateRetryJobExecutionRequest &) = default ;
    OperateRetryJobExecutionRequest(OperateRetryJobExecutionRequest &&) = default ;
    OperateRetryJobExecutionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OperateRetryJobExecutionRequest() = default ;
    OperateRetryJobExecutionRequest& operator=(const OperateRetryJobExecutionRequest &) = default ;
    OperateRetryJobExecutionRequest& operator=(OperateRetryJobExecutionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appGroupId_ == nullptr
        && this->appName_ == nullptr && this->clusterId_ == nullptr && this->jobExecutionId_ == nullptr && this->taskList_ == nullptr && this->triggerChild_ == nullptr; };
    // appGroupId Field Functions 
    bool hasAppGroupId() const { return this->appGroupId_ != nullptr;};
    void deleteAppGroupId() { this->appGroupId_ = nullptr;};
    inline int64_t getAppGroupId() const { DARABONBA_PTR_GET_DEFAULT(appGroupId_, 0L) };
    inline OperateRetryJobExecutionRequest& setAppGroupId(int64_t appGroupId) { DARABONBA_PTR_SET_VALUE(appGroupId_, appGroupId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline OperateRetryJobExecutionRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline OperateRetryJobExecutionRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // jobExecutionId Field Functions 
    bool hasJobExecutionId() const { return this->jobExecutionId_ != nullptr;};
    void deleteJobExecutionId() { this->jobExecutionId_ = nullptr;};
    inline string getJobExecutionId() const { DARABONBA_PTR_GET_DEFAULT(jobExecutionId_, "") };
    inline OperateRetryJobExecutionRequest& setJobExecutionId(string jobExecutionId) { DARABONBA_PTR_SET_VALUE(jobExecutionId_, jobExecutionId) };


    // taskList Field Functions 
    bool hasTaskList() const { return this->taskList_ != nullptr;};
    void deleteTaskList() { this->taskList_ = nullptr;};
    inline const vector<string> & getTaskList() const { DARABONBA_PTR_GET_CONST(taskList_, vector<string>) };
    inline vector<string> getTaskList() { DARABONBA_PTR_GET(taskList_, vector<string>) };
    inline OperateRetryJobExecutionRequest& setTaskList(const vector<string> & taskList) { DARABONBA_PTR_SET_VALUE(taskList_, taskList) };
    inline OperateRetryJobExecutionRequest& setTaskList(vector<string> && taskList) { DARABONBA_PTR_SET_RVALUE(taskList_, taskList) };


    // triggerChild Field Functions 
    bool hasTriggerChild() const { return this->triggerChild_ != nullptr;};
    void deleteTriggerChild() { this->triggerChild_ = nullptr;};
    inline bool getTriggerChild() const { DARABONBA_PTR_GET_DEFAULT(triggerChild_, false) };
    inline OperateRetryJobExecutionRequest& setTriggerChild(bool triggerChild) { DARABONBA_PTR_SET_VALUE(triggerChild_, triggerChild) };


  protected:
    shared_ptr<int64_t> appGroupId_ {};
    // The application name.
    // 
    // This parameter is required.
    shared_ptr<string> appName_ {};
    // The cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // The job execution ID.
    // 
    // This parameter is required.
    shared_ptr<string> jobExecutionId_ {};
    // The list of subtask execution IDs (for broadcast jobs).
    // >To rerun a subtask of a broadcast job, set this field to the execution ID of the corresponding subtask.
    shared_ptr<vector<string>> taskList_ {};
    // Specifies whether to trigger downstream nodes.
    shared_ptr<bool> triggerChild_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
