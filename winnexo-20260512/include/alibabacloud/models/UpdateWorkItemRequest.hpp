// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWORKITEMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWORKITEMREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class UpdateWorkItemRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWorkItemRequest& obj) { 
      DARABONBA_PTR_TO_JSON(acceptanceCriteria, acceptanceCriteria_);
      DARABONBA_PTR_TO_JSON(attachments, attachments_);
      DARABONBA_PTR_TO_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_TO_JSON(collaboratorUserIds, collaboratorUserIds_);
      DARABONBA_PTR_TO_JSON(conversationId, conversationId_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(expectedVersion, expectedVersion_);
      DARABONBA_PTR_TO_JSON(ownerUserId, ownerUserId_);
      DARABONBA_PTR_TO_JSON(priority, priority_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(workItemId, workItemId_);
      DARABONBA_PTR_TO_JSON(workflowTemplateIds, workflowTemplateIds_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWorkItemRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(acceptanceCriteria, acceptanceCriteria_);
      DARABONBA_PTR_FROM_JSON(attachments, attachments_);
      DARABONBA_PTR_FROM_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_FROM_JSON(collaboratorUserIds, collaboratorUserIds_);
      DARABONBA_PTR_FROM_JSON(conversationId, conversationId_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(expectedVersion, expectedVersion_);
      DARABONBA_PTR_FROM_JSON(ownerUserId, ownerUserId_);
      DARABONBA_PTR_FROM_JSON(priority, priority_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(workItemId, workItemId_);
      DARABONBA_PTR_FROM_JSON(workflowTemplateIds, workflowTemplateIds_);
    };
    UpdateWorkItemRequest() = default ;
    UpdateWorkItemRequest(const UpdateWorkItemRequest &) = default ;
    UpdateWorkItemRequest(UpdateWorkItemRequest &&) = default ;
    UpdateWorkItemRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWorkItemRequest() = default ;
    UpdateWorkItemRequest& operator=(const UpdateWorkItemRequest &) = default ;
    UpdateWorkItemRequest& operator=(UpdateWorkItemRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Attachments : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Attachments& obj) { 
        DARABONBA_PTR_TO_JSON(contentType, contentType_);
        DARABONBA_PTR_TO_JSON(refUrl, refUrl_);
        DARABONBA_PTR_TO_JSON(resourceId, resourceId_);
        DARABONBA_PTR_TO_JSON(resourceKind, resourceKind_);
        DARABONBA_PTR_TO_JSON(sizeBytes, sizeBytes_);
        DARABONBA_PTR_TO_JSON(title, title_);
      };
      friend void from_json(const Darabonba::Json& j, Attachments& obj) { 
        DARABONBA_PTR_FROM_JSON(contentType, contentType_);
        DARABONBA_PTR_FROM_JSON(refUrl, refUrl_);
        DARABONBA_PTR_FROM_JSON(resourceId, resourceId_);
        DARABONBA_PTR_FROM_JSON(resourceKind, resourceKind_);
        DARABONBA_PTR_FROM_JSON(sizeBytes, sizeBytes_);
        DARABONBA_PTR_FROM_JSON(title, title_);
      };
      Attachments() = default ;
      Attachments(const Attachments &) = default ;
      Attachments(Attachments &&) = default ;
      Attachments(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Attachments() = default ;
      Attachments& operator=(const Attachments &) = default ;
      Attachments& operator=(Attachments &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->contentType_ == nullptr
        && this->refUrl_ == nullptr && this->resourceId_ == nullptr && this->resourceKind_ == nullptr && this->sizeBytes_ == nullptr && this->title_ == nullptr; };
      // contentType Field Functions 
      bool hasContentType() const { return this->contentType_ != nullptr;};
      void deleteContentType() { this->contentType_ = nullptr;};
      inline string getContentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
      inline Attachments& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


      // refUrl Field Functions 
      bool hasRefUrl() const { return this->refUrl_ != nullptr;};
      void deleteRefUrl() { this->refUrl_ = nullptr;};
      inline string getRefUrl() const { DARABONBA_PTR_GET_DEFAULT(refUrl_, "") };
      inline Attachments& setRefUrl(string refUrl) { DARABONBA_PTR_SET_VALUE(refUrl_, refUrl) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline Attachments& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // resourceKind Field Functions 
      bool hasResourceKind() const { return this->resourceKind_ != nullptr;};
      void deleteResourceKind() { this->resourceKind_ = nullptr;};
      inline string getResourceKind() const { DARABONBA_PTR_GET_DEFAULT(resourceKind_, "") };
      inline Attachments& setResourceKind(string resourceKind) { DARABONBA_PTR_SET_VALUE(resourceKind_, resourceKind) };


      // sizeBytes Field Functions 
      bool hasSizeBytes() const { return this->sizeBytes_ != nullptr;};
      void deleteSizeBytes() { this->sizeBytes_ = nullptr;};
      inline int64_t getSizeBytes() const { DARABONBA_PTR_GET_DEFAULT(sizeBytes_, 0L) };
      inline Attachments& setSizeBytes(int64_t sizeBytes) { DARABONBA_PTR_SET_VALUE(sizeBytes_, sizeBytes) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline Attachments& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    protected:
      // 内容类型
      shared_ptr<string> contentType_ {};
      // 附件引用地址
      shared_ptr<string> refUrl_ {};
      // 附件资源ID
      // 
      // This parameter is required.
      shared_ptr<string> resourceId_ {};
      // 附件资源类型
      // 
      // This parameter is required.
      shared_ptr<string> resourceKind_ {};
      // 附件大小(字节)，上限 20MB
      shared_ptr<int64_t> sizeBytes_ {};
      // 附件标题
      shared_ptr<string> title_ {};
    };

    virtual bool empty() const override { return this->acceptanceCriteria_ == nullptr
        && this->attachments_ == nullptr && this->collaborationGroupId_ == nullptr && this->collaboratorUserIds_ == nullptr && this->conversationId_ == nullptr && this->description_ == nullptr
        && this->expectedVersion_ == nullptr && this->ownerUserId_ == nullptr && this->priority_ == nullptr && this->tenantId_ == nullptr && this->title_ == nullptr
        && this->workItemId_ == nullptr && this->workflowTemplateIds_ == nullptr; };
    // acceptanceCriteria Field Functions 
    bool hasAcceptanceCriteria() const { return this->acceptanceCriteria_ != nullptr;};
    void deleteAcceptanceCriteria() { this->acceptanceCriteria_ = nullptr;};
    inline string getAcceptanceCriteria() const { DARABONBA_PTR_GET_DEFAULT(acceptanceCriteria_, "") };
    inline UpdateWorkItemRequest& setAcceptanceCriteria(string acceptanceCriteria) { DARABONBA_PTR_SET_VALUE(acceptanceCriteria_, acceptanceCriteria) };


    // attachments Field Functions 
    bool hasAttachments() const { return this->attachments_ != nullptr;};
    void deleteAttachments() { this->attachments_ = nullptr;};
    inline const vector<UpdateWorkItemRequest::Attachments> & getAttachments() const { DARABONBA_PTR_GET_CONST(attachments_, vector<UpdateWorkItemRequest::Attachments>) };
    inline vector<UpdateWorkItemRequest::Attachments> getAttachments() { DARABONBA_PTR_GET(attachments_, vector<UpdateWorkItemRequest::Attachments>) };
    inline UpdateWorkItemRequest& setAttachments(const vector<UpdateWorkItemRequest::Attachments> & attachments) { DARABONBA_PTR_SET_VALUE(attachments_, attachments) };
    inline UpdateWorkItemRequest& setAttachments(vector<UpdateWorkItemRequest::Attachments> && attachments) { DARABONBA_PTR_SET_RVALUE(attachments_, attachments) };


    // collaborationGroupId Field Functions 
    bool hasCollaborationGroupId() const { return this->collaborationGroupId_ != nullptr;};
    void deleteCollaborationGroupId() { this->collaborationGroupId_ = nullptr;};
    inline string getCollaborationGroupId() const { DARABONBA_PTR_GET_DEFAULT(collaborationGroupId_, "") };
    inline UpdateWorkItemRequest& setCollaborationGroupId(string collaborationGroupId) { DARABONBA_PTR_SET_VALUE(collaborationGroupId_, collaborationGroupId) };


    // collaboratorUserIds Field Functions 
    bool hasCollaboratorUserIds() const { return this->collaboratorUserIds_ != nullptr;};
    void deleteCollaboratorUserIds() { this->collaboratorUserIds_ = nullptr;};
    inline const vector<int64_t> & getCollaboratorUserIds() const { DARABONBA_PTR_GET_CONST(collaboratorUserIds_, vector<int64_t>) };
    inline vector<int64_t> getCollaboratorUserIds() { DARABONBA_PTR_GET(collaboratorUserIds_, vector<int64_t>) };
    inline UpdateWorkItemRequest& setCollaboratorUserIds(const vector<int64_t> & collaboratorUserIds) { DARABONBA_PTR_SET_VALUE(collaboratorUserIds_, collaboratorUserIds) };
    inline UpdateWorkItemRequest& setCollaboratorUserIds(vector<int64_t> && collaboratorUserIds) { DARABONBA_PTR_SET_RVALUE(collaboratorUserIds_, collaboratorUserIds) };


    // conversationId Field Functions 
    bool hasConversationId() const { return this->conversationId_ != nullptr;};
    void deleteConversationId() { this->conversationId_ = nullptr;};
    inline string getConversationId() const { DARABONBA_PTR_GET_DEFAULT(conversationId_, "") };
    inline UpdateWorkItemRequest& setConversationId(string conversationId) { DARABONBA_PTR_SET_VALUE(conversationId_, conversationId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateWorkItemRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // expectedVersion Field Functions 
    bool hasExpectedVersion() const { return this->expectedVersion_ != nullptr;};
    void deleteExpectedVersion() { this->expectedVersion_ = nullptr;};
    inline int64_t getExpectedVersion() const { DARABONBA_PTR_GET_DEFAULT(expectedVersion_, 0L) };
    inline UpdateWorkItemRequest& setExpectedVersion(int64_t expectedVersion) { DARABONBA_PTR_SET_VALUE(expectedVersion_, expectedVersion) };


    // ownerUserId Field Functions 
    bool hasOwnerUserId() const { return this->ownerUserId_ != nullptr;};
    void deleteOwnerUserId() { this->ownerUserId_ = nullptr;};
    inline int64_t getOwnerUserId() const { DARABONBA_PTR_GET_DEFAULT(ownerUserId_, 0L) };
    inline UpdateWorkItemRequest& setOwnerUserId(int64_t ownerUserId) { DARABONBA_PTR_SET_VALUE(ownerUserId_, ownerUserId) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline string getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
    inline UpdateWorkItemRequest& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline UpdateWorkItemRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline UpdateWorkItemRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // workItemId Field Functions 
    bool hasWorkItemId() const { return this->workItemId_ != nullptr;};
    void deleteWorkItemId() { this->workItemId_ = nullptr;};
    inline string getWorkItemId() const { DARABONBA_PTR_GET_DEFAULT(workItemId_, "") };
    inline UpdateWorkItemRequest& setWorkItemId(string workItemId) { DARABONBA_PTR_SET_VALUE(workItemId_, workItemId) };


    // workflowTemplateIds Field Functions 
    bool hasWorkflowTemplateIds() const { return this->workflowTemplateIds_ != nullptr;};
    void deleteWorkflowTemplateIds() { this->workflowTemplateIds_ = nullptr;};
    inline const vector<string> & getWorkflowTemplateIds() const { DARABONBA_PTR_GET_CONST(workflowTemplateIds_, vector<string>) };
    inline vector<string> getWorkflowTemplateIds() { DARABONBA_PTR_GET(workflowTemplateIds_, vector<string>) };
    inline UpdateWorkItemRequest& setWorkflowTemplateIds(const vector<string> & workflowTemplateIds) { DARABONBA_PTR_SET_VALUE(workflowTemplateIds_, workflowTemplateIds) };
    inline UpdateWorkItemRequest& setWorkflowTemplateIds(vector<string> && workflowTemplateIds) { DARABONBA_PTR_SET_RVALUE(workflowTemplateIds_, workflowTemplateIds) };


  protected:
    // 验收标准
    shared_ptr<string> acceptanceCriteria_ {};
    // 输入附件稳定引用
    shared_ptr<vector<UpdateWorkItemRequest::Attachments>> attachments_ {};
    // 协作空间 ID
    // 
    // This parameter is required.
    shared_ptr<string> collaborationGroupId_ {};
    // 协作人用户ID列表
    shared_ptr<vector<int64_t>> collaboratorUserIds_ {};
    // 关联会话ID
    shared_ptr<string> conversationId_ {};
    // 工作项描述
    shared_ptr<string> description_ {};
    // 乐观版本号，取上次响应的 version
    // 
    // This parameter is required.
    shared_ptr<int64_t> expectedVersion_ {};
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
    // 工作项 ID
    // 
    // This parameter is required.
    shared_ptr<string> workItemId_ {};
    // 绑定的工作流模板ID列表；未传保持既有绑定，空数组清空
    shared_ptr<vector<string>> workflowTemplateIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
