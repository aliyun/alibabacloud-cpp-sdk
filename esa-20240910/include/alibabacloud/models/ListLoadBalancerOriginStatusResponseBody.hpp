// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLOADBALANCERORIGINSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLOADBALANCERORIGINSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListLoadBalancerOriginStatusResponseBodyOriginStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListLoadBalancerOriginStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLoadBalancerOriginStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OriginStatus, originStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListLoadBalancerOriginStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OriginStatus, originStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListLoadBalancerOriginStatusResponseBody() = default ;
    ListLoadBalancerOriginStatusResponseBody(const ListLoadBalancerOriginStatusResponseBody &) = default ;
    ListLoadBalancerOriginStatusResponseBody(ListLoadBalancerOriginStatusResponseBody &&) = default ;
    ListLoadBalancerOriginStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLoadBalancerOriginStatusResponseBody() = default ;
    ListLoadBalancerOriginStatusResponseBody& operator=(const ListLoadBalancerOriginStatusResponseBody &) = default ;
    ListLoadBalancerOriginStatusResponseBody& operator=(ListLoadBalancerOriginStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->originStatus_ == nullptr
        && return this->requestId_ == nullptr; };
    // originStatus Field Functions 
    bool hasOriginStatus() const { return this->originStatus_ != nullptr;};
    void deleteOriginStatus() { this->originStatus_ = nullptr;};
    inline const vector<ListLoadBalancerOriginStatusResponseBodyOriginStatus> & originStatus() const { DARABONBA_PTR_GET_CONST(originStatus_, vector<ListLoadBalancerOriginStatusResponseBodyOriginStatus>) };
    inline vector<ListLoadBalancerOriginStatusResponseBodyOriginStatus> originStatus() { DARABONBA_PTR_GET(originStatus_, vector<ListLoadBalancerOriginStatusResponseBodyOriginStatus>) };
    inline ListLoadBalancerOriginStatusResponseBody& setOriginStatus(const vector<ListLoadBalancerOriginStatusResponseBodyOriginStatus> & originStatus) { DARABONBA_PTR_SET_VALUE(originStatus_, originStatus) };
    inline ListLoadBalancerOriginStatusResponseBody& setOriginStatus(vector<ListLoadBalancerOriginStatusResponseBodyOriginStatus> && originStatus) { DARABONBA_PTR_SET_RVALUE(originStatus_, originStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLoadBalancerOriginStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // List of origin statuses under the load balancer.
    std::shared_ptr<vector<ListLoadBalancerOriginStatusResponseBodyOriginStatus>> originStatus_ = nullptr;
    // Request ID, used for tracking the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
