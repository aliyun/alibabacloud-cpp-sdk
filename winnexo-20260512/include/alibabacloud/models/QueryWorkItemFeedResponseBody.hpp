// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYWORKITEMFEEDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYWORKITEMFEEDRESPONSEBODY_HPP_
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
  class QueryWorkItemFeedResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryWorkItemFeedResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(entries, entries_);
      DARABONBA_PTR_TO_JSON(hasMore, hasMore_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(nextCursor, nextCursor_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_ANY_TO_JSON(scopeCounts, scopeCounts_);
      DARABONBA_ANY_TO_JSON(statusCounts, statusCounts_);
      DARABONBA_PTR_TO_JSON(totalEntryCount, totalEntryCount_);
      DARABONBA_PTR_TO_JSON(totalWorkItemCount, totalWorkItemCount_);
    };
    friend void from_json(const Darabonba::Json& j, QueryWorkItemFeedResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(entries, entries_);
      DARABONBA_PTR_FROM_JSON(hasMore, hasMore_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(nextCursor, nextCursor_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_ANY_FROM_JSON(scopeCounts, scopeCounts_);
      DARABONBA_ANY_FROM_JSON(statusCounts, statusCounts_);
      DARABONBA_PTR_FROM_JSON(totalEntryCount, totalEntryCount_);
      DARABONBA_PTR_FROM_JSON(totalWorkItemCount, totalWorkItemCount_);
    };
    QueryWorkItemFeedResponseBody() = default ;
    QueryWorkItemFeedResponseBody(const QueryWorkItemFeedResponseBody &) = default ;
    QueryWorkItemFeedResponseBody(QueryWorkItemFeedResponseBody &&) = default ;
    QueryWorkItemFeedResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryWorkItemFeedResponseBody() = default ;
    QueryWorkItemFeedResponseBody& operator=(const QueryWorkItemFeedResponseBody &) = default ;
    QueryWorkItemFeedResponseBody& operator=(QueryWorkItemFeedResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Entries : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Entries& obj) { 
        DARABONBA_PTR_TO_JSON(entryType, entryType_);
        DARABONBA_PTR_TO_JSON(hasMoreChildren, hasMoreChildren_);
        DARABONBA_PTR_TO_JSON(item, item_);
        DARABONBA_PTR_TO_JSON(items, items_);
        DARABONBA_PTR_TO_JSON(latestWorkItemAt, latestWorkItemAt_);
        DARABONBA_PTR_TO_JSON(matchedWorkItemCount, matchedWorkItemCount_);
        DARABONBA_PTR_TO_JSON(sourceTaskId, sourceTaskId_);
        DARABONBA_PTR_TO_JSON(taskName, taskName_);
      };
      friend void from_json(const Darabonba::Json& j, Entries& obj) { 
        DARABONBA_PTR_FROM_JSON(entryType, entryType_);
        DARABONBA_PTR_FROM_JSON(hasMoreChildren, hasMoreChildren_);
        DARABONBA_PTR_FROM_JSON(item, item_);
        DARABONBA_PTR_FROM_JSON(items, items_);
        DARABONBA_PTR_FROM_JSON(latestWorkItemAt, latestWorkItemAt_);
        DARABONBA_PTR_FROM_JSON(matchedWorkItemCount, matchedWorkItemCount_);
        DARABONBA_PTR_FROM_JSON(sourceTaskId, sourceTaskId_);
        DARABONBA_PTR_FROM_JSON(taskName, taskName_);
      };
      Entries() = default ;
      Entries(const Entries &) = default ;
      Entries(Entries &&) = default ;
      Entries(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Entries() = default ;
      Entries& operator=(const Entries &) = default ;
      Entries& operator=(Entries &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Items : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Items& obj) { 
          DARABONBA_PTR_TO_JSON(acceptanceCriteria, acceptanceCriteria_);
          DARABONBA_PTR_TO_JSON(appliedStatusVersion, appliedStatusVersion_);
          DARABONBA_PTR_TO_JSON(attachments, attachments_);
          DARABONBA_PTR_TO_JSON(businessStatus, businessStatus_);
          DARABONBA_PTR_TO_JSON(canDelete, canDelete_);
          DARABONBA_PTR_TO_JSON(canManage, canManage_);
          DARABONBA_PTR_TO_JSON(canManageVisibility, canManageVisibility_);
          DARABONBA_PTR_TO_JSON(canRename, canRename_);
          DARABONBA_PTR_TO_JSON(collaborationGroupId, collaborationGroupId_);
          DARABONBA_PTR_TO_JSON(collaboratorUserIds, collaboratorUserIds_);
          DARABONBA_PTR_TO_JSON(conversationId, conversationId_);
          DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
          DARABONBA_PTR_TO_JSON(createdByUserId, createdByUserId_);
          DARABONBA_PTR_TO_JSON(creationType, creationType_);
          DARABONBA_PTR_TO_JSON(currentPlanId, currentPlanId_);
          DARABONBA_PTR_TO_JSON(currentRevision, currentRevision_);
          DARABONBA_PTR_TO_JSON(currentRunId, currentRunId_);
          DARABONBA_PTR_TO_JSON(currentRunSeq, currentRunSeq_);
          DARABONBA_PTR_TO_JSON(currentStepName, currentStepName_);
          DARABONBA_PTR_TO_JSON(description, description_);
          DARABONBA_PTR_TO_JSON(inputVersion, inputVersion_);
          DARABONBA_PTR_TO_JSON(itemType, itemType_);
          DARABONBA_PTR_TO_JSON(lastProcessingAt, lastProcessingAt_);
          DARABONBA_PTR_TO_JSON(legacyTopic, legacyTopic_);
          DARABONBA_PTR_TO_JSON(memberUserIds, memberUserIds_);
          DARABONBA_PTR_TO_JSON(modifiedAt, modifiedAt_);
          DARABONBA_PTR_TO_JSON(ownerUserId, ownerUserId_);
          DARABONBA_PTR_TO_JSON(pinned, pinned_);
          DARABONBA_PTR_TO_JSON(priority, priority_);
          DARABONBA_PTR_TO_JSON(progressCompleted, progressCompleted_);
          DARABONBA_PTR_TO_JSON(progressTotal, progressTotal_);
          DARABONBA_PTR_TO_JSON(sourceExecutionId, sourceExecutionId_);
          DARABONBA_PTR_TO_JSON(sourceTaskId, sourceTaskId_);
          DARABONBA_PTR_TO_JSON(sourceTaskName, sourceTaskName_);
          DARABONBA_PTR_TO_JSON(sourceTriggerKey, sourceTriggerKey_);
          DARABONBA_PTR_TO_JSON(sourceType, sourceType_);
          DARABONBA_PTR_TO_JSON(title, title_);
          DARABONBA_PTR_TO_JSON(triggerTimezone, triggerTimezone_);
          DARABONBA_PTR_TO_JSON(triggeredAt, triggeredAt_);
          DARABONBA_PTR_TO_JSON(version, version_);
          DARABONBA_PTR_TO_JSON(visibility, visibility_);
          DARABONBA_PTR_TO_JSON(visibilitySource, visibilitySource_);
          DARABONBA_PTR_TO_JSON(workItemId, workItemId_);
          DARABONBA_PTR_TO_JSON(workflowStatus, workflowStatus_);
          DARABONBA_PTR_TO_JSON(workflowTemplateIds, workflowTemplateIds_);
        };
        friend void from_json(const Darabonba::Json& j, Items& obj) { 
          DARABONBA_PTR_FROM_JSON(acceptanceCriteria, acceptanceCriteria_);
          DARABONBA_PTR_FROM_JSON(appliedStatusVersion, appliedStatusVersion_);
          DARABONBA_PTR_FROM_JSON(attachments, attachments_);
          DARABONBA_PTR_FROM_JSON(businessStatus, businessStatus_);
          DARABONBA_PTR_FROM_JSON(canDelete, canDelete_);
          DARABONBA_PTR_FROM_JSON(canManage, canManage_);
          DARABONBA_PTR_FROM_JSON(canManageVisibility, canManageVisibility_);
          DARABONBA_PTR_FROM_JSON(canRename, canRename_);
          DARABONBA_PTR_FROM_JSON(collaborationGroupId, collaborationGroupId_);
          DARABONBA_PTR_FROM_JSON(collaboratorUserIds, collaboratorUserIds_);
          DARABONBA_PTR_FROM_JSON(conversationId, conversationId_);
          DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
          DARABONBA_PTR_FROM_JSON(createdByUserId, createdByUserId_);
          DARABONBA_PTR_FROM_JSON(creationType, creationType_);
          DARABONBA_PTR_FROM_JSON(currentPlanId, currentPlanId_);
          DARABONBA_PTR_FROM_JSON(currentRevision, currentRevision_);
          DARABONBA_PTR_FROM_JSON(currentRunId, currentRunId_);
          DARABONBA_PTR_FROM_JSON(currentRunSeq, currentRunSeq_);
          DARABONBA_PTR_FROM_JSON(currentStepName, currentStepName_);
          DARABONBA_PTR_FROM_JSON(description, description_);
          DARABONBA_PTR_FROM_JSON(inputVersion, inputVersion_);
          DARABONBA_PTR_FROM_JSON(itemType, itemType_);
          DARABONBA_PTR_FROM_JSON(lastProcessingAt, lastProcessingAt_);
          DARABONBA_PTR_FROM_JSON(legacyTopic, legacyTopic_);
          DARABONBA_PTR_FROM_JSON(memberUserIds, memberUserIds_);
          DARABONBA_PTR_FROM_JSON(modifiedAt, modifiedAt_);
          DARABONBA_PTR_FROM_JSON(ownerUserId, ownerUserId_);
          DARABONBA_PTR_FROM_JSON(pinned, pinned_);
          DARABONBA_PTR_FROM_JSON(priority, priority_);
          DARABONBA_PTR_FROM_JSON(progressCompleted, progressCompleted_);
          DARABONBA_PTR_FROM_JSON(progressTotal, progressTotal_);
          DARABONBA_PTR_FROM_JSON(sourceExecutionId, sourceExecutionId_);
          DARABONBA_PTR_FROM_JSON(sourceTaskId, sourceTaskId_);
          DARABONBA_PTR_FROM_JSON(sourceTaskName, sourceTaskName_);
          DARABONBA_PTR_FROM_JSON(sourceTriggerKey, sourceTriggerKey_);
          DARABONBA_PTR_FROM_JSON(sourceType, sourceType_);
          DARABONBA_PTR_FROM_JSON(title, title_);
          DARABONBA_PTR_FROM_JSON(triggerTimezone, triggerTimezone_);
          DARABONBA_PTR_FROM_JSON(triggeredAt, triggeredAt_);
          DARABONBA_PTR_FROM_JSON(version, version_);
          DARABONBA_PTR_FROM_JSON(visibility, visibility_);
          DARABONBA_PTR_FROM_JSON(visibilitySource, visibilitySource_);
          DARABONBA_PTR_FROM_JSON(workItemId, workItemId_);
          DARABONBA_PTR_FROM_JSON(workflowStatus, workflowStatus_);
          DARABONBA_PTR_FROM_JSON(workflowTemplateIds, workflowTemplateIds_);
        };
        Items() = default ;
        Items(const Items &) = default ;
        Items(Items &&) = default ;
        Items(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Items() = default ;
        Items& operator=(const Items &) = default ;
        Items& operator=(Items &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Attachments : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Attachments& obj) { 
            DARABONBA_PTR_TO_JSON(attachmentId, attachmentId_);
            DARABONBA_PTR_TO_JSON(contentType, contentType_);
            DARABONBA_PTR_TO_JSON(refUrl, refUrl_);
            DARABONBA_PTR_TO_JSON(resourceId, resourceId_);
            DARABONBA_PTR_TO_JSON(resourceKind, resourceKind_);
            DARABONBA_PTR_TO_JSON(sizeBytes, sizeBytes_);
            DARABONBA_PTR_TO_JSON(title, title_);
          };
          friend void from_json(const Darabonba::Json& j, Attachments& obj) { 
            DARABONBA_PTR_FROM_JSON(attachmentId, attachmentId_);
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
          virtual bool empty() const override { return this->attachmentId_ == nullptr
        && this->contentType_ == nullptr && this->refUrl_ == nullptr && this->resourceId_ == nullptr && this->resourceKind_ == nullptr && this->sizeBytes_ == nullptr
        && this->title_ == nullptr; };
          // attachmentId Field Functions 
          bool hasAttachmentId() const { return this->attachmentId_ != nullptr;};
          void deleteAttachmentId() { this->attachmentId_ = nullptr;};
          inline string getAttachmentId() const { DARABONBA_PTR_GET_DEFAULT(attachmentId_, "") };
          inline Attachments& setAttachmentId(string attachmentId) { DARABONBA_PTR_SET_VALUE(attachmentId_, attachmentId) };


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
          // The attachment ID.
          shared_ptr<string> attachmentId_ {};
          // The content type.
          shared_ptr<string> contentType_ {};
          // The access URL of the attachment (prefixed with an OpenAPI 302 redirect).
          shared_ptr<string> refUrl_ {};
          // The attachment resource ID.
          shared_ptr<string> resourceId_ {};
          // The attachment resource type.
          shared_ptr<string> resourceKind_ {};
          // The attachment size in bytes.
          shared_ptr<int64_t> sizeBytes_ {};
          // The attachment title.
          shared_ptr<string> title_ {};
        };

        virtual bool empty() const override { return this->acceptanceCriteria_ == nullptr
        && this->appliedStatusVersion_ == nullptr && this->attachments_ == nullptr && this->businessStatus_ == nullptr && this->canDelete_ == nullptr && this->canManage_ == nullptr
        && this->canManageVisibility_ == nullptr && this->canRename_ == nullptr && this->collaborationGroupId_ == nullptr && this->collaboratorUserIds_ == nullptr && this->conversationId_ == nullptr
        && this->createdAt_ == nullptr && this->createdByUserId_ == nullptr && this->creationType_ == nullptr && this->currentPlanId_ == nullptr && this->currentRevision_ == nullptr
        && this->currentRunId_ == nullptr && this->currentRunSeq_ == nullptr && this->currentStepName_ == nullptr && this->description_ == nullptr && this->inputVersion_ == nullptr
        && this->itemType_ == nullptr && this->lastProcessingAt_ == nullptr && this->legacyTopic_ == nullptr && this->memberUserIds_ == nullptr && this->modifiedAt_ == nullptr
        && this->ownerUserId_ == nullptr && this->pinned_ == nullptr && this->priority_ == nullptr && this->progressCompleted_ == nullptr && this->progressTotal_ == nullptr
        && this->sourceExecutionId_ == nullptr && this->sourceTaskId_ == nullptr && this->sourceTaskName_ == nullptr && this->sourceTriggerKey_ == nullptr && this->sourceType_ == nullptr
        && this->title_ == nullptr && this->triggerTimezone_ == nullptr && this->triggeredAt_ == nullptr && this->version_ == nullptr && this->visibility_ == nullptr
        && this->visibilitySource_ == nullptr && this->workItemId_ == nullptr && this->workflowStatus_ == nullptr && this->workflowTemplateIds_ == nullptr; };
        // acceptanceCriteria Field Functions 
        bool hasAcceptanceCriteria() const { return this->acceptanceCriteria_ != nullptr;};
        void deleteAcceptanceCriteria() { this->acceptanceCriteria_ = nullptr;};
        inline string getAcceptanceCriteria() const { DARABONBA_PTR_GET_DEFAULT(acceptanceCriteria_, "") };
        inline Items& setAcceptanceCriteria(string acceptanceCriteria) { DARABONBA_PTR_SET_VALUE(acceptanceCriteria_, acceptanceCriteria) };


        // appliedStatusVersion Field Functions 
        bool hasAppliedStatusVersion() const { return this->appliedStatusVersion_ != nullptr;};
        void deleteAppliedStatusVersion() { this->appliedStatusVersion_ = nullptr;};
        inline int64_t getAppliedStatusVersion() const { DARABONBA_PTR_GET_DEFAULT(appliedStatusVersion_, 0L) };
        inline Items& setAppliedStatusVersion(int64_t appliedStatusVersion) { DARABONBA_PTR_SET_VALUE(appliedStatusVersion_, appliedStatusVersion) };


        // attachments Field Functions 
        bool hasAttachments() const { return this->attachments_ != nullptr;};
        void deleteAttachments() { this->attachments_ = nullptr;};
        inline const vector<Items::Attachments> & getAttachments() const { DARABONBA_PTR_GET_CONST(attachments_, vector<Items::Attachments>) };
        inline vector<Items::Attachments> getAttachments() { DARABONBA_PTR_GET(attachments_, vector<Items::Attachments>) };
        inline Items& setAttachments(const vector<Items::Attachments> & attachments) { DARABONBA_PTR_SET_VALUE(attachments_, attachments) };
        inline Items& setAttachments(vector<Items::Attachments> && attachments) { DARABONBA_PTR_SET_RVALUE(attachments_, attachments) };


        // businessStatus Field Functions 
        bool hasBusinessStatus() const { return this->businessStatus_ != nullptr;};
        void deleteBusinessStatus() { this->businessStatus_ = nullptr;};
        inline string getBusinessStatus() const { DARABONBA_PTR_GET_DEFAULT(businessStatus_, "") };
        inline Items& setBusinessStatus(string businessStatus) { DARABONBA_PTR_SET_VALUE(businessStatus_, businessStatus) };


        // canDelete Field Functions 
        bool hasCanDelete() const { return this->canDelete_ != nullptr;};
        void deleteCanDelete() { this->canDelete_ = nullptr;};
        inline bool getCanDelete() const { DARABONBA_PTR_GET_DEFAULT(canDelete_, false) };
        inline Items& setCanDelete(bool canDelete) { DARABONBA_PTR_SET_VALUE(canDelete_, canDelete) };


        // canManage Field Functions 
        bool hasCanManage() const { return this->canManage_ != nullptr;};
        void deleteCanManage() { this->canManage_ = nullptr;};
        inline bool getCanManage() const { DARABONBA_PTR_GET_DEFAULT(canManage_, false) };
        inline Items& setCanManage(bool canManage) { DARABONBA_PTR_SET_VALUE(canManage_, canManage) };


        // canManageVisibility Field Functions 
        bool hasCanManageVisibility() const { return this->canManageVisibility_ != nullptr;};
        void deleteCanManageVisibility() { this->canManageVisibility_ = nullptr;};
        inline bool getCanManageVisibility() const { DARABONBA_PTR_GET_DEFAULT(canManageVisibility_, false) };
        inline Items& setCanManageVisibility(bool canManageVisibility) { DARABONBA_PTR_SET_VALUE(canManageVisibility_, canManageVisibility) };


        // canRename Field Functions 
        bool hasCanRename() const { return this->canRename_ != nullptr;};
        void deleteCanRename() { this->canRename_ = nullptr;};
        inline bool getCanRename() const { DARABONBA_PTR_GET_DEFAULT(canRename_, false) };
        inline Items& setCanRename(bool canRename) { DARABONBA_PTR_SET_VALUE(canRename_, canRename) };


        // collaborationGroupId Field Functions 
        bool hasCollaborationGroupId() const { return this->collaborationGroupId_ != nullptr;};
        void deleteCollaborationGroupId() { this->collaborationGroupId_ = nullptr;};
        inline string getCollaborationGroupId() const { DARABONBA_PTR_GET_DEFAULT(collaborationGroupId_, "") };
        inline Items& setCollaborationGroupId(string collaborationGroupId) { DARABONBA_PTR_SET_VALUE(collaborationGroupId_, collaborationGroupId) };


        // collaboratorUserIds Field Functions 
        bool hasCollaboratorUserIds() const { return this->collaboratorUserIds_ != nullptr;};
        void deleteCollaboratorUserIds() { this->collaboratorUserIds_ = nullptr;};
        inline const vector<int64_t> & getCollaboratorUserIds() const { DARABONBA_PTR_GET_CONST(collaboratorUserIds_, vector<int64_t>) };
        inline vector<int64_t> getCollaboratorUserIds() { DARABONBA_PTR_GET(collaboratorUserIds_, vector<int64_t>) };
        inline Items& setCollaboratorUserIds(const vector<int64_t> & collaboratorUserIds) { DARABONBA_PTR_SET_VALUE(collaboratorUserIds_, collaboratorUserIds) };
        inline Items& setCollaboratorUserIds(vector<int64_t> && collaboratorUserIds) { DARABONBA_PTR_SET_RVALUE(collaboratorUserIds_, collaboratorUserIds) };


        // conversationId Field Functions 
        bool hasConversationId() const { return this->conversationId_ != nullptr;};
        void deleteConversationId() { this->conversationId_ = nullptr;};
        inline string getConversationId() const { DARABONBA_PTR_GET_DEFAULT(conversationId_, "") };
        inline Items& setConversationId(string conversationId) { DARABONBA_PTR_SET_VALUE(conversationId_, conversationId) };


        // createdAt Field Functions 
        bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
        void deleteCreatedAt() { this->createdAt_ = nullptr;};
        inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
        inline Items& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


        // createdByUserId Field Functions 
        bool hasCreatedByUserId() const { return this->createdByUserId_ != nullptr;};
        void deleteCreatedByUserId() { this->createdByUserId_ = nullptr;};
        inline int64_t getCreatedByUserId() const { DARABONBA_PTR_GET_DEFAULT(createdByUserId_, 0L) };
        inline Items& setCreatedByUserId(int64_t createdByUserId) { DARABONBA_PTR_SET_VALUE(createdByUserId_, createdByUserId) };


        // creationType Field Functions 
        bool hasCreationType() const { return this->creationType_ != nullptr;};
        void deleteCreationType() { this->creationType_ = nullptr;};
        inline string getCreationType() const { DARABONBA_PTR_GET_DEFAULT(creationType_, "") };
        inline Items& setCreationType(string creationType) { DARABONBA_PTR_SET_VALUE(creationType_, creationType) };


        // currentPlanId Field Functions 
        bool hasCurrentPlanId() const { return this->currentPlanId_ != nullptr;};
        void deleteCurrentPlanId() { this->currentPlanId_ = nullptr;};
        inline string getCurrentPlanId() const { DARABONBA_PTR_GET_DEFAULT(currentPlanId_, "") };
        inline Items& setCurrentPlanId(string currentPlanId) { DARABONBA_PTR_SET_VALUE(currentPlanId_, currentPlanId) };


        // currentRevision Field Functions 
        bool hasCurrentRevision() const { return this->currentRevision_ != nullptr;};
        void deleteCurrentRevision() { this->currentRevision_ = nullptr;};
        inline int64_t getCurrentRevision() const { DARABONBA_PTR_GET_DEFAULT(currentRevision_, 0L) };
        inline Items& setCurrentRevision(int64_t currentRevision) { DARABONBA_PTR_SET_VALUE(currentRevision_, currentRevision) };


        // currentRunId Field Functions 
        bool hasCurrentRunId() const { return this->currentRunId_ != nullptr;};
        void deleteCurrentRunId() { this->currentRunId_ = nullptr;};
        inline string getCurrentRunId() const { DARABONBA_PTR_GET_DEFAULT(currentRunId_, "") };
        inline Items& setCurrentRunId(string currentRunId) { DARABONBA_PTR_SET_VALUE(currentRunId_, currentRunId) };


        // currentRunSeq Field Functions 
        bool hasCurrentRunSeq() const { return this->currentRunSeq_ != nullptr;};
        void deleteCurrentRunSeq() { this->currentRunSeq_ = nullptr;};
        inline int64_t getCurrentRunSeq() const { DARABONBA_PTR_GET_DEFAULT(currentRunSeq_, 0L) };
        inline Items& setCurrentRunSeq(int64_t currentRunSeq) { DARABONBA_PTR_SET_VALUE(currentRunSeq_, currentRunSeq) };


        // currentStepName Field Functions 
        bool hasCurrentStepName() const { return this->currentStepName_ != nullptr;};
        void deleteCurrentStepName() { this->currentStepName_ = nullptr;};
        inline string getCurrentStepName() const { DARABONBA_PTR_GET_DEFAULT(currentStepName_, "") };
        inline Items& setCurrentStepName(string currentStepName) { DARABONBA_PTR_SET_VALUE(currentStepName_, currentStepName) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Items& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // inputVersion Field Functions 
        bool hasInputVersion() const { return this->inputVersion_ != nullptr;};
        void deleteInputVersion() { this->inputVersion_ = nullptr;};
        inline int64_t getInputVersion() const { DARABONBA_PTR_GET_DEFAULT(inputVersion_, 0L) };
        inline Items& setInputVersion(int64_t inputVersion) { DARABONBA_PTR_SET_VALUE(inputVersion_, inputVersion) };


        // itemType Field Functions 
        bool hasItemType() const { return this->itemType_ != nullptr;};
        void deleteItemType() { this->itemType_ = nullptr;};
        inline string getItemType() const { DARABONBA_PTR_GET_DEFAULT(itemType_, "") };
        inline Items& setItemType(string itemType) { DARABONBA_PTR_SET_VALUE(itemType_, itemType) };


        // lastProcessingAt Field Functions 
        bool hasLastProcessingAt() const { return this->lastProcessingAt_ != nullptr;};
        void deleteLastProcessingAt() { this->lastProcessingAt_ = nullptr;};
        inline string getLastProcessingAt() const { DARABONBA_PTR_GET_DEFAULT(lastProcessingAt_, "") };
        inline Items& setLastProcessingAt(string lastProcessingAt) { DARABONBA_PTR_SET_VALUE(lastProcessingAt_, lastProcessingAt) };


        // legacyTopic Field Functions 
        bool hasLegacyTopic() const { return this->legacyTopic_ != nullptr;};
        void deleteLegacyTopic() { this->legacyTopic_ = nullptr;};
        inline bool getLegacyTopic() const { DARABONBA_PTR_GET_DEFAULT(legacyTopic_, false) };
        inline Items& setLegacyTopic(bool legacyTopic) { DARABONBA_PTR_SET_VALUE(legacyTopic_, legacyTopic) };


        // memberUserIds Field Functions 
        bool hasMemberUserIds() const { return this->memberUserIds_ != nullptr;};
        void deleteMemberUserIds() { this->memberUserIds_ = nullptr;};
        inline const vector<int64_t> & getMemberUserIds() const { DARABONBA_PTR_GET_CONST(memberUserIds_, vector<int64_t>) };
        inline vector<int64_t> getMemberUserIds() { DARABONBA_PTR_GET(memberUserIds_, vector<int64_t>) };
        inline Items& setMemberUserIds(const vector<int64_t> & memberUserIds) { DARABONBA_PTR_SET_VALUE(memberUserIds_, memberUserIds) };
        inline Items& setMemberUserIds(vector<int64_t> && memberUserIds) { DARABONBA_PTR_SET_RVALUE(memberUserIds_, memberUserIds) };


        // modifiedAt Field Functions 
        bool hasModifiedAt() const { return this->modifiedAt_ != nullptr;};
        void deleteModifiedAt() { this->modifiedAt_ = nullptr;};
        inline string getModifiedAt() const { DARABONBA_PTR_GET_DEFAULT(modifiedAt_, "") };
        inline Items& setModifiedAt(string modifiedAt) { DARABONBA_PTR_SET_VALUE(modifiedAt_, modifiedAt) };


        // ownerUserId Field Functions 
        bool hasOwnerUserId() const { return this->ownerUserId_ != nullptr;};
        void deleteOwnerUserId() { this->ownerUserId_ = nullptr;};
        inline int64_t getOwnerUserId() const { DARABONBA_PTR_GET_DEFAULT(ownerUserId_, 0L) };
        inline Items& setOwnerUserId(int64_t ownerUserId) { DARABONBA_PTR_SET_VALUE(ownerUserId_, ownerUserId) };


        // pinned Field Functions 
        bool hasPinned() const { return this->pinned_ != nullptr;};
        void deletePinned() { this->pinned_ = nullptr;};
        inline bool getPinned() const { DARABONBA_PTR_GET_DEFAULT(pinned_, false) };
        inline Items& setPinned(bool pinned) { DARABONBA_PTR_SET_VALUE(pinned_, pinned) };


        // priority Field Functions 
        bool hasPriority() const { return this->priority_ != nullptr;};
        void deletePriority() { this->priority_ = nullptr;};
        inline string getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
        inline Items& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


        // progressCompleted Field Functions 
        bool hasProgressCompleted() const { return this->progressCompleted_ != nullptr;};
        void deleteProgressCompleted() { this->progressCompleted_ = nullptr;};
        inline int64_t getProgressCompleted() const { DARABONBA_PTR_GET_DEFAULT(progressCompleted_, 0L) };
        inline Items& setProgressCompleted(int64_t progressCompleted) { DARABONBA_PTR_SET_VALUE(progressCompleted_, progressCompleted) };


        // progressTotal Field Functions 
        bool hasProgressTotal() const { return this->progressTotal_ != nullptr;};
        void deleteProgressTotal() { this->progressTotal_ = nullptr;};
        inline int64_t getProgressTotal() const { DARABONBA_PTR_GET_DEFAULT(progressTotal_, 0L) };
        inline Items& setProgressTotal(int64_t progressTotal) { DARABONBA_PTR_SET_VALUE(progressTotal_, progressTotal) };


        // sourceExecutionId Field Functions 
        bool hasSourceExecutionId() const { return this->sourceExecutionId_ != nullptr;};
        void deleteSourceExecutionId() { this->sourceExecutionId_ = nullptr;};
        inline string getSourceExecutionId() const { DARABONBA_PTR_GET_DEFAULT(sourceExecutionId_, "") };
        inline Items& setSourceExecutionId(string sourceExecutionId) { DARABONBA_PTR_SET_VALUE(sourceExecutionId_, sourceExecutionId) };


        // sourceTaskId Field Functions 
        bool hasSourceTaskId() const { return this->sourceTaskId_ != nullptr;};
        void deleteSourceTaskId() { this->sourceTaskId_ = nullptr;};
        inline string getSourceTaskId() const { DARABONBA_PTR_GET_DEFAULT(sourceTaskId_, "") };
        inline Items& setSourceTaskId(string sourceTaskId) { DARABONBA_PTR_SET_VALUE(sourceTaskId_, sourceTaskId) };


        // sourceTaskName Field Functions 
        bool hasSourceTaskName() const { return this->sourceTaskName_ != nullptr;};
        void deleteSourceTaskName() { this->sourceTaskName_ = nullptr;};
        inline string getSourceTaskName() const { DARABONBA_PTR_GET_DEFAULT(sourceTaskName_, "") };
        inline Items& setSourceTaskName(string sourceTaskName) { DARABONBA_PTR_SET_VALUE(sourceTaskName_, sourceTaskName) };


        // sourceTriggerKey Field Functions 
        bool hasSourceTriggerKey() const { return this->sourceTriggerKey_ != nullptr;};
        void deleteSourceTriggerKey() { this->sourceTriggerKey_ = nullptr;};
        inline string getSourceTriggerKey() const { DARABONBA_PTR_GET_DEFAULT(sourceTriggerKey_, "") };
        inline Items& setSourceTriggerKey(string sourceTriggerKey) { DARABONBA_PTR_SET_VALUE(sourceTriggerKey_, sourceTriggerKey) };


        // sourceType Field Functions 
        bool hasSourceType() const { return this->sourceType_ != nullptr;};
        void deleteSourceType() { this->sourceType_ = nullptr;};
        inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
        inline Items& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline Items& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        // triggerTimezone Field Functions 
        bool hasTriggerTimezone() const { return this->triggerTimezone_ != nullptr;};
        void deleteTriggerTimezone() { this->triggerTimezone_ = nullptr;};
        inline string getTriggerTimezone() const { DARABONBA_PTR_GET_DEFAULT(triggerTimezone_, "") };
        inline Items& setTriggerTimezone(string triggerTimezone) { DARABONBA_PTR_SET_VALUE(triggerTimezone_, triggerTimezone) };


        // triggeredAt Field Functions 
        bool hasTriggeredAt() const { return this->triggeredAt_ != nullptr;};
        void deleteTriggeredAt() { this->triggeredAt_ = nullptr;};
        inline string getTriggeredAt() const { DARABONBA_PTR_GET_DEFAULT(triggeredAt_, "") };
        inline Items& setTriggeredAt(string triggeredAt) { DARABONBA_PTR_SET_VALUE(triggeredAt_, triggeredAt) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline int64_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0L) };
        inline Items& setVersion(int64_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


        // visibility Field Functions 
        bool hasVisibility() const { return this->visibility_ != nullptr;};
        void deleteVisibility() { this->visibility_ = nullptr;};
        inline string getVisibility() const { DARABONBA_PTR_GET_DEFAULT(visibility_, "") };
        inline Items& setVisibility(string visibility) { DARABONBA_PTR_SET_VALUE(visibility_, visibility) };


        // visibilitySource Field Functions 
        bool hasVisibilitySource() const { return this->visibilitySource_ != nullptr;};
        void deleteVisibilitySource() { this->visibilitySource_ = nullptr;};
        inline string getVisibilitySource() const { DARABONBA_PTR_GET_DEFAULT(visibilitySource_, "") };
        inline Items& setVisibilitySource(string visibilitySource) { DARABONBA_PTR_SET_VALUE(visibilitySource_, visibilitySource) };


        // workItemId Field Functions 
        bool hasWorkItemId() const { return this->workItemId_ != nullptr;};
        void deleteWorkItemId() { this->workItemId_ = nullptr;};
        inline string getWorkItemId() const { DARABONBA_PTR_GET_DEFAULT(workItemId_, "") };
        inline Items& setWorkItemId(string workItemId) { DARABONBA_PTR_SET_VALUE(workItemId_, workItemId) };


        // workflowStatus Field Functions 
        bool hasWorkflowStatus() const { return this->workflowStatus_ != nullptr;};
        void deleteWorkflowStatus() { this->workflowStatus_ = nullptr;};
        inline string getWorkflowStatus() const { DARABONBA_PTR_GET_DEFAULT(workflowStatus_, "") };
        inline Items& setWorkflowStatus(string workflowStatus) { DARABONBA_PTR_SET_VALUE(workflowStatus_, workflowStatus) };


        // workflowTemplateIds Field Functions 
        bool hasWorkflowTemplateIds() const { return this->workflowTemplateIds_ != nullptr;};
        void deleteWorkflowTemplateIds() { this->workflowTemplateIds_ = nullptr;};
        inline const vector<string> & getWorkflowTemplateIds() const { DARABONBA_PTR_GET_CONST(workflowTemplateIds_, vector<string>) };
        inline vector<string> getWorkflowTemplateIds() { DARABONBA_PTR_GET(workflowTemplateIds_, vector<string>) };
        inline Items& setWorkflowTemplateIds(const vector<string> & workflowTemplateIds) { DARABONBA_PTR_SET_VALUE(workflowTemplateIds_, workflowTemplateIds) };
        inline Items& setWorkflowTemplateIds(vector<string> && workflowTemplateIds) { DARABONBA_PTR_SET_RVALUE(workflowTemplateIds_, workflowTemplateIds) };


      protected:
        // The acceptance criteria.
        shared_ptr<string> acceptanceCriteria_ {};
        // The applied status version.
        shared_ptr<int64_t> appliedStatusVersion_ {};
        // The list of input attachments.
        shared_ptr<vector<Items::Attachments>> attachments_ {};
        // The business status (seven states).
        shared_ptr<string> businessStatus_ {};
        // Indicates whether the caller can delete the item.
        shared_ptr<bool> canDelete_ {};
        // Indicates whether the caller can manage the item.
        shared_ptr<bool> canManage_ {};
        // Indicates whether the visibility scope can be adjusted independently.
        shared_ptr<bool> canManageVisibility_ {};
        // Indicates whether the caller can rename the item.
        shared_ptr<bool> canRename_ {};
        // The collaboration workspace ID.
        shared_ptr<string> collaborationGroupId_ {};
        // The list of user IDs of the collaborators.
        shared_ptr<vector<int64_t>> collaboratorUserIds_ {};
        // The associated conversation ID.
        shared_ptr<string> conversationId_ {};
        // The creation time, in ISO 8601 format.
        shared_ptr<string> createdAt_ {};
        // The user ID of the creator.
        shared_ptr<int64_t> createdByUserId_ {};
        // The creation source. Valid values: DEFAULT and TASK.
        shared_ptr<string> creationType_ {};
        // The current physical plan ID.
        shared_ptr<string> currentPlanId_ {};
        // The current revision number.
        shared_ptr<int64_t> currentRevision_ {};
        // The current run ID.
        shared_ptr<string> currentRunId_ {};
        // The current run sequence number.
        shared_ptr<int64_t> currentRunSeq_ {};
        // The current step name.
        shared_ptr<string> currentStepName_ {};
        // The description.
        shared_ptr<string> description_ {};
        // The input snapshot version.
        shared_ptr<int64_t> inputVersion_ {};
        // The work item type.
        shared_ptr<string> itemType_ {};
        // The time when the item last entered the processing state, in ISO 8601 format.
        shared_ptr<string> lastProcessingAt_ {};
        // Indicates whether the topic is a free exploration topic during the compatibility period.
        shared_ptr<bool> legacyTopic_ {};
        // The list of user IDs of visible members.
        shared_ptr<vector<int64_t>> memberUserIds_ {};
        // The modification time, in ISO 8601 format.
        shared_ptr<string> modifiedAt_ {};
        // The user ID of the owner.
        shared_ptr<int64_t> ownerUserId_ {};
        // The pinned status for the caller.
        shared_ptr<bool> pinned_ {};
        // The priority.
        shared_ptr<string> priority_ {};
        // The completed progress.
        shared_ptr<int64_t> progressCompleted_ {};
        // The total progress.
        shared_ptr<int64_t> progressTotal_ {};
        // The task execution ID.
        shared_ptr<string> sourceExecutionId_ {};
        // The task source ID.
        shared_ptr<string> sourceTaskId_ {};
        // The task source name.
        shared_ptr<string> sourceTaskName_ {};
        // The task trigger key.
        shared_ptr<string> sourceTriggerKey_ {};
        // The task source type.
        shared_ptr<string> sourceType_ {};
        // The title.
        shared_ptr<string> title_ {};
        // The time zone when the task is triggered.
        shared_ptr<string> triggerTimezone_ {};
        // The task trigger time, in ISO 8601 format.
        shared_ptr<string> triggeredAt_ {};
        // The optimistic version number.
        shared_ptr<int64_t> version_ {};
        // The visibility scope.
        shared_ptr<string> visibility_ {};
        // The source of the visibility scope. Valid values: SELF, TASK, and TEMPLATE.
        shared_ptr<string> visibilitySource_ {};
        // The work item ID.
        shared_ptr<string> workItemId_ {};
        // The workflow status projection (four states).
        shared_ptr<string> workflowStatus_ {};
        // The list of bound workflow template IDs.
        shared_ptr<vector<string>> workflowTemplateIds_ {};
      };

      class Item : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Item& obj) { 
          DARABONBA_PTR_TO_JSON(acceptanceCriteria, acceptanceCriteria_);
          DARABONBA_PTR_TO_JSON(appliedStatusVersion, appliedStatusVersion_);
          DARABONBA_PTR_TO_JSON(attachments, attachments_);
          DARABONBA_PTR_TO_JSON(businessStatus, businessStatus_);
          DARABONBA_PTR_TO_JSON(canDelete, canDelete_);
          DARABONBA_PTR_TO_JSON(canManage, canManage_);
          DARABONBA_PTR_TO_JSON(canManageVisibility, canManageVisibility_);
          DARABONBA_PTR_TO_JSON(canRename, canRename_);
          DARABONBA_PTR_TO_JSON(collaborationGroupId, collaborationGroupId_);
          DARABONBA_PTR_TO_JSON(collaboratorUserIds, collaboratorUserIds_);
          DARABONBA_PTR_TO_JSON(conversationId, conversationId_);
          DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
          DARABONBA_PTR_TO_JSON(createdByUserId, createdByUserId_);
          DARABONBA_PTR_TO_JSON(creationType, creationType_);
          DARABONBA_PTR_TO_JSON(currentPlanId, currentPlanId_);
          DARABONBA_PTR_TO_JSON(currentRevision, currentRevision_);
          DARABONBA_PTR_TO_JSON(currentRunId, currentRunId_);
          DARABONBA_PTR_TO_JSON(currentRunSeq, currentRunSeq_);
          DARABONBA_PTR_TO_JSON(currentStepName, currentStepName_);
          DARABONBA_PTR_TO_JSON(description, description_);
          DARABONBA_PTR_TO_JSON(inputVersion, inputVersion_);
          DARABONBA_PTR_TO_JSON(itemType, itemType_);
          DARABONBA_PTR_TO_JSON(lastProcessingAt, lastProcessingAt_);
          DARABONBA_PTR_TO_JSON(legacyTopic, legacyTopic_);
          DARABONBA_PTR_TO_JSON(memberUserIds, memberUserIds_);
          DARABONBA_PTR_TO_JSON(modifiedAt, modifiedAt_);
          DARABONBA_PTR_TO_JSON(ownerUserId, ownerUserId_);
          DARABONBA_PTR_TO_JSON(pinned, pinned_);
          DARABONBA_PTR_TO_JSON(priority, priority_);
          DARABONBA_PTR_TO_JSON(progressCompleted, progressCompleted_);
          DARABONBA_PTR_TO_JSON(progressTotal, progressTotal_);
          DARABONBA_PTR_TO_JSON(sourceExecutionId, sourceExecutionId_);
          DARABONBA_PTR_TO_JSON(sourceTaskId, sourceTaskId_);
          DARABONBA_PTR_TO_JSON(sourceTaskName, sourceTaskName_);
          DARABONBA_PTR_TO_JSON(sourceTriggerKey, sourceTriggerKey_);
          DARABONBA_PTR_TO_JSON(sourceType, sourceType_);
          DARABONBA_PTR_TO_JSON(title, title_);
          DARABONBA_PTR_TO_JSON(triggerTimezone, triggerTimezone_);
          DARABONBA_PTR_TO_JSON(triggeredAt, triggeredAt_);
          DARABONBA_PTR_TO_JSON(version, version_);
          DARABONBA_PTR_TO_JSON(visibility, visibility_);
          DARABONBA_PTR_TO_JSON(visibilitySource, visibilitySource_);
          DARABONBA_PTR_TO_JSON(workItemId, workItemId_);
          DARABONBA_PTR_TO_JSON(workflowStatus, workflowStatus_);
          DARABONBA_PTR_TO_JSON(workflowTemplateIds, workflowTemplateIds_);
        };
        friend void from_json(const Darabonba::Json& j, Item& obj) { 
          DARABONBA_PTR_FROM_JSON(acceptanceCriteria, acceptanceCriteria_);
          DARABONBA_PTR_FROM_JSON(appliedStatusVersion, appliedStatusVersion_);
          DARABONBA_PTR_FROM_JSON(attachments, attachments_);
          DARABONBA_PTR_FROM_JSON(businessStatus, businessStatus_);
          DARABONBA_PTR_FROM_JSON(canDelete, canDelete_);
          DARABONBA_PTR_FROM_JSON(canManage, canManage_);
          DARABONBA_PTR_FROM_JSON(canManageVisibility, canManageVisibility_);
          DARABONBA_PTR_FROM_JSON(canRename, canRename_);
          DARABONBA_PTR_FROM_JSON(collaborationGroupId, collaborationGroupId_);
          DARABONBA_PTR_FROM_JSON(collaboratorUserIds, collaboratorUserIds_);
          DARABONBA_PTR_FROM_JSON(conversationId, conversationId_);
          DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
          DARABONBA_PTR_FROM_JSON(createdByUserId, createdByUserId_);
          DARABONBA_PTR_FROM_JSON(creationType, creationType_);
          DARABONBA_PTR_FROM_JSON(currentPlanId, currentPlanId_);
          DARABONBA_PTR_FROM_JSON(currentRevision, currentRevision_);
          DARABONBA_PTR_FROM_JSON(currentRunId, currentRunId_);
          DARABONBA_PTR_FROM_JSON(currentRunSeq, currentRunSeq_);
          DARABONBA_PTR_FROM_JSON(currentStepName, currentStepName_);
          DARABONBA_PTR_FROM_JSON(description, description_);
          DARABONBA_PTR_FROM_JSON(inputVersion, inputVersion_);
          DARABONBA_PTR_FROM_JSON(itemType, itemType_);
          DARABONBA_PTR_FROM_JSON(lastProcessingAt, lastProcessingAt_);
          DARABONBA_PTR_FROM_JSON(legacyTopic, legacyTopic_);
          DARABONBA_PTR_FROM_JSON(memberUserIds, memberUserIds_);
          DARABONBA_PTR_FROM_JSON(modifiedAt, modifiedAt_);
          DARABONBA_PTR_FROM_JSON(ownerUserId, ownerUserId_);
          DARABONBA_PTR_FROM_JSON(pinned, pinned_);
          DARABONBA_PTR_FROM_JSON(priority, priority_);
          DARABONBA_PTR_FROM_JSON(progressCompleted, progressCompleted_);
          DARABONBA_PTR_FROM_JSON(progressTotal, progressTotal_);
          DARABONBA_PTR_FROM_JSON(sourceExecutionId, sourceExecutionId_);
          DARABONBA_PTR_FROM_JSON(sourceTaskId, sourceTaskId_);
          DARABONBA_PTR_FROM_JSON(sourceTaskName, sourceTaskName_);
          DARABONBA_PTR_FROM_JSON(sourceTriggerKey, sourceTriggerKey_);
          DARABONBA_PTR_FROM_JSON(sourceType, sourceType_);
          DARABONBA_PTR_FROM_JSON(title, title_);
          DARABONBA_PTR_FROM_JSON(triggerTimezone, triggerTimezone_);
          DARABONBA_PTR_FROM_JSON(triggeredAt, triggeredAt_);
          DARABONBA_PTR_FROM_JSON(version, version_);
          DARABONBA_PTR_FROM_JSON(visibility, visibility_);
          DARABONBA_PTR_FROM_JSON(visibilitySource, visibilitySource_);
          DARABONBA_PTR_FROM_JSON(workItemId, workItemId_);
          DARABONBA_PTR_FROM_JSON(workflowStatus, workflowStatus_);
          DARABONBA_PTR_FROM_JSON(workflowTemplateIds, workflowTemplateIds_);
        };
        Item() = default ;
        Item(const Item &) = default ;
        Item(Item &&) = default ;
        Item(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Item() = default ;
        Item& operator=(const Item &) = default ;
        Item& operator=(Item &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Attachments : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Attachments& obj) { 
            DARABONBA_PTR_TO_JSON(attachmentId, attachmentId_);
            DARABONBA_PTR_TO_JSON(contentType, contentType_);
            DARABONBA_PTR_TO_JSON(refUrl, refUrl_);
            DARABONBA_PTR_TO_JSON(resourceId, resourceId_);
            DARABONBA_PTR_TO_JSON(resourceKind, resourceKind_);
            DARABONBA_PTR_TO_JSON(sizeBytes, sizeBytes_);
            DARABONBA_PTR_TO_JSON(title, title_);
          };
          friend void from_json(const Darabonba::Json& j, Attachments& obj) { 
            DARABONBA_PTR_FROM_JSON(attachmentId, attachmentId_);
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
          virtual bool empty() const override { return this->attachmentId_ == nullptr
        && this->contentType_ == nullptr && this->refUrl_ == nullptr && this->resourceId_ == nullptr && this->resourceKind_ == nullptr && this->sizeBytes_ == nullptr
        && this->title_ == nullptr; };
          // attachmentId Field Functions 
          bool hasAttachmentId() const { return this->attachmentId_ != nullptr;};
          void deleteAttachmentId() { this->attachmentId_ = nullptr;};
          inline string getAttachmentId() const { DARABONBA_PTR_GET_DEFAULT(attachmentId_, "") };
          inline Attachments& setAttachmentId(string attachmentId) { DARABONBA_PTR_SET_VALUE(attachmentId_, attachmentId) };


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
          // The attachment ID.
          shared_ptr<string> attachmentId_ {};
          // The content type.
          shared_ptr<string> contentType_ {};
          // The access URL of the attachment (prefixed with an OpenAPI 302 redirect).
          shared_ptr<string> refUrl_ {};
          // The attachment resource ID.
          shared_ptr<string> resourceId_ {};
          // The attachment resource type.
          shared_ptr<string> resourceKind_ {};
          // The attachment size in bytes.
          shared_ptr<int64_t> sizeBytes_ {};
          // The attachment title.
          shared_ptr<string> title_ {};
        };

        virtual bool empty() const override { return this->acceptanceCriteria_ == nullptr
        && this->appliedStatusVersion_ == nullptr && this->attachments_ == nullptr && this->businessStatus_ == nullptr && this->canDelete_ == nullptr && this->canManage_ == nullptr
        && this->canManageVisibility_ == nullptr && this->canRename_ == nullptr && this->collaborationGroupId_ == nullptr && this->collaboratorUserIds_ == nullptr && this->conversationId_ == nullptr
        && this->createdAt_ == nullptr && this->createdByUserId_ == nullptr && this->creationType_ == nullptr && this->currentPlanId_ == nullptr && this->currentRevision_ == nullptr
        && this->currentRunId_ == nullptr && this->currentRunSeq_ == nullptr && this->currentStepName_ == nullptr && this->description_ == nullptr && this->inputVersion_ == nullptr
        && this->itemType_ == nullptr && this->lastProcessingAt_ == nullptr && this->legacyTopic_ == nullptr && this->memberUserIds_ == nullptr && this->modifiedAt_ == nullptr
        && this->ownerUserId_ == nullptr && this->pinned_ == nullptr && this->priority_ == nullptr && this->progressCompleted_ == nullptr && this->progressTotal_ == nullptr
        && this->sourceExecutionId_ == nullptr && this->sourceTaskId_ == nullptr && this->sourceTaskName_ == nullptr && this->sourceTriggerKey_ == nullptr && this->sourceType_ == nullptr
        && this->title_ == nullptr && this->triggerTimezone_ == nullptr && this->triggeredAt_ == nullptr && this->version_ == nullptr && this->visibility_ == nullptr
        && this->visibilitySource_ == nullptr && this->workItemId_ == nullptr && this->workflowStatus_ == nullptr && this->workflowTemplateIds_ == nullptr; };
        // acceptanceCriteria Field Functions 
        bool hasAcceptanceCriteria() const { return this->acceptanceCriteria_ != nullptr;};
        void deleteAcceptanceCriteria() { this->acceptanceCriteria_ = nullptr;};
        inline string getAcceptanceCriteria() const { DARABONBA_PTR_GET_DEFAULT(acceptanceCriteria_, "") };
        inline Item& setAcceptanceCriteria(string acceptanceCriteria) { DARABONBA_PTR_SET_VALUE(acceptanceCriteria_, acceptanceCriteria) };


        // appliedStatusVersion Field Functions 
        bool hasAppliedStatusVersion() const { return this->appliedStatusVersion_ != nullptr;};
        void deleteAppliedStatusVersion() { this->appliedStatusVersion_ = nullptr;};
        inline int64_t getAppliedStatusVersion() const { DARABONBA_PTR_GET_DEFAULT(appliedStatusVersion_, 0L) };
        inline Item& setAppliedStatusVersion(int64_t appliedStatusVersion) { DARABONBA_PTR_SET_VALUE(appliedStatusVersion_, appliedStatusVersion) };


        // attachments Field Functions 
        bool hasAttachments() const { return this->attachments_ != nullptr;};
        void deleteAttachments() { this->attachments_ = nullptr;};
        inline const vector<Item::Attachments> & getAttachments() const { DARABONBA_PTR_GET_CONST(attachments_, vector<Item::Attachments>) };
        inline vector<Item::Attachments> getAttachments() { DARABONBA_PTR_GET(attachments_, vector<Item::Attachments>) };
        inline Item& setAttachments(const vector<Item::Attachments> & attachments) { DARABONBA_PTR_SET_VALUE(attachments_, attachments) };
        inline Item& setAttachments(vector<Item::Attachments> && attachments) { DARABONBA_PTR_SET_RVALUE(attachments_, attachments) };


        // businessStatus Field Functions 
        bool hasBusinessStatus() const { return this->businessStatus_ != nullptr;};
        void deleteBusinessStatus() { this->businessStatus_ = nullptr;};
        inline string getBusinessStatus() const { DARABONBA_PTR_GET_DEFAULT(businessStatus_, "") };
        inline Item& setBusinessStatus(string businessStatus) { DARABONBA_PTR_SET_VALUE(businessStatus_, businessStatus) };


        // canDelete Field Functions 
        bool hasCanDelete() const { return this->canDelete_ != nullptr;};
        void deleteCanDelete() { this->canDelete_ = nullptr;};
        inline bool getCanDelete() const { DARABONBA_PTR_GET_DEFAULT(canDelete_, false) };
        inline Item& setCanDelete(bool canDelete) { DARABONBA_PTR_SET_VALUE(canDelete_, canDelete) };


        // canManage Field Functions 
        bool hasCanManage() const { return this->canManage_ != nullptr;};
        void deleteCanManage() { this->canManage_ = nullptr;};
        inline bool getCanManage() const { DARABONBA_PTR_GET_DEFAULT(canManage_, false) };
        inline Item& setCanManage(bool canManage) { DARABONBA_PTR_SET_VALUE(canManage_, canManage) };


        // canManageVisibility Field Functions 
        bool hasCanManageVisibility() const { return this->canManageVisibility_ != nullptr;};
        void deleteCanManageVisibility() { this->canManageVisibility_ = nullptr;};
        inline bool getCanManageVisibility() const { DARABONBA_PTR_GET_DEFAULT(canManageVisibility_, false) };
        inline Item& setCanManageVisibility(bool canManageVisibility) { DARABONBA_PTR_SET_VALUE(canManageVisibility_, canManageVisibility) };


        // canRename Field Functions 
        bool hasCanRename() const { return this->canRename_ != nullptr;};
        void deleteCanRename() { this->canRename_ = nullptr;};
        inline bool getCanRename() const { DARABONBA_PTR_GET_DEFAULT(canRename_, false) };
        inline Item& setCanRename(bool canRename) { DARABONBA_PTR_SET_VALUE(canRename_, canRename) };


        // collaborationGroupId Field Functions 
        bool hasCollaborationGroupId() const { return this->collaborationGroupId_ != nullptr;};
        void deleteCollaborationGroupId() { this->collaborationGroupId_ = nullptr;};
        inline string getCollaborationGroupId() const { DARABONBA_PTR_GET_DEFAULT(collaborationGroupId_, "") };
        inline Item& setCollaborationGroupId(string collaborationGroupId) { DARABONBA_PTR_SET_VALUE(collaborationGroupId_, collaborationGroupId) };


        // collaboratorUserIds Field Functions 
        bool hasCollaboratorUserIds() const { return this->collaboratorUserIds_ != nullptr;};
        void deleteCollaboratorUserIds() { this->collaboratorUserIds_ = nullptr;};
        inline const vector<int64_t> & getCollaboratorUserIds() const { DARABONBA_PTR_GET_CONST(collaboratorUserIds_, vector<int64_t>) };
        inline vector<int64_t> getCollaboratorUserIds() { DARABONBA_PTR_GET(collaboratorUserIds_, vector<int64_t>) };
        inline Item& setCollaboratorUserIds(const vector<int64_t> & collaboratorUserIds) { DARABONBA_PTR_SET_VALUE(collaboratorUserIds_, collaboratorUserIds) };
        inline Item& setCollaboratorUserIds(vector<int64_t> && collaboratorUserIds) { DARABONBA_PTR_SET_RVALUE(collaboratorUserIds_, collaboratorUserIds) };


        // conversationId Field Functions 
        bool hasConversationId() const { return this->conversationId_ != nullptr;};
        void deleteConversationId() { this->conversationId_ = nullptr;};
        inline string getConversationId() const { DARABONBA_PTR_GET_DEFAULT(conversationId_, "") };
        inline Item& setConversationId(string conversationId) { DARABONBA_PTR_SET_VALUE(conversationId_, conversationId) };


        // createdAt Field Functions 
        bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
        void deleteCreatedAt() { this->createdAt_ = nullptr;};
        inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
        inline Item& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


        // createdByUserId Field Functions 
        bool hasCreatedByUserId() const { return this->createdByUserId_ != nullptr;};
        void deleteCreatedByUserId() { this->createdByUserId_ = nullptr;};
        inline int64_t getCreatedByUserId() const { DARABONBA_PTR_GET_DEFAULT(createdByUserId_, 0L) };
        inline Item& setCreatedByUserId(int64_t createdByUserId) { DARABONBA_PTR_SET_VALUE(createdByUserId_, createdByUserId) };


        // creationType Field Functions 
        bool hasCreationType() const { return this->creationType_ != nullptr;};
        void deleteCreationType() { this->creationType_ = nullptr;};
        inline string getCreationType() const { DARABONBA_PTR_GET_DEFAULT(creationType_, "") };
        inline Item& setCreationType(string creationType) { DARABONBA_PTR_SET_VALUE(creationType_, creationType) };


        // currentPlanId Field Functions 
        bool hasCurrentPlanId() const { return this->currentPlanId_ != nullptr;};
        void deleteCurrentPlanId() { this->currentPlanId_ = nullptr;};
        inline string getCurrentPlanId() const { DARABONBA_PTR_GET_DEFAULT(currentPlanId_, "") };
        inline Item& setCurrentPlanId(string currentPlanId) { DARABONBA_PTR_SET_VALUE(currentPlanId_, currentPlanId) };


        // currentRevision Field Functions 
        bool hasCurrentRevision() const { return this->currentRevision_ != nullptr;};
        void deleteCurrentRevision() { this->currentRevision_ = nullptr;};
        inline int64_t getCurrentRevision() const { DARABONBA_PTR_GET_DEFAULT(currentRevision_, 0L) };
        inline Item& setCurrentRevision(int64_t currentRevision) { DARABONBA_PTR_SET_VALUE(currentRevision_, currentRevision) };


        // currentRunId Field Functions 
        bool hasCurrentRunId() const { return this->currentRunId_ != nullptr;};
        void deleteCurrentRunId() { this->currentRunId_ = nullptr;};
        inline string getCurrentRunId() const { DARABONBA_PTR_GET_DEFAULT(currentRunId_, "") };
        inline Item& setCurrentRunId(string currentRunId) { DARABONBA_PTR_SET_VALUE(currentRunId_, currentRunId) };


        // currentRunSeq Field Functions 
        bool hasCurrentRunSeq() const { return this->currentRunSeq_ != nullptr;};
        void deleteCurrentRunSeq() { this->currentRunSeq_ = nullptr;};
        inline int64_t getCurrentRunSeq() const { DARABONBA_PTR_GET_DEFAULT(currentRunSeq_, 0L) };
        inline Item& setCurrentRunSeq(int64_t currentRunSeq) { DARABONBA_PTR_SET_VALUE(currentRunSeq_, currentRunSeq) };


        // currentStepName Field Functions 
        bool hasCurrentStepName() const { return this->currentStepName_ != nullptr;};
        void deleteCurrentStepName() { this->currentStepName_ = nullptr;};
        inline string getCurrentStepName() const { DARABONBA_PTR_GET_DEFAULT(currentStepName_, "") };
        inline Item& setCurrentStepName(string currentStepName) { DARABONBA_PTR_SET_VALUE(currentStepName_, currentStepName) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Item& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // inputVersion Field Functions 
        bool hasInputVersion() const { return this->inputVersion_ != nullptr;};
        void deleteInputVersion() { this->inputVersion_ = nullptr;};
        inline int64_t getInputVersion() const { DARABONBA_PTR_GET_DEFAULT(inputVersion_, 0L) };
        inline Item& setInputVersion(int64_t inputVersion) { DARABONBA_PTR_SET_VALUE(inputVersion_, inputVersion) };


        // itemType Field Functions 
        bool hasItemType() const { return this->itemType_ != nullptr;};
        void deleteItemType() { this->itemType_ = nullptr;};
        inline string getItemType() const { DARABONBA_PTR_GET_DEFAULT(itemType_, "") };
        inline Item& setItemType(string itemType) { DARABONBA_PTR_SET_VALUE(itemType_, itemType) };


        // lastProcessingAt Field Functions 
        bool hasLastProcessingAt() const { return this->lastProcessingAt_ != nullptr;};
        void deleteLastProcessingAt() { this->lastProcessingAt_ = nullptr;};
        inline string getLastProcessingAt() const { DARABONBA_PTR_GET_DEFAULT(lastProcessingAt_, "") };
        inline Item& setLastProcessingAt(string lastProcessingAt) { DARABONBA_PTR_SET_VALUE(lastProcessingAt_, lastProcessingAt) };


        // legacyTopic Field Functions 
        bool hasLegacyTopic() const { return this->legacyTopic_ != nullptr;};
        void deleteLegacyTopic() { this->legacyTopic_ = nullptr;};
        inline bool getLegacyTopic() const { DARABONBA_PTR_GET_DEFAULT(legacyTopic_, false) };
        inline Item& setLegacyTopic(bool legacyTopic) { DARABONBA_PTR_SET_VALUE(legacyTopic_, legacyTopic) };


        // memberUserIds Field Functions 
        bool hasMemberUserIds() const { return this->memberUserIds_ != nullptr;};
        void deleteMemberUserIds() { this->memberUserIds_ = nullptr;};
        inline const vector<int64_t> & getMemberUserIds() const { DARABONBA_PTR_GET_CONST(memberUserIds_, vector<int64_t>) };
        inline vector<int64_t> getMemberUserIds() { DARABONBA_PTR_GET(memberUserIds_, vector<int64_t>) };
        inline Item& setMemberUserIds(const vector<int64_t> & memberUserIds) { DARABONBA_PTR_SET_VALUE(memberUserIds_, memberUserIds) };
        inline Item& setMemberUserIds(vector<int64_t> && memberUserIds) { DARABONBA_PTR_SET_RVALUE(memberUserIds_, memberUserIds) };


        // modifiedAt Field Functions 
        bool hasModifiedAt() const { return this->modifiedAt_ != nullptr;};
        void deleteModifiedAt() { this->modifiedAt_ = nullptr;};
        inline string getModifiedAt() const { DARABONBA_PTR_GET_DEFAULT(modifiedAt_, "") };
        inline Item& setModifiedAt(string modifiedAt) { DARABONBA_PTR_SET_VALUE(modifiedAt_, modifiedAt) };


        // ownerUserId Field Functions 
        bool hasOwnerUserId() const { return this->ownerUserId_ != nullptr;};
        void deleteOwnerUserId() { this->ownerUserId_ = nullptr;};
        inline int64_t getOwnerUserId() const { DARABONBA_PTR_GET_DEFAULT(ownerUserId_, 0L) };
        inline Item& setOwnerUserId(int64_t ownerUserId) { DARABONBA_PTR_SET_VALUE(ownerUserId_, ownerUserId) };


        // pinned Field Functions 
        bool hasPinned() const { return this->pinned_ != nullptr;};
        void deletePinned() { this->pinned_ = nullptr;};
        inline bool getPinned() const { DARABONBA_PTR_GET_DEFAULT(pinned_, false) };
        inline Item& setPinned(bool pinned) { DARABONBA_PTR_SET_VALUE(pinned_, pinned) };


        // priority Field Functions 
        bool hasPriority() const { return this->priority_ != nullptr;};
        void deletePriority() { this->priority_ = nullptr;};
        inline string getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
        inline Item& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


        // progressCompleted Field Functions 
        bool hasProgressCompleted() const { return this->progressCompleted_ != nullptr;};
        void deleteProgressCompleted() { this->progressCompleted_ = nullptr;};
        inline int64_t getProgressCompleted() const { DARABONBA_PTR_GET_DEFAULT(progressCompleted_, 0L) };
        inline Item& setProgressCompleted(int64_t progressCompleted) { DARABONBA_PTR_SET_VALUE(progressCompleted_, progressCompleted) };


        // progressTotal Field Functions 
        bool hasProgressTotal() const { return this->progressTotal_ != nullptr;};
        void deleteProgressTotal() { this->progressTotal_ = nullptr;};
        inline int64_t getProgressTotal() const { DARABONBA_PTR_GET_DEFAULT(progressTotal_, 0L) };
        inline Item& setProgressTotal(int64_t progressTotal) { DARABONBA_PTR_SET_VALUE(progressTotal_, progressTotal) };


        // sourceExecutionId Field Functions 
        bool hasSourceExecutionId() const { return this->sourceExecutionId_ != nullptr;};
        void deleteSourceExecutionId() { this->sourceExecutionId_ = nullptr;};
        inline string getSourceExecutionId() const { DARABONBA_PTR_GET_DEFAULT(sourceExecutionId_, "") };
        inline Item& setSourceExecutionId(string sourceExecutionId) { DARABONBA_PTR_SET_VALUE(sourceExecutionId_, sourceExecutionId) };


        // sourceTaskId Field Functions 
        bool hasSourceTaskId() const { return this->sourceTaskId_ != nullptr;};
        void deleteSourceTaskId() { this->sourceTaskId_ = nullptr;};
        inline string getSourceTaskId() const { DARABONBA_PTR_GET_DEFAULT(sourceTaskId_, "") };
        inline Item& setSourceTaskId(string sourceTaskId) { DARABONBA_PTR_SET_VALUE(sourceTaskId_, sourceTaskId) };


        // sourceTaskName Field Functions 
        bool hasSourceTaskName() const { return this->sourceTaskName_ != nullptr;};
        void deleteSourceTaskName() { this->sourceTaskName_ = nullptr;};
        inline string getSourceTaskName() const { DARABONBA_PTR_GET_DEFAULT(sourceTaskName_, "") };
        inline Item& setSourceTaskName(string sourceTaskName) { DARABONBA_PTR_SET_VALUE(sourceTaskName_, sourceTaskName) };


        // sourceTriggerKey Field Functions 
        bool hasSourceTriggerKey() const { return this->sourceTriggerKey_ != nullptr;};
        void deleteSourceTriggerKey() { this->sourceTriggerKey_ = nullptr;};
        inline string getSourceTriggerKey() const { DARABONBA_PTR_GET_DEFAULT(sourceTriggerKey_, "") };
        inline Item& setSourceTriggerKey(string sourceTriggerKey) { DARABONBA_PTR_SET_VALUE(sourceTriggerKey_, sourceTriggerKey) };


        // sourceType Field Functions 
        bool hasSourceType() const { return this->sourceType_ != nullptr;};
        void deleteSourceType() { this->sourceType_ = nullptr;};
        inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
        inline Item& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline Item& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        // triggerTimezone Field Functions 
        bool hasTriggerTimezone() const { return this->triggerTimezone_ != nullptr;};
        void deleteTriggerTimezone() { this->triggerTimezone_ = nullptr;};
        inline string getTriggerTimezone() const { DARABONBA_PTR_GET_DEFAULT(triggerTimezone_, "") };
        inline Item& setTriggerTimezone(string triggerTimezone) { DARABONBA_PTR_SET_VALUE(triggerTimezone_, triggerTimezone) };


        // triggeredAt Field Functions 
        bool hasTriggeredAt() const { return this->triggeredAt_ != nullptr;};
        void deleteTriggeredAt() { this->triggeredAt_ = nullptr;};
        inline string getTriggeredAt() const { DARABONBA_PTR_GET_DEFAULT(triggeredAt_, "") };
        inline Item& setTriggeredAt(string triggeredAt) { DARABONBA_PTR_SET_VALUE(triggeredAt_, triggeredAt) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline int64_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0L) };
        inline Item& setVersion(int64_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


        // visibility Field Functions 
        bool hasVisibility() const { return this->visibility_ != nullptr;};
        void deleteVisibility() { this->visibility_ = nullptr;};
        inline string getVisibility() const { DARABONBA_PTR_GET_DEFAULT(visibility_, "") };
        inline Item& setVisibility(string visibility) { DARABONBA_PTR_SET_VALUE(visibility_, visibility) };


        // visibilitySource Field Functions 
        bool hasVisibilitySource() const { return this->visibilitySource_ != nullptr;};
        void deleteVisibilitySource() { this->visibilitySource_ = nullptr;};
        inline string getVisibilitySource() const { DARABONBA_PTR_GET_DEFAULT(visibilitySource_, "") };
        inline Item& setVisibilitySource(string visibilitySource) { DARABONBA_PTR_SET_VALUE(visibilitySource_, visibilitySource) };


        // workItemId Field Functions 
        bool hasWorkItemId() const { return this->workItemId_ != nullptr;};
        void deleteWorkItemId() { this->workItemId_ = nullptr;};
        inline string getWorkItemId() const { DARABONBA_PTR_GET_DEFAULT(workItemId_, "") };
        inline Item& setWorkItemId(string workItemId) { DARABONBA_PTR_SET_VALUE(workItemId_, workItemId) };


        // workflowStatus Field Functions 
        bool hasWorkflowStatus() const { return this->workflowStatus_ != nullptr;};
        void deleteWorkflowStatus() { this->workflowStatus_ = nullptr;};
        inline string getWorkflowStatus() const { DARABONBA_PTR_GET_DEFAULT(workflowStatus_, "") };
        inline Item& setWorkflowStatus(string workflowStatus) { DARABONBA_PTR_SET_VALUE(workflowStatus_, workflowStatus) };


        // workflowTemplateIds Field Functions 
        bool hasWorkflowTemplateIds() const { return this->workflowTemplateIds_ != nullptr;};
        void deleteWorkflowTemplateIds() { this->workflowTemplateIds_ = nullptr;};
        inline const vector<string> & getWorkflowTemplateIds() const { DARABONBA_PTR_GET_CONST(workflowTemplateIds_, vector<string>) };
        inline vector<string> getWorkflowTemplateIds() { DARABONBA_PTR_GET(workflowTemplateIds_, vector<string>) };
        inline Item& setWorkflowTemplateIds(const vector<string> & workflowTemplateIds) { DARABONBA_PTR_SET_VALUE(workflowTemplateIds_, workflowTemplateIds) };
        inline Item& setWorkflowTemplateIds(vector<string> && workflowTemplateIds) { DARABONBA_PTR_SET_RVALUE(workflowTemplateIds_, workflowTemplateIds) };


      protected:
        // The acceptance criteria.
        shared_ptr<string> acceptanceCriteria_ {};
        // The applied status version.
        shared_ptr<int64_t> appliedStatusVersion_ {};
        // The list of input attachments.
        shared_ptr<vector<Item::Attachments>> attachments_ {};
        // The business status (seven states).
        shared_ptr<string> businessStatus_ {};
        // Indicates whether the caller can delete the item.
        shared_ptr<bool> canDelete_ {};
        // Indicates whether the caller can manage the item.
        shared_ptr<bool> canManage_ {};
        // Indicates whether the visibility scope can be adjusted independently.
        shared_ptr<bool> canManageVisibility_ {};
        // Indicates whether the caller can rename the item.
        shared_ptr<bool> canRename_ {};
        // The collaboration workspace ID.
        shared_ptr<string> collaborationGroupId_ {};
        // The list of user IDs of the collaborators.
        shared_ptr<vector<int64_t>> collaboratorUserIds_ {};
        // The associated conversation ID.
        shared_ptr<string> conversationId_ {};
        // The creation time, in ISO 8601 format.
        shared_ptr<string> createdAt_ {};
        // The user ID of the creator.
        shared_ptr<int64_t> createdByUserId_ {};
        // The creation source. Valid values: DEFAULT and TASK.
        shared_ptr<string> creationType_ {};
        // The current physical plan ID.
        shared_ptr<string> currentPlanId_ {};
        // The current revision number.
        shared_ptr<int64_t> currentRevision_ {};
        // The current run ID.
        shared_ptr<string> currentRunId_ {};
        // The current run sequence number.
        shared_ptr<int64_t> currentRunSeq_ {};
        // The current step name.
        shared_ptr<string> currentStepName_ {};
        // The description.
        shared_ptr<string> description_ {};
        // The input snapshot version.
        shared_ptr<int64_t> inputVersion_ {};
        // The work item type.
        shared_ptr<string> itemType_ {};
        // The time when the item last entered the processing state, in ISO 8601 format.
        shared_ptr<string> lastProcessingAt_ {};
        // Indicates whether the topic is a free exploration topic during the compatibility period.
        shared_ptr<bool> legacyTopic_ {};
        // The list of user IDs of visible members.
        shared_ptr<vector<int64_t>> memberUserIds_ {};
        // The modification time, in ISO 8601 format.
        shared_ptr<string> modifiedAt_ {};
        // The user ID of the owner.
        shared_ptr<int64_t> ownerUserId_ {};
        // The pinned status for the caller.
        shared_ptr<bool> pinned_ {};
        // The priority.
        shared_ptr<string> priority_ {};
        // The completed progress.
        shared_ptr<int64_t> progressCompleted_ {};
        // The total progress.
        shared_ptr<int64_t> progressTotal_ {};
        // The task execution ID.
        shared_ptr<string> sourceExecutionId_ {};
        // The task source ID.
        shared_ptr<string> sourceTaskId_ {};
        // The task source name.
        shared_ptr<string> sourceTaskName_ {};
        // The task trigger key.
        shared_ptr<string> sourceTriggerKey_ {};
        // The task source type.
        shared_ptr<string> sourceType_ {};
        // The title.
        shared_ptr<string> title_ {};
        // The time zone when the task is triggered.
        shared_ptr<string> triggerTimezone_ {};
        // The task trigger time, in ISO 8601 format.
        shared_ptr<string> triggeredAt_ {};
        // The optimistic version number.
        shared_ptr<int64_t> version_ {};
        // The visibility scope.
        shared_ptr<string> visibility_ {};
        // The source of the visibility scope. Valid values: SELF, TASK, and TEMPLATE.
        shared_ptr<string> visibilitySource_ {};
        // The work item ID.
        shared_ptr<string> workItemId_ {};
        // The workflow status projection (four states).
        shared_ptr<string> workflowStatus_ {};
        // The list of bound workflow template IDs.
        shared_ptr<vector<string>> workflowTemplateIds_ {};
      };

      virtual bool empty() const override { return this->entryType_ == nullptr
        && this->hasMoreChildren_ == nullptr && this->item_ == nullptr && this->items_ == nullptr && this->latestWorkItemAt_ == nullptr && this->matchedWorkItemCount_ == nullptr
        && this->sourceTaskId_ == nullptr && this->taskName_ == nullptr; };
      // entryType Field Functions 
      bool hasEntryType() const { return this->entryType_ != nullptr;};
      void deleteEntryType() { this->entryType_ = nullptr;};
      inline string getEntryType() const { DARABONBA_PTR_GET_DEFAULT(entryType_, "") };
      inline Entries& setEntryType(string entryType) { DARABONBA_PTR_SET_VALUE(entryType_, entryType) };


      // hasMoreChildren Field Functions 
      bool hasHasMoreChildren() const { return this->hasMoreChildren_ != nullptr;};
      void deleteHasMoreChildren() { this->hasMoreChildren_ = nullptr;};
      inline bool getHasMoreChildren() const { DARABONBA_PTR_GET_DEFAULT(hasMoreChildren_, false) };
      inline Entries& setHasMoreChildren(bool hasMoreChildren) { DARABONBA_PTR_SET_VALUE(hasMoreChildren_, hasMoreChildren) };


      // item Field Functions 
      bool hasItem() const { return this->item_ != nullptr;};
      void deleteItem() { this->item_ = nullptr;};
      inline const Entries::Item & getItem() const { DARABONBA_PTR_GET_CONST(item_, Entries::Item) };
      inline Entries::Item getItem() { DARABONBA_PTR_GET(item_, Entries::Item) };
      inline Entries& setItem(const Entries::Item & item) { DARABONBA_PTR_SET_VALUE(item_, item) };
      inline Entries& setItem(Entries::Item && item) { DARABONBA_PTR_SET_RVALUE(item_, item) };


      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const vector<Entries::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<Entries::Items>) };
      inline vector<Entries::Items> getItems() { DARABONBA_PTR_GET(items_, vector<Entries::Items>) };
      inline Entries& setItems(const vector<Entries::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline Entries& setItems(vector<Entries::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


      // latestWorkItemAt Field Functions 
      bool hasLatestWorkItemAt() const { return this->latestWorkItemAt_ != nullptr;};
      void deleteLatestWorkItemAt() { this->latestWorkItemAt_ = nullptr;};
      inline string getLatestWorkItemAt() const { DARABONBA_PTR_GET_DEFAULT(latestWorkItemAt_, "") };
      inline Entries& setLatestWorkItemAt(string latestWorkItemAt) { DARABONBA_PTR_SET_VALUE(latestWorkItemAt_, latestWorkItemAt) };


      // matchedWorkItemCount Field Functions 
      bool hasMatchedWorkItemCount() const { return this->matchedWorkItemCount_ != nullptr;};
      void deleteMatchedWorkItemCount() { this->matchedWorkItemCount_ = nullptr;};
      inline int64_t getMatchedWorkItemCount() const { DARABONBA_PTR_GET_DEFAULT(matchedWorkItemCount_, 0L) };
      inline Entries& setMatchedWorkItemCount(int64_t matchedWorkItemCount) { DARABONBA_PTR_SET_VALUE(matchedWorkItemCount_, matchedWorkItemCount) };


      // sourceTaskId Field Functions 
      bool hasSourceTaskId() const { return this->sourceTaskId_ != nullptr;};
      void deleteSourceTaskId() { this->sourceTaskId_ = nullptr;};
      inline string getSourceTaskId() const { DARABONBA_PTR_GET_DEFAULT(sourceTaskId_, "") };
      inline Entries& setSourceTaskId(string sourceTaskId) { DARABONBA_PTR_SET_VALUE(sourceTaskId_, sourceTaskId) };


      // taskName Field Functions 
      bool hasTaskName() const { return this->taskName_ != nullptr;};
      void deleteTaskName() { this->taskName_ = nullptr;};
      inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
      inline Entries& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    protected:
      // The entry type.
      shared_ptr<string> entryType_ {};
      // Indicates whether more child items are available.
      shared_ptr<bool> hasMoreChildren_ {};
      // The content of a regular work item row.
      shared_ptr<Entries::Item> item_ {};
      // The latest five work items in the task aggregation row.
      shared_ptr<vector<Entries::Items>> items_ {};
      // The time of the latest work item, in ISO 8601 format.
      shared_ptr<string> latestWorkItemAt_ {};
      // The total number of matched work items.
      shared_ptr<int64_t> matchedWorkItemCount_ {};
      // The source task ID.
      shared_ptr<string> sourceTaskId_ {};
      // The task name.
      shared_ptr<string> taskName_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->entries_ == nullptr && this->hasMore_ == nullptr && this->message_ == nullptr && this->nextCursor_ == nullptr && this->requestId_ == nullptr
        && this->scopeCounts_ == nullptr && this->statusCounts_ == nullptr && this->totalEntryCount_ == nullptr && this->totalWorkItemCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryWorkItemFeedResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // entries Field Functions 
    bool hasEntries() const { return this->entries_ != nullptr;};
    void deleteEntries() { this->entries_ = nullptr;};
    inline const vector<QueryWorkItemFeedResponseBody::Entries> & getEntries() const { DARABONBA_PTR_GET_CONST(entries_, vector<QueryWorkItemFeedResponseBody::Entries>) };
    inline vector<QueryWorkItemFeedResponseBody::Entries> getEntries() { DARABONBA_PTR_GET(entries_, vector<QueryWorkItemFeedResponseBody::Entries>) };
    inline QueryWorkItemFeedResponseBody& setEntries(const vector<QueryWorkItemFeedResponseBody::Entries> & entries) { DARABONBA_PTR_SET_VALUE(entries_, entries) };
    inline QueryWorkItemFeedResponseBody& setEntries(vector<QueryWorkItemFeedResponseBody::Entries> && entries) { DARABONBA_PTR_SET_RVALUE(entries_, entries) };


    // hasMore Field Functions 
    bool hasHasMore() const { return this->hasMore_ != nullptr;};
    void deleteHasMore() { this->hasMore_ = nullptr;};
    inline bool getHasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
    inline QueryWorkItemFeedResponseBody& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryWorkItemFeedResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextCursor Field Functions 
    bool hasNextCursor() const { return this->nextCursor_ != nullptr;};
    void deleteNextCursor() { this->nextCursor_ = nullptr;};
    inline string getNextCursor() const { DARABONBA_PTR_GET_DEFAULT(nextCursor_, "") };
    inline QueryWorkItemFeedResponseBody& setNextCursor(string nextCursor) { DARABONBA_PTR_SET_VALUE(nextCursor_, nextCursor) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryWorkItemFeedResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scopeCounts Field Functions 
    bool hasScopeCounts() const { return this->scopeCounts_ != nullptr;};
    void deleteScopeCounts() { this->scopeCounts_ = nullptr;};
    inline     const Darabonba::Json & getScopeCounts() const { DARABONBA_GET(scopeCounts_) };
    Darabonba::Json & getScopeCounts() { DARABONBA_GET(scopeCounts_) };
    inline QueryWorkItemFeedResponseBody& setScopeCounts(const Darabonba::Json & scopeCounts) { DARABONBA_SET_VALUE(scopeCounts_, scopeCounts) };
    inline QueryWorkItemFeedResponseBody& setScopeCounts(Darabonba::Json && scopeCounts) { DARABONBA_SET_RVALUE(scopeCounts_, scopeCounts) };


    // statusCounts Field Functions 
    bool hasStatusCounts() const { return this->statusCounts_ != nullptr;};
    void deleteStatusCounts() { this->statusCounts_ = nullptr;};
    inline     const Darabonba::Json & getStatusCounts() const { DARABONBA_GET(statusCounts_) };
    Darabonba::Json & getStatusCounts() { DARABONBA_GET(statusCounts_) };
    inline QueryWorkItemFeedResponseBody& setStatusCounts(const Darabonba::Json & statusCounts) { DARABONBA_SET_VALUE(statusCounts_, statusCounts) };
    inline QueryWorkItemFeedResponseBody& setStatusCounts(Darabonba::Json && statusCounts) { DARABONBA_SET_RVALUE(statusCounts_, statusCounts) };


    // totalEntryCount Field Functions 
    bool hasTotalEntryCount() const { return this->totalEntryCount_ != nullptr;};
    void deleteTotalEntryCount() { this->totalEntryCount_ = nullptr;};
    inline int64_t getTotalEntryCount() const { DARABONBA_PTR_GET_DEFAULT(totalEntryCount_, 0L) };
    inline QueryWorkItemFeedResponseBody& setTotalEntryCount(int64_t totalEntryCount) { DARABONBA_PTR_SET_VALUE(totalEntryCount_, totalEntryCount) };


    // totalWorkItemCount Field Functions 
    bool hasTotalWorkItemCount() const { return this->totalWorkItemCount_ != nullptr;};
    void deleteTotalWorkItemCount() { this->totalWorkItemCount_ = nullptr;};
    inline int64_t getTotalWorkItemCount() const { DARABONBA_PTR_GET_DEFAULT(totalWorkItemCount_, 0L) };
    inline QueryWorkItemFeedResponseBody& setTotalWorkItemCount(int64_t totalWorkItemCount) { DARABONBA_PTR_SET_VALUE(totalWorkItemCount_, totalWorkItemCount) };


  protected:
    // The business status code. A value of 200 indicates success.
    shared_ptr<string> code_ {};
    // The entries on the current page. The entryType determines the effective fields: WORK_ITEM maps to item, and TASK_GROUP maps to aggregation fields.
    shared_ptr<vector<QueryWorkItemFeedResponseBody::Entries>> entries_ {};
    // Indicates whether more data is available.
    shared_ptr<bool> hasMore_ {};
    // The error description.
    shared_ptr<string> message_ {};
    // The cursor for the next page.
    shared_ptr<string> nextCursor_ {};
    // The request tracking ID.
    shared_ptr<string> requestId_ {};
    // The number of items in the visible pool by personal scope.
    Darabonba::Json scopeCounts_ {};
    // The number of items in the visible pool by business status.
    Darabonba::Json statusCounts_ {};
    // The total number of entries in the visible pool.
    shared_ptr<int64_t> totalEntryCount_ {};
    // The total number of work items in the visible pool.
    shared_ptr<int64_t> totalWorkItemCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
