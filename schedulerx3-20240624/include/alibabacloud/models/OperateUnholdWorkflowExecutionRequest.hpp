// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPERATEUNHOLDWORKFLOWEXECUTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OPERATEUNHOLDWORKFLOWEXECUTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class OperateUnholdWorkflowExecutionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OperateUnholdWorkflowExecutionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(WorkflowExecutionId, workflowExecutionId_);
    };
    friend void from_json(const Darabonba::Json& j, OperateUnholdWorkflowExecutionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(WorkflowExecutionId, workflowExecutionId_);
    };
    OperateUnholdWorkflowExecutionRequest() = default ;
    OperateUnholdWorkflowExecutionRequest(const OperateUnholdWorkflowExecutionRequest &) = default ;
    OperateUnholdWorkflowExecutionRequest(OperateUnholdWorkflowExecutionRequest &&) = default ;
    OperateUnholdWorkflowExecutionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OperateUnholdWorkflowExecutionRequest() = default ;
    OperateUnholdWorkflowExecutionRequest& operator=(const OperateUnholdWorkflowExecutionRequest &) = default ;
    OperateUnholdWorkflowExecutionRequest& operator=(OperateUnholdWorkflowExecutionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && this->clusterId_ == nullptr && this->workflowExecutionId_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline OperateUnholdWorkflowExecutionRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline OperateUnholdWorkflowExecutionRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // workflowExecutionId Field Functions 
    bool hasWorkflowExecutionId() const { return this->workflowExecutionId_ != nullptr;};
    void deleteWorkflowExecutionId() { this->workflowExecutionId_ = nullptr;};
    inline int64_t getWorkflowExecutionId() const { DARABONBA_PTR_GET_DEFAULT(workflowExecutionId_, 0L) };
    inline OperateUnholdWorkflowExecutionRequest& setWorkflowExecutionId(int64_t workflowExecutionId) { DARABONBA_PTR_SET_VALUE(workflowExecutionId_, workflowExecutionId) };


  protected:
    // This parameter is required.
    shared_ptr<string> appName_ {};
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // This parameter is required.
    shared_ptr<int64_t> workflowExecutionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
