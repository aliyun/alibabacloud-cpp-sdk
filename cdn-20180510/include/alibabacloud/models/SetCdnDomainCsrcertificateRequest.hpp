// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETCDNDOMAINCSRCERTIFICATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETCDNDOMAINCSRCERTIFICATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class SetCdnDomainCSRCertificateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetCdnDomainCSRCertificateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(ServerCertificate, serverCertificate_);
    };
    friend void from_json(const Darabonba::Json& j, SetCdnDomainCSRCertificateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(ServerCertificate, serverCertificate_);
    };
    SetCdnDomainCSRCertificateRequest() = default ;
    SetCdnDomainCSRCertificateRequest(const SetCdnDomainCSRCertificateRequest &) = default ;
    SetCdnDomainCSRCertificateRequest(SetCdnDomainCSRCertificateRequest &&) = default ;
    SetCdnDomainCSRCertificateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetCdnDomainCSRCertificateRequest() = default ;
    SetCdnDomainCSRCertificateRequest& operator=(const SetCdnDomainCSRCertificateRequest &) = default ;
    SetCdnDomainCSRCertificateRequest& operator=(SetCdnDomainCSRCertificateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainName_ != nullptr
        && this->serverCertificate_ != nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline SetCdnDomainCSRCertificateRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // serverCertificate Field Functions 
    bool hasServerCertificate() const { return this->serverCertificate_ != nullptr;};
    void deleteServerCertificate() { this->serverCertificate_ = nullptr;};
    inline string serverCertificate() const { DARABONBA_PTR_GET_DEFAULT(serverCertificate_, "") };
    inline SetCdnDomainCSRCertificateRequest& setServerCertificate(string serverCertificate) { DARABONBA_PTR_SET_VALUE(serverCertificate_, serverCertificate) };


  protected:
    // The accelerated domain name for which you want to configure an SSL certificate. The domain name must have HTTPS secure acceleration enabled.
    // 
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    // The content of the certificate. The certificate must match the certificate signing request (CSR) created by calling the [CreateCdnCertificateSigningRequest](https://help.aliyun.com/document_detail/144478.html) operation. Make sure that the content of the certificate is encoded in Base64 and then encoded by encodeURIComponent.
    // 
    // This parameter is required.
    std::shared_ptr<string> serverCertificate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
