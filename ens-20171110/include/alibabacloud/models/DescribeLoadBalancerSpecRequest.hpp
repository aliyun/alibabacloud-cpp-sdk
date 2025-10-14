// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERSPECREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERSPECREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeLoadBalancerSpecRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLoadBalancerSpecRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LoadBalancerSpec, loadBalancerSpec_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLoadBalancerSpecRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LoadBalancerSpec, loadBalancerSpec_);
    };
    DescribeLoadBalancerSpecRequest() = default ;
    DescribeLoadBalancerSpecRequest(const DescribeLoadBalancerSpecRequest &) = default ;
    DescribeLoadBalancerSpecRequest(DescribeLoadBalancerSpecRequest &&) = default ;
    DescribeLoadBalancerSpecRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLoadBalancerSpecRequest() = default ;
    DescribeLoadBalancerSpecRequest& operator=(const DescribeLoadBalancerSpecRequest &) = default ;
    DescribeLoadBalancerSpecRequest& operator=(DescribeLoadBalancerSpecRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->loadBalancerSpec_ == nullptr; };
    // loadBalancerSpec Field Functions 
    bool hasLoadBalancerSpec() const { return this->loadBalancerSpec_ != nullptr;};
    void deleteLoadBalancerSpec() { this->loadBalancerSpec_ = nullptr;};
    inline string loadBalancerSpec() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerSpec_, "") };
    inline DescribeLoadBalancerSpecRequest& setLoadBalancerSpec(string loadBalancerSpec) { DARABONBA_PTR_SET_VALUE(loadBalancerSpec_, loadBalancerSpec) };


  protected:
    // The specifications of the ELB instance.
    std::shared_ptr<string> loadBalancerSpec_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
