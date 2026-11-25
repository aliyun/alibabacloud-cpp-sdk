// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONTEXTDATABASECREDITUSAGESUMMARYBYMEMBERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCONTEXTDATABASECREDITUSAGESUMMARYBYMEMBERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class GetContextDatabaseCreditUsageSummaryByMemberResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetContextDatabaseCreditUsageSummaryByMemberResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Total, total_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetContextDatabaseCreditUsageSummaryByMemberResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    GetContextDatabaseCreditUsageSummaryByMemberResponseBody() = default ;
    GetContextDatabaseCreditUsageSummaryByMemberResponseBody(const GetContextDatabaseCreditUsageSummaryByMemberResponseBody &) = default ;
    GetContextDatabaseCreditUsageSummaryByMemberResponseBody(GetContextDatabaseCreditUsageSummaryByMemberResponseBody &&) = default ;
    GetContextDatabaseCreditUsageSummaryByMemberResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetContextDatabaseCreditUsageSummaryByMemberResponseBody() = default ;
    GetContextDatabaseCreditUsageSummaryByMemberResponseBody& operator=(const GetContextDatabaseCreditUsageSummaryByMemberResponseBody &) = default ;
    GetContextDatabaseCreditUsageSummaryByMemberResponseBody& operator=(GetContextDatabaseCreditUsageSummaryByMemberResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(Credits, credits_);
        DARABONBA_PTR_TO_JSON(MemberId, memberId_);
        DARABONBA_PTR_TO_JSON(Quantity, quantity_);
        DARABONBA_PTR_TO_JSON(RecordCount, recordCount_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(Credits, credits_);
        DARABONBA_PTR_FROM_JSON(MemberId, memberId_);
        DARABONBA_PTR_FROM_JSON(Quantity, quantity_);
        DARABONBA_PTR_FROM_JSON(RecordCount, recordCount_);
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
      virtual bool empty() const override { return this->credits_ == nullptr
        && this->memberId_ == nullptr && this->quantity_ == nullptr && this->recordCount_ == nullptr; };
      // credits Field Functions 
      bool hasCredits() const { return this->credits_ != nullptr;};
      void deleteCredits() { this->credits_ = nullptr;};
      inline string getCredits() const { DARABONBA_PTR_GET_DEFAULT(credits_, "") };
      inline Items& setCredits(string credits) { DARABONBA_PTR_SET_VALUE(credits_, credits) };


      // memberId Field Functions 
      bool hasMemberId() const { return this->memberId_ != nullptr;};
      void deleteMemberId() { this->memberId_ = nullptr;};
      inline string getMemberId() const { DARABONBA_PTR_GET_DEFAULT(memberId_, "") };
      inline Items& setMemberId(string memberId) { DARABONBA_PTR_SET_VALUE(memberId_, memberId) };


      // quantity Field Functions 
      bool hasQuantity() const { return this->quantity_ != nullptr;};
      void deleteQuantity() { this->quantity_ = nullptr;};
      inline int64_t getQuantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, 0L) };
      inline Items& setQuantity(int64_t quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


      // recordCount Field Functions 
      bool hasRecordCount() const { return this->recordCount_ != nullptr;};
      void deleteRecordCount() { this->recordCount_ = nullptr;};
      inline int64_t getRecordCount() const { DARABONBA_PTR_GET_DEFAULT(recordCount_, 0L) };
      inline Items& setRecordCount(int64_t recordCount) { DARABONBA_PTR_SET_VALUE(recordCount_, recordCount) };


    protected:
      // The total credit consumption of priced records for this member. Returned as a decimal string with up to 6 decimal places, where 1 credit = 1 CNY. The value is `null` if there are no priced records.
      shared_ptr<string> credits_ {};
      // The member ID. Historical or system records may not have a member ID.
      shared_ptr<string> memberId_ {};
      // The total metered quantity of records that match the filter criteria for this member, including unpriced records. To view the usage of a specific billing item, specify `Item` in the request.
      shared_ptr<int64_t> quantity_ {};
      // The number of metering records that match the filter criteria for this member, including unpriced records.
      shared_ptr<int64_t> recordCount_ {};
    };

    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->items_ == nullptr && this->page_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->startTime_ == nullptr
        && this->total_ == nullptr && this->workspaceId_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetContextDatabaseCreditUsageSummaryByMemberResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<GetContextDatabaseCreditUsageSummaryByMemberResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<GetContextDatabaseCreditUsageSummaryByMemberResponseBody::Items>) };
    inline vector<GetContextDatabaseCreditUsageSummaryByMemberResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<GetContextDatabaseCreditUsageSummaryByMemberResponseBody::Items>) };
    inline GetContextDatabaseCreditUsageSummaryByMemberResponseBody& setItems(const vector<GetContextDatabaseCreditUsageSummaryByMemberResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline GetContextDatabaseCreditUsageSummaryByMemberResponseBody& setItems(vector<GetContextDatabaseCreditUsageSummaryByMemberResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline GetContextDatabaseCreditUsageSummaryByMemberResponseBody& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetContextDatabaseCreditUsageSummaryByMemberResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetContextDatabaseCreditUsageSummaryByMemberResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetContextDatabaseCreditUsageSummaryByMemberResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline GetContextDatabaseCreditUsageSummaryByMemberResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline GetContextDatabaseCreditUsageSummaryByMemberResponseBody& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The end time of the query interval passed in the request, exclusive.
    shared_ptr<string> endTime_ {};
    // The member summaries on the current page, sorted by total credit consumption in descending order. Each record covers the entire query interval.
    shared_ptr<vector<GetContextDatabaseCreditUsageSummaryByMemberResponseBody::Items>> items_ {};
    // The actual page number used in this query.
    shared_ptr<int32_t> page_ {};
    // The actual number of items per page used in this query.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the OpenAPI request, used to troubleshoot call issues.
    shared_ptr<string> requestId_ {};
    // The start time of the query interval passed in the request, inclusive.
    shared_ptr<string> startTime_ {};
    // The total number of members that match the filter criteria. This is not the number of metering records and is not affected by pagination.
    shared_ptr<int64_t> total_ {};
    // The ID of the workspace queried in this request.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
