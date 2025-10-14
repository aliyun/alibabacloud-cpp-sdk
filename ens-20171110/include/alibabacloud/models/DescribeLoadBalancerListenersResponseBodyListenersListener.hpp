// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERLISTENERSRESPONSEBODYLISTENERSLISTENER_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERLISTENERSRESPONSEBODYLISTENERSLISTENER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeLoadBalancerListenersResponseBodyListenersListener : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLoadBalancerListenersResponseBodyListenersListener& obj) { 
      DARABONBA_PTR_TO_JSON(BackendServerPort, backendServerPort_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ForwardPort, forwardPort_);
      DARABONBA_PTR_TO_JSON(ListenerForward, listenerForward_);
      DARABONBA_PTR_TO_JSON(ListenerPort, listenerPort_);
      DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLoadBalancerListenersResponseBodyListenersListener& obj) { 
      DARABONBA_PTR_FROM_JSON(BackendServerPort, backendServerPort_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ForwardPort, forwardPort_);
      DARABONBA_PTR_FROM_JSON(ListenerForward, listenerForward_);
      DARABONBA_PTR_FROM_JSON(ListenerPort, listenerPort_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeLoadBalancerListenersResponseBodyListenersListener() = default ;
    DescribeLoadBalancerListenersResponseBodyListenersListener(const DescribeLoadBalancerListenersResponseBodyListenersListener &) = default ;
    DescribeLoadBalancerListenersResponseBodyListenersListener(DescribeLoadBalancerListenersResponseBodyListenersListener &&) = default ;
    DescribeLoadBalancerListenersResponseBodyListenersListener(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLoadBalancerListenersResponseBodyListenersListener() = default ;
    DescribeLoadBalancerListenersResponseBodyListenersListener& operator=(const DescribeLoadBalancerListenersResponseBodyListenersListener &) = default ;
    DescribeLoadBalancerListenersResponseBodyListenersListener& operator=(DescribeLoadBalancerListenersResponseBodyListenersListener &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backendServerPort_ == nullptr
        && return this->createTime_ == nullptr && return this->description_ == nullptr && return this->forwardPort_ == nullptr && return this->listenerForward_ == nullptr && return this->listenerPort_ == nullptr
        && return this->loadBalancerId_ == nullptr && return this->protocol_ == nullptr && return this->status_ == nullptr; };
    // backendServerPort Field Functions 
    bool hasBackendServerPort() const { return this->backendServerPort_ != nullptr;};
    void deleteBackendServerPort() { this->backendServerPort_ = nullptr;};
    inline int32_t backendServerPort() const { DARABONBA_PTR_GET_DEFAULT(backendServerPort_, 0) };
    inline DescribeLoadBalancerListenersResponseBodyListenersListener& setBackendServerPort(int32_t backendServerPort) { DARABONBA_PTR_SET_VALUE(backendServerPort_, backendServerPort) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeLoadBalancerListenersResponseBodyListenersListener& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeLoadBalancerListenersResponseBodyListenersListener& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // forwardPort Field Functions 
    bool hasForwardPort() const { return this->forwardPort_ != nullptr;};
    void deleteForwardPort() { this->forwardPort_ = nullptr;};
    inline string forwardPort() const { DARABONBA_PTR_GET_DEFAULT(forwardPort_, "") };
    inline DescribeLoadBalancerListenersResponseBodyListenersListener& setForwardPort(string forwardPort) { DARABONBA_PTR_SET_VALUE(forwardPort_, forwardPort) };


    // listenerForward Field Functions 
    bool hasListenerForward() const { return this->listenerForward_ != nullptr;};
    void deleteListenerForward() { this->listenerForward_ = nullptr;};
    inline string listenerForward() const { DARABONBA_PTR_GET_DEFAULT(listenerForward_, "") };
    inline DescribeLoadBalancerListenersResponseBodyListenersListener& setListenerForward(string listenerForward) { DARABONBA_PTR_SET_VALUE(listenerForward_, listenerForward) };


    // listenerPort Field Functions 
    bool hasListenerPort() const { return this->listenerPort_ != nullptr;};
    void deleteListenerPort() { this->listenerPort_ = nullptr;};
    inline string listenerPort() const { DARABONBA_PTR_GET_DEFAULT(listenerPort_, "") };
    inline DescribeLoadBalancerListenersResponseBodyListenersListener& setListenerPort(string listenerPort) { DARABONBA_PTR_SET_VALUE(listenerPort_, listenerPort) };


    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string loadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline DescribeLoadBalancerListenersResponseBodyListenersListener& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline DescribeLoadBalancerListenersResponseBodyListenersListener& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeLoadBalancerListenersResponseBodyListenersListener& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The backend port that is used by the ELB instance. Valid values: **1** to **65535**.
    std::shared_ptr<int32_t> backendServerPort_ = nullptr;
    // The timestamp when the listener was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The description of the listener.
    std::shared_ptr<string> description_ = nullptr;
    // The listener port that is used for HTTP-to-HTTPS redirection.
    std::shared_ptr<string> forwardPort_ = nullptr;
    // Indicates whether HTTP-to-HTTPS redirection is enabled for the listener. Valid values:
    // 
    // *   **on**
    // *   **off**
    std::shared_ptr<string> listenerForward_ = nullptr;
    // The listening port.
    std::shared_ptr<string> listenerPort_ = nullptr;
    // The ID of the ELB instance.
    std::shared_ptr<string> loadBalancerId_ = nullptr;
    // The network transmission protocol that is used by the listener.
    // 
    // *   **tcp**
    // *   **udp**
    // *   **http**
    // *   **https**
    std::shared_ptr<string> protocol_ = nullptr;
    // The status of the listener. Valid values:
    // 
    // *   **running**
    // *   **stopped**
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
