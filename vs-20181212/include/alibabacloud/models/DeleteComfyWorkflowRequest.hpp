// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECOMFYWORKFLOWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECOMFYWORKFLOWREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DeleteComfyWorkflowRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteComfyWorkflowRequest& obj) { 
      DARABONBA_PTR_TO_JSON(WorkflowId, workflowId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteComfyWorkflowRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(WorkflowId, workflowId_);
    };
    DeleteComfyWorkflowRequest() = default ;
    DeleteComfyWorkflowRequest(const DeleteComfyWorkflowRequest &) = default ;
    DeleteComfyWorkflowRequest(DeleteComfyWorkflowRequest &&) = default ;
    DeleteComfyWorkflowRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteComfyWorkflowRequest() = default ;
    DeleteComfyWorkflowRequest& operator=(const DeleteComfyWorkflowRequest &) = default ;
    DeleteComfyWorkflowRequest& operator=(DeleteComfyWorkflowRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->workflowId_ == nullptr; };
    // workflowId Field Functions 
    bool hasWorkflowId() const { return this->workflowId_ != nullptr;};
    void deleteWorkflowId() { this->workflowId_ = nullptr;};
    inline string getWorkflowId() const { DARABONBA_PTR_GET_DEFAULT(workflowId_, "") };
    inline DeleteComfyWorkflowRequest& setWorkflowId(string workflowId) { DARABONBA_PTR_SET_VALUE(workflowId_, workflowId) };


  protected:
    // The ID of the workflow.
    // 
    // This parameter is required.
    shared_ptr<string> workflowId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
