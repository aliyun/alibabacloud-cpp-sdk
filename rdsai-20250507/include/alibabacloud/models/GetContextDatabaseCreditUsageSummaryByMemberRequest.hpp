// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONTEXTDATABASECREDITUSAGESUMMARYBYMEMBERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCONTEXTDATABASECREDITUSAGESUMMARYBYMEMBERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class GetContextDatabaseCreditUsageSummaryByMemberRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetContextDatabaseCreditUsageSummaryByMemberRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Item, item_);
      DARABONBA_PTR_TO_JSON(MemberId, memberId_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetContextDatabaseCreditUsageSummaryByMemberRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Item, item_);
      DARABONBA_PTR_FROM_JSON(MemberId, memberId_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    GetContextDatabaseCreditUsageSummaryByMemberRequest() = default ;
    GetContextDatabaseCreditUsageSummaryByMemberRequest(const GetContextDatabaseCreditUsageSummaryByMemberRequest &) = default ;
    GetContextDatabaseCreditUsageSummaryByMemberRequest(GetContextDatabaseCreditUsageSummaryByMemberRequest &&) = default ;
    GetContextDatabaseCreditUsageSummaryByMemberRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetContextDatabaseCreditUsageSummaryByMemberRequest() = default ;
    GetContextDatabaseCreditUsageSummaryByMemberRequest& operator=(const GetContextDatabaseCreditUsageSummaryByMemberRequest &) = default ;
    GetContextDatabaseCreditUsageSummaryByMemberRequest& operator=(GetContextDatabaseCreditUsageSummaryByMemberRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->item_ == nullptr && this->memberId_ == nullptr && this->page_ == nullptr && this->pageSize_ == nullptr && this->startTime_ == nullptr
        && this->workspaceId_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetContextDatabaseCreditUsageSummaryByMemberRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // item Field Functions 
    bool hasItem() const { return this->item_ != nullptr;};
    void deleteItem() { this->item_ = nullptr;};
    inline string getItem() const { DARABONBA_PTR_GET_DEFAULT(item_, "") };
    inline GetContextDatabaseCreditUsageSummaryByMemberRequest& setItem(string item) { DARABONBA_PTR_SET_VALUE(item_, item) };


    // memberId Field Functions 
    bool hasMemberId() const { return this->memberId_ != nullptr;};
    void deleteMemberId() { this->memberId_ = nullptr;};
    inline string getMemberId() const { DARABONBA_PTR_GET_DEFAULT(memberId_, "") };
    inline GetContextDatabaseCreditUsageSummaryByMemberRequest& setMemberId(string memberId) { DARABONBA_PTR_SET_VALUE(memberId_, memberId) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline GetContextDatabaseCreditUsageSummaryByMemberRequest& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetContextDatabaseCreditUsageSummaryByMemberRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetContextDatabaseCreditUsageSummaryByMemberRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline GetContextDatabaseCreditUsageSummaryByMemberRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The end time of the query range, exclusive. It must be later than StartTime. Use the ISO 8601 time format, such as 2026-10-08T00:00:00Z (UTC).
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // The billable item used to filter records. Valid values: KnowledgeBaseRead (knowledge base read), MemoryRead (memory base read), MemoryWrite (memory base write), KnowledgeBaseWriteToken (knowledge base write token), and ContextGrowth (context evolution). If omitted, all billable items that consume credits are included. Storage items or unlisted values return InvalidParameter.
    shared_ptr<string> item_ {};
    // The member ID used to filter the aggregated results. If specified, only this member is analyzed without changing the caller identity. An empty list is returned if no matching records are found.
    shared_ptr<string> memberId_ {};
    // The page number. Pages start from 1. Default value: 1.
    shared_ptr<int32_t> page_ {};
    // The maximum number of members to return per page. Valid values: 1 to 200. Default value: 50.
    shared_ptr<int32_t> pageSize_ {};
    // The start time of the query range, inclusive. Use the ISO 8601 time format, such as 2026-10-01T00:00:00Z (UTC).
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
    // The ID of the workspace to be analyzed. This parameter is required. The workspace must belong to the caller\\"s account. Locked workspaces can still be queried. Member IDs are unique only within their respective workspaces, and cross-workspace ranking is not supported.
    // 
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
