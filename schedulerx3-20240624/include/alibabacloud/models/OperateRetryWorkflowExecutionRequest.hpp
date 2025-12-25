// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPERATERETRYWORKFLOWEXECUTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OPERATERETRYWORKFLOWEXECUTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class OperateRetryWorkflowExecutionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OperateRetryWorkflowExecutionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(OnlyFailed, onlyFailed_);
      DARABONBA_PTR_TO_JSON(WorkflowExecutionId, workflowExecutionId_);
    };
    friend void from_json(const Darabonba::Json& j, OperateRetryWorkflowExecutionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(OnlyFailed, onlyFailed_);
      DARABONBA_PTR_FROM_JSON(WorkflowExecutionId, workflowExecutionId_);
    };
    OperateRetryWorkflowExecutionRequest() = default ;
    OperateRetryWorkflowExecutionRequest(const OperateRetryWorkflowExecutionRequest &) = default ;
    OperateRetryWorkflowExecutionRequest(OperateRetryWorkflowExecutionRequest &&) = default ;
    OperateRetryWorkflowExecutionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OperateRetryWorkflowExecutionRequest() = default ;
    OperateRetryWorkflowExecutionRequest& operator=(const OperateRetryWorkflowExecutionRequest &) = default ;
    OperateRetryWorkflowExecutionRequest& operator=(OperateRetryWorkflowExecutionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && return this->clusterId_ == nullptr && return this->onlyFailed_ == nullptr && return this->workflowExecutionId_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline OperateRetryWorkflowExecutionRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline OperateRetryWorkflowExecutionRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // onlyFailed Field Functions 
    bool hasOnlyFailed() const { return this->onlyFailed_ != nullptr;};
    void deleteOnlyFailed() { this->onlyFailed_ = nullptr;};
    inline bool onlyFailed() const { DARABONBA_PTR_GET_DEFAULT(onlyFailed_, false) };
    inline OperateRetryWorkflowExecutionRequest& setOnlyFailed(bool onlyFailed) { DARABONBA_PTR_SET_VALUE(onlyFailed_, onlyFailed) };


    // workflowExecutionId Field Functions 
    bool hasWorkflowExecutionId() const { return this->workflowExecutionId_ != nullptr;};
    void deleteWorkflowExecutionId() { this->workflowExecutionId_ = nullptr;};
    inline int64_t workflowExecutionId() const { DARABONBA_PTR_GET_DEFAULT(workflowExecutionId_, 0L) };
    inline OperateRetryWorkflowExecutionRequest& setWorkflowExecutionId(int64_t workflowExecutionId) { DARABONBA_PTR_SET_VALUE(workflowExecutionId_, workflowExecutionId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    std::shared_ptr<bool> onlyFailed_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> workflowExecutionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
