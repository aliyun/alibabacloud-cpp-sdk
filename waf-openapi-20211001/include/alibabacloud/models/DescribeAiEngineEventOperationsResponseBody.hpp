// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAIENGINEEVENTOPERATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAIENGINEEVENTOPERATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeAiEngineEventOperationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAiEngineEventOperationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAiEngineEventOperationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeAiEngineEventOperationsResponseBody() = default ;
    DescribeAiEngineEventOperationsResponseBody(const DescribeAiEngineEventOperationsResponseBody &) = default ;
    DescribeAiEngineEventOperationsResponseBody(DescribeAiEngineEventOperationsResponseBody &&) = default ;
    DescribeAiEngineEventOperationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAiEngineEventOperationsResponseBody() = default ;
    DescribeAiEngineEventOperationsResponseBody& operator=(const DescribeAiEngineEventOperationsResponseBody &) = default ;
    DescribeAiEngineEventOperationsResponseBody& operator=(DescribeAiEngineEventOperationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(FromStatus, fromStatus_);
        DARABONBA_PTR_TO_JSON(OperatedAt, operatedAt_);
        DARABONBA_PTR_TO_JSON(OperationId, operationId_);
        DARABONBA_PTR_TO_JSON(ToStatus, toStatus_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(FromStatus, fromStatus_);
        DARABONBA_PTR_FROM_JSON(OperatedAt, operatedAt_);
        DARABONBA_PTR_FROM_JSON(OperationId, operationId_);
        DARABONBA_PTR_FROM_JSON(ToStatus, toStatus_);
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
      virtual bool empty() const override { return this->fromStatus_ == nullptr
        && this->operatedAt_ == nullptr && this->operationId_ == nullptr && this->toStatus_ == nullptr; };
      // fromStatus Field Functions 
      bool hasFromStatus() const { return this->fromStatus_ != nullptr;};
      void deleteFromStatus() { this->fromStatus_ = nullptr;};
      inline string getFromStatus() const { DARABONBA_PTR_GET_DEFAULT(fromStatus_, "") };
      inline Items& setFromStatus(string fromStatus) { DARABONBA_PTR_SET_VALUE(fromStatus_, fromStatus) };


      // operatedAt Field Functions 
      bool hasOperatedAt() const { return this->operatedAt_ != nullptr;};
      void deleteOperatedAt() { this->operatedAt_ = nullptr;};
      inline int64_t getOperatedAt() const { DARABONBA_PTR_GET_DEFAULT(operatedAt_, 0L) };
      inline Items& setOperatedAt(int64_t operatedAt) { DARABONBA_PTR_SET_VALUE(operatedAt_, operatedAt) };


      // operationId Field Functions 
      bool hasOperationId() const { return this->operationId_ != nullptr;};
      void deleteOperationId() { this->operationId_ = nullptr;};
      inline string getOperationId() const { DARABONBA_PTR_GET_DEFAULT(operationId_, "") };
      inline Items& setOperationId(string operationId) { DARABONBA_PTR_SET_VALUE(operationId_, operationId) };


      // toStatus Field Functions 
      bool hasToStatus() const { return this->toStatus_ != nullptr;};
      void deleteToStatus() { this->toStatus_ = nullptr;};
      inline string getToStatus() const { DARABONBA_PTR_GET_DEFAULT(toStatus_, "") };
      inline Items& setToStatus(string toStatus) { DARABONBA_PTR_SET_VALUE(toStatus_, toStatus) };


    protected:
      // The event processing status before the modification. Valid values:
      // 
      // - **unhandled**: Unprocessed.
      // - **handling**: Processing.
      // - **handled**: Processed.
      shared_ptr<string> fromStatus_ {};
      // The event operation time. The value is a UNIX timestamp in milliseconds.
      shared_ptr<int64_t> operatedAt_ {};
      // The ID of the operation record.
      shared_ptr<string> operationId_ {};
      // The event processing status after the modification. Valid values:
      // 
      // - **unhandled**: Unprocessed.
      // - **handling**: Processing.
      // - **handled**: Processed.
      shared_ptr<string> toStatus_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeAiEngineEventOperationsResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeAiEngineEventOperationsResponseBody::Items>) };
    inline vector<DescribeAiEngineEventOperationsResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeAiEngineEventOperationsResponseBody::Items>) };
    inline DescribeAiEngineEventOperationsResponseBody& setItems(const vector<DescribeAiEngineEventOperationsResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeAiEngineEventOperationsResponseBody& setItems(vector<DescribeAiEngineEventOperationsResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeAiEngineEventOperationsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeAiEngineEventOperationsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAiEngineEventOperationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeAiEngineEventOperationsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of event status change records, sorted in descending order by operation time.
    shared_ptr<vector<DescribeAiEngineEventOperationsResponseBody::Items>> items_ {};
    // The number of entries to return on each page during paging in a paged query. Valid values: 1 to 100. Default value: 20.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token. If a next page exists, this field returns a value.
    // > If this parameter returns a value, it indicates that a next page exists. You can use the returned **NextToken** as a request parameter to obtain the data on the next page until no value is returned, which indicates that all data is obtained.
    shared_ptr<string> nextToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of operation records for the event.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
