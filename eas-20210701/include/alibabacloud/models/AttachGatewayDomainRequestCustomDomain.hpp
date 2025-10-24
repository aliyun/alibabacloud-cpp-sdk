// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHGATEWAYDOMAINREQUESTCUSTOMDOMAIN_HPP_
#define ALIBABACLOUD_MODELS_ATTACHGATEWAYDOMAINREQUESTCUSTOMDOMAIN_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class AttachGatewayDomainRequestCustomDomain : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachGatewayDomainRequestCustomDomain& obj) { 
      DARABONBA_PTR_TO_JSON(CertificateId, certificateId_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, AttachGatewayDomainRequestCustomDomain& obj) { 
      DARABONBA_PTR_FROM_JSON(CertificateId, certificateId_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    AttachGatewayDomainRequestCustomDomain() = default ;
    AttachGatewayDomainRequestCustomDomain(const AttachGatewayDomainRequestCustomDomain &) = default ;
    AttachGatewayDomainRequestCustomDomain(AttachGatewayDomainRequestCustomDomain &&) = default ;
    AttachGatewayDomainRequestCustomDomain(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachGatewayDomainRequestCustomDomain() = default ;
    AttachGatewayDomainRequestCustomDomain& operator=(const AttachGatewayDomainRequestCustomDomain &) = default ;
    AttachGatewayDomainRequestCustomDomain& operator=(AttachGatewayDomainRequestCustomDomain &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certificateId_ == nullptr
        && return this->domain_ == nullptr && return this->type_ == nullptr; };
    // certificateId Field Functions 
    bool hasCertificateId() const { return this->certificateId_ != nullptr;};
    void deleteCertificateId() { this->certificateId_ = nullptr;};
    inline string certificateId() const { DARABONBA_PTR_GET_DEFAULT(certificateId_, "") };
    inline AttachGatewayDomainRequestCustomDomain& setCertificateId(string certificateId) { DARABONBA_PTR_SET_VALUE(certificateId_, certificateId) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline AttachGatewayDomainRequestCustomDomain& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline AttachGatewayDomainRequestCustomDomain& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ID of the SSL certificate bound to the domain name. Obtain the certificate ID after you upload or purchase a certificate in the [Certificate Management Service](https://yundunnext.console.aliyun.com/?spm=5176.2020520163.console-base_help.2.4b3baJixaJixOc\\&p=cas) console.
    std::shared_ptr<string> certificateId_ = nullptr;
    // The custom domain name.
    // 
    // This parameter is required.
    std::shared_ptr<string> domain_ = nullptr;
    // The domain name type.
    // 
    // Valid value:
    // 
    // *   intranet: internal network.
    // *   internet: public network.
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
