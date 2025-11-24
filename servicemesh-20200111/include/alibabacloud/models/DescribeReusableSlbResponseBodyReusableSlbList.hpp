// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREUSABLESLBRESPONSEBODYREUSABLESLBLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREUSABLESLBRESPONSEBODYREUSABLESLBLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeReusableSlbResponseBodyReusableSlbList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeReusableSlbResponseBodyReusableSlbList& obj) { 
      DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_TO_JSON(LoadBalancerName, loadBalancerName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeReusableSlbResponseBodyReusableSlbList& obj) { 
      DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerName, loadBalancerName_);
    };
    DescribeReusableSlbResponseBodyReusableSlbList() = default ;
    DescribeReusableSlbResponseBodyReusableSlbList(const DescribeReusableSlbResponseBodyReusableSlbList &) = default ;
    DescribeReusableSlbResponseBodyReusableSlbList(DescribeReusableSlbResponseBodyReusableSlbList &&) = default ;
    DescribeReusableSlbResponseBodyReusableSlbList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeReusableSlbResponseBodyReusableSlbList() = default ;
    DescribeReusableSlbResponseBodyReusableSlbList& operator=(const DescribeReusableSlbResponseBodyReusableSlbList &) = default ;
    DescribeReusableSlbResponseBodyReusableSlbList& operator=(DescribeReusableSlbResponseBodyReusableSlbList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->loadBalancerId_ == nullptr
        && return this->loadBalancerName_ == nullptr; };
    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string loadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline DescribeReusableSlbResponseBodyReusableSlbList& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


    // loadBalancerName Field Functions 
    bool hasLoadBalancerName() const { return this->loadBalancerName_ != nullptr;};
    void deleteLoadBalancerName() { this->loadBalancerName_ = nullptr;};
    inline string loadBalancerName() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerName_, "") };
    inline DescribeReusableSlbResponseBodyReusableSlbList& setLoadBalancerName(string loadBalancerName) { DARABONBA_PTR_SET_VALUE(loadBalancerName_, loadBalancerName) };


  protected:
    // The ID of the SLB instance.
    std::shared_ptr<string> loadBalancerId_ = nullptr;
    // The name of the SLB instance.
    std::shared_ptr<string> loadBalancerName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
