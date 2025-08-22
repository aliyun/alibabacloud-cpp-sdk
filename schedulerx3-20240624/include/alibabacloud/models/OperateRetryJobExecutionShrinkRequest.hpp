// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPERATERETRYJOBEXECUTIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OPERATERETRYJOBEXECUTIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class OperateRetryJobExecutionShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OperateRetryJobExecutionShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(JobExecutionId, jobExecutionId_);
      DARABONBA_PTR_TO_JSON(TaskList, taskListShrink_);
    };
    friend void from_json(const Darabonba::Json& j, OperateRetryJobExecutionShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(JobExecutionId, jobExecutionId_);
      DARABONBA_PTR_FROM_JSON(TaskList, taskListShrink_);
    };
    OperateRetryJobExecutionShrinkRequest() = default ;
    OperateRetryJobExecutionShrinkRequest(const OperateRetryJobExecutionShrinkRequest &) = default ;
    OperateRetryJobExecutionShrinkRequest(OperateRetryJobExecutionShrinkRequest &&) = default ;
    OperateRetryJobExecutionShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OperateRetryJobExecutionShrinkRequest() = default ;
    OperateRetryJobExecutionShrinkRequest& operator=(const OperateRetryJobExecutionShrinkRequest &) = default ;
    OperateRetryJobExecutionShrinkRequest& operator=(OperateRetryJobExecutionShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appName_ != nullptr
        && this->clusterId_ != nullptr && this->jobExecutionId_ != nullptr && this->taskListShrink_ != nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline OperateRetryJobExecutionShrinkRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline OperateRetryJobExecutionShrinkRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // jobExecutionId Field Functions 
    bool hasJobExecutionId() const { return this->jobExecutionId_ != nullptr;};
    void deleteJobExecutionId() { this->jobExecutionId_ = nullptr;};
    inline string jobExecutionId() const { DARABONBA_PTR_GET_DEFAULT(jobExecutionId_, "") };
    inline OperateRetryJobExecutionShrinkRequest& setJobExecutionId(string jobExecutionId) { DARABONBA_PTR_SET_VALUE(jobExecutionId_, jobExecutionId) };


    // taskListShrink Field Functions 
    bool hasTaskListShrink() const { return this->taskListShrink_ != nullptr;};
    void deleteTaskListShrink() { this->taskListShrink_ = nullptr;};
    inline string taskListShrink() const { DARABONBA_PTR_GET_DEFAULT(taskListShrink_, "") };
    inline OperateRetryJobExecutionShrinkRequest& setTaskListShrink(string taskListShrink) { DARABONBA_PTR_SET_VALUE(taskListShrink_, taskListShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> jobExecutionId_ = nullptr;
    std::shared_ptr<string> taskListShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
