// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFAILOVERTESTJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFAILOVERTESTJOBSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeFailoverTestJobsResponseBodyFailoverTestJobList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeFailoverTestJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFailoverTestJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(FailoverTestJobList, failoverTestJobList_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFailoverTestJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(FailoverTestJobList, failoverTestJobList_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeFailoverTestJobsResponseBody() = default ;
    DescribeFailoverTestJobsResponseBody(const DescribeFailoverTestJobsResponseBody &) = default ;
    DescribeFailoverTestJobsResponseBody(DescribeFailoverTestJobsResponseBody &&) = default ;
    DescribeFailoverTestJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFailoverTestJobsResponseBody() = default ;
    DescribeFailoverTestJobsResponseBody& operator=(const DescribeFailoverTestJobsResponseBody &) = default ;
    DescribeFailoverTestJobsResponseBody& operator=(DescribeFailoverTestJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->count_ != nullptr
        && this->failoverTestJobList_ != nullptr && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeFailoverTestJobsResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // failoverTestJobList Field Functions 
    bool hasFailoverTestJobList() const { return this->failoverTestJobList_ != nullptr;};
    void deleteFailoverTestJobList() { this->failoverTestJobList_ = nullptr;};
    inline const vector<DescribeFailoverTestJobsResponseBodyFailoverTestJobList> & failoverTestJobList() const { DARABONBA_PTR_GET_CONST(failoverTestJobList_, vector<DescribeFailoverTestJobsResponseBodyFailoverTestJobList>) };
    inline vector<DescribeFailoverTestJobsResponseBodyFailoverTestJobList> failoverTestJobList() { DARABONBA_PTR_GET(failoverTestJobList_, vector<DescribeFailoverTestJobsResponseBodyFailoverTestJobList>) };
    inline DescribeFailoverTestJobsResponseBody& setFailoverTestJobList(const vector<DescribeFailoverTestJobsResponseBodyFailoverTestJobList> & failoverTestJobList) { DARABONBA_PTR_SET_VALUE(failoverTestJobList_, failoverTestJobList) };
    inline DescribeFailoverTestJobsResponseBody& setFailoverTestJobList(vector<DescribeFailoverTestJobsResponseBodyFailoverTestJobList> && failoverTestJobList) { DARABONBA_PTR_SET_RVALUE(failoverTestJobList_, failoverTestJobList) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeFailoverTestJobsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeFailoverTestJobsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFailoverTestJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeFailoverTestJobsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of entries on the current page.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The list of failover tests.
    std::shared_ptr<vector<DescribeFailoverTestJobsResponseBodyFailoverTestJobList>> failoverTestJobList_ = nullptr;
    // The number of entries per page. Valid values: **1 to 100**. Default value: 20.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // A pagination token. It can be used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If no value is returned for **NextToken**, no next queries are sent.
    // *   If a value is returned for **NextToken**, the value is used to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
