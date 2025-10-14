// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLOADBALANCERRESPONSEBODYADAPTIVEROUTING_HPP_
#define ALIBABACLOUD_MODELS_GETLOADBALANCERRESPONSEBODYADAPTIVEROUTING_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetLoadBalancerResponseBodyAdaptiveRouting : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLoadBalancerResponseBodyAdaptiveRouting& obj) { 
      DARABONBA_PTR_TO_JSON(FailoverAcrossPools, failoverAcrossPools_);
    };
    friend void from_json(const Darabonba::Json& j, GetLoadBalancerResponseBodyAdaptiveRouting& obj) { 
      DARABONBA_PTR_FROM_JSON(FailoverAcrossPools, failoverAcrossPools_);
    };
    GetLoadBalancerResponseBodyAdaptiveRouting() = default ;
    GetLoadBalancerResponseBodyAdaptiveRouting(const GetLoadBalancerResponseBodyAdaptiveRouting &) = default ;
    GetLoadBalancerResponseBodyAdaptiveRouting(GetLoadBalancerResponseBodyAdaptiveRouting &&) = default ;
    GetLoadBalancerResponseBodyAdaptiveRouting(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLoadBalancerResponseBodyAdaptiveRouting() = default ;
    GetLoadBalancerResponseBodyAdaptiveRouting& operator=(const GetLoadBalancerResponseBodyAdaptiveRouting &) = default ;
    GetLoadBalancerResponseBodyAdaptiveRouting& operator=(GetLoadBalancerResponseBodyAdaptiveRouting &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->failoverAcrossPools_ == nullptr; };
    // failoverAcrossPools Field Functions 
    bool hasFailoverAcrossPools() const { return this->failoverAcrossPools_ != nullptr;};
    void deleteFailoverAcrossPools() { this->failoverAcrossPools_ = nullptr;};
    inline bool failoverAcrossPools() const { DARABONBA_PTR_GET_DEFAULT(failoverAcrossPools_, false) };
    inline GetLoadBalancerResponseBodyAdaptiveRouting& setFailoverAcrossPools(bool failoverAcrossPools) { DARABONBA_PTR_SET_VALUE(failoverAcrossPools_, failoverAcrossPools) };


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
