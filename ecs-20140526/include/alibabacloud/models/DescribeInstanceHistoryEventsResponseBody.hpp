// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEHISTORYEVENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEHISTORYEVENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSet.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInstanceHistoryEventsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceHistoryEventsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceSystemEventSet, instanceSystemEventSet_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceHistoryEventsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceSystemEventSet, instanceSystemEventSet_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeInstanceHistoryEventsResponseBody() = default ;
    DescribeInstanceHistoryEventsResponseBody(const DescribeInstanceHistoryEventsResponseBody &) = default ;
    DescribeInstanceHistoryEventsResponseBody(DescribeInstanceHistoryEventsResponseBody &&) = default ;
    DescribeInstanceHistoryEventsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceHistoryEventsResponseBody() = default ;
    DescribeInstanceHistoryEventsResponseBody& operator=(const DescribeInstanceHistoryEventsResponseBody &) = default ;
    DescribeInstanceHistoryEventsResponseBody& operator=(DescribeInstanceHistoryEventsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceSystemEventSet_ != nullptr
        && this->nextToken_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // instanceSystemEventSet Field Functions 
    bool hasInstanceSystemEventSet() const { return this->instanceSystemEventSet_ != nullptr;};
    void deleteInstanceSystemEventSet() { this->instanceSystemEventSet_ = nullptr;};
    inline const DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSet & instanceSystemEventSet() const { DARABONBA_PTR_GET_CONST(instanceSystemEventSet_, DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSet) };
    inline DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSet instanceSystemEventSet() { DARABONBA_PTR_GET(instanceSystemEventSet_, DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSet) };
    inline DescribeInstanceHistoryEventsResponseBody& setInstanceSystemEventSet(const DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSet & instanceSystemEventSet) { DARABONBA_PTR_SET_VALUE(instanceSystemEventSet_, instanceSystemEventSet) };
    inline DescribeInstanceHistoryEventsResponseBody& setInstanceSystemEventSet(DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSet && instanceSystemEventSet) { DARABONBA_PTR_SET_RVALUE(instanceSystemEventSet_, instanceSystemEventSet) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeInstanceHistoryEventsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeInstanceHistoryEventsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeInstanceHistoryEventsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceHistoryEventsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeInstanceHistoryEventsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Details about the instance system events.
    std::shared_ptr<DescribeInstanceHistoryEventsResponseBodyInstanceSystemEventSet> instanceSystemEventSet_ = nullptr;
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    // 
    // >  If the NextToken parameter is not returned when you use the MaxResults and NextToken parameters to perform a paged query, no more data is returned.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The page number.
    // 
    // > 
    // 
    // *   If MaxResults and NextToken are used to query results by page, ignore this parameter.
    // 
    // *   This parameter will be removed in the future. We recommend that you use the NextToken and MaxResults parameters for a paged query.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    // 
    // > 
    // 
    // *   If MaxResults and NextToken are used to query results by page, ignore this parameter.
    // 
    // *   This parameter will be removed in the future. We recommend that you use the NextToken and MaxResults parameters for a paged query.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of instances.
    // 
    // >  If you specify the MaxResults and NextToken request parameters to perform a paged query, the value of the TotalCount response parameter is invalid.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
