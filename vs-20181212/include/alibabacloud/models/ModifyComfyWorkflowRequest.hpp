// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCOMFYWORKFLOWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCOMFYWORKFLOWREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class ModifyComfyWorkflowRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyComfyWorkflowRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(WorkflowId, workflowId_);
      DARABONBA_PTR_TO_JSON(WorkflowName, workflowName_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyComfyWorkflowRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(WorkflowId, workflowId_);
      DARABONBA_PTR_FROM_JSON(WorkflowName, workflowName_);
    };
    ModifyComfyWorkflowRequest() = default ;
    ModifyComfyWorkflowRequest(const ModifyComfyWorkflowRequest &) = default ;
    ModifyComfyWorkflowRequest(ModifyComfyWorkflowRequest &&) = default ;
    ModifyComfyWorkflowRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyComfyWorkflowRequest() = default ;
    ModifyComfyWorkflowRequest& operator=(const ModifyComfyWorkflowRequest &) = default ;
    ModifyComfyWorkflowRequest& operator=(ModifyComfyWorkflowRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->workflowId_ == nullptr && this->workflowName_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyComfyWorkflowRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // workflowId Field Functions 
    bool hasWorkflowId() const { return this->workflowId_ != nullptr;};
    void deleteWorkflowId() { this->workflowId_ = nullptr;};
    inline string getWorkflowId() const { DARABONBA_PTR_GET_DEFAULT(workflowId_, "") };
    inline ModifyComfyWorkflowRequest& setWorkflowId(string workflowId) { DARABONBA_PTR_SET_VALUE(workflowId_, workflowId) };


    // workflowName Field Functions 
    bool hasWorkflowName() const { return this->workflowName_ != nullptr;};
    void deleteWorkflowName() { this->workflowName_ = nullptr;};
    inline string getWorkflowName() const { DARABONBA_PTR_GET_DEFAULT(workflowName_, "") };
    inline ModifyComfyWorkflowRequest& setWorkflowName(string workflowName) { DARABONBA_PTR_SET_VALUE(workflowName_, workflowName) };


  protected:
    shared_ptr<string> description_ {};
    // This parameter is required.
    shared_ptr<string> workflowId_ {};
    shared_ptr<string> workflowName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
