// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSOURCEUSAGESTATISTICSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSOURCEUSAGESTATISTICSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class ListSourceUsageStatisticsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSourceUsageStatisticsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(appToken, appToken_);
      DARABONBA_PTR_TO_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(eventType, eventType_);
      DARABONBA_PTR_TO_JSON(knowledgeBaseIds, knowledgeBaseIdsShrink_);
      DARABONBA_PTR_TO_JSON(opsUserCode, opsUserCode_);
      DARABONBA_PTR_TO_JSON(opsUserId, opsUserId_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(scopeType, scopeType_);
      DARABONBA_PTR_TO_JSON(sortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(sortOrder, sortOrder_);
      DARABONBA_PTR_TO_JSON(sourceIds, sourceIdsShrink_);
      DARABONBA_PTR_TO_JSON(sourceName, sourceName_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSourceUsageStatisticsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(appToken, appToken_);
      DARABONBA_PTR_FROM_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(eventType, eventType_);
      DARABONBA_PTR_FROM_JSON(knowledgeBaseIds, knowledgeBaseIdsShrink_);
      DARABONBA_PTR_FROM_JSON(opsUserCode, opsUserCode_);
      DARABONBA_PTR_FROM_JSON(opsUserId, opsUserId_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(scopeType, scopeType_);
      DARABONBA_PTR_FROM_JSON(sortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(sortOrder, sortOrder_);
      DARABONBA_PTR_FROM_JSON(sourceIds, sourceIdsShrink_);
      DARABONBA_PTR_FROM_JSON(sourceName, sourceName_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    ListSourceUsageStatisticsShrinkRequest() = default ;
    ListSourceUsageStatisticsShrinkRequest(const ListSourceUsageStatisticsShrinkRequest &) = default ;
    ListSourceUsageStatisticsShrinkRequest(ListSourceUsageStatisticsShrinkRequest &&) = default ;
    ListSourceUsageStatisticsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSourceUsageStatisticsShrinkRequest() = default ;
    ListSourceUsageStatisticsShrinkRequest& operator=(const ListSourceUsageStatisticsShrinkRequest &) = default ;
    ListSourceUsageStatisticsShrinkRequest& operator=(ListSourceUsageStatisticsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appToken_ == nullptr
        && this->collaborationGroupId_ == nullptr && this->endTime_ == nullptr && this->eventType_ == nullptr && this->knowledgeBaseIdsShrink_ == nullptr && this->opsUserCode_ == nullptr
        && this->opsUserId_ == nullptr && this->page_ == nullptr && this->pageSize_ == nullptr && this->scopeType_ == nullptr && this->sortBy_ == nullptr
        && this->sortOrder_ == nullptr && this->sourceIdsShrink_ == nullptr && this->sourceName_ == nullptr && this->startTime_ == nullptr && this->tenantId_ == nullptr; };
    // appToken Field Functions 
    bool hasAppToken() const { return this->appToken_ != nullptr;};
    void deleteAppToken() { this->appToken_ = nullptr;};
    inline string getAppToken() const { DARABONBA_PTR_GET_DEFAULT(appToken_, "") };
    inline ListSourceUsageStatisticsShrinkRequest& setAppToken(string appToken) { DARABONBA_PTR_SET_VALUE(appToken_, appToken) };


    // collaborationGroupId Field Functions 
    bool hasCollaborationGroupId() const { return this->collaborationGroupId_ != nullptr;};
    void deleteCollaborationGroupId() { this->collaborationGroupId_ = nullptr;};
    inline string getCollaborationGroupId() const { DARABONBA_PTR_GET_DEFAULT(collaborationGroupId_, "") };
    inline ListSourceUsageStatisticsShrinkRequest& setCollaborationGroupId(string collaborationGroupId) { DARABONBA_PTR_SET_VALUE(collaborationGroupId_, collaborationGroupId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListSourceUsageStatisticsShrinkRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string getEventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline ListSourceUsageStatisticsShrinkRequest& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    // knowledgeBaseIdsShrink Field Functions 
    bool hasKnowledgeBaseIdsShrink() const { return this->knowledgeBaseIdsShrink_ != nullptr;};
    void deleteKnowledgeBaseIdsShrink() { this->knowledgeBaseIdsShrink_ = nullptr;};
    inline string getKnowledgeBaseIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseIdsShrink_, "") };
    inline ListSourceUsageStatisticsShrinkRequest& setKnowledgeBaseIdsShrink(string knowledgeBaseIdsShrink) { DARABONBA_PTR_SET_VALUE(knowledgeBaseIdsShrink_, knowledgeBaseIdsShrink) };


    // opsUserCode Field Functions 
    bool hasOpsUserCode() const { return this->opsUserCode_ != nullptr;};
    void deleteOpsUserCode() { this->opsUserCode_ = nullptr;};
    inline string getOpsUserCode() const { DARABONBA_PTR_GET_DEFAULT(opsUserCode_, "") };
    inline ListSourceUsageStatisticsShrinkRequest& setOpsUserCode(string opsUserCode) { DARABONBA_PTR_SET_VALUE(opsUserCode_, opsUserCode) };


    // opsUserId Field Functions 
    bool hasOpsUserId() const { return this->opsUserId_ != nullptr;};
    void deleteOpsUserId() { this->opsUserId_ = nullptr;};
    inline string getOpsUserId() const { DARABONBA_PTR_GET_DEFAULT(opsUserId_, "") };
    inline ListSourceUsageStatisticsShrinkRequest& setOpsUserId(string opsUserId) { DARABONBA_PTR_SET_VALUE(opsUserId_, opsUserId) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int64_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0L) };
    inline ListSourceUsageStatisticsShrinkRequest& setPage(int64_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListSourceUsageStatisticsShrinkRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // scopeType Field Functions 
    bool hasScopeType() const { return this->scopeType_ != nullptr;};
    void deleteScopeType() { this->scopeType_ = nullptr;};
    inline string getScopeType() const { DARABONBA_PTR_GET_DEFAULT(scopeType_, "") };
    inline ListSourceUsageStatisticsShrinkRequest& setScopeType(string scopeType) { DARABONBA_PTR_SET_VALUE(scopeType_, scopeType) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListSourceUsageStatisticsShrinkRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // sortOrder Field Functions 
    bool hasSortOrder() const { return this->sortOrder_ != nullptr;};
    void deleteSortOrder() { this->sortOrder_ = nullptr;};
    inline string getSortOrder() const { DARABONBA_PTR_GET_DEFAULT(sortOrder_, "") };
    inline ListSourceUsageStatisticsShrinkRequest& setSortOrder(string sortOrder) { DARABONBA_PTR_SET_VALUE(sortOrder_, sortOrder) };


    // sourceIdsShrink Field Functions 
    bool hasSourceIdsShrink() const { return this->sourceIdsShrink_ != nullptr;};
    void deleteSourceIdsShrink() { this->sourceIdsShrink_ = nullptr;};
    inline string getSourceIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(sourceIdsShrink_, "") };
    inline ListSourceUsageStatisticsShrinkRequest& setSourceIdsShrink(string sourceIdsShrink) { DARABONBA_PTR_SET_VALUE(sourceIdsShrink_, sourceIdsShrink) };


    // sourceName Field Functions 
    bool hasSourceName() const { return this->sourceName_ != nullptr;};
    void deleteSourceName() { this->sourceName_ = nullptr;};
    inline string getSourceName() const { DARABONBA_PTR_GET_DEFAULT(sourceName_, "") };
    inline ListSourceUsageStatisticsShrinkRequest& setSourceName(string sourceName) { DARABONBA_PTR_SET_VALUE(sourceName_, sourceName) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListSourceUsageStatisticsShrinkRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ListSourceUsageStatisticsShrinkRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The platform application token issued by the console. If specified, the operation is executed as the user specified by opsUserId or opsUserCode.
    shared_ptr<string> appToken_ {};
    // The ID of the collaboration group to which the resource belongs, such as cg_101. If specified, a group workspace task is created, and the caller must be a valid group member. If left empty, a personal task is created.
    shared_ptr<string> collaborationGroupId_ {};
    // The actual end timestamp, in milliseconds.
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // The event type.
    shared_ptr<string> eventType_ {};
    // The root IDs of enterprise knowledge bases, available only for TENANT. The IDs are filtered based on current directory bindings rather than historical ownership. A maximum of 100 items are supported.
    shared_ptr<string> knowledgeBaseIdsShrink_ {};
    // The proxy user code, which is unique within the tenant. This parameter is used only when the application credential is configured as source_uid.
    shared_ptr<string> opsUserCode_ {};
    // The proxy user ID, which is the WINNEXO platform user ID. This parameter is used only when the application credential is configured as winnexo_uid.
    shared_ptr<string> opsUserId_ {};
    // The current page number.
    shared_ptr<int64_t> page_ {};
    // The number of entries per page.
    shared_ptr<int64_t> pageSize_ {};
    // The report perspective. Valid values: TENANT for enterprise knowledge, GROUP for a single workspace, and ALL_GROUPS for all workspaces of the current tenant (available only to platform super administrators).
    // 
    // This parameter is required.
    shared_ptr<string> scopeType_ {};
    // The content of the sort clause.
    shared_ptr<string> sortBy_ {};
    // Specifies the sort order. This parameter takes effect only when sortBy is specified. Valid values: ASC and DESC. The values are case-insensitive.
    shared_ptr<string> sortOrder_ {};
    // The associated source IDs.
    shared_ptr<string> sourceIdsShrink_ {};
    // The name of the source.
    shared_ptr<string> sourceName_ {};
    // The start time of the query. The value is a UNIX timestamp in seconds.
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
    // The effective tenant ID.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
