// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINEXTENSIONATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINEXTENSIONATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeDomainExtensionAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainExtensionAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(DomainExtensionId, domainExtensionId_);
      DARABONBA_PTR_TO_JSON(ListenerPort, listenerPort_);
      DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServerCertificateId, serverCertificateId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainExtensionAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(DomainExtensionId, domainExtensionId_);
      DARABONBA_PTR_FROM_JSON(ListenerPort, listenerPort_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServerCertificateId, serverCertificateId_);
    };
    DescribeDomainExtensionAttributeResponseBody() = default ;
    DescribeDomainExtensionAttributeResponseBody(const DescribeDomainExtensionAttributeResponseBody &) = default ;
    DescribeDomainExtensionAttributeResponseBody(DescribeDomainExtensionAttributeResponseBody &&) = default ;
    DescribeDomainExtensionAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainExtensionAttributeResponseBody() = default ;
    DescribeDomainExtensionAttributeResponseBody& operator=(const DescribeDomainExtensionAttributeResponseBody &) = default ;
    DescribeDomainExtensionAttributeResponseBody& operator=(DescribeDomainExtensionAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domain_ == nullptr
        && return this->domainExtensionId_ == nullptr && return this->listenerPort_ == nullptr && return this->loadBalancerId_ == nullptr && return this->requestId_ == nullptr && return this->serverCertificateId_ == nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeDomainExtensionAttributeResponseBody& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // domainExtensionId Field Functions 
    bool hasDomainExtensionId() const { return this->domainExtensionId_ != nullptr;};
    void deleteDomainExtensionId() { this->domainExtensionId_ = nullptr;};
    inline string domainExtensionId() const { DARABONBA_PTR_GET_DEFAULT(domainExtensionId_, "") };
    inline DescribeDomainExtensionAttributeResponseBody& setDomainExtensionId(string domainExtensionId) { DARABONBA_PTR_SET_VALUE(domainExtensionId_, domainExtensionId) };


    // listenerPort Field Functions 
    bool hasListenerPort() const { return this->listenerPort_ != nullptr;};
    void deleteListenerPort() { this->listenerPort_ = nullptr;};
    inline int32_t listenerPort() const { DARABONBA_PTR_GET_DEFAULT(listenerPort_, 0) };
    inline DescribeDomainExtensionAttributeResponseBody& setListenerPort(int32_t listenerPort) { DARABONBA_PTR_SET_VALUE(listenerPort_, listenerPort) };


    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string loadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline DescribeDomainExtensionAttributeResponseBody& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainExtensionAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serverCertificateId Field Functions 
    bool hasServerCertificateId() const { return this->serverCertificateId_ != nullptr;};
    void deleteServerCertificateId() { this->serverCertificateId_ = nullptr;};
    inline string serverCertificateId() const { DARABONBA_PTR_GET_DEFAULT(serverCertificateId_, "") };
    inline DescribeDomainExtensionAttributeResponseBody& setServerCertificateId(string serverCertificateId) { DARABONBA_PTR_SET_VALUE(serverCertificateId_, serverCertificateId) };


  protected:
    // The domain name.
    std::shared_ptr<string> domain_ = nullptr;
    // The ID of the additional certificate.
    std::shared_ptr<string> domainExtensionId_ = nullptr;
    // The frontend port of the HTTPS listener that is configured for the SLB instance. Valid values: **1** to **65535**.
    std::shared_ptr<int32_t> listenerPort_ = nullptr;
    // The ID of the SLB instance.
    std::shared_ptr<string> loadBalancerId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the server certificate used by the domain name.
    std::shared_ptr<string> serverCertificateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
