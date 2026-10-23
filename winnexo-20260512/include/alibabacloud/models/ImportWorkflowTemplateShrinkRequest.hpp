// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTWORKFLOWTEMPLATESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMPORTWORKFLOWTEMPLATESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class ImportWorkflowTemplateShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportWorkflowTemplateShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_TO_JSON(template, templateShrink_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ImportWorkflowTemplateShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_FROM_JSON(template, templateShrink_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    ImportWorkflowTemplateShrinkRequest() = default ;
    ImportWorkflowTemplateShrinkRequest(const ImportWorkflowTemplateShrinkRequest &) = default ;
    ImportWorkflowTemplateShrinkRequest(ImportWorkflowTemplateShrinkRequest &&) = default ;
    ImportWorkflowTemplateShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportWorkflowTemplateShrinkRequest() = default ;
    ImportWorkflowTemplateShrinkRequest& operator=(const ImportWorkflowTemplateShrinkRequest &) = default ;
    ImportWorkflowTemplateShrinkRequest& operator=(ImportWorkflowTemplateShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->collaborationGroupId_ == nullptr
        && this->templateShrink_ == nullptr && this->tenantId_ == nullptr; };
    // collaborationGroupId Field Functions 
    bool hasCollaborationGroupId() const { return this->collaborationGroupId_ != nullptr;};
    void deleteCollaborationGroupId() { this->collaborationGroupId_ = nullptr;};
    inline string getCollaborationGroupId() const { DARABONBA_PTR_GET_DEFAULT(collaborationGroupId_, "") };
    inline ImportWorkflowTemplateShrinkRequest& setCollaborationGroupId(string collaborationGroupId) { DARABONBA_PTR_SET_VALUE(collaborationGroupId_, collaborationGroupId) };


    // templateShrink Field Functions 
    bool hasTemplateShrink() const { return this->templateShrink_ != nullptr;};
    void deleteTemplateShrink() { this->templateShrink_ = nullptr;};
    inline string getTemplateShrink() const { DARABONBA_PTR_GET_DEFAULT(templateShrink_, "") };
    inline ImportWorkflowTemplateShrinkRequest& setTemplateShrink(string templateShrink) { DARABONBA_PTR_SET_VALUE(templateShrink_, templateShrink) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ImportWorkflowTemplateShrinkRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The collaboration workspace ID.
    // 
    // This parameter is required.
    shared_ptr<string> collaborationGroupId_ {};
    // The portable template JSON. The stepId and sortOrder fields can be omitted.
    // 
    // This parameter is required.
    shared_ptr<string> templateShrink_ {};
    // The tenant ID. This is a common parameter. If omitted, the default tenant of the caller is used.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
