// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERSPECRESPONSEBODYLOADBALANCERSPECS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERSPECRESPONSEBODYLOADBALANCERSPECS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeLoadBalancerSpecResponseBodyLoadBalancerSpecs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLoadBalancerSpecResponseBodyLoadBalancerSpecs& obj) { 
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(LoadBalancerSpec, loadBalancerSpec_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLoadBalancerSpecResponseBodyLoadBalancerSpecs& obj) { 
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerSpec, loadBalancerSpec_);
    };
    DescribeLoadBalancerSpecResponseBodyLoadBalancerSpecs() = default ;
    DescribeLoadBalancerSpecResponseBodyLoadBalancerSpecs(const DescribeLoadBalancerSpecResponseBodyLoadBalancerSpecs &) = default ;
    DescribeLoadBalancerSpecResponseBodyLoadBalancerSpecs(DescribeLoadBalancerSpecResponseBodyLoadBalancerSpecs &&) = default ;
    DescribeLoadBalancerSpecResponseBodyLoadBalancerSpecs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLoadBalancerSpecResponseBodyLoadBalancerSpecs() = default ;
    DescribeLoadBalancerSpecResponseBodyLoadBalancerSpecs& operator=(const DescribeLoadBalancerSpecResponseBodyLoadBalancerSpecs &) = default ;
    DescribeLoadBalancerSpecResponseBodyLoadBalancerSpecs& operator=(DescribeLoadBalancerSpecResponseBodyLoadBalancerSpecs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->displayName_ == nullptr
        && return this->loadBalancerSpec_ == nullptr; };
    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline DescribeLoadBalancerSpecResponseBodyLoadBalancerSpecs& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // loadBalancerSpec Field Functions 
    bool hasLoadBalancerSpec() const { return this->loadBalancerSpec_ != nullptr;};
    void deleteLoadBalancerSpec() { this->loadBalancerSpec_ = nullptr;};
    inline string loadBalancerSpec() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerSpec_, "") };
    inline DescribeLoadBalancerSpecResponseBodyLoadBalancerSpecs& setLoadBalancerSpec(string loadBalancerSpec) { DARABONBA_PTR_SET_VALUE(loadBalancerSpec_, loadBalancerSpec) };


  protected:
    // The display name of the instance type.
    std::shared_ptr<string> displayName_ = nullptr;
    // The specifications of the ELB instance.
    std::shared_ptr<string> loadBalancerSpec_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
