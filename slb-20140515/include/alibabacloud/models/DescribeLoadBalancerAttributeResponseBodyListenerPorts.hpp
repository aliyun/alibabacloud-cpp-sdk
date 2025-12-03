// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERATTRIBUTERESPONSEBODYLISTENERPORTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERATTRIBUTERESPONSEBODYLISTENERPORTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeLoadBalancerAttributeResponseBodyListenerPorts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLoadBalancerAttributeResponseBodyListenerPorts& obj) { 
      DARABONBA_PTR_TO_JSON(ListenerPort, listenerPort_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLoadBalancerAttributeResponseBodyListenerPorts& obj) { 
      DARABONBA_PTR_FROM_JSON(ListenerPort, listenerPort_);
    };
    DescribeLoadBalancerAttributeResponseBodyListenerPorts() = default ;
    DescribeLoadBalancerAttributeResponseBodyListenerPorts(const DescribeLoadBalancerAttributeResponseBodyListenerPorts &) = default ;
    DescribeLoadBalancerAttributeResponseBodyListenerPorts(DescribeLoadBalancerAttributeResponseBodyListenerPorts &&) = default ;
    DescribeLoadBalancerAttributeResponseBodyListenerPorts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLoadBalancerAttributeResponseBodyListenerPorts() = default ;
    DescribeLoadBalancerAttributeResponseBodyListenerPorts& operator=(const DescribeLoadBalancerAttributeResponseBodyListenerPorts &) = default ;
    DescribeLoadBalancerAttributeResponseBodyListenerPorts& operator=(DescribeLoadBalancerAttributeResponseBodyListenerPorts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->listenerPort_ == nullptr; };
    // listenerPort Field Functions 
    bool hasListenerPort() const { return this->listenerPort_ != nullptr;};
    void deleteListenerPort() { this->listenerPort_ = nullptr;};
    inline const vector<int32_t> & listenerPort() const { DARABONBA_PTR_GET_CONST(listenerPort_, vector<int32_t>) };
    inline vector<int32_t> listenerPort() { DARABONBA_PTR_GET(listenerPort_, vector<int32_t>) };
    inline DescribeLoadBalancerAttributeResponseBodyListenerPorts& setListenerPort(const vector<int32_t> & listenerPort) { DARABONBA_PTR_SET_VALUE(listenerPort_, listenerPort) };
    inline DescribeLoadBalancerAttributeResponseBodyListenerPorts& setListenerPort(vector<int32_t> && listenerPort) { DARABONBA_PTR_SET_RVALUE(listenerPort_, listenerPort) };


  protected:
    std::shared_ptr<vector<int32_t>> listenerPort_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
