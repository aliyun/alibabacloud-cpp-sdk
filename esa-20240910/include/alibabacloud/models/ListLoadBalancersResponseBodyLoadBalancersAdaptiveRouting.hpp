// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLOADBALANCERSRESPONSEBODYLOADBALANCERSADAPTIVEROUTING_HPP_
#define ALIBABACLOUD_MODELS_LISTLOADBALANCERSRESPONSEBODYLOADBALANCERSADAPTIVEROUTING_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListLoadBalancersResponseBodyLoadBalancersAdaptiveRouting : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLoadBalancersResponseBodyLoadBalancersAdaptiveRouting& obj) { 
      DARABONBA_PTR_TO_JSON(FailoverAcrossPools, failoverAcrossPools_);
    };
    friend void from_json(const Darabonba::Json& j, ListLoadBalancersResponseBodyLoadBalancersAdaptiveRouting& obj) { 
      DARABONBA_PTR_FROM_JSON(FailoverAcrossPools, failoverAcrossPools_);
    };
    ListLoadBalancersResponseBodyLoadBalancersAdaptiveRouting() = default ;
    ListLoadBalancersResponseBodyLoadBalancersAdaptiveRouting(const ListLoadBalancersResponseBodyLoadBalancersAdaptiveRouting &) = default ;
    ListLoadBalancersResponseBodyLoadBalancersAdaptiveRouting(ListLoadBalancersResponseBodyLoadBalancersAdaptiveRouting &&) = default ;
    ListLoadBalancersResponseBodyLoadBalancersAdaptiveRouting(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLoadBalancersResponseBodyLoadBalancersAdaptiveRouting() = default ;
    ListLoadBalancersResponseBodyLoadBalancersAdaptiveRouting& operator=(const ListLoadBalancersResponseBodyLoadBalancersAdaptiveRouting &) = default ;
    ListLoadBalancersResponseBodyLoadBalancersAdaptiveRouting& operator=(ListLoadBalancersResponseBodyLoadBalancersAdaptiveRouting &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->failoverAcrossPools_ == nullptr; };
    // failoverAcrossPools Field Functions 
    bool hasFailoverAcrossPools() const { return this->failoverAcrossPools_ != nullptr;};
    void deleteFailoverAcrossPools() { this->failoverAcrossPools_ = nullptr;};
    inline bool failoverAcrossPools() const { DARABONBA_PTR_GET_DEFAULT(failoverAcrossPools_, false) };
    inline ListLoadBalancersResponseBodyLoadBalancersAdaptiveRouting& setFailoverAcrossPools(bool failoverAcrossPools) { DARABONBA_PTR_SET_VALUE(failoverAcrossPools_, failoverAcrossPools) };


  protected:
    // Whether to fail over across pools.
    // 
    // - true: Yes.
    // - false: No.
    std::shared_ptr<bool> failoverAcrossPools_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
