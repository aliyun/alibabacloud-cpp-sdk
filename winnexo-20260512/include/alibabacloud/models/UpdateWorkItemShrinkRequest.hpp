// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWORKITEMSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWORKITEMSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class UpdateWorkItemShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWorkItemShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(acceptanceCriteria, acceptanceCriteria_);
      DARABONBA_PTR_TO_JSON(attachments, attachmentsShrink_);
      DARABONBA_PTR_TO_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_TO_JSON(collaboratorUserIds, collaboratorUserIdsShrink_);
      DARABONBA_PTR_TO_JSON(conversationId, conversationId_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(expectedVersion, expectedVersion_);
      DARABONBA_PTR_TO_JSON(ownerUserId, ownerUserId_);
      DARABONBA_PTR_TO_JSON(priority, priority_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(workItemId, workItemId_);
      DARABONBA_PTR_TO_JSON(workflowTemplateIds, workflowTemplateIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWorkItemShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(acceptanceCriteria, acceptanceCriteria_);
      DARABONBA_PTR_FROM_JSON(attachments, attachmentsShrink_);
      DARABONBA_PTR_FROM_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_FROM_JSON(collaboratorUserIds, collaboratorUserIdsShrink_);
      DARABONBA_PTR_FROM_JSON(conversationId, conversationId_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(expectedVersion, expectedVersion_);
      DARABONBA_PTR_FROM_JSON(ownerUserId, ownerUserId_);
      DARABONBA_PTR_FROM_JSON(priority, priority_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(workItemId, workItemId_);
      DARABONBA_PTR_FROM_JSON(workflowTemplateIds, workflowTemplateIdsShrink_);
    };
    UpdateWorkItemShrinkRequest() = default ;
    UpdateWorkItemShrinkRequest(const UpdateWorkItemShrinkRequest &) = default ;
    UpdateWorkItemShrinkRequest(UpdateWorkItemShrinkRequest &&) = default ;
    UpdateWorkItemShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWorkItemShrinkRequest() = default ;
    UpdateWorkItemShrinkRequest& operator=(const UpdateWorkItemShrinkRequest &) = default ;
    UpdateWorkItemShrinkRequest& operator=(UpdateWorkItemShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptanceCriteria_ == nullptr
        && this->attachmentsShrink_ == nullptr && this->collaborationGroupId_ == nullptr && this->collaboratorUserIdsShrink_ == nullptr && this->conversationId_ == nullptr && this->description_ == nullptr
        && this->expectedVersion_ == nullptr && this->ownerUserId_ == nullptr && this->priority_ == nullptr && this->tenantId_ == nullptr && this->title_ == nullptr
        && this->workItemId_ == nullptr && this->workflowTemplateIdsShrink_ == nullptr; };
    // acceptanceCriteria Field Functions 
    bool hasAcceptanceCriteria() const { return this->acceptanceCriteria_ != nullptr;};
    void deleteAcceptanceCriteria() { this->acceptanceCriteria_ = nullptr;};
    inline string getAcceptanceCriteria() const { DARABONBA_PTR_GET_DEFAULT(acceptanceCriteria_, "") };
    inline UpdateWorkItemShrinkRequest& setAcceptanceCriteria(string acceptanceCriteria) { DARABONBA_PTR_SET_VALUE(acceptanceCriteria_, acceptanceCriteria) };


    // attachmentsShrink Field Functions 
    bool hasAttachmentsShrink() const { return this->attachmentsShrink_ != nullptr;};
    void deleteAttachmentsShrink() { this->attachmentsShrink_ = nullptr;};
    inline string getAttachmentsShrink() const { DARABONBA_PTR_GET_DEFAULT(attachmentsShrink_, "") };
    inline UpdateWorkItemShrinkRequest& setAttachmentsShrink(string attachmentsShrink) { DARABONBA_PTR_SET_VALUE(attachmentsShrink_, attachmentsShrink) };


    // collaborationGroupId Field Functions 
    bool hasCollaborationGroupId() const { return this->collaborationGroupId_ != nullptr;};
    void deleteCollaborationGroupId() { this->collaborationGroupId_ = nullptr;};
    inline string getCollaborationGroupId() const { DARABONBA_PTR_GET_DEFAULT(collaborationGroupId_, "") };
    inline UpdateWorkItemShrinkRequest& setCollaborationGroupId(string collaborationGroupId) { DARABONBA_PTR_SET_VALUE(collaborationGroupId_, collaborationGroupId) };


    // collaboratorUserIdsShrink Field Functions 
    bool hasCollaboratorUserIdsShrink() const { return this->collaboratorUserIdsShrink_ != nullptr;};
    void deleteCollaboratorUserIdsShrink() { this->collaboratorUserIdsShrink_ = nullptr;};
    inline string getCollaboratorUserIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(collaboratorUserIdsShrink_, "") };
    inline UpdateWorkItemShrinkRequest& setCollaboratorUserIdsShrink(string collaboratorUserIdsShrink) { DARABONBA_PTR_SET_VALUE(collaboratorUserIdsShrink_, collaboratorUserIdsShrink) };


    // conversationId Field Functions 
    bool hasConversationId() const { return this->conversationId_ != nullptr;};
    void deleteConversationId() { this->conversationId_ = nullptr;};
    inline string getConversationId() const { DARABONBA_PTR_GET_DEFAULT(conversationId_, "") };
    inline UpdateWorkItemShrinkRequest& setConversationId(string conversationId) { DARABONBA_PTR_SET_VALUE(conversationId_, conversationId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateWorkItemShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // expectedVersion Field Functions 
    bool hasExpectedVersion() const { return this->expectedVersion_ != nullptr;};
    void deleteExpectedVersion() { this->expectedVersion_ = nullptr;};
    inline int64_t getExpectedVersion() const { DARABONBA_PTR_GET_DEFAULT(expectedVersion_, 0L) };
    inline UpdateWorkItemShrinkRequest& setExpectedVersion(int64_t expectedVersion) { DARABONBA_PTR_SET_VALUE(expectedVersion_, expectedVersion) };


    // ownerUserId Field Functions 
    bool hasOwnerUserId() const { return this->ownerUserId_ != nullptr;};
    void deleteOwnerUserId() { this->ownerUserId_ = nullptr;};
    inline int64_t getOwnerUserId() const { DARABONBA_PTR_GET_DEFAULT(ownerUserId_, 0L) };
    inline UpdateWorkItemShrinkRequest& setOwnerUserId(int64_t ownerUserId) { DARABONBA_PTR_SET_VALUE(ownerUserId_, ownerUserId) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline string getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
    inline UpdateWorkItemShrinkRequest& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline UpdateWorkItemShrinkRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline UpdateWorkItemShrinkRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // workItemId Field Functions 
    bool hasWorkItemId() const { return this->workItemId_ != nullptr;};
    void deleteWorkItemId() { this->workItemId_ = nullptr;};
    inline string getWorkItemId() const { DARABONBA_PTR_GET_DEFAULT(workItemId_, "") };
    inline UpdateWorkItemShrinkRequest& setWorkItemId(string workItemId) { DARABONBA_PTR_SET_VALUE(workItemId_, workItemId) };


    // workflowTemplateIdsShrink Field Functions 
    bool hasWorkflowTemplateIdsShrink() const { return this->workflowTemplateIdsShrink_ != nullptr;};
    void deleteWorkflowTemplateIdsShrink() { this->workflowTemplateIdsShrink_ = nullptr;};
    inline string getWorkflowTemplateIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(workflowTemplateIdsShrink_, "") };
    inline UpdateWorkItemShrinkRequest& setWorkflowTemplateIdsShrink(string workflowTemplateIdsShrink) { DARABONBA_PTR_SET_VALUE(workflowTemplateIdsShrink_, workflowTemplateIdsShrink) };


  protected:
    // The acceptance criteria.
    shared_ptr<string> acceptanceCriteria_ {};
    // The stable references for the attachments.
    shared_ptr<string> attachmentsShrink_ {};
    // The ID of the collaboration space.
    // 
    // This parameter is required.
    shared_ptr<string> collaborationGroupId_ {};
    // The list of user IDs of the collaborators.
    shared_ptr<string> collaboratorUserIdsShrink_ {};
    // The ID of the associated conversation.
    shared_ptr<string> conversationId_ {};
    // The description of the work item.
    shared_ptr<string> description_ {};
    // The optimistic version number. Obtain this value from the version field in the previous response.
    // 
    // This parameter is required.
    shared_ptr<int64_t> expectedVersion_ {};
    // The user ID of the owner. If not specified, the user ID of the caller is used.
    shared_ptr<int64_t> ownerUserId_ {};
    // The scheduling priority.
    shared_ptr<string> priority_ {};
    // The tenant ID. This is a common parameter. If not specified, the default tenant of the caller is used.
    shared_ptr<string> tenantId_ {};
    // The title of the work item.
    // 
    // This parameter is required.
    shared_ptr<string> title_ {};
    // The ID of the work item.
    // 
    // This parameter is required.
    shared_ptr<string> workItemId_ {};
    // The list of bound workflow template IDs. If not specified, the existing bindings are retained. If an empty array is provided, the bindings are cleared.
    shared_ptr<string> workflowTemplateIdsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
