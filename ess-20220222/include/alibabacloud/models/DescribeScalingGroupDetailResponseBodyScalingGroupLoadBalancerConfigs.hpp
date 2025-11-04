// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCALINGGROUPDETAILRESPONSEBODYSCALINGGROUPLOADBALANCERCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCALINGGROUPDETAILRESPONSEBODYSCALINGGROUPLOADBALANCERCONFIGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeScalingGroupDetailResponseBodyScalingGroupLoadBalancerConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScalingGroupDetailResponseBodyScalingGroupLoadBalancerConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScalingGroupDetailResponseBodyScalingGroupLoadBalancerConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
    };
    DescribeScalingGroupDetailResponseBodyScalingGroupLoadBalancerConfigs() = default ;
    DescribeScalingGroupDetailResponseBodyScalingGroupLoadBalancerConfigs(const DescribeScalingGroupDetailResponseBodyScalingGroupLoadBalancerConfigs &) = default ;
    DescribeScalingGroupDetailResponseBodyScalingGroupLoadBalancerConfigs(DescribeScalingGroupDetailResponseBodyScalingGroupLoadBalancerConfigs &&) = default ;
    DescribeScalingGroupDetailResponseBodyScalingGroupLoadBalancerConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScalingGroupDetailResponseBodyScalingGroupLoadBalancerConfigs() = default ;
    DescribeScalingGroupDetailResponseBodyScalingGroupLoadBalancerConfigs& operator=(const DescribeScalingGroupDetailResponseBodyScalingGroupLoadBalancerConfigs &) = default ;
    DescribeScalingGroupDetailResponseBodyScalingGroupLoadBalancerConfigs& operator=(DescribeScalingGroupDetailResponseBodyScalingGroupLoadBalancerConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->loadBalancerId_ == nullptr
        && return this->weight_ == nullptr; };
    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string loadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline DescribeScalingGroupDetailResponseBodyScalingGroupLoadBalancerConfigs& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline DescribeScalingGroupDetailResponseBodyScalingGroupLoadBalancerConfigs& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    // The ID of the CLB instance.
    std::shared_ptr<string> loadBalancerId_ = nullptr;
    // The weight of a backend server.
    std::shared_ptr<int32_t> weight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
