// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWORKFLOWINSTANCESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEWORKFLOWINSTANCESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class CreateWorkflowInstanceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWorkflowInstanceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(acceptanceCriteria, acceptanceCriteria_);
      DARABONBA_PTR_TO_JSON(businessId, businessId_);
      DARABONBA_PTR_TO_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_TO_JSON(initiator, initiator_);
      DARABONBA_PTR_TO_JSON(priority, priority_);
      DARABONBA_PTR_TO_JSON(templateId, templateId_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(variables, variablesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWorkflowInstanceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(acceptanceCriteria, acceptanceCriteria_);
      DARABONBA_PTR_FROM_JSON(businessId, businessId_);
      DARABONBA_PTR_FROM_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_FROM_JSON(initiator, initiator_);
      DARABONBA_PTR_FROM_JSON(priority, priority_);
      DARABONBA_PTR_FROM_JSON(templateId, templateId_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(variables, variablesShrink_);
    };
    CreateWorkflowInstanceShrinkRequest() = default ;
    CreateWorkflowInstanceShrinkRequest(const CreateWorkflowInstanceShrinkRequest &) = default ;
    CreateWorkflowInstanceShrinkRequest(CreateWorkflowInstanceShrinkRequest &&) = default ;
    CreateWorkflowInstanceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWorkflowInstanceShrinkRequest() = default ;
    CreateWorkflowInstanceShrinkRequest& operator=(const CreateWorkflowInstanceShrinkRequest &) = default ;
    CreateWorkflowInstanceShrinkRequest& operator=(CreateWorkflowInstanceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptanceCriteria_ == nullptr
        && this->businessId_ == nullptr && this->collaborationGroupId_ == nullptr && this->initiator_ == nullptr && this->priority_ == nullptr && this->templateId_ == nullptr
        && this->tenantId_ == nullptr && this->title_ == nullptr && this->variablesShrink_ == nullptr; };
    // acceptanceCriteria Field Functions 
    bool hasAcceptanceCriteria() const { return this->acceptanceCriteria_ != nullptr;};
    void deleteAcceptanceCriteria() { this->acceptanceCriteria_ = nullptr;};
    inline string getAcceptanceCriteria() const { DARABONBA_PTR_GET_DEFAULT(acceptanceCriteria_, "") };
    inline CreateWorkflowInstanceShrinkRequest& setAcceptanceCriteria(string acceptanceCriteria) { DARABONBA_PTR_SET_VALUE(acceptanceCriteria_, acceptanceCriteria) };


    // businessId Field Functions 
    bool hasBusinessId() const { return this->businessId_ != nullptr;};
    void deleteBusinessId() { this->businessId_ = nullptr;};
    inline string getBusinessId() const { DARABONBA_PTR_GET_DEFAULT(businessId_, "") };
    inline CreateWorkflowInstanceShrinkRequest& setBusinessId(string businessId) { DARABONBA_PTR_SET_VALUE(businessId_, businessId) };


    // collaborationGroupId Field Functions 
    bool hasCollaborationGroupId() const { return this->collaborationGroupId_ != nullptr;};
    void deleteCollaborationGroupId() { this->collaborationGroupId_ = nullptr;};
    inline string getCollaborationGroupId() const { DARABONBA_PTR_GET_DEFAULT(collaborationGroupId_, "") };
    inline CreateWorkflowInstanceShrinkRequest& setCollaborationGroupId(string collaborationGroupId) { DARABONBA_PTR_SET_VALUE(collaborationGroupId_, collaborationGroupId) };


    // initiator Field Functions 
    bool hasInitiator() const { return this->initiator_ != nullptr;};
    void deleteInitiator() { this->initiator_ = nullptr;};
    inline string getInitiator() const { DARABONBA_PTR_GET_DEFAULT(initiator_, "") };
    inline CreateWorkflowInstanceShrinkRequest& setInitiator(string initiator) { DARABONBA_PTR_SET_VALUE(initiator_, initiator) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline string getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
    inline CreateWorkflowInstanceShrinkRequest& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline CreateWorkflowInstanceShrinkRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline CreateWorkflowInstanceShrinkRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CreateWorkflowInstanceShrinkRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // variablesShrink Field Functions 
    bool hasVariablesShrink() const { return this->variablesShrink_ != nullptr;};
    void deleteVariablesShrink() { this->variablesShrink_ = nullptr;};
    inline string getVariablesShrink() const { DARABONBA_PTR_GET_DEFAULT(variablesShrink_, "") };
    inline CreateWorkflowInstanceShrinkRequest& setVariablesShrink(string variablesShrink) { DARABONBA_PTR_SET_VALUE(variablesShrink_, variablesShrink) };


  protected:
    // The required acceptance criteria for the workflow.
    // 
    // This parameter is required.
    shared_ptr<string> acceptanceCriteria_ {};
    // The unique requirement ID in the workspace. Repeated requests are idempotent.
    // 
    // This parameter is required.
    shared_ptr<string> businessId_ {};
    // The collaboration workspace ID.
    // 
    // This parameter is required.
    shared_ptr<string> collaborationGroupId_ {};
    // The display label of the external initiator.
    shared_ptr<string> initiator_ {};
    // The work item priority.
    shared_ptr<string> priority_ {};
    // The workflow template ID. Maximum length: 64 characters.
    // 
    // This parameter is required.
    shared_ptr<string> templateId_ {};
    // The tenant ID. This is a common parameter explicitly passed by using --tenant-id in winnexo-cli.
    shared_ptr<string> tenantId_ {};
    // The requirement title.
    // 
    // This parameter is required.
    shared_ptr<string> title_ {};
    // The business variable object. The tags field can be a list of string tags.
    shared_ptr<string> variablesShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
