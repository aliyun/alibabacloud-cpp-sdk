// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECOMFYWORKFLOWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECOMFYWORKFLOWREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class CreateComfyWorkflowRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateComfyWorkflowRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Workflow, workflow_);
    };
    friend void from_json(const Darabonba::Json& j, CreateComfyWorkflowRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Workflow, workflow_);
    };
    CreateComfyWorkflowRequest() = default ;
    CreateComfyWorkflowRequest(const CreateComfyWorkflowRequest &) = default ;
    CreateComfyWorkflowRequest(CreateComfyWorkflowRequest &&) = default ;
    CreateComfyWorkflowRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateComfyWorkflowRequest() = default ;
    CreateComfyWorkflowRequest& operator=(const CreateComfyWorkflowRequest &) = default ;
    CreateComfyWorkflowRequest& operator=(CreateComfyWorkflowRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr && this->workflow_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateComfyWorkflowRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateComfyWorkflowRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // workflow Field Functions 
    bool hasWorkflow() const { return this->workflow_ != nullptr;};
    void deleteWorkflow() { this->workflow_ = nullptr;};
    inline string getWorkflow() const { DARABONBA_PTR_GET_DEFAULT(workflow_, "") };
    inline CreateComfyWorkflowRequest& setWorkflow(string workflow) { DARABONBA_PTR_SET_VALUE(workflow_, workflow) };


  protected:
    // The workflow description.
    shared_ptr<string> description_ {};
    // The workflow name.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The JSON definition of the workflow.
    // 
    // This parameter is required.
    shared_ptr<string> workflow_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
