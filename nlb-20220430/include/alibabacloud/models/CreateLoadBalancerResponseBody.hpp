// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELOADBALANCERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATELOADBALANCERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nlb20220430
{
namespace Models
{
  class CreateLoadBalancerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLoadBalancerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LoadbalancerId, loadbalancerId_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLoadBalancerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LoadbalancerId, loadbalancerId_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateLoadBalancerResponseBody() = default ;
    CreateLoadBalancerResponseBody(const CreateLoadBalancerResponseBody &) = default ;
    CreateLoadBalancerResponseBody(CreateLoadBalancerResponseBody &&) = default ;
    CreateLoadBalancerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLoadBalancerResponseBody() = default ;
    CreateLoadBalancerResponseBody& operator=(const CreateLoadBalancerResponseBody &) = default ;
    CreateLoadBalancerResponseBody& operator=(CreateLoadBalancerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->loadbalancerId_ != nullptr
        && this->orderId_ != nullptr && this->requestId_ != nullptr; };
    // loadbalancerId Field Functions 
    bool hasLoadbalancerId() const { return this->loadbalancerId_ != nullptr;};
    void deleteLoadbalancerId() { this->loadbalancerId_ = nullptr;};
    inline string loadbalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadbalancerId_, "") };
    inline CreateLoadBalancerResponseBody& setLoadbalancerId(string loadbalancerId) { DARABONBA_PTR_SET_VALUE(loadbalancerId_, loadbalancerId) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline CreateLoadBalancerResponseBody& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateLoadBalancerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the NLB instance.
    std::shared_ptr<string> loadbalancerId_ = nullptr;
    // The ID of the order for the NLB instance.
    std::shared_ptr<int64_t> orderId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nlb20220430
#endif
