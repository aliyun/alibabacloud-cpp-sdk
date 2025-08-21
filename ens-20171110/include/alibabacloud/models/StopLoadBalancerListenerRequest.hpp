// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STOPLOADBALANCERLISTENERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STOPLOADBALANCERLISTENERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class StopLoadBalancerListenerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StopLoadBalancerListenerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ListenerPort, listenerPort_);
      DARABONBA_PTR_TO_JSON(ListenerProtocol, listenerProtocol_);
      DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
    };
    friend void from_json(const Darabonba::Json& j, StopLoadBalancerListenerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ListenerPort, listenerPort_);
      DARABONBA_PTR_FROM_JSON(ListenerProtocol, listenerProtocol_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
    };
    StopLoadBalancerListenerRequest() = default ;
    StopLoadBalancerListenerRequest(const StopLoadBalancerListenerRequest &) = default ;
    StopLoadBalancerListenerRequest(StopLoadBalancerListenerRequest &&) = default ;
    StopLoadBalancerListenerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StopLoadBalancerListenerRequest() = default ;
    StopLoadBalancerListenerRequest& operator=(const StopLoadBalancerListenerRequest &) = default ;
    StopLoadBalancerListenerRequest& operator=(StopLoadBalancerListenerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->listenerPort_ != nullptr
        && this->listenerProtocol_ != nullptr && this->loadBalancerId_ != nullptr; };
    // listenerPort Field Functions 
    bool hasListenerPort() const { return this->listenerPort_ != nullptr;};
    void deleteListenerPort() { this->listenerPort_ = nullptr;};
    inline int32_t listenerPort() const { DARABONBA_PTR_GET_DEFAULT(listenerPort_, 0) };
    inline StopLoadBalancerListenerRequest& setListenerPort(int32_t listenerPort) { DARABONBA_PTR_SET_VALUE(listenerPort_, listenerPort) };


    // listenerProtocol Field Functions 
    bool hasListenerProtocol() const { return this->listenerProtocol_ != nullptr;};
    void deleteListenerProtocol() { this->listenerProtocol_ = nullptr;};
    inline string listenerProtocol() const { DARABONBA_PTR_GET_DEFAULT(listenerProtocol_, "") };
    inline StopLoadBalancerListenerRequest& setListenerProtocol(string listenerProtocol) { DARABONBA_PTR_SET_VALUE(listenerProtocol_, listenerProtocol) };


    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string loadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline StopLoadBalancerListenerRequest& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


  protected:
    // The listener port that you want to disable. Valid values: **1** to **65535**.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> listenerPort_ = nullptr;
    // The frontend protocol that is used by the ELB instance.
    // 
    // >  This parameter is required if the same port is used by listeners that use different protocols.
    std::shared_ptr<string> listenerProtocol_ = nullptr;
    // The ID of the ELB instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> loadBalancerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
