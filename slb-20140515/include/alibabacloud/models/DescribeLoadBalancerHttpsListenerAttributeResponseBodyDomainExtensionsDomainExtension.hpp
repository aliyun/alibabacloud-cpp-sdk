// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERHTTPSLISTENERATTRIBUTERESPONSEBODYDOMAINEXTENSIONSDOMAINEXTENSION_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERHTTPSLISTENERATTRIBUTERESPONSEBODYDOMAINEXTENSIONSDOMAINEXTENSION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeLoadBalancerHTTPSListenerAttributeResponseBodyDomainExtensionsDomainExtension : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLoadBalancerHTTPSListenerAttributeResponseBodyDomainExtensionsDomainExtension& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(DomainExtensionId, domainExtensionId_);
      DARABONBA_PTR_TO_JSON(ServerCertificateId, serverCertificateId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLoadBalancerHTTPSListenerAttributeResponseBodyDomainExtensionsDomainExtension& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(DomainExtensionId, domainExtensionId_);
      DARABONBA_PTR_FROM_JSON(ServerCertificateId, serverCertificateId_);
    };
    DescribeLoadBalancerHTTPSListenerAttributeResponseBodyDomainExtensionsDomainExtension() = default ;
    DescribeLoadBalancerHTTPSListenerAttributeResponseBodyDomainExtensionsDomainExtension(const DescribeLoadBalancerHTTPSListenerAttributeResponseBodyDomainExtensionsDomainExtension &) = default ;
    DescribeLoadBalancerHTTPSListenerAttributeResponseBodyDomainExtensionsDomainExtension(DescribeLoadBalancerHTTPSListenerAttributeResponseBodyDomainExtensionsDomainExtension &&) = default ;
    DescribeLoadBalancerHTTPSListenerAttributeResponseBodyDomainExtensionsDomainExtension(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLoadBalancerHTTPSListenerAttributeResponseBodyDomainExtensionsDomainExtension() = default ;
    DescribeLoadBalancerHTTPSListenerAttributeResponseBodyDomainExtensionsDomainExtension& operator=(const DescribeLoadBalancerHTTPSListenerAttributeResponseBodyDomainExtensionsDomainExtension &) = default ;
    DescribeLoadBalancerHTTPSListenerAttributeResponseBodyDomainExtensionsDomainExtension& operator=(DescribeLoadBalancerHTTPSListenerAttributeResponseBodyDomainExtensionsDomainExtension &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domain_ == nullptr
        && return this->domainExtensionId_ == nullptr && return this->serverCertificateId_ == nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBodyDomainExtensionsDomainExtension& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // domainExtensionId Field Functions 
    bool hasDomainExtensionId() const { return this->domainExtensionId_ != nullptr;};
    void deleteDomainExtensionId() { this->domainExtensionId_ = nullptr;};
    inline string domainExtensionId() const { DARABONBA_PTR_GET_DEFAULT(domainExtensionId_, "") };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBodyDomainExtensionsDomainExtension& setDomainExtensionId(string domainExtensionId) { DARABONBA_PTR_SET_VALUE(domainExtensionId_, domainExtensionId) };


    // serverCertificateId Field Functions 
    bool hasServerCertificateId() const { return this->serverCertificateId_ != nullptr;};
    void deleteServerCertificateId() { this->serverCertificateId_ = nullptr;};
    inline string serverCertificateId() const { DARABONBA_PTR_GET_DEFAULT(serverCertificateId_, "") };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBodyDomainExtensionsDomainExtension& setServerCertificateId(string serverCertificateId) { DARABONBA_PTR_SET_VALUE(serverCertificateId_, serverCertificateId) };


  protected:
    // The domain name.
    std::shared_ptr<string> domain_ = nullptr;
    // The ID of the additional certificate.
    std::shared_ptr<string> domainExtensionId_ = nullptr;
    // The ID of the certificate used by the domain name.
    std::shared_ptr<string> serverCertificateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
