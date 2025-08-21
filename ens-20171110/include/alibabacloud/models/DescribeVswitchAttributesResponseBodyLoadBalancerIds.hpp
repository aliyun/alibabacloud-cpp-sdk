// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSWITCHATTRIBUTESRESPONSEBODYLOADBALANCERIDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSWITCHATTRIBUTESRESPONSEBODYLOADBALANCERIDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeVSwitchAttributesResponseBodyLoadBalancerIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVSwitchAttributesResponseBodyLoadBalancerIds& obj) { 
      DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVSwitchAttributesResponseBodyLoadBalancerIds& obj) { 
      DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
    };
    DescribeVSwitchAttributesResponseBodyLoadBalancerIds() = default ;
    DescribeVSwitchAttributesResponseBodyLoadBalancerIds(const DescribeVSwitchAttributesResponseBodyLoadBalancerIds &) = default ;
    DescribeVSwitchAttributesResponseBodyLoadBalancerIds(DescribeVSwitchAttributesResponseBodyLoadBalancerIds &&) = default ;
    DescribeVSwitchAttributesResponseBodyLoadBalancerIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVSwitchAttributesResponseBodyLoadBalancerIds() = default ;
    DescribeVSwitchAttributesResponseBodyLoadBalancerIds& operator=(const DescribeVSwitchAttributesResponseBodyLoadBalancerIds &) = default ;
    DescribeVSwitchAttributesResponseBodyLoadBalancerIds& operator=(DescribeVSwitchAttributesResponseBodyLoadBalancerIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->loadBalancerId_ != nullptr; };
    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline const vector<string> & loadBalancerId() const { DARABONBA_PTR_GET_CONST(loadBalancerId_, vector<string>) };
    inline vector<string> loadBalancerId() { DARABONBA_PTR_GET(loadBalancerId_, vector<string>) };
    inline DescribeVSwitchAttributesResponseBodyLoadBalancerIds& setLoadBalancerId(const vector<string> & loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };
    inline DescribeVSwitchAttributesResponseBodyLoadBalancerIds& setLoadBalancerId(vector<string> && loadBalancerId) { DARABONBA_PTR_SET_RVALUE(loadBalancerId_, loadBalancerId) };


  protected:
    std::shared_ptr<vector<string>> loadBalancerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
