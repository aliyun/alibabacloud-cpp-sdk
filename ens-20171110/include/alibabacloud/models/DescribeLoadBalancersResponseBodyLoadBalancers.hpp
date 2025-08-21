// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERSRESPONSEBODYLOADBALANCERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERSRESPONSEBODYLOADBALANCERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLoadBalancersResponseBodyLoadBalancersLoadBalancer.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeLoadBalancersResponseBodyLoadBalancers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLoadBalancersResponseBodyLoadBalancers& obj) { 
      DARABONBA_PTR_TO_JSON(LoadBalancer, loadBalancer_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLoadBalancersResponseBodyLoadBalancers& obj) { 
      DARABONBA_PTR_FROM_JSON(LoadBalancer, loadBalancer_);
    };
    DescribeLoadBalancersResponseBodyLoadBalancers() = default ;
    DescribeLoadBalancersResponseBodyLoadBalancers(const DescribeLoadBalancersResponseBodyLoadBalancers &) = default ;
    DescribeLoadBalancersResponseBodyLoadBalancers(DescribeLoadBalancersResponseBodyLoadBalancers &&) = default ;
    DescribeLoadBalancersResponseBodyLoadBalancers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLoadBalancersResponseBodyLoadBalancers() = default ;
    DescribeLoadBalancersResponseBodyLoadBalancers& operator=(const DescribeLoadBalancersResponseBodyLoadBalancers &) = default ;
    DescribeLoadBalancersResponseBodyLoadBalancers& operator=(DescribeLoadBalancersResponseBodyLoadBalancers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->loadBalancer_ != nullptr; };
    // loadBalancer Field Functions 
    bool hasLoadBalancer() const { return this->loadBalancer_ != nullptr;};
    void deleteLoadBalancer() { this->loadBalancer_ = nullptr;};
    inline const vector<Models::DescribeLoadBalancersResponseBodyLoadBalancersLoadBalancer> & loadBalancer() const { DARABONBA_PTR_GET_CONST(loadBalancer_, vector<Models::DescribeLoadBalancersResponseBodyLoadBalancersLoadBalancer>) };
    inline vector<Models::DescribeLoadBalancersResponseBodyLoadBalancersLoadBalancer> loadBalancer() { DARABONBA_PTR_GET(loadBalancer_, vector<Models::DescribeLoadBalancersResponseBodyLoadBalancersLoadBalancer>) };
    inline DescribeLoadBalancersResponseBodyLoadBalancers& setLoadBalancer(const vector<Models::DescribeLoadBalancersResponseBodyLoadBalancersLoadBalancer> & loadBalancer) { DARABONBA_PTR_SET_VALUE(loadBalancer_, loadBalancer) };
    inline DescribeLoadBalancersResponseBodyLoadBalancers& setLoadBalancer(vector<Models::DescribeLoadBalancersResponseBodyLoadBalancersLoadBalancer> && loadBalancer) { DARABONBA_PTR_SET_RVALUE(loadBalancer_, loadBalancer) };


  protected:
    std::shared_ptr<vector<Models::DescribeLoadBalancersResponseBodyLoadBalancersLoadBalancer>> loadBalancer_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
