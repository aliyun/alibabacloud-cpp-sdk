// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERHTTPSLISTENERATTRIBUTERESPONSEBODYDOMAINEXTENSIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERHTTPSLISTENERATTRIBUTERESPONSEBODYDOMAINEXTENSIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLoadBalancerHTTPSListenerAttributeResponseBodyDomainExtensionsDomainExtension.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeLoadBalancerHTTPSListenerAttributeResponseBodyDomainExtensions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLoadBalancerHTTPSListenerAttributeResponseBodyDomainExtensions& obj) { 
      DARABONBA_PTR_TO_JSON(DomainExtension, domainExtension_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLoadBalancerHTTPSListenerAttributeResponseBodyDomainExtensions& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainExtension, domainExtension_);
    };
    DescribeLoadBalancerHTTPSListenerAttributeResponseBodyDomainExtensions() = default ;
    DescribeLoadBalancerHTTPSListenerAttributeResponseBodyDomainExtensions(const DescribeLoadBalancerHTTPSListenerAttributeResponseBodyDomainExtensions &) = default ;
    DescribeLoadBalancerHTTPSListenerAttributeResponseBodyDomainExtensions(DescribeLoadBalancerHTTPSListenerAttributeResponseBodyDomainExtensions &&) = default ;
    DescribeLoadBalancerHTTPSListenerAttributeResponseBodyDomainExtensions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLoadBalancerHTTPSListenerAttributeResponseBodyDomainExtensions() = default ;
    DescribeLoadBalancerHTTPSListenerAttributeResponseBodyDomainExtensions& operator=(const DescribeLoadBalancerHTTPSListenerAttributeResponseBodyDomainExtensions &) = default ;
    DescribeLoadBalancerHTTPSListenerAttributeResponseBodyDomainExtensions& operator=(DescribeLoadBalancerHTTPSListenerAttributeResponseBodyDomainExtensions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainExtension_ == nullptr; };
    // domainExtension Field Functions 
    bool hasDomainExtension() const { return this->domainExtension_ != nullptr;};
    void deleteDomainExtension() { this->domainExtension_ = nullptr;};
    inline const vector<Models::DescribeLoadBalancerHTTPSListenerAttributeResponseBodyDomainExtensionsDomainExtension> & domainExtension() const { DARABONBA_PTR_GET_CONST(domainExtension_, vector<Models::DescribeLoadBalancerHTTPSListenerAttributeResponseBodyDomainExtensionsDomainExtension>) };
    inline vector<Models::DescribeLoadBalancerHTTPSListenerAttributeResponseBodyDomainExtensionsDomainExtension> domainExtension() { DARABONBA_PTR_GET(domainExtension_, vector<Models::DescribeLoadBalancerHTTPSListenerAttributeResponseBodyDomainExtensionsDomainExtension>) };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBodyDomainExtensions& setDomainExtension(const vector<Models::DescribeLoadBalancerHTTPSListenerAttributeResponseBodyDomainExtensionsDomainExtension> & domainExtension) { DARABONBA_PTR_SET_VALUE(domainExtension_, domainExtension) };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBodyDomainExtensions& setDomainExtension(vector<Models::DescribeLoadBalancerHTTPSListenerAttributeResponseBodyDomainExtensionsDomainExtension> && domainExtension) { DARABONBA_PTR_SET_RVALUE(domainExtension_, domainExtension) };


  protected:
    std::shared_ptr<vector<Models::DescribeLoadBalancerHTTPSListenerAttributeResponseBodyDomainExtensionsDomainExtension>> domainExtension_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
