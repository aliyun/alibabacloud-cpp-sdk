// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWORKITEMSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEWORKITEMSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class CreateWorkItemShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWorkItemShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(acceptanceCriteria, acceptanceCriteria_);
      DARABONBA_PTR_TO_JSON(attachments, attachmentsShrink_);
      DARABONBA_PTR_TO_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_TO_JSON(collaboratorUserIds, collaboratorUserIdsShrink_);
      DARABONBA_PTR_TO_JSON(conversationId, conversationId_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(itemType, itemType_);
      DARABONBA_PTR_TO_JSON(ownerUserId, ownerUserId_);
      DARABONBA_PTR_TO_JSON(priority, priority_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(workflowTemplateIds, workflowTemplateIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWorkItemShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(acceptanceCriteria, acceptanceCriteria_);
      DARABONBA_PTR_FROM_JSON(attachments, attachmentsShrink_);
      DARABONBA_PTR_FROM_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_FROM_JSON(collaboratorUserIds, collaboratorUserIdsShrink_);
      DARABONBA_PTR_FROM_JSON(conversationId, conversationId_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(itemType, itemType_);
      DARABONBA_PTR_FROM_JSON(ownerUserId, ownerUserId_);
      DARABONBA_PTR_FROM_JSON(priority, priority_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(workflowTemplateIds, workflowTemplateIdsShrink_);
    };
    CreateWorkItemShrinkRequest() = default ;
    CreateWorkItemShrinkRequest(const CreateWorkItemShrinkRequest &) = default ;
    CreateWorkItemShrinkRequest(CreateWorkItemShrinkRequest &&) = default ;
    CreateWorkItemShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWorkItemShrinkRequest() = default ;
    CreateWorkItemShrinkRequest& operator=(const CreateWorkItemShrinkRequest &) = default ;
    CreateWorkItemShrinkRequest& operator=(CreateWorkItemShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptanceCriteria_ == nullptr
        && this->attachmentsShrink_ == nullptr && this->collaborationGroupId_ == nullptr && this->collaboratorUserIdsShrink_ == nullptr && this->conversationId_ == nullptr && this->description_ == nullptr
        && this->itemType_ == nullptr && this->ownerUserId_ == nullptr && this->priority_ == nullptr && this->tenantId_ == nullptr && this->title_ == nullptr
        && this->workflowTemplateIdsShrink_ == nullptr; };
    // acceptanceCriteria Field Functions 
    bool hasAcceptanceCriteria() const { return this->acceptanceCriteria_ != nullptr;};
    void deleteAcceptanceCriteria() { this->acceptanceCriteria_ = nullptr;};
    inline string getAcceptanceCriteria() const { DARABONBA_PTR_GET_DEFAULT(acceptanceCriteria_, "") };
    inline CreateWorkItemShrinkRequest& setAcceptanceCriteria(string acceptanceCriteria) { DARABONBA_PTR_SET_VALUE(acceptanceCriteria_, acceptanceCriteria) };


    // attachmentsShrink Field Functions 
    bool hasAttachmentsShrink() const { return this->attachmentsShrink_ != nullptr;};
    void deleteAttachmentsShrink() { this->attachmentsShrink_ = nullptr;};
    inline string getAttachmentsShrink() const { DARABONBA_PTR_GET_DEFAULT(attachmentsShrink_, "") };
    inline CreateWorkItemShrinkRequest& setAttachmentsShrink(string attachmentsShrink) { DARABONBA_PTR_SET_VALUE(attachmentsShrink_, attachmentsShrink) };


    // collaborationGroupId Field Functions 
    bool hasCollaborationGroupId() const { return this->collaborationGroupId_ != nullptr;};
    void deleteCollaborationGroupId() { this->collaborationGroupId_ = nullptr;};
    inline string getCollaborationGroupId() const { DARABONBA_PTR_GET_DEFAULT(collaborationGroupId_, "") };
    inline CreateWorkItemShrinkRequest& setCollaborationGroupId(string collaborationGroupId) { DARABONBA_PTR_SET_VALUE(collaborationGroupId_, collaborationGroupId) };


    // collaboratorUserIdsShrink Field Functions 
    bool hasCollaboratorUserIdsShrink() const { return this->collaboratorUserIdsShrink_ != nullptr;};
    void deleteCollaboratorUserIdsShrink() { this->collaboratorUserIdsShrink_ = nullptr;};
    inline string getCollaboratorUserIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(collaboratorUserIdsShrink_, "") };
    inline CreateWorkItemShrinkRequest& setCollaboratorUserIdsShrink(string collaboratorUserIdsShrink) { DARABONBA_PTR_SET_VALUE(collaboratorUserIdsShrink_, collaboratorUserIdsShrink) };


    // conversationId Field Functions 
    bool hasConversationId() const { return this->conversationId_ != nullptr;};
    void deleteConversationId() { this->conversationId_ = nullptr;};
    inline string getConversationId() const { DARABONBA_PTR_GET_DEFAULT(conversationId_, "") };
    inline CreateWorkItemShrinkRequest& setConversationId(string conversationId) { DARABONBA_PTR_SET_VALUE(conversationId_, conversationId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateWorkItemShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // itemType Field Functions 
    bool hasItemType() const { return this->itemType_ != nullptr;};
    void deleteItemType() { this->itemType_ = nullptr;};
    inline string getItemType() const { DARABONBA_PTR_GET_DEFAULT(itemType_, "") };
    inline CreateWorkItemShrinkRequest& setItemType(string itemType) { DARABONBA_PTR_SET_VALUE(itemType_, itemType) };


    // ownerUserId Field Functions 
    bool hasOwnerUserId() const { return this->ownerUserId_ != nullptr;};
    void deleteOwnerUserId() { this->ownerUserId_ = nullptr;};
    inline int64_t getOwnerUserId() const { DARABONBA_PTR_GET_DEFAULT(ownerUserId_, 0L) };
    inline CreateWorkItemShrinkRequest& setOwnerUserId(int64_t ownerUserId) { DARABONBA_PTR_SET_VALUE(ownerUserId_, ownerUserId) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline string getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
    inline CreateWorkItemShrinkRequest& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline CreateWorkItemShrinkRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CreateWorkItemShrinkRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // workflowTemplateIdsShrink Field Functions 
    bool hasWorkflowTemplateIdsShrink() const { return this->workflowTemplateIdsShrink_ != nullptr;};
    void deleteWorkflowTemplateIdsShrink() { this->workflowTemplateIdsShrink_ = nullptr;};
    inline string getWorkflowTemplateIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(workflowTemplateIdsShrink_, "") };
    inline CreateWorkItemShrinkRequest& setWorkflowTemplateIdsShrink(string workflowTemplateIdsShrink) { DARABONBA_PTR_SET_VALUE(workflowTemplateIdsShrink_, workflowTemplateIdsShrink) };


  protected:
    // 验收标准
    shared_ptr<string> acceptanceCriteria_ {};
    // 输入附件稳定引用
    shared_ptr<string> attachmentsShrink_ {};
    // 协作空间 ID
    // 
    // This parameter is required.
    shared_ptr<string> collaborationGroupId_ {};
    // 协作人用户ID列表
    shared_ptr<string> collaboratorUserIdsShrink_ {};
    // 关联会话ID
    shared_ptr<string> conversationId_ {};
    // 工作项描述
    shared_ptr<string> description_ {};
    // 工作项类型；仅接受 WORKFLOW
    // 
    // This parameter is required.
    shared_ptr<string> itemType_ {};
    // 负责人用户ID；缺省为调用者本人
    shared_ptr<int64_t> ownerUserId_ {};
    // 排产优先级
    shared_ptr<string> priority_ {};
    // 租户ID，公共参数；缺省时使用调用方默认租户
    shared_ptr<string> tenantId_ {};
    // 工作项标题
    // 
    // This parameter is required.
    shared_ptr<string> title_ {};
    // 绑定的工作流模板ID列表
    shared_ptr<string> workflowTemplateIdsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
