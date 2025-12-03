// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERLISTENERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERLISTENERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLoadBalancerListenersResponseBodyListeners.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeLoadBalancerListenersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLoadBalancerListenersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Listeners, listeners_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLoadBalancerListenersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Listeners, listeners_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeLoadBalancerListenersResponseBody() = default ;
    DescribeLoadBalancerListenersResponseBody(const DescribeLoadBalancerListenersResponseBody &) = default ;
    DescribeLoadBalancerListenersResponseBody(DescribeLoadBalancerListenersResponseBody &&) = default ;
    DescribeLoadBalancerListenersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLoadBalancerListenersResponseBody() = default ;
    DescribeLoadBalancerListenersResponseBody& operator=(const DescribeLoadBalancerListenersResponseBody &) = default ;
    DescribeLoadBalancerListenersResponseBody& operator=(DescribeLoadBalancerListenersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->listeners_ == nullptr
        && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // listeners Field Functions 
    bool hasListeners() const { return this->listeners_ != nullptr;};
    void deleteListeners() { this->listeners_ = nullptr;};
    inline const vector<DescribeLoadBalancerListenersResponseBodyListeners> & listeners() const { DARABONBA_PTR_GET_CONST(listeners_, vector<DescribeLoadBalancerListenersResponseBodyListeners>) };
    inline vector<DescribeLoadBalancerListenersResponseBodyListeners> listeners() { DARABONBA_PTR_GET(listeners_, vector<DescribeLoadBalancerListenersResponseBodyListeners>) };
    inline DescribeLoadBalancerListenersResponseBody& setListeners(const vector<DescribeLoadBalancerListenersResponseBodyListeners> & listeners) { DARABONBA_PTR_SET_VALUE(listeners_, listeners) };
    inline DescribeLoadBalancerListenersResponseBody& setListeners(vector<DescribeLoadBalancerListenersResponseBodyListeners> && listeners) { DARABONBA_PTR_SET_RVALUE(listeners_, listeners) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeLoadBalancerListenersResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeLoadBalancerListenersResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLoadBalancerListenersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeLoadBalancerListenersResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // A list of listeners of the CLB instance.
    // 
    // >  This parameter is not returned if the CLB instance does not have a listener.
    std::shared_ptr<vector<DescribeLoadBalancerListenersResponseBodyListeners>> listeners_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The token that determines the start point of the query. Valid values:
    // 
    // *   If **NextToken** is empty, it indicates that no subsequent query is to be sent.
    // *   If a value is returned for **NextToken**, the value is the token that determines the start point of the next query.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
