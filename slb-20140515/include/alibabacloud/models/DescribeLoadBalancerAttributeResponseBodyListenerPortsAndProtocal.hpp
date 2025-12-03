// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERATTRIBUTERESPONSEBODYLISTENERPORTSANDPROTOCAL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERATTRIBUTERESPONSEBODYLISTENERPORTSANDPROTOCAL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocalListenerPortAndProtocal.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocal : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocal& obj) { 
      DARABONBA_PTR_TO_JSON(ListenerPortAndProtocal, listenerPortAndProtocal_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocal& obj) { 
      DARABONBA_PTR_FROM_JSON(ListenerPortAndProtocal, listenerPortAndProtocal_);
    };
    DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocal() = default ;
    DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocal(const DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocal &) = default ;
    DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocal(DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocal &&) = default ;
    DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocal(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocal() = default ;
    DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocal& operator=(const DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocal &) = default ;
    DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocal& operator=(DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocal &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->listenerPortAndProtocal_ == nullptr; };
    // listenerPortAndProtocal Field Functions 
    bool hasListenerPortAndProtocal() const { return this->listenerPortAndProtocal_ != nullptr;};
    void deleteListenerPortAndProtocal() { this->listenerPortAndProtocal_ = nullptr;};
    inline const vector<Models::DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocalListenerPortAndProtocal> & listenerPortAndProtocal() const { DARABONBA_PTR_GET_CONST(listenerPortAndProtocal_, vector<Models::DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocalListenerPortAndProtocal>) };
    inline vector<Models::DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocalListenerPortAndProtocal> listenerPortAndProtocal() { DARABONBA_PTR_GET(listenerPortAndProtocal_, vector<Models::DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocalListenerPortAndProtocal>) };
    inline DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocal& setListenerPortAndProtocal(const vector<Models::DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocalListenerPortAndProtocal> & listenerPortAndProtocal) { DARABONBA_PTR_SET_VALUE(listenerPortAndProtocal_, listenerPortAndProtocal) };
    inline DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocal& setListenerPortAndProtocal(vector<Models::DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocalListenerPortAndProtocal> && listenerPortAndProtocal) { DARABONBA_PTR_SET_RVALUE(listenerPortAndProtocal_, listenerPortAndProtocal) };


  protected:
    std::shared_ptr<vector<Models::DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocalListenerPortAndProtocal>> listenerPortAndProtocal_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
