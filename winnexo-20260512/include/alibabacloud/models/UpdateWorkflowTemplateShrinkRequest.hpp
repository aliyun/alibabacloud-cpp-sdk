// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWORKFLOWTEMPLATESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWORKFLOWTEMPLATESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class UpdateWorkflowTemplateShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWorkflowTemplateShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(action, action_);
      DARABONBA_PTR_TO_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_TO_JSON(definition, definitionShrink_);
      DARABONBA_PTR_TO_JSON(sourceVersion, sourceVersion_);
      DARABONBA_PTR_TO_JSON(templateId, templateId_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(version, version_);
      DARABONBA_PTR_TO_JSON(versionDescription, versionDescription_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWorkflowTemplateShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(action, action_);
      DARABONBA_PTR_FROM_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_FROM_JSON(definition, definitionShrink_);
      DARABONBA_PTR_FROM_JSON(sourceVersion, sourceVersion_);
      DARABONBA_PTR_FROM_JSON(templateId, templateId_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(version, version_);
      DARABONBA_PTR_FROM_JSON(versionDescription, versionDescription_);
    };
    UpdateWorkflowTemplateShrinkRequest() = default ;
    UpdateWorkflowTemplateShrinkRequest(const UpdateWorkflowTemplateShrinkRequest &) = default ;
    UpdateWorkflowTemplateShrinkRequest(UpdateWorkflowTemplateShrinkRequest &&) = default ;
    UpdateWorkflowTemplateShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWorkflowTemplateShrinkRequest() = default ;
    UpdateWorkflowTemplateShrinkRequest& operator=(const UpdateWorkflowTemplateShrinkRequest &) = default ;
    UpdateWorkflowTemplateShrinkRequest& operator=(UpdateWorkflowTemplateShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->action_ == nullptr
        && this->collaborationGroupId_ == nullptr && this->definitionShrink_ == nullptr && this->sourceVersion_ == nullptr && this->templateId_ == nullptr && this->tenantId_ == nullptr
        && this->version_ == nullptr && this->versionDescription_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline UpdateWorkflowTemplateShrinkRequest& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // collaborationGroupId Field Functions 
    bool hasCollaborationGroupId() const { return this->collaborationGroupId_ != nullptr;};
    void deleteCollaborationGroupId() { this->collaborationGroupId_ = nullptr;};
    inline string getCollaborationGroupId() const { DARABONBA_PTR_GET_DEFAULT(collaborationGroupId_, "") };
    inline UpdateWorkflowTemplateShrinkRequest& setCollaborationGroupId(string collaborationGroupId) { DARABONBA_PTR_SET_VALUE(collaborationGroupId_, collaborationGroupId) };


    // definitionShrink Field Functions 
    bool hasDefinitionShrink() const { return this->definitionShrink_ != nullptr;};
    void deleteDefinitionShrink() { this->definitionShrink_ = nullptr;};
    inline string getDefinitionShrink() const { DARABONBA_PTR_GET_DEFAULT(definitionShrink_, "") };
    inline UpdateWorkflowTemplateShrinkRequest& setDefinitionShrink(string definitionShrink) { DARABONBA_PTR_SET_VALUE(definitionShrink_, definitionShrink) };


    // sourceVersion Field Functions 
    bool hasSourceVersion() const { return this->sourceVersion_ != nullptr;};
    void deleteSourceVersion() { this->sourceVersion_ = nullptr;};
    inline string getSourceVersion() const { DARABONBA_PTR_GET_DEFAULT(sourceVersion_, "") };
    inline UpdateWorkflowTemplateShrinkRequest& setSourceVersion(string sourceVersion) { DARABONBA_PTR_SET_VALUE(sourceVersion_, sourceVersion) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline UpdateWorkflowTemplateShrinkRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline UpdateWorkflowTemplateShrinkRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline UpdateWorkflowTemplateShrinkRequest& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // versionDescription Field Functions 
    bool hasVersionDescription() const { return this->versionDescription_ != nullptr;};
    void deleteVersionDescription() { this->versionDescription_ = nullptr;};
    inline string getVersionDescription() const { DARABONBA_PTR_GET_DEFAULT(versionDescription_, "") };
    inline UpdateWorkflowTemplateShrinkRequest& setVersionDescription(string versionDescription) { DARABONBA_PTR_SET_VALUE(versionDescription_, versionDescription) };


  protected:
    // The write action. Valid values:
    // - SAVE: Saves the template as a draft without taking effect.
    // - SUBMIT: Saves and submits the template, setting it as the only effective version.
    // Default value: SUBMIT.
    shared_ptr<string> action_ {};
    // The ID of the collaboration workspace.
    // 
    // This parameter is required.
    shared_ptr<string> collaborationGroupId_ {};
    // The complete JSON definition of the template to overwrite the existing one.
    // 
    // This parameter is required.
    shared_ptr<string> definitionShrink_ {};
    // The submitted version number on which the new version is based. This parameter is mutually exclusive with the version parameter. If not specified, the current effective version is used as the fallback.
    shared_ptr<string> sourceVersion_ {};
    // The ID of the template.
    // 
    // This parameter is required.
    shared_ptr<string> templateId_ {};
    // The tenant ID. This is a common parameter. If not specified, the default tenant of the caller is used.
    shared_ptr<string> tenantId_ {};
    // The draft template version number to write. The format is a lowercase v followed by a positive integer, such as v1. Submitted versions cannot be written. If not specified, a new version is generated.
    shared_ptr<string> version_ {};
    // The version description. The maximum length is 500 characters. When writing a draft, if this parameter is not specified or is null, the original value is retained. An empty string clears the value.
    shared_ptr<string> versionDescription_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
