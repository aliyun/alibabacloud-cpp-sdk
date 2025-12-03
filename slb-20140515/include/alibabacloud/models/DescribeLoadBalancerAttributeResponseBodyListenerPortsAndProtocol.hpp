// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERATTRIBUTERESPONSEBODYLISTENERPORTSANDPROTOCOL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERATTRIBUTERESPONSEBODYLISTENERPORTSANDPROTOCOL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocolListenerPortAndProtocol.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocol : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocol& obj) { 
      DARABONBA_PTR_TO_JSON(ListenerPortAndProtocol, listenerPortAndProtocol_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocol& obj) { 
      DARABONBA_PTR_FROM_JSON(ListenerPortAndProtocol, listenerPortAndProtocol_);
    };
    DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocol() = default ;
    DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocol(const DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocol &) = default ;
    DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocol(DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocol &&) = default ;
    DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocol(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocol() = default ;
    DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocol& operator=(const DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocol &) = default ;
    DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocol& operator=(DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocol &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->listenerPortAndProtocol_ == nullptr; };
    // listenerPortAndProtocol Field Functions 
    bool hasListenerPortAndProtocol() const { return this->listenerPortAndProtocol_ != nullptr;};
    void deleteListenerPortAndProtocol() { this->listenerPortAndProtocol_ = nullptr;};
    inline const vector<Models::DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocolListenerPortAndProtocol> & listenerPortAndProtocol() const { DARABONBA_PTR_GET_CONST(listenerPortAndProtocol_, vector<Models::DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocolListenerPortAndProtocol>) };
    inline vector<Models::DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocolListenerPortAndProtocol> listenerPortAndProtocol() { DARABONBA_PTR_GET(listenerPortAndProtocol_, vector<Models::DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocolListenerPortAndProtocol>) };
    inline DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocol& setListenerPortAndProtocol(const vector<Models::DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocolListenerPortAndProtocol> & listenerPortAndProtocol) { DARABONBA_PTR_SET_VALUE(listenerPortAndProtocol_, listenerPortAndProtocol) };
    inline DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocol& setListenerPortAndProtocol(vector<Models::DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocolListenerPortAndProtocol> && listenerPortAndProtocol) { DARABONBA_PTR_SET_RVALUE(listenerPortAndProtocol_, listenerPortAndProtocol) };


  protected:
    std::shared_ptr<vector<Models::DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocolListenerPortAndProtocol>> listenerPortAndProtocol_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
