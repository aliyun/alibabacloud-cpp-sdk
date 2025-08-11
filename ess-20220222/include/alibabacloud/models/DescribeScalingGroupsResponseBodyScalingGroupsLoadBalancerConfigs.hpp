// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCALINGGROUPSRESPONSEBODYSCALINGGROUPSLOADBALANCERCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCALINGGROUPSRESPONSEBODYSCALINGGROUPSLOADBALANCERCONFIGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeScalingGroupsResponseBodyScalingGroupsLoadBalancerConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScalingGroupsResponseBodyScalingGroupsLoadBalancerConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScalingGroupsResponseBodyScalingGroupsLoadBalancerConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
    };
    DescribeScalingGroupsResponseBodyScalingGroupsLoadBalancerConfigs() = default ;
    DescribeScalingGroupsResponseBodyScalingGroupsLoadBalancerConfigs(const DescribeScalingGroupsResponseBodyScalingGroupsLoadBalancerConfigs &) = default ;
    DescribeScalingGroupsResponseBodyScalingGroupsLoadBalancerConfigs(DescribeScalingGroupsResponseBodyScalingGroupsLoadBalancerConfigs &&) = default ;
    DescribeScalingGroupsResponseBodyScalingGroupsLoadBalancerConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScalingGroupsResponseBodyScalingGroupsLoadBalancerConfigs() = default ;
    DescribeScalingGroupsResponseBodyScalingGroupsLoadBalancerConfigs& operator=(const DescribeScalingGroupsResponseBodyScalingGroupsLoadBalancerConfigs &) = default ;
    DescribeScalingGroupsResponseBodyScalingGroupsLoadBalancerConfigs& operator=(DescribeScalingGroupsResponseBodyScalingGroupsLoadBalancerConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->loadBalancerId_ != nullptr
        && this->weight_ != nullptr; };
    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string loadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline DescribeScalingGroupsResponseBodyScalingGroupsLoadBalancerConfigs& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline DescribeScalingGroupsResponseBodyScalingGroupsLoadBalancerConfigs& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    // The ID of the CLB instance.
    std::shared_ptr<string> loadBalancerId_ = nullptr;
    // The weight of an ECS instance as a backend server in the CLB server group. An increase in the weight of an ECS instance indicates an increase in the number of access requests that are forwarded to the ECS instance. If you set the weight of an ECS instance to 0, no access requests are forwarded to the ECS instance. Valid values: 0 to 100.
    std::shared_ptr<int32_t> weight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
