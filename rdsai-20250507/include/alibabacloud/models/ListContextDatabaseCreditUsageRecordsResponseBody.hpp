// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONTEXTDATABASECREDITUSAGERECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCONTEXTDATABASECREDITUSAGERECORDSRESPONSEBODY_HPP_
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
  class ListContextDatabaseCreditUsageRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListContextDatabaseCreditUsageRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Dimension, dimension_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Records, records_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Total, total_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListContextDatabaseCreditUsageRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Dimension, dimension_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Records, records_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ListContextDatabaseCreditUsageRecordsResponseBody() = default ;
    ListContextDatabaseCreditUsageRecordsResponseBody(const ListContextDatabaseCreditUsageRecordsResponseBody &) = default ;
    ListContextDatabaseCreditUsageRecordsResponseBody(ListContextDatabaseCreditUsageRecordsResponseBody &&) = default ;
    ListContextDatabaseCreditUsageRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListContextDatabaseCreditUsageRecordsResponseBody() = default ;
    ListContextDatabaseCreditUsageRecordsResponseBody& operator=(const ListContextDatabaseCreditUsageRecordsResponseBody &) = default ;
    ListContextDatabaseCreditUsageRecordsResponseBody& operator=(ListContextDatabaseCreditUsageRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Records : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Records& obj) { 
        DARABONBA_PTR_TO_JSON(Credits, credits_);
        DARABONBA_PTR_TO_JSON(Item, item_);
        DARABONBA_PTR_TO_JSON(MemberId, memberId_);
        DARABONBA_PTR_TO_JSON(Quantity, quantity_);
        DARABONBA_PTR_TO_JSON(RequestTime, requestTime_);
        DARABONBA_PTR_TO_JSON(SubItem, subItem_);
        DARABONBA_PTR_TO_JSON(Unit, unit_);
        DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      };
      friend void from_json(const Darabonba::Json& j, Records& obj) { 
        DARABONBA_PTR_FROM_JSON(Credits, credits_);
        DARABONBA_PTR_FROM_JSON(Item, item_);
        DARABONBA_PTR_FROM_JSON(MemberId, memberId_);
        DARABONBA_PTR_FROM_JSON(Quantity, quantity_);
        DARABONBA_PTR_FROM_JSON(RequestTime, requestTime_);
        DARABONBA_PTR_FROM_JSON(SubItem, subItem_);
        DARABONBA_PTR_FROM_JSON(Unit, unit_);
        DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
      };
      Records() = default ;
      Records(const Records &) = default ;
      Records(Records &&) = default ;
      Records(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Records() = default ;
      Records& operator=(const Records &) = default ;
      Records& operator=(Records &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->credits_ == nullptr
        && this->item_ == nullptr && this->memberId_ == nullptr && this->quantity_ == nullptr && this->requestTime_ == nullptr && this->subItem_ == nullptr
        && this->unit_ == nullptr && this->workspaceId_ == nullptr; };
      // credits Field Functions 
      bool hasCredits() const { return this->credits_ != nullptr;};
      void deleteCredits() { this->credits_ = nullptr;};
      inline string getCredits() const { DARABONBA_PTR_GET_DEFAULT(credits_, "") };
      inline Records& setCredits(string credits) { DARABONBA_PTR_SET_VALUE(credits_, credits) };


      // item Field Functions 
      bool hasItem() const { return this->item_ != nullptr;};
      void deleteItem() { this->item_ = nullptr;};
      inline string getItem() const { DARABONBA_PTR_GET_DEFAULT(item_, "") };
      inline Records& setItem(string item) { DARABONBA_PTR_SET_VALUE(item_, item) };


      // memberId Field Functions 
      bool hasMemberId() const { return this->memberId_ != nullptr;};
      void deleteMemberId() { this->memberId_ = nullptr;};
      inline string getMemberId() const { DARABONBA_PTR_GET_DEFAULT(memberId_, "") };
      inline Records& setMemberId(string memberId) { DARABONBA_PTR_SET_VALUE(memberId_, memberId) };


      // quantity Field Functions 
      bool hasQuantity() const { return this->quantity_ != nullptr;};
      void deleteQuantity() { this->quantity_ = nullptr;};
      inline int64_t getQuantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, 0L) };
      inline Records& setQuantity(int64_t quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


      // requestTime Field Functions 
      bool hasRequestTime() const { return this->requestTime_ != nullptr;};
      void deleteRequestTime() { this->requestTime_ = nullptr;};
      inline string getRequestTime() const { DARABONBA_PTR_GET_DEFAULT(requestTime_, "") };
      inline Records& setRequestTime(string requestTime) { DARABONBA_PTR_SET_VALUE(requestTime_, requestTime) };


      // subItem Field Functions 
      bool hasSubItem() const { return this->subItem_ != nullptr;};
      void deleteSubItem() { this->subItem_ = nullptr;};
      inline string getSubItem() const { DARABONBA_PTR_GET_DEFAULT(subItem_, "") };
      inline Records& setSubItem(string subItem) { DARABONBA_PTR_SET_VALUE(subItem_, subItem) };


      // unit Field Functions 
      bool hasUnit() const { return this->unit_ != nullptr;};
      void deleteUnit() { this->unit_ = nullptr;};
      inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
      inline Records& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline Records& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    protected:
      // The credit consumption of this record. It is returned as a decimal string with up to 6 decimal places. 1 credit = 1 CNY. The amount is recorded at the time of metering and does not change with subsequent price adjustments. It is null when unpriced, which does not indicate zero consumption.
      shared_ptr<string> credits_ {};
      // The billing item of this record. Valid values: KnowledgeBaseRead (knowledge base read), MemoryRead (memory base read), MemoryWrite (memory base write), KnowledgeBaseWriteToken (knowledge base write token), and ContextGrowth (context growth).
      shared_ptr<string> item_ {};
      // The ID of the member that generated this record. Historical or system records may not have a member ID, in which case null is returned.
      shared_ptr<string> memberId_ {};
      // The usage of this record. The unit is specified by Unit in the same record.
      shared_ptr<int64_t> quantity_ {};
      // The request time when this metering record was generated, in ISO 8601 UTC time format ending with Z.
      shared_ptr<string> requestTime_ {};
      // The context growth sub-item. Recognized values include KnowledgeOrganization (knowledge organization), MemoryPromotion (memory promotion), KnowledgeReview (knowledge review), KnowledgeEvolution (knowledge evolution), and MemoryEvolution (memory evolution). null is returned for other billing items, missing sub-items, or unrecognized sub-items.
      shared_ptr<string> subItem_ {};
      // The metering unit. Valid values: Count indicates the number of times, Token indicates the number of tokens, and MicroCredit indicates one millionth of a credit.
      shared_ptr<string> unit_ {};
      // The ID of the workspace to which this record belongs. Even if queried by account, each record still indicates its workspace.
      shared_ptr<string> workspaceId_ {};
    };

    virtual bool empty() const override { return this->dimension_ == nullptr
        && this->endTime_ == nullptr && this->page_ == nullptr && this->pageSize_ == nullptr && this->records_ == nullptr && this->requestId_ == nullptr
        && this->startTime_ == nullptr && this->total_ == nullptr && this->workspaceId_ == nullptr; };
    // dimension Field Functions 
    bool hasDimension() const { return this->dimension_ != nullptr;};
    void deleteDimension() { this->dimension_ = nullptr;};
    inline string getDimension() const { DARABONBA_PTR_GET_DEFAULT(dimension_, "") };
    inline ListContextDatabaseCreditUsageRecordsResponseBody& setDimension(string dimension) { DARABONBA_PTR_SET_VALUE(dimension_, dimension) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListContextDatabaseCreditUsageRecordsResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline ListContextDatabaseCreditUsageRecordsResponseBody& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListContextDatabaseCreditUsageRecordsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // records Field Functions 
    bool hasRecords() const { return this->records_ != nullptr;};
    void deleteRecords() { this->records_ = nullptr;};
    inline const vector<ListContextDatabaseCreditUsageRecordsResponseBody::Records> & getRecords() const { DARABONBA_PTR_GET_CONST(records_, vector<ListContextDatabaseCreditUsageRecordsResponseBody::Records>) };
    inline vector<ListContextDatabaseCreditUsageRecordsResponseBody::Records> getRecords() { DARABONBA_PTR_GET(records_, vector<ListContextDatabaseCreditUsageRecordsResponseBody::Records>) };
    inline ListContextDatabaseCreditUsageRecordsResponseBody& setRecords(const vector<ListContextDatabaseCreditUsageRecordsResponseBody::Records> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
    inline ListContextDatabaseCreditUsageRecordsResponseBody& setRecords(vector<ListContextDatabaseCreditUsageRecordsResponseBody::Records> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListContextDatabaseCreditUsageRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListContextDatabaseCreditUsageRecordsResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListContextDatabaseCreditUsageRecordsResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListContextDatabaseCreditUsageRecordsResponseBody& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The query dimension. Valid values: Workspace indicates a single workspace, and Account indicates all workspaces under the caller account.
    shared_ptr<string> dimension_ {};
    // The end time of the query range passed in the request, exclusive.
    shared_ptr<string> endTime_ {};
    // The actual page number used for this query.
    shared_ptr<int32_t> page_ {};
    // The actual page size used for this query.
    shared_ptr<int32_t> pageSize_ {};
    // The metering records on the current page. If SortBy is not specified, the records are sorted in descending order of request time.
    shared_ptr<vector<ListContextDatabaseCreditUsageRecordsResponseBody::Records>> records_ {};
    // The ID of the OpenAPI request, which is used to troubleshoot call issues.
    shared_ptr<string> requestId_ {};
    // The start time of the query range passed in the request, inclusive.
    shared_ptr<string> startTime_ {};
    // The total number of metering records that match the filter conditions, which is not affected by pagination.
    shared_ptr<int64_t> total_ {};
    // The ID of the queried workspace. This parameter has a value only when Dimension is Workspace. It is empty for the account dimension.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
