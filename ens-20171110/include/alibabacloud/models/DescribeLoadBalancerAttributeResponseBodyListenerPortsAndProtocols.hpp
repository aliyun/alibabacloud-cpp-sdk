// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERATTRIBUTERESPONSEBODYLISTENERPORTSANDPROTOCOLS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERATTRIBUTERESPONSEBODYLISTENERPORTSANDPROTOCOLS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocols : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocols& obj) { 
      DARABONBA_PTR_TO_JSON(BackendServerPort, backendServerPort_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ForwardPort, forwardPort_);
      DARABONBA_PTR_TO_JSON(ListenerForward, listenerForward_);
      DARABONBA_PTR_TO_JSON(ListenerPort, listenerPort_);
      DARABONBA_PTR_TO_JSON(ListenerProtocol, listenerProtocol_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocols& obj) { 
      DARABONBA_PTR_FROM_JSON(BackendServerPort, backendServerPort_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ForwardPort, forwardPort_);
      DARABONBA_PTR_FROM_JSON(ListenerForward, listenerForward_);
      DARABONBA_PTR_FROM_JSON(ListenerPort, listenerPort_);
      DARABONBA_PTR_FROM_JSON(ListenerProtocol, listenerProtocol_);
    };
    DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocols() = default ;
    DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocols(const DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocols &) = default ;
    DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocols(DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocols &&) = default ;
    DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocols(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocols() = default ;
    DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocols& operator=(const DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocols &) = default ;
    DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocols& operator=(DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocols &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->backendServerPort_ != nullptr
        && this->description_ != nullptr && this->forwardPort_ != nullptr && this->listenerForward_ != nullptr && this->listenerPort_ != nullptr && this->listenerProtocol_ != nullptr; };
    // backendServerPort Field Functions 
    bool hasBackendServerPort() const { return this->backendServerPort_ != nullptr;};
    void deleteBackendServerPort() { this->backendServerPort_ = nullptr;};
    inline int32_t backendServerPort() const { DARABONBA_PTR_GET_DEFAULT(backendServerPort_, 0) };
    inline DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocols& setBackendServerPort(int32_t backendServerPort) { DARABONBA_PTR_SET_VALUE(backendServerPort_, backendServerPort) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocols& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // forwardPort Field Functions 
    bool hasForwardPort() const { return this->forwardPort_ != nullptr;};
    void deleteForwardPort() { this->forwardPort_ = nullptr;};
    inline int32_t forwardPort() const { DARABONBA_PTR_GET_DEFAULT(forwardPort_, 0) };
    inline DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocols& setForwardPort(int32_t forwardPort) { DARABONBA_PTR_SET_VALUE(forwardPort_, forwardPort) };


    // listenerForward Field Functions 
    bool hasListenerForward() const { return this->listenerForward_ != nullptr;};
    void deleteListenerForward() { this->listenerForward_ = nullptr;};
    inline string listenerForward() const { DARABONBA_PTR_GET_DEFAULT(listenerForward_, "") };
    inline DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocols& setListenerForward(string listenerForward) { DARABONBA_PTR_SET_VALUE(listenerForward_, listenerForward) };


    // listenerPort Field Functions 
    bool hasListenerPort() const { return this->listenerPort_ != nullptr;};
    void deleteListenerPort() { this->listenerPort_ = nullptr;};
    inline int32_t listenerPort() const { DARABONBA_PTR_GET_DEFAULT(listenerPort_, 0) };
    inline DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocols& setListenerPort(int32_t listenerPort) { DARABONBA_PTR_SET_VALUE(listenerPort_, listenerPort) };


    // listenerProtocol Field Functions 
    bool hasListenerProtocol() const { return this->listenerProtocol_ != nullptr;};
    void deleteListenerProtocol() { this->listenerProtocol_ = nullptr;};
    inline string listenerProtocol() const { DARABONBA_PTR_GET_DEFAULT(listenerProtocol_, "") };
    inline DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocols& setListenerProtocol(string listenerProtocol) { DARABONBA_PTR_SET_VALUE(listenerProtocol_, listenerProtocol) };


  protected:
    // The backend port that is used by the ELB instance. Valid values: **1** to **65535**.
    std::shared_ptr<int32_t> backendServerPort_ = nullptr;
    // The description of the listener.
    std::shared_ptr<string> description_ = nullptr;
    // The destination listening port to which requests are forwarded.
    std::shared_ptr<int32_t> forwardPort_ = nullptr;
    // Indicates whether the listener is enabled.
    std::shared_ptr<string> listenerForward_ = nullptr;
    // The listener port of the instance.
    std::shared_ptr<int32_t> listenerPort_ = nullptr;
    // The listener protocol of the instance.
    std::shared_ptr<string> listenerProtocol_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
