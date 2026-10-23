// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWORKFLOWTEMPLATESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEWORKFLOWTEMPLATESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class CreateWorkflowTemplateShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWorkflowTemplateShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(action, action_);
      DARABONBA_PTR_TO_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_TO_JSON(definition, definitionShrink_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWorkflowTemplateShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(action, action_);
      DARABONBA_PTR_FROM_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_FROM_JSON(definition, definitionShrink_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    CreateWorkflowTemplateShrinkRequest() = default ;
    CreateWorkflowTemplateShrinkRequest(const CreateWorkflowTemplateShrinkRequest &) = default ;
    CreateWorkflowTemplateShrinkRequest(CreateWorkflowTemplateShrinkRequest &&) = default ;
    CreateWorkflowTemplateShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWorkflowTemplateShrinkRequest() = default ;
    CreateWorkflowTemplateShrinkRequest& operator=(const CreateWorkflowTemplateShrinkRequest &) = default ;
    CreateWorkflowTemplateShrinkRequest& operator=(CreateWorkflowTemplateShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->action_ == nullptr
        && this->collaborationGroupId_ == nullptr && this->definitionShrink_ == nullptr && this->tenantId_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline CreateWorkflowTemplateShrinkRequest& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // collaborationGroupId Field Functions 
    bool hasCollaborationGroupId() const { return this->collaborationGroupId_ != nullptr;};
    void deleteCollaborationGroupId() { this->collaborationGroupId_ = nullptr;};
    inline string getCollaborationGroupId() const { DARABONBA_PTR_GET_DEFAULT(collaborationGroupId_, "") };
    inline CreateWorkflowTemplateShrinkRequest& setCollaborationGroupId(string collaborationGroupId) { DARABONBA_PTR_SET_VALUE(collaborationGroupId_, collaborationGroupId) };


    // definitionShrink Field Functions 
    bool hasDefinitionShrink() const { return this->definitionShrink_ != nullptr;};
    void deleteDefinitionShrink() { this->definitionShrink_ = nullptr;};
    inline string getDefinitionShrink() const { DARABONBA_PTR_GET_DEFAULT(definitionShrink_, "") };
    inline CreateWorkflowTemplateShrinkRequest& setDefinitionShrink(string definitionShrink) { DARABONBA_PTR_SET_VALUE(definitionShrink_, definitionShrink) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline CreateWorkflowTemplateShrinkRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The write action. Valid values: SAVE: Saves the template as a draft without taking effect. SUBMIT: Saves and submits the template and sets it as the only effective version. Default value: SUBMIT.
    shared_ptr<string> action_ {};
    // The ID of the collaboration workspace.
    // 
    // This parameter is required.
    shared_ptr<string> collaborationGroupId_ {};
    // The complete JSON definition of the template, including name, description, and steps.
    // 
    // This parameter is required.
    shared_ptr<string> definitionShrink_ {};
    // The tenant ID. This is a common parameter. If not specified, the default tenant of the caller is used.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
