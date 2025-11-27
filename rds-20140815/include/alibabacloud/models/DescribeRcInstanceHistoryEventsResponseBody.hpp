// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCINSTANCEHISTORYEVENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCINSTANCEHISTORYEVENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSet.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRCInstanceHistoryEventsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCInstanceHistoryEventsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceSystemEventSet, instanceSystemEventSet_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRCInstanceHistoryEventsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceSystemEventSet, instanceSystemEventSet_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeRCInstanceHistoryEventsResponseBody() = default ;
    DescribeRCInstanceHistoryEventsResponseBody(const DescribeRCInstanceHistoryEventsResponseBody &) = default ;
    DescribeRCInstanceHistoryEventsResponseBody(DescribeRCInstanceHistoryEventsResponseBody &&) = default ;
    DescribeRCInstanceHistoryEventsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCInstanceHistoryEventsResponseBody() = default ;
    DescribeRCInstanceHistoryEventsResponseBody& operator=(const DescribeRCInstanceHistoryEventsResponseBody &) = default ;
    DescribeRCInstanceHistoryEventsResponseBody& operator=(DescribeRCInstanceHistoryEventsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceSystemEventSet_ == nullptr
        && return this->nextToken_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // instanceSystemEventSet Field Functions 
    bool hasInstanceSystemEventSet() const { return this->instanceSystemEventSet_ != nullptr;};
    void deleteInstanceSystemEventSet() { this->instanceSystemEventSet_ = nullptr;};
    inline const vector<DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSet> & instanceSystemEventSet() const { DARABONBA_PTR_GET_CONST(instanceSystemEventSet_, vector<DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSet>) };
    inline vector<DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSet> instanceSystemEventSet() { DARABONBA_PTR_GET(instanceSystemEventSet_, vector<DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSet>) };
    inline DescribeRCInstanceHistoryEventsResponseBody& setInstanceSystemEventSet(const vector<DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSet> & instanceSystemEventSet) { DARABONBA_PTR_SET_VALUE(instanceSystemEventSet_, instanceSystemEventSet) };
    inline DescribeRCInstanceHistoryEventsResponseBody& setInstanceSystemEventSet(vector<DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSet> && instanceSystemEventSet) { DARABONBA_PTR_SET_RVALUE(instanceSystemEventSet_, instanceSystemEventSet) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeRCInstanceHistoryEventsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeRCInstanceHistoryEventsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeRCInstanceHistoryEventsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRCInstanceHistoryEventsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeRCInstanceHistoryEventsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Details about the instance system event.
    std::shared_ptr<vector<DescribeRCInstanceHistoryEventsResponseBodyInstanceSystemEventSet>> instanceSystemEventSet_ = nullptr;
    // The reserved parameter. This parameter is not supported.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of instance events.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
