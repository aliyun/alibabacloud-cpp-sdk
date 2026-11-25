// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONTEXTDATABASECREDITUSAGESUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCONTEXTDATABASECREDITUSAGESUMMARYRESPONSEBODY_HPP_
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
  class GetContextDatabaseCreditUsageSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetContextDatabaseCreditUsageSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Buckets, buckets_);
      DARABONBA_PTR_TO_JSON(Dimension, dimension_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TotalCredits, totalCredits_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetContextDatabaseCreditUsageSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Buckets, buckets_);
      DARABONBA_PTR_FROM_JSON(Dimension, dimension_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TotalCredits, totalCredits_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    GetContextDatabaseCreditUsageSummaryResponseBody() = default ;
    GetContextDatabaseCreditUsageSummaryResponseBody(const GetContextDatabaseCreditUsageSummaryResponseBody &) = default ;
    GetContextDatabaseCreditUsageSummaryResponseBody(GetContextDatabaseCreditUsageSummaryResponseBody &&) = default ;
    GetContextDatabaseCreditUsageSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetContextDatabaseCreditUsageSummaryResponseBody() = default ;
    GetContextDatabaseCreditUsageSummaryResponseBody& operator=(const GetContextDatabaseCreditUsageSummaryResponseBody &) = default ;
    GetContextDatabaseCreditUsageSummaryResponseBody& operator=(GetContextDatabaseCreditUsageSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Buckets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Buckets& obj) { 
        DARABONBA_PTR_TO_JSON(BucketStart, bucketStart_);
        DARABONBA_PTR_TO_JSON(Credits, credits_);
        DARABONBA_PTR_TO_JSON(Item, item_);
        DARABONBA_PTR_TO_JSON(Quantity, quantity_);
        DARABONBA_PTR_TO_JSON(RecordCount, recordCount_);
        DARABONBA_PTR_TO_JSON(SubItem, subItem_);
        DARABONBA_PTR_TO_JSON(Unit, unit_);
      };
      friend void from_json(const Darabonba::Json& j, Buckets& obj) { 
        DARABONBA_PTR_FROM_JSON(BucketStart, bucketStart_);
        DARABONBA_PTR_FROM_JSON(Credits, credits_);
        DARABONBA_PTR_FROM_JSON(Item, item_);
        DARABONBA_PTR_FROM_JSON(Quantity, quantity_);
        DARABONBA_PTR_FROM_JSON(RecordCount, recordCount_);
        DARABONBA_PTR_FROM_JSON(SubItem, subItem_);
        DARABONBA_PTR_FROM_JSON(Unit, unit_);
      };
      Buckets() = default ;
      Buckets(const Buckets &) = default ;
      Buckets(Buckets &&) = default ;
      Buckets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Buckets() = default ;
      Buckets& operator=(const Buckets &) = default ;
      Buckets& operator=(Buckets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bucketStart_ == nullptr
        && this->credits_ == nullptr && this->item_ == nullptr && this->quantity_ == nullptr && this->recordCount_ == nullptr && this->subItem_ == nullptr
        && this->unit_ == nullptr; };
      // bucketStart Field Functions 
      bool hasBucketStart() const { return this->bucketStart_ != nullptr;};
      void deleteBucketStart() { this->bucketStart_ = nullptr;};
      inline string getBucketStart() const { DARABONBA_PTR_GET_DEFAULT(bucketStart_, "") };
      inline Buckets& setBucketStart(string bucketStart) { DARABONBA_PTR_SET_VALUE(bucketStart_, bucketStart) };


      // credits Field Functions 
      bool hasCredits() const { return this->credits_ != nullptr;};
      void deleteCredits() { this->credits_ = nullptr;};
      inline string getCredits() const { DARABONBA_PTR_GET_DEFAULT(credits_, "") };
      inline Buckets& setCredits(string credits) { DARABONBA_PTR_SET_VALUE(credits_, credits) };


      // item Field Functions 
      bool hasItem() const { return this->item_ != nullptr;};
      void deleteItem() { this->item_ = nullptr;};
      inline string getItem() const { DARABONBA_PTR_GET_DEFAULT(item_, "") };
      inline Buckets& setItem(string item) { DARABONBA_PTR_SET_VALUE(item_, item) };


      // quantity Field Functions 
      bool hasQuantity() const { return this->quantity_ != nullptr;};
      void deleteQuantity() { this->quantity_ = nullptr;};
      inline int64_t getQuantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, 0L) };
      inline Buckets& setQuantity(int64_t quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


      // recordCount Field Functions 
      bool hasRecordCount() const { return this->recordCount_ != nullptr;};
      void deleteRecordCount() { this->recordCount_ = nullptr;};
      inline int64_t getRecordCount() const { DARABONBA_PTR_GET_DEFAULT(recordCount_, 0L) };
      inline Buckets& setRecordCount(int64_t recordCount) { DARABONBA_PTR_SET_VALUE(recordCount_, recordCount) };


      // subItem Field Functions 
      bool hasSubItem() const { return this->subItem_ != nullptr;};
      void deleteSubItem() { this->subItem_ = nullptr;};
      inline string getSubItem() const { DARABONBA_PTR_GET_DEFAULT(subItem_, "") };
      inline Buckets& setSubItem(string subItem) { DARABONBA_PTR_SET_VALUE(subItem_, subItem) };


      // unit Field Functions 
      bool hasUnit() const { return this->unit_ != nullptr;};
      void deleteUnit() { this->unit_ = nullptr;};
      inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
      inline Buckets& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


    protected:
      // The start time of the bucket, in ISO 8601 UTC time format ending with `Z`.
      shared_ptr<string> bucketStart_ {};
      // The total credit consumption of priced records in the bucket. Returned as a decimal string with up to 6 decimal places, where 1 credit equals 1 CNY. Returns the string `0` when all records are unpriced.
      shared_ptr<string> credits_ {};
      // The billing item corresponding to the bucket. Valid values: KnowledgeBaseRead (knowledge base read), MemoryRead (memory read), MemoryWrite (memory write), KnowledgeBaseWriteToken (knowledge base write token), and ContextGrowth (context growth).
      shared_ptr<string> item_ {};
      // The total usage of all records in the bucket, including unpriced records. The unit is specified by Unit.
      shared_ptr<int64_t> quantity_ {};
      // The number of metering records in the bucket, including unpriced records.
      shared_ptr<int64_t> recordCount_ {};
      // The context evolution sub-item. Recognized values include KnowledgeOrganization (knowledge organization), MemoryPromotion (memory promotion), KnowledgeReview (knowledge review), KnowledgeEvolution (knowledge evolution), and MemoryEvolution (memory evolution). Returns null for other billing items, missing sub-items, or unrecognized sub-items.
      shared_ptr<string> subItem_ {};
      // The unit of measurement. Valid values: Count (number of times), Token (number of tokens), and MicroCredit (one millionth of a credit).
      shared_ptr<string> unit_ {};
    };

    virtual bool empty() const override { return this->buckets_ == nullptr
        && this->dimension_ == nullptr && this->endTime_ == nullptr && this->interval_ == nullptr && this->requestId_ == nullptr && this->startTime_ == nullptr
        && this->totalCredits_ == nullptr && this->workspaceId_ == nullptr; };
    // buckets Field Functions 
    bool hasBuckets() const { return this->buckets_ != nullptr;};
    void deleteBuckets() { this->buckets_ = nullptr;};
    inline const vector<GetContextDatabaseCreditUsageSummaryResponseBody::Buckets> & getBuckets() const { DARABONBA_PTR_GET_CONST(buckets_, vector<GetContextDatabaseCreditUsageSummaryResponseBody::Buckets>) };
    inline vector<GetContextDatabaseCreditUsageSummaryResponseBody::Buckets> getBuckets() { DARABONBA_PTR_GET(buckets_, vector<GetContextDatabaseCreditUsageSummaryResponseBody::Buckets>) };
    inline GetContextDatabaseCreditUsageSummaryResponseBody& setBuckets(const vector<GetContextDatabaseCreditUsageSummaryResponseBody::Buckets> & buckets) { DARABONBA_PTR_SET_VALUE(buckets_, buckets) };
    inline GetContextDatabaseCreditUsageSummaryResponseBody& setBuckets(vector<GetContextDatabaseCreditUsageSummaryResponseBody::Buckets> && buckets) { DARABONBA_PTR_SET_RVALUE(buckets_, buckets) };


    // dimension Field Functions 
    bool hasDimension() const { return this->dimension_ != nullptr;};
    void deleteDimension() { this->dimension_ = nullptr;};
    inline string getDimension() const { DARABONBA_PTR_GET_DEFAULT(dimension_, "") };
    inline GetContextDatabaseCreditUsageSummaryResponseBody& setDimension(string dimension) { DARABONBA_PTR_SET_VALUE(dimension_, dimension) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetContextDatabaseCreditUsageSummaryResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline string getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, "") };
    inline GetContextDatabaseCreditUsageSummaryResponseBody& setInterval(string interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetContextDatabaseCreditUsageSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetContextDatabaseCreditUsageSummaryResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // totalCredits Field Functions 
    bool hasTotalCredits() const { return this->totalCredits_ != nullptr;};
    void deleteTotalCredits() { this->totalCredits_ = nullptr;};
    inline string getTotalCredits() const { DARABONBA_PTR_GET_DEFAULT(totalCredits_, "") };
    inline GetContextDatabaseCreditUsageSummaryResponseBody& setTotalCredits(string totalCredits) { DARABONBA_PTR_SET_VALUE(totalCredits_, totalCredits) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline GetContextDatabaseCreditUsageSummaryResponseBody& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The bucketing results, sorted sequentially by BucketStart, Item, and SubItem. Unpriced records are included in Quantity and RecordCount, but not in Credits.
    shared_ptr<vector<GetContextDatabaseCreditUsageSummaryResponseBody::Buckets>> buckets_ {};
    // The query dimension. Valid values: Workspace (a single workspace) and Account (all workspaces under the caller account).
    shared_ptr<string> dimension_ {};
    // The end time of the query interval passed in the request, exclusive.
    shared_ptr<string> endTime_ {};
    // The actual bucketing granularity used. Valid values: Hour (hourly) and Day (daily). When the request parameter is omitted, the automatically selected granularity is returned.
    shared_ptr<string> interval_ {};
    // The ID of the API request, which is used to troubleshoot call issues.
    shared_ptr<string> requestId_ {};
    // The start time of the query interval passed in the request, inclusive.
    shared_ptr<string> startTime_ {};
    // The total credit consumption of priced records that meet the filter conditions within the query interval. Returned as a decimal string with up to 6 decimal places, where 1 credit equals 1 CNY. Returns the string `0` when there are no priced records. Unpriced records are not included in the total. Do not treat this value as the final bill amount.
    shared_ptr<string> totalCredits_ {};
    // The ID of the queried workspace. This parameter has a value only when Dimension is Workspace. It is empty for the account dimension.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
