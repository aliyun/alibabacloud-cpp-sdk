// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKFLOWEXECUTIONDAGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETWORKFLOWEXECUTIONDAGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class GetWorkflowExecutionDAGRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkflowExecutionDAGRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(WorkflowExecutionId, workflowExecutionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkflowExecutionDAGRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(WorkflowExecutionId, workflowExecutionId_);
    };
    GetWorkflowExecutionDAGRequest() = default ;
    GetWorkflowExecutionDAGRequest(const GetWorkflowExecutionDAGRequest &) = default ;
    GetWorkflowExecutionDAGRequest(GetWorkflowExecutionDAGRequest &&) = default ;
    GetWorkflowExecutionDAGRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkflowExecutionDAGRequest() = default ;
    GetWorkflowExecutionDAGRequest& operator=(const GetWorkflowExecutionDAGRequest &) = default ;
    GetWorkflowExecutionDAGRequest& operator=(GetWorkflowExecutionDAGRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && return this->clusterId_ == nullptr && return this->workflowExecutionId_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline GetWorkflowExecutionDAGRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline GetWorkflowExecutionDAGRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // workflowExecutionId Field Functions 
    bool hasWorkflowExecutionId() const { return this->workflowExecutionId_ != nullptr;};
    void deleteWorkflowExecutionId() { this->workflowExecutionId_ = nullptr;};
    inline int64_t workflowExecutionId() const { DARABONBA_PTR_GET_DEFAULT(workflowExecutionId_, 0L) };
    inline GetWorkflowExecutionDAGRequest& setWorkflowExecutionId(int64_t workflowExecutionId) { DARABONBA_PTR_SET_VALUE(workflowExecutionId_, workflowExecutionId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> workflowExecutionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
