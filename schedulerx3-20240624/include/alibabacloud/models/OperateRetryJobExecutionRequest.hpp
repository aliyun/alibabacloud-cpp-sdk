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
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(JobExecutionId, jobExecutionId_);
      DARABONBA_PTR_TO_JSON(TaskList, taskList_);
    };
    friend void from_json(const Darabonba::Json& j, OperateRetryJobExecutionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(JobExecutionId, jobExecutionId_);
      DARABONBA_PTR_FROM_JSON(TaskList, taskList_);
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
    virtual bool empty() const override { return this->appName_ == nullptr
        && return this->clusterId_ == nullptr && return this->jobExecutionId_ == nullptr && return this->taskList_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline OperateRetryJobExecutionRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline OperateRetryJobExecutionRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // jobExecutionId Field Functions 
    bool hasJobExecutionId() const { return this->jobExecutionId_ != nullptr;};
    void deleteJobExecutionId() { this->jobExecutionId_ = nullptr;};
    inline string jobExecutionId() const { DARABONBA_PTR_GET_DEFAULT(jobExecutionId_, "") };
    inline OperateRetryJobExecutionRequest& setJobExecutionId(string jobExecutionId) { DARABONBA_PTR_SET_VALUE(jobExecutionId_, jobExecutionId) };


    // taskList Field Functions 
    bool hasTaskList() const { return this->taskList_ != nullptr;};
    void deleteTaskList() { this->taskList_ = nullptr;};
    inline const vector<string> & taskList() const { DARABONBA_PTR_GET_CONST(taskList_, vector<string>) };
    inline vector<string> taskList() { DARABONBA_PTR_GET(taskList_, vector<string>) };
    inline OperateRetryJobExecutionRequest& setTaskList(const vector<string> & taskList) { DARABONBA_PTR_SET_VALUE(taskList_, taskList) };
    inline OperateRetryJobExecutionRequest& setTaskList(vector<string> && taskList) { DARABONBA_PTR_SET_RVALUE(taskList_, taskList) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> jobExecutionId_ = nullptr;
    std::shared_ptr<vector<string>> taskList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
