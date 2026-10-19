// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWORKFLOWINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEWORKFLOWINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class CreateWorkflowInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWorkflowInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(acceptanceCriteria, acceptanceCriteria_);
      DARABONBA_PTR_TO_JSON(businessId, businessId_);
      DARABONBA_PTR_TO_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_TO_JSON(initiator, initiator_);
      DARABONBA_PTR_TO_JSON(priority, priority_);
      DARABONBA_PTR_TO_JSON(templateId, templateId_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_ANY_TO_JSON(variables, variables_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWorkflowInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(acceptanceCriteria, acceptanceCriteria_);
      DARABONBA_PTR_FROM_JSON(businessId, businessId_);
      DARABONBA_PTR_FROM_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_FROM_JSON(initiator, initiator_);
      DARABONBA_PTR_FROM_JSON(priority, priority_);
      DARABONBA_PTR_FROM_JSON(templateId, templateId_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_ANY_FROM_JSON(variables, variables_);
    };
    CreateWorkflowInstanceRequest() = default ;
    CreateWorkflowInstanceRequest(const CreateWorkflowInstanceRequest &) = default ;
    CreateWorkflowInstanceRequest(CreateWorkflowInstanceRequest &&) = default ;
    CreateWorkflowInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWorkflowInstanceRequest() = default ;
    CreateWorkflowInstanceRequest& operator=(const CreateWorkflowInstanceRequest &) = default ;
    CreateWorkflowInstanceRequest& operator=(CreateWorkflowInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptanceCriteria_ == nullptr
        && this->businessId_ == nullptr && this->collaborationGroupId_ == nullptr && this->initiator_ == nullptr && this->priority_ == nullptr && this->templateId_ == nullptr
        && this->tenantId_ == nullptr && this->title_ == nullptr && this->variables_ == nullptr; };
    // acceptanceCriteria Field Functions 
    bool hasAcceptanceCriteria() const { return this->acceptanceCriteria_ != nullptr;};
    void deleteAcceptanceCriteria() { this->acceptanceCriteria_ = nullptr;};
    inline string getAcceptanceCriteria() const { DARABONBA_PTR_GET_DEFAULT(acceptanceCriteria_, "") };
    inline CreateWorkflowInstanceRequest& setAcceptanceCriteria(string acceptanceCriteria) { DARABONBA_PTR_SET_VALUE(acceptanceCriteria_, acceptanceCriteria) };


    // businessId Field Functions 
    bool hasBusinessId() const { return this->businessId_ != nullptr;};
    void deleteBusinessId() { this->businessId_ = nullptr;};
    inline string getBusinessId() const { DARABONBA_PTR_GET_DEFAULT(businessId_, "") };
    inline CreateWorkflowInstanceRequest& setBusinessId(string businessId) { DARABONBA_PTR_SET_VALUE(businessId_, businessId) };


    // collaborationGroupId Field Functions 
    bool hasCollaborationGroupId() const { return this->collaborationGroupId_ != nullptr;};
    void deleteCollaborationGroupId() { this->collaborationGroupId_ = nullptr;};
    inline string getCollaborationGroupId() const { DARABONBA_PTR_GET_DEFAULT(collaborationGroupId_, "") };
    inline CreateWorkflowInstanceRequest& setCollaborationGroupId(string collaborationGroupId) { DARABONBA_PTR_SET_VALUE(collaborationGroupId_, collaborationGroupId) };


    // initiator Field Functions 
    bool hasInitiator() const { return this->initiator_ != nullptr;};
    void deleteInitiator() { this->initiator_ = nullptr;};
    inline string getInitiator() const { DARABONBA_PTR_GET_DEFAULT(initiator_, "") };
    inline CreateWorkflowInstanceRequest& setInitiator(string initiator) { DARABONBA_PTR_SET_VALUE(initiator_, initiator) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline string getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
    inline CreateWorkflowInstanceRequest& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline CreateWorkflowInstanceRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline CreateWorkflowInstanceRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CreateWorkflowInstanceRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // variables Field Functions 
    bool hasVariables() const { return this->variables_ != nullptr;};
    void deleteVariables() { this->variables_ = nullptr;};
    inline     const Darabonba::Json & getVariables() const { DARABONBA_GET(variables_) };
    Darabonba::Json & getVariables() { DARABONBA_GET(variables_) };
    inline CreateWorkflowInstanceRequest& setVariables(const Darabonba::Json & variables) { DARABONBA_SET_VALUE(variables_, variables) };
    inline CreateWorkflowInstanceRequest& setVariables(Darabonba::Json && variables) { DARABONBA_SET_RVALUE(variables_, variables) };


  protected:
    // Workflow 必填验收标准
    // 
    // This parameter is required.
    shared_ptr<string> acceptanceCriteria_ {};
    // 空间内唯一需求编号，重复请求幂等
    // 
    // This parameter is required.
    shared_ptr<string> businessId_ {};
    // 协作空间 ID
    // 
    // This parameter is required.
    shared_ptr<string> collaborationGroupId_ {};
    // 外部发起人展示标签
    shared_ptr<string> initiator_ {};
    // 工作项优先级
    shared_ptr<string> priority_ {};
    // 工作流模板 ID，最多 64 字符
    // 
    // This parameter is required.
    shared_ptr<string> templateId_ {};
    // 租户ID，公共参数；winnexo-cli 通过 --tenant-id 显式传入
    shared_ptr<string> tenantId_ {};
    // 需求标题
    // 
    // This parameter is required.
    shared_ptr<string> title_ {};
    // 业务变量对象，tags 可为字符串标签列表
    Darabonba::Json variables_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
