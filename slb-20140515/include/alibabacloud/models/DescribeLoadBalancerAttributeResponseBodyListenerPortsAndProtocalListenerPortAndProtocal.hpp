// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERATTRIBUTERESPONSEBODYLISTENERPORTSANDPROTOCALLISTENERPORTANDPROTOCAL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERATTRIBUTERESPONSEBODYLISTENERPORTSANDPROTOCALLISTENERPORTANDPROTOCAL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocalListenerPortAndProtocal : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocalListenerPortAndProtocal& obj) { 
      DARABONBA_PTR_TO_JSON(ListenerPort, listenerPort_);
      DARABONBA_PTR_TO_JSON(ListenerProtocal, listenerProtocal_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocalListenerPortAndProtocal& obj) { 
      DARABONBA_PTR_FROM_JSON(ListenerPort, listenerPort_);
      DARABONBA_PTR_FROM_JSON(ListenerProtocal, listenerProtocal_);
    };
    DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocalListenerPortAndProtocal() = default ;
    DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocalListenerPortAndProtocal(const DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocalListenerPortAndProtocal &) = default ;
    DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocalListenerPortAndProtocal(DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocalListenerPortAndProtocal &&) = default ;
    DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocalListenerPortAndProtocal(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocalListenerPortAndProtocal() = default ;
    DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocalListenerPortAndProtocal& operator=(const DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocalListenerPortAndProtocal &) = default ;
    DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocalListenerPortAndProtocal& operator=(DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocalListenerPortAndProtocal &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->listenerPort_ == nullptr
        && return this->listenerProtocal_ == nullptr; };
    // listenerPort Field Functions 
    bool hasListenerPort() const { return this->listenerPort_ != nullptr;};
    void deleteListenerPort() { this->listenerPort_ = nullptr;};
    inline int32_t listenerPort() const { DARABONBA_PTR_GET_DEFAULT(listenerPort_, 0) };
    inline DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocalListenerPortAndProtocal& setListenerPort(int32_t listenerPort) { DARABONBA_PTR_SET_VALUE(listenerPort_, listenerPort) };


    // listenerProtocal Field Functions 
    bool hasListenerProtocal() const { return this->listenerProtocal_ != nullptr;};
    void deleteListenerProtocal() { this->listenerProtocal_ = nullptr;};
    inline string listenerProtocal() const { DARABONBA_PTR_GET_DEFAULT(listenerProtocal_, "") };
    inline DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocalListenerPortAndProtocal& setListenerProtocal(string listenerProtocal) { DARABONBA_PTR_SET_VALUE(listenerProtocal_, listenerProtocal) };


  protected:
    // The frontend port that is used by the CLB instance.
    std::shared_ptr<int32_t> listenerPort_ = nullptr;
    // The frontend protocol that is used by the CLB instance.
    std::shared_ptr<string> listenerProtocal_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
