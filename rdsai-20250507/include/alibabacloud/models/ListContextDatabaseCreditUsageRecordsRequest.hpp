// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONTEXTDATABASECREDITUSAGERECORDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCONTEXTDATABASECREDITUSAGERECORDSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class ListContextDatabaseCreditUsageRecordsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListContextDatabaseCreditUsageRecordsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Item, item_);
      DARABONBA_PTR_TO_JSON(MemberId, memberId_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(SortOrder, sortOrder_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(SubItem, subItem_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListContextDatabaseCreditUsageRecordsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Item, item_);
      DARABONBA_PTR_FROM_JSON(MemberId, memberId_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(SortOrder, sortOrder_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(SubItem, subItem_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ListContextDatabaseCreditUsageRecordsRequest() = default ;
    ListContextDatabaseCreditUsageRecordsRequest(const ListContextDatabaseCreditUsageRecordsRequest &) = default ;
    ListContextDatabaseCreditUsageRecordsRequest(ListContextDatabaseCreditUsageRecordsRequest &&) = default ;
    ListContextDatabaseCreditUsageRecordsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListContextDatabaseCreditUsageRecordsRequest() = default ;
    ListContextDatabaseCreditUsageRecordsRequest& operator=(const ListContextDatabaseCreditUsageRecordsRequest &) = default ;
    ListContextDatabaseCreditUsageRecordsRequest& operator=(ListContextDatabaseCreditUsageRecordsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->item_ == nullptr && this->memberId_ == nullptr && this->page_ == nullptr && this->pageSize_ == nullptr && this->sortBy_ == nullptr
        && this->sortOrder_ == nullptr && this->startTime_ == nullptr && this->subItem_ == nullptr && this->workspaceId_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListContextDatabaseCreditUsageRecordsRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // item Field Functions 
    bool hasItem() const { return this->item_ != nullptr;};
    void deleteItem() { this->item_ = nullptr;};
    inline string getItem() const { DARABONBA_PTR_GET_DEFAULT(item_, "") };
    inline ListContextDatabaseCreditUsageRecordsRequest& setItem(string item) { DARABONBA_PTR_SET_VALUE(item_, item) };


    // memberId Field Functions 
    bool hasMemberId() const { return this->memberId_ != nullptr;};
    void deleteMemberId() { this->memberId_ = nullptr;};
    inline string getMemberId() const { DARABONBA_PTR_GET_DEFAULT(memberId_, "") };
    inline ListContextDatabaseCreditUsageRecordsRequest& setMemberId(string memberId) { DARABONBA_PTR_SET_VALUE(memberId_, memberId) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline ListContextDatabaseCreditUsageRecordsRequest& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListContextDatabaseCreditUsageRecordsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListContextDatabaseCreditUsageRecordsRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // sortOrder Field Functions 
    bool hasSortOrder() const { return this->sortOrder_ != nullptr;};
    void deleteSortOrder() { this->sortOrder_ = nullptr;};
    inline string getSortOrder() const { DARABONBA_PTR_GET_DEFAULT(sortOrder_, "") };
    inline ListContextDatabaseCreditUsageRecordsRequest& setSortOrder(string sortOrder) { DARABONBA_PTR_SET_VALUE(sortOrder_, sortOrder) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListContextDatabaseCreditUsageRecordsRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // subItem Field Functions 
    bool hasSubItem() const { return this->subItem_ != nullptr;};
    void deleteSubItem() { this->subItem_ = nullptr;};
    inline string getSubItem() const { DARABONBA_PTR_GET_DEFAULT(subItem_, "") };
    inline ListContextDatabaseCreditUsageRecordsRequest& setSubItem(string subItem) { DARABONBA_PTR_SET_VALUE(subItem_, subItem) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListContextDatabaseCreditUsageRecordsRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The end time of the query range, exclusive. It must be later than StartTime. Use the ISO 8601 time format, such as `2026-10-15T00:00:00Z` (UTC). The maximum length of the query range is 31 days. If the limit is exceeded, InvalidParameter is returned.
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // The billing item used to filter records. Valid values: KnowledgeBaseRead (knowledge base read), MemoryRead (memory base read), MemoryWrite (memory base write), KnowledgeBaseWriteToken (knowledge base write token), and ContextGrowth (context growth). If omitted, all billing items that consume credits are included. Storage items or unlisted values return InvalidParameter.
    shared_ptr<string> item_ {};
    // The member ID used to filter records. If specified, WorkspaceId must also be provided. Otherwise, InvalidParameter is returned. A member ID is unique only within the workspace to which it belongs. This parameter only filters data and does not change the caller identity. Records without a member ID are not matched.
    shared_ptr<string> memberId_ {};
    // The page number. Pages start from 1. Default value: 1.
    shared_ptr<int32_t> page_ {};
    // The maximum number of records to return per page. Valid values: 1 to 200. Default value: 50. The pagination offset, calculated as (Page - 1) × PageSize, must not exceed 10,000.
    shared_ptr<int32_t> pageSize_ {};
    // The field by which to sort the records. Only credits is supported. If omitted, the records are sorted in descending order of request time. Specifying a sort field does not change the total number of filtered records.
    shared_ptr<string> sortBy_ {};
    // The sort order. Valid values: asc (ascending order) and desc (descending order). The values are case-insensitive. If SortBy is specified, the default value is desc. If only SortOrder is provided, InvalidParameter is returned. When sorting by credit, unpriced records are always placed at the end, and records with the same amount are sorted in descending order of request time.
    shared_ptr<string> sortOrder_ {};
    // The start time of the query range, inclusive. Use the ISO 8601 time format, such as `2026-09-15T00:00:00Z` (UTC).
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
    // The context growth sub-item used to filter records. Valid values: KnowledgeOrganization (knowledge organization), MemoryPromotion (memory promotion), KnowledgeReview (knowledge review), KnowledgeEvolution (knowledge evolution), and MemoryEvolution (memory evolution). The values are case-sensitive. If only SubItem is provided, the billing item is automatically restricted to ContextGrowth. If other Item values are provided simultaneously or the sub-item is not in the list, InvalidParameter is returned.
    shared_ptr<string> subItem_ {};
    // The ID of the workspace to query. If specified, only the data of this workspace under the caller account is queried, and locked workspaces can also be queried. If omitted, all workspaces under the caller account are queried.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
