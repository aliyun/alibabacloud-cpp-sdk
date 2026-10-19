// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTWORKFLOWTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMPORTWORKFLOWTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class ImportWorkflowTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportWorkflowTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_ANY_TO_JSON(template, template_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ImportWorkflowTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_ANY_FROM_JSON(template, template_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    ImportWorkflowTemplateRequest() = default ;
    ImportWorkflowTemplateRequest(const ImportWorkflowTemplateRequest &) = default ;
    ImportWorkflowTemplateRequest(ImportWorkflowTemplateRequest &&) = default ;
    ImportWorkflowTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportWorkflowTemplateRequest() = default ;
    ImportWorkflowTemplateRequest& operator=(const ImportWorkflowTemplateRequest &) = default ;
    ImportWorkflowTemplateRequest& operator=(ImportWorkflowTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->collaborationGroupId_ == nullptr
        && this->template_ == nullptr && this->tenantId_ == nullptr; };
    // collaborationGroupId Field Functions 
    bool hasCollaborationGroupId() const { return this->collaborationGroupId_ != nullptr;};
    void deleteCollaborationGroupId() { this->collaborationGroupId_ = nullptr;};
    inline string getCollaborationGroupId() const { DARABONBA_PTR_GET_DEFAULT(collaborationGroupId_, "") };
    inline ImportWorkflowTemplateRequest& setCollaborationGroupId(string collaborationGroupId) { DARABONBA_PTR_SET_VALUE(collaborationGroupId_, collaborationGroupId) };


    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline     const Darabonba::Json & getTemplate() const { DARABONBA_GET(template_) };
    Darabonba::Json & getTemplate() { DARABONBA_GET(template_) };
    inline ImportWorkflowTemplateRequest& setTemplate(const Darabonba::Json & _template) { DARABONBA_SET_VALUE(template_, _template) };
    inline ImportWorkflowTemplateRequest& setTemplate(Darabonba::Json && _template) { DARABONBA_SET_RVALUE(template_, _template) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ImportWorkflowTemplateRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // 协作空间 ID
    // 
    // This parameter is required.
    shared_ptr<string> collaborationGroupId_ {};
    // 可移植模板 JSON（stepId/sortOrder 可省略）
    // 
    // This parameter is required.
    Darabonba::Json template_ {};
    // 租户ID，公共参数；缺省时使用调用方默认租户
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
