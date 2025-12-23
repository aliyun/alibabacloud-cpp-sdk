// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPERATEWORKFLOWINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OPERATEWORKFLOWINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrStudio20240430
{
namespace Models
{
  class OperateWorkflowInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OperateWorkflowInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(execType, execType_);
      DARABONBA_PTR_TO_JSON(workflowInstanceId, workflowInstanceId_);
      DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, OperateWorkflowInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(execType, execType_);
      DARABONBA_PTR_FROM_JSON(workflowInstanceId, workflowInstanceId_);
      DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
    };
    OperateWorkflowInstanceRequest() = default ;
    OperateWorkflowInstanceRequest(const OperateWorkflowInstanceRequest &) = default ;
    OperateWorkflowInstanceRequest(OperateWorkflowInstanceRequest &&) = default ;
    OperateWorkflowInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OperateWorkflowInstanceRequest() = default ;
    OperateWorkflowInstanceRequest& operator=(const OperateWorkflowInstanceRequest &) = default ;
    OperateWorkflowInstanceRequest& operator=(OperateWorkflowInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->execType_ == nullptr
        && return this->workflowInstanceId_ == nullptr && return this->workspaceId_ == nullptr; };
    // execType Field Functions 
    bool hasExecType() const { return this->execType_ != nullptr;};
    void deleteExecType() { this->execType_ = nullptr;};
    inline string execType() const { DARABONBA_PTR_GET_DEFAULT(execType_, "") };
    inline OperateWorkflowInstanceRequest& setExecType(string execType) { DARABONBA_PTR_SET_VALUE(execType_, execType) };


    // workflowInstanceId Field Functions 
    bool hasWorkflowInstanceId() const { return this->workflowInstanceId_ != nullptr;};
    void deleteWorkflowInstanceId() { this->workflowInstanceId_ = nullptr;};
    inline string workflowInstanceId() const { DARABONBA_PTR_GET_DEFAULT(workflowInstanceId_, "") };
    inline OperateWorkflowInstanceRequest& setWorkflowInstanceId(string workflowInstanceId) { DARABONBA_PTR_SET_VALUE(workflowInstanceId_, workflowInstanceId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline OperateWorkflowInstanceRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> execType_ = nullptr;
    std::shared_ptr<string> workflowInstanceId_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrStudio20240430
#endif
