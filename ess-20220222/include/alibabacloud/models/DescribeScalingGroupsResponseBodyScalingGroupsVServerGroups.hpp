// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCALINGGROUPSRESPONSEBODYSCALINGGROUPSVSERVERGROUPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCALINGGROUPSRESPONSEBODYSCALINGGROUPSVSERVERGROUPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeScalingGroupsResponseBodyScalingGroupsVServerGroupsVServerGroupAttributes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeScalingGroupsResponseBodyScalingGroupsVServerGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScalingGroupsResponseBodyScalingGroupsVServerGroups& obj) { 
      DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_TO_JSON(VServerGroupAttributes, VServerGroupAttributes_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScalingGroupsResponseBodyScalingGroupsVServerGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_FROM_JSON(VServerGroupAttributes, VServerGroupAttributes_);
    };
    DescribeScalingGroupsResponseBodyScalingGroupsVServerGroups() = default ;
    DescribeScalingGroupsResponseBodyScalingGroupsVServerGroups(const DescribeScalingGroupsResponseBodyScalingGroupsVServerGroups &) = default ;
    DescribeScalingGroupsResponseBodyScalingGroupsVServerGroups(DescribeScalingGroupsResponseBodyScalingGroupsVServerGroups &&) = default ;
    DescribeScalingGroupsResponseBodyScalingGroupsVServerGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScalingGroupsResponseBodyScalingGroupsVServerGroups() = default ;
    DescribeScalingGroupsResponseBodyScalingGroupsVServerGroups& operator=(const DescribeScalingGroupsResponseBodyScalingGroupsVServerGroups &) = default ;
    DescribeScalingGroupsResponseBodyScalingGroupsVServerGroups& operator=(DescribeScalingGroupsResponseBodyScalingGroupsVServerGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->loadBalancerId_ == nullptr
        && return this->VServerGroupAttributes_ == nullptr; };
    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string loadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline DescribeScalingGroupsResponseBodyScalingGroupsVServerGroups& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


    // VServerGroupAttributes Field Functions 
    bool hasVServerGroupAttributes() const { return this->VServerGroupAttributes_ != nullptr;};
    void deleteVServerGroupAttributes() { this->VServerGroupAttributes_ = nullptr;};
    inline const vector<Models::DescribeScalingGroupsResponseBodyScalingGroupsVServerGroupsVServerGroupAttributes> & VServerGroupAttributes() const { DARABONBA_PTR_GET_CONST(VServerGroupAttributes_, vector<Models::DescribeScalingGroupsResponseBodyScalingGroupsVServerGroupsVServerGroupAttributes>) };
    inline vector<Models::DescribeScalingGroupsResponseBodyScalingGroupsVServerGroupsVServerGroupAttributes> VServerGroupAttributes() { DARABONBA_PTR_GET(VServerGroupAttributes_, vector<Models::DescribeScalingGroupsResponseBodyScalingGroupsVServerGroupsVServerGroupAttributes>) };
    inline DescribeScalingGroupsResponseBodyScalingGroupsVServerGroups& setVServerGroupAttributes(const vector<Models::DescribeScalingGroupsResponseBodyScalingGroupsVServerGroupsVServerGroupAttributes> & VServerGroupAttributes) { DARABONBA_PTR_SET_VALUE(VServerGroupAttributes_, VServerGroupAttributes) };
    inline DescribeScalingGroupsResponseBodyScalingGroupsVServerGroups& setVServerGroupAttributes(vector<Models::DescribeScalingGroupsResponseBodyScalingGroupsVServerGroupsVServerGroupAttributes> && VServerGroupAttributes) { DARABONBA_PTR_SET_RVALUE(VServerGroupAttributes_, VServerGroupAttributes) };


  protected:
    // The ID of the load balancer to which the backend vServer group belongs.
    std::shared_ptr<string> loadBalancerId_ = nullptr;
    // The attributes of the backend vServer groups.
    std::shared_ptr<vector<Models::DescribeScalingGroupsResponseBodyScalingGroupsVServerGroupsVServerGroupAttributes>> VServerGroupAttributes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
