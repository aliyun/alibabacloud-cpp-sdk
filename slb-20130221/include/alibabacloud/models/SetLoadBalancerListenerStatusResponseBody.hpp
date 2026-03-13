// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETLOADBALANCERLISTENERSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SETLOADBALANCERLISTENERSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20130221
{
namespace Models
{
  class SetLoadBalancerListenerStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetLoadBalancerListenerStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SetLoadBalancerListenerStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SetLoadBalancerListenerStatusResponseBody() = default ;
    SetLoadBalancerListenerStatusResponseBody(const SetLoadBalancerListenerStatusResponseBody &) = default ;
    SetLoadBalancerListenerStatusResponseBody(SetLoadBalancerListenerStatusResponseBody &&) = default ;
    SetLoadBalancerListenerStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetLoadBalancerListenerStatusResponseBody() = default ;
    SetLoadBalancerListenerStatusResponseBody& operator=(const SetLoadBalancerListenerStatusResponseBody &) = default ;
    SetLoadBalancerListenerStatusResponseBody& operator=(SetLoadBalancerListenerStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SetLoadBalancerListenerStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20130221
#endif
