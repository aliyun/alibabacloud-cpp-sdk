// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETLOADBALANCERLISTENERSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETLOADBALANCERLISTENERSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20130221
{
namespace Models
{
  class SetLoadBalancerListenerStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetLoadBalancerListenerStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HostId, hostId_);
      DARABONBA_PTR_TO_JSON(ListenerPort, listenerPort_);
      DARABONBA_PTR_TO_JSON(ListenerStatus, listenerStatus_);
      DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
    };
    friend void from_json(const Darabonba::Json& j, SetLoadBalancerListenerStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HostId, hostId_);
      DARABONBA_PTR_FROM_JSON(ListenerPort, listenerPort_);
      DARABONBA_PTR_FROM_JSON(ListenerStatus, listenerStatus_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
    };
    SetLoadBalancerListenerStatusRequest() = default ;
    SetLoadBalancerListenerStatusRequest(const SetLoadBalancerListenerStatusRequest &) = default ;
    SetLoadBalancerListenerStatusRequest(SetLoadBalancerListenerStatusRequest &&) = default ;
    SetLoadBalancerListenerStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetLoadBalancerListenerStatusRequest() = default ;
    SetLoadBalancerListenerStatusRequest& operator=(const SetLoadBalancerListenerStatusRequest &) = default ;
    SetLoadBalancerListenerStatusRequest& operator=(SetLoadBalancerListenerStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hostId_ == nullptr
        && this->listenerPort_ == nullptr && this->listenerStatus_ == nullptr && this->loadBalancerId_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr; };
    // hostId Field Functions 
    bool hasHostId() const { return this->hostId_ != nullptr;};
    void deleteHostId() { this->hostId_ = nullptr;};
    inline string getHostId() const { DARABONBA_PTR_GET_DEFAULT(hostId_, "") };
    inline SetLoadBalancerListenerStatusRequest& setHostId(string hostId) { DARABONBA_PTR_SET_VALUE(hostId_, hostId) };


    // listenerPort Field Functions 
    bool hasListenerPort() const { return this->listenerPort_ != nullptr;};
    void deleteListenerPort() { this->listenerPort_ = nullptr;};
    inline int32_t getListenerPort() const { DARABONBA_PTR_GET_DEFAULT(listenerPort_, 0) };
    inline SetLoadBalancerListenerStatusRequest& setListenerPort(int32_t listenerPort) { DARABONBA_PTR_SET_VALUE(listenerPort_, listenerPort) };


    // listenerStatus Field Functions 
    bool hasListenerStatus() const { return this->listenerStatus_ != nullptr;};
    void deleteListenerStatus() { this->listenerStatus_ = nullptr;};
    inline string getListenerStatus() const { DARABONBA_PTR_GET_DEFAULT(listenerStatus_, "") };
    inline SetLoadBalancerListenerStatusRequest& setListenerStatus(string listenerStatus) { DARABONBA_PTR_SET_VALUE(listenerStatus_, listenerStatus) };


    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string getLoadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline SetLoadBalancerListenerStatusRequest& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline SetLoadBalancerListenerStatusRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline SetLoadBalancerListenerStatusRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


  protected:
    shared_ptr<string> hostId_ {};
    shared_ptr<int32_t> listenerPort_ {};
    shared_ptr<string> listenerStatus_ {};
    shared_ptr<string> loadBalancerId_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<string> ownerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20130221
#endif
