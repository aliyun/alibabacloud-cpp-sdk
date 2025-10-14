// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERLISTENERSRESPONSEBODYLISTENERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERLISTENERSRESPONSEBODYLISTENERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLoadBalancerListenersResponseBodyListenersListener.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeLoadBalancerListenersResponseBodyListeners : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLoadBalancerListenersResponseBodyListeners& obj) { 
      DARABONBA_PTR_TO_JSON(Listener, listener_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLoadBalancerListenersResponseBodyListeners& obj) { 
      DARABONBA_PTR_FROM_JSON(Listener, listener_);
    };
    DescribeLoadBalancerListenersResponseBodyListeners() = default ;
    DescribeLoadBalancerListenersResponseBodyListeners(const DescribeLoadBalancerListenersResponseBodyListeners &) = default ;
    DescribeLoadBalancerListenersResponseBodyListeners(DescribeLoadBalancerListenersResponseBodyListeners &&) = default ;
    DescribeLoadBalancerListenersResponseBodyListeners(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLoadBalancerListenersResponseBodyListeners() = default ;
    DescribeLoadBalancerListenersResponseBodyListeners& operator=(const DescribeLoadBalancerListenersResponseBodyListeners &) = default ;
    DescribeLoadBalancerListenersResponseBodyListeners& operator=(DescribeLoadBalancerListenersResponseBodyListeners &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->listener_ == nullptr; };
    // listener Field Functions 
    bool hasListener() const { return this->listener_ != nullptr;};
    void deleteListener() { this->listener_ = nullptr;};
    inline const vector<Models::DescribeLoadBalancerListenersResponseBodyListenersListener> & listener() const { DARABONBA_PTR_GET_CONST(listener_, vector<Models::DescribeLoadBalancerListenersResponseBodyListenersListener>) };
    inline vector<Models::DescribeLoadBalancerListenersResponseBodyListenersListener> listener() { DARABONBA_PTR_GET(listener_, vector<Models::DescribeLoadBalancerListenersResponseBodyListenersListener>) };
    inline DescribeLoadBalancerListenersResponseBodyListeners& setListener(const vector<Models::DescribeLoadBalancerListenersResponseBodyListenersListener> & listener) { DARABONBA_PTR_SET_VALUE(listener_, listener) };
    inline DescribeLoadBalancerListenersResponseBodyListeners& setListener(vector<Models::DescribeLoadBalancerListenersResponseBodyListenersListener> && listener) { DARABONBA_PTR_SET_RVALUE(listener_, listener) };


  protected:
    std::shared_ptr<vector<Models::DescribeLoadBalancerListenersResponseBodyListenersListener>> listener_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
