// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCESSCONTROLLISTATTRIBUTERESPONSEBODYRELATEDLISTENERSRELATEDLISTENER_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCESSCONTROLLISTATTRIBUTERESPONSEBODYRELATEDLISTENERSRELATEDLISTENER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeAccessControlListAttributeResponseBodyRelatedListenersRelatedListener : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccessControlListAttributeResponseBodyRelatedListenersRelatedListener& obj) { 
      DARABONBA_PTR_TO_JSON(AclType, aclType_);
      DARABONBA_PTR_TO_JSON(ListenerPort, listenerPort_);
      DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccessControlListAttributeResponseBodyRelatedListenersRelatedListener& obj) { 
      DARABONBA_PTR_FROM_JSON(AclType, aclType_);
      DARABONBA_PTR_FROM_JSON(ListenerPort, listenerPort_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
    };
    DescribeAccessControlListAttributeResponseBodyRelatedListenersRelatedListener() = default ;
    DescribeAccessControlListAttributeResponseBodyRelatedListenersRelatedListener(const DescribeAccessControlListAttributeResponseBodyRelatedListenersRelatedListener &) = default ;
    DescribeAccessControlListAttributeResponseBodyRelatedListenersRelatedListener(DescribeAccessControlListAttributeResponseBodyRelatedListenersRelatedListener &&) = default ;
    DescribeAccessControlListAttributeResponseBodyRelatedListenersRelatedListener(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccessControlListAttributeResponseBodyRelatedListenersRelatedListener() = default ;
    DescribeAccessControlListAttributeResponseBodyRelatedListenersRelatedListener& operator=(const DescribeAccessControlListAttributeResponseBodyRelatedListenersRelatedListener &) = default ;
    DescribeAccessControlListAttributeResponseBodyRelatedListenersRelatedListener& operator=(DescribeAccessControlListAttributeResponseBodyRelatedListenersRelatedListener &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclType_ == nullptr
        && return this->listenerPort_ == nullptr && return this->loadBalancerId_ == nullptr && return this->protocol_ == nullptr; };
    // aclType Field Functions 
    bool hasAclType() const { return this->aclType_ != nullptr;};
    void deleteAclType() { this->aclType_ = nullptr;};
    inline string aclType() const { DARABONBA_PTR_GET_DEFAULT(aclType_, "") };
    inline DescribeAccessControlListAttributeResponseBodyRelatedListenersRelatedListener& setAclType(string aclType) { DARABONBA_PTR_SET_VALUE(aclType_, aclType) };


    // listenerPort Field Functions 
    bool hasListenerPort() const { return this->listenerPort_ != nullptr;};
    void deleteListenerPort() { this->listenerPort_ = nullptr;};
    inline int32_t listenerPort() const { DARABONBA_PTR_GET_DEFAULT(listenerPort_, 0) };
    inline DescribeAccessControlListAttributeResponseBodyRelatedListenersRelatedListener& setListenerPort(int32_t listenerPort) { DARABONBA_PTR_SET_VALUE(listenerPort_, listenerPort) };


    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string loadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline DescribeAccessControlListAttributeResponseBodyRelatedListenersRelatedListener& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline DescribeAccessControlListAttributeResponseBodyRelatedListenersRelatedListener& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


  protected:
    // The type of ACL. Valid values:
    // 
    // *   **black**
    // *   **white**
    std::shared_ptr<string> aclType_ = nullptr;
    // The frontend port of the listener with which the ACL is associated.
    std::shared_ptr<int32_t> listenerPort_ = nullptr;
    // The CLB instance ID.
    std::shared_ptr<string> loadBalancerId_ = nullptr;
    // The type of protocol that the associated listener uses.
    std::shared_ptr<string> protocol_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
