// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYLOADBALANCERINTERNETSPECRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYLOADBALANCERINTERNETSPECRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class ModifyLoadBalancerInternetSpecResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyLoadBalancerInternetSpecResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyLoadBalancerInternetSpecResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyLoadBalancerInternetSpecResponseBody() = default ;
    ModifyLoadBalancerInternetSpecResponseBody(const ModifyLoadBalancerInternetSpecResponseBody &) = default ;
    ModifyLoadBalancerInternetSpecResponseBody(ModifyLoadBalancerInternetSpecResponseBody &&) = default ;
    ModifyLoadBalancerInternetSpecResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyLoadBalancerInternetSpecResponseBody() = default ;
    ModifyLoadBalancerInternetSpecResponseBody& operator=(const ModifyLoadBalancerInternetSpecResponseBody &) = default ;
    ModifyLoadBalancerInternetSpecResponseBody& operator=(ModifyLoadBalancerInternetSpecResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->orderId_ == nullptr
        && return this->requestId_ == nullptr; };
    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline ModifyLoadBalancerInternetSpecResponseBody& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyLoadBalancerInternetSpecResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The order ID of the subscription CLB instance.
    std::shared_ptr<int64_t> orderId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
