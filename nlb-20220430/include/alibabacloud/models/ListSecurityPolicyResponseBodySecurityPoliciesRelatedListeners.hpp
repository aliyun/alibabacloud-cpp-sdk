// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSECURITYPOLICYRESPONSEBODYSECURITYPOLICIESRELATEDLISTENERS_HPP_
#define ALIBABACLOUD_MODELS_LISTSECURITYPOLICYRESPONSEBODYSECURITYPOLICIESRELATEDLISTENERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nlb20220430
{
namespace Models
{
  class ListSecurityPolicyResponseBodySecurityPoliciesRelatedListeners : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSecurityPolicyResponseBodySecurityPoliciesRelatedListeners& obj) { 
      DARABONBA_PTR_TO_JSON(ListenerId, listenerId_);
      DARABONBA_PTR_TO_JSON(ListenerPort, listenerPort_);
      DARABONBA_PTR_TO_JSON(ListenerProtocol, listenerProtocol_);
      DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSecurityPolicyResponseBodySecurityPoliciesRelatedListeners& obj) { 
      DARABONBA_PTR_FROM_JSON(ListenerId, listenerId_);
      DARABONBA_PTR_FROM_JSON(ListenerPort, listenerPort_);
      DARABONBA_PTR_FROM_JSON(ListenerProtocol, listenerProtocol_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
    };
    ListSecurityPolicyResponseBodySecurityPoliciesRelatedListeners() = default ;
    ListSecurityPolicyResponseBodySecurityPoliciesRelatedListeners(const ListSecurityPolicyResponseBodySecurityPoliciesRelatedListeners &) = default ;
    ListSecurityPolicyResponseBodySecurityPoliciesRelatedListeners(ListSecurityPolicyResponseBodySecurityPoliciesRelatedListeners &&) = default ;
    ListSecurityPolicyResponseBodySecurityPoliciesRelatedListeners(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSecurityPolicyResponseBodySecurityPoliciesRelatedListeners() = default ;
    ListSecurityPolicyResponseBodySecurityPoliciesRelatedListeners& operator=(const ListSecurityPolicyResponseBodySecurityPoliciesRelatedListeners &) = default ;
    ListSecurityPolicyResponseBodySecurityPoliciesRelatedListeners& operator=(ListSecurityPolicyResponseBodySecurityPoliciesRelatedListeners &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->listenerId_ != nullptr
        && this->listenerPort_ != nullptr && this->listenerProtocol_ != nullptr && this->loadBalancerId_ != nullptr; };
    // listenerId Field Functions 
    bool hasListenerId() const { return this->listenerId_ != nullptr;};
    void deleteListenerId() { this->listenerId_ = nullptr;};
    inline string listenerId() const { DARABONBA_PTR_GET_DEFAULT(listenerId_, "") };
    inline ListSecurityPolicyResponseBodySecurityPoliciesRelatedListeners& setListenerId(string listenerId) { DARABONBA_PTR_SET_VALUE(listenerId_, listenerId) };


    // listenerPort Field Functions 
    bool hasListenerPort() const { return this->listenerPort_ != nullptr;};
    void deleteListenerPort() { this->listenerPort_ = nullptr;};
    inline int64_t listenerPort() const { DARABONBA_PTR_GET_DEFAULT(listenerPort_, 0L) };
    inline ListSecurityPolicyResponseBodySecurityPoliciesRelatedListeners& setListenerPort(int64_t listenerPort) { DARABONBA_PTR_SET_VALUE(listenerPort_, listenerPort) };


    // listenerProtocol Field Functions 
    bool hasListenerProtocol() const { return this->listenerProtocol_ != nullptr;};
    void deleteListenerProtocol() { this->listenerProtocol_ = nullptr;};
    inline string listenerProtocol() const { DARABONBA_PTR_GET_DEFAULT(listenerProtocol_, "") };
    inline ListSecurityPolicyResponseBodySecurityPoliciesRelatedListeners& setListenerProtocol(string listenerProtocol) { DARABONBA_PTR_SET_VALUE(listenerProtocol_, listenerProtocol) };


    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string loadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline ListSecurityPolicyResponseBodySecurityPoliciesRelatedListeners& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


  protected:
    // The listener ID.
    std::shared_ptr<string> listenerId_ = nullptr;
    // The listener port.
    std::shared_ptr<int64_t> listenerPort_ = nullptr;
    // The listener protocol. Valid value: **TCPSSL**.
    std::shared_ptr<string> listenerProtocol_ = nullptr;
    // The NLB instance ID.
    std::shared_ptr<string> loadBalancerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nlb20220430
#endif
