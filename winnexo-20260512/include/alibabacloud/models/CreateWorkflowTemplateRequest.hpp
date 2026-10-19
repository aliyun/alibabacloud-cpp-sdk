// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWORKFLOWTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEWORKFLOWTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class CreateWorkflowTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWorkflowTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_ANY_TO_JSON(definition, definition_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWorkflowTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_ANY_FROM_JSON(definition, definition_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    CreateWorkflowTemplateRequest() = default ;
    CreateWorkflowTemplateRequest(const CreateWorkflowTemplateRequest &) = default ;
    CreateWorkflowTemplateRequest(CreateWorkflowTemplateRequest &&) = default ;
    CreateWorkflowTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWorkflowTemplateRequest() = default ;
    CreateWorkflowTemplateRequest& operator=(const CreateWorkflowTemplateRequest &) = default ;
    CreateWorkflowTemplateRequest& operator=(CreateWorkflowTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->collaborationGroupId_ == nullptr
        && this->definition_ == nullptr && this->tenantId_ == nullptr; };
    // collaborationGroupId Field Functions 
    bool hasCollaborationGroupId() const { return this->collaborationGroupId_ != nullptr;};
    void deleteCollaborationGroupId() { this->collaborationGroupId_ = nullptr;};
    inline string getCollaborationGroupId() const { DARABONBA_PTR_GET_DEFAULT(collaborationGroupId_, "") };
    inline CreateWorkflowTemplateRequest& setCollaborationGroupId(string collaborationGroupId) { DARABONBA_PTR_SET_VALUE(collaborationGroupId_, collaborationGroupId) };


    // definition Field Functions 
    bool hasDefinition() const { return this->definition_ != nullptr;};
    void deleteDefinition() { this->definition_ = nullptr;};
    inline     const Darabonba::Json & getDefinition() const { DARABONBA_GET(definition_) };
    Darabonba::Json & getDefinition() { DARABONBA_GET(definition_) };
    inline CreateWorkflowTemplateRequest& setDefinition(const Darabonba::Json & definition) { DARABONBA_SET_VALUE(definition_, definition) };
    inline CreateWorkflowTemplateRequest& setDefinition(Darabonba::Json && definition) { DARABONBA_SET_RVALUE(definition_, definition) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline CreateWorkflowTemplateRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // 协作空间 ID
    // 
    // This parameter is required.
    shared_ptr<string> collaborationGroupId_ {};
    // 完整模板定义 JSON（name/description/steps）
    // 
    // This parameter is required.
    Darabonba::Json definition_ {};
    // 租户ID，公共参数；缺省时使用调用方默认租户
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
