// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIFECYCLEACTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIFECYCLEACTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLifecycleActionsResponseBodyLifecycleActions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeLifecycleActionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLifecycleActionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LifecycleActions, lifecycleActions_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLifecycleActionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LifecycleActions, lifecycleActions_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeLifecycleActionsResponseBody() = default ;
    DescribeLifecycleActionsResponseBody(const DescribeLifecycleActionsResponseBody &) = default ;
    DescribeLifecycleActionsResponseBody(DescribeLifecycleActionsResponseBody &&) = default ;
    DescribeLifecycleActionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLifecycleActionsResponseBody() = default ;
    DescribeLifecycleActionsResponseBody& operator=(const DescribeLifecycleActionsResponseBody &) = default ;
    DescribeLifecycleActionsResponseBody& operator=(DescribeLifecycleActionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->lifecycleActions_ != nullptr
        && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // lifecycleActions Field Functions 
    bool hasLifecycleActions() const { return this->lifecycleActions_ != nullptr;};
    void deleteLifecycleActions() { this->lifecycleActions_ = nullptr;};
    inline const vector<DescribeLifecycleActionsResponseBodyLifecycleActions> & lifecycleActions() const { DARABONBA_PTR_GET_CONST(lifecycleActions_, vector<DescribeLifecycleActionsResponseBodyLifecycleActions>) };
    inline vector<DescribeLifecycleActionsResponseBodyLifecycleActions> lifecycleActions() { DARABONBA_PTR_GET(lifecycleActions_, vector<DescribeLifecycleActionsResponseBodyLifecycleActions>) };
    inline DescribeLifecycleActionsResponseBody& setLifecycleActions(const vector<DescribeLifecycleActionsResponseBodyLifecycleActions> & lifecycleActions) { DARABONBA_PTR_SET_VALUE(lifecycleActions_, lifecycleActions) };
    inline DescribeLifecycleActionsResponseBody& setLifecycleActions(vector<DescribeLifecycleActionsResponseBodyLifecycleActions> && lifecycleActions) { DARABONBA_PTR_SET_RVALUE(lifecycleActions_, lifecycleActions) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeLifecycleActionsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeLifecycleActionsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLifecycleActionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeLifecycleActionsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The actions of the lifecycle hook.
    std::shared_ptr<vector<DescribeLifecycleActionsResponseBodyLifecycleActions>> lifecycleActions_ = nullptr;
    // The maximum number of entries returned per page.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The query token returned in this call.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of the queried lifecycle actions.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
