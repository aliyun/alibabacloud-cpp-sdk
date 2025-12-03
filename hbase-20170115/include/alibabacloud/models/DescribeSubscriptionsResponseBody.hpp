// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESUBSCRIPTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESUBSCRIPTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSubscriptionsResponseBodySubscriptions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20170115
{
namespace Models
{
  class DescribeSubscriptionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSubscriptionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Subscriptions, subscriptions_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSubscriptionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Subscriptions, subscriptions_);
    };
    DescribeSubscriptionsResponseBody() = default ;
    DescribeSubscriptionsResponseBody(const DescribeSubscriptionsResponseBody &) = default ;
    DescribeSubscriptionsResponseBody(DescribeSubscriptionsResponseBody &&) = default ;
    DescribeSubscriptionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSubscriptionsResponseBody() = default ;
    DescribeSubscriptionsResponseBody& operator=(const DescribeSubscriptionsResponseBody &) = default ;
    DescribeSubscriptionsResponseBody& operator=(DescribeSubscriptionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->subscriptions_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSubscriptionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // subscriptions Field Functions 
    bool hasSubscriptions() const { return this->subscriptions_ != nullptr;};
    void deleteSubscriptions() { this->subscriptions_ = nullptr;};
    inline const vector<DescribeSubscriptionsResponseBodySubscriptions> & subscriptions() const { DARABONBA_PTR_GET_CONST(subscriptions_, vector<DescribeSubscriptionsResponseBodySubscriptions>) };
    inline vector<DescribeSubscriptionsResponseBodySubscriptions> subscriptions() { DARABONBA_PTR_GET(subscriptions_, vector<DescribeSubscriptionsResponseBodySubscriptions>) };
    inline DescribeSubscriptionsResponseBody& setSubscriptions(const vector<DescribeSubscriptionsResponseBodySubscriptions> & subscriptions) { DARABONBA_PTR_SET_VALUE(subscriptions_, subscriptions) };
    inline DescribeSubscriptionsResponseBody& setSubscriptions(vector<DescribeSubscriptionsResponseBodySubscriptions> && subscriptions) { DARABONBA_PTR_SET_RVALUE(subscriptions_, subscriptions) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<DescribeSubscriptionsResponseBodySubscriptions>> subscriptions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20170115
#endif
