// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEREFRESHESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEREFRESHESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInstanceRefreshesResponseBodyInstanceRefreshTasks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeInstanceRefreshesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceRefreshesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceRefreshTasks, instanceRefreshTasks_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceRefreshesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceRefreshTasks, instanceRefreshTasks_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeInstanceRefreshesResponseBody() = default ;
    DescribeInstanceRefreshesResponseBody(const DescribeInstanceRefreshesResponseBody &) = default ;
    DescribeInstanceRefreshesResponseBody(DescribeInstanceRefreshesResponseBody &&) = default ;
    DescribeInstanceRefreshesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceRefreshesResponseBody() = default ;
    DescribeInstanceRefreshesResponseBody& operator=(const DescribeInstanceRefreshesResponseBody &) = default ;
    DescribeInstanceRefreshesResponseBody& operator=(DescribeInstanceRefreshesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceRefreshTasks_ != nullptr
        && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // instanceRefreshTasks Field Functions 
    bool hasInstanceRefreshTasks() const { return this->instanceRefreshTasks_ != nullptr;};
    void deleteInstanceRefreshTasks() { this->instanceRefreshTasks_ = nullptr;};
    inline const vector<DescribeInstanceRefreshesResponseBodyInstanceRefreshTasks> & instanceRefreshTasks() const { DARABONBA_PTR_GET_CONST(instanceRefreshTasks_, vector<DescribeInstanceRefreshesResponseBodyInstanceRefreshTasks>) };
    inline vector<DescribeInstanceRefreshesResponseBodyInstanceRefreshTasks> instanceRefreshTasks() { DARABONBA_PTR_GET(instanceRefreshTasks_, vector<DescribeInstanceRefreshesResponseBodyInstanceRefreshTasks>) };
    inline DescribeInstanceRefreshesResponseBody& setInstanceRefreshTasks(const vector<DescribeInstanceRefreshesResponseBodyInstanceRefreshTasks> & instanceRefreshTasks) { DARABONBA_PTR_SET_VALUE(instanceRefreshTasks_, instanceRefreshTasks) };
    inline DescribeInstanceRefreshesResponseBody& setInstanceRefreshTasks(vector<DescribeInstanceRefreshesResponseBodyInstanceRefreshTasks> && instanceRefreshTasks) { DARABONBA_PTR_SET_RVALUE(instanceRefreshTasks_, instanceRefreshTasks) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeInstanceRefreshesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeInstanceRefreshesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceRefreshesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeInstanceRefreshesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The instance refresh tasks.
    std::shared_ptr<vector<DescribeInstanceRefreshesResponseBodyInstanceRefreshTasks>> instanceRefreshTasks_ = nullptr;
    // The maximum number of entries per page.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // A pagination token. It can be used in the next request to retrieve a new page of results. If NextToken is empty, no next page exists.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of instance refresh tasks.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
