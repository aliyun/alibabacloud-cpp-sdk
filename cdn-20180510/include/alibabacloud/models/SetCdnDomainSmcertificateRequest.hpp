// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETCDNDOMAINSMCERTIFICATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETCDNDOMAINSMCERTIFICATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class SetCdnDomainSMCertificateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetCdnDomainSMCertificateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CertIdentifier, certIdentifier_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(SSLProtocol, SSLProtocol_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, SetCdnDomainSMCertificateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CertIdentifier, certIdentifier_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(SSLProtocol, SSLProtocol_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    SetCdnDomainSMCertificateRequest() = default ;
    SetCdnDomainSMCertificateRequest(const SetCdnDomainSMCertificateRequest &) = default ;
    SetCdnDomainSMCertificateRequest(SetCdnDomainSMCertificateRequest &&) = default ;
    SetCdnDomainSMCertificateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetCdnDomainSMCertificateRequest() = default ;
    SetCdnDomainSMCertificateRequest& operator=(const SetCdnDomainSMCertificateRequest &) = default ;
    SetCdnDomainSMCertificateRequest& operator=(SetCdnDomainSMCertificateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certIdentifier_ != nullptr
        && this->domainName_ != nullptr && this->ownerId_ != nullptr && this->SSLProtocol_ != nullptr && this->securityToken_ != nullptr; };
    // certIdentifier Field Functions 
    bool hasCertIdentifier() const { return this->certIdentifier_ != nullptr;};
    void deleteCertIdentifier() { this->certIdentifier_ = nullptr;};
    inline string certIdentifier() const { DARABONBA_PTR_GET_DEFAULT(certIdentifier_, "") };
    inline SetCdnDomainSMCertificateRequest& setCertIdentifier(string certIdentifier) { DARABONBA_PTR_SET_VALUE(certIdentifier_, certIdentifier) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline SetCdnDomainSMCertificateRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline SetCdnDomainSMCertificateRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // SSLProtocol Field Functions 
    bool hasSSLProtocol() const { return this->SSLProtocol_ != nullptr;};
    void deleteSSLProtocol() { this->SSLProtocol_ = nullptr;};
    inline string SSLProtocol() const { DARABONBA_PTR_GET_DEFAULT(SSLProtocol_, "") };
    inline SetCdnDomainSMCertificateRequest& setSSLProtocol(string SSLProtocol) { DARABONBA_PTR_SET_VALUE(SSLProtocol_, SSLProtocol) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline SetCdnDomainSMCertificateRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // The ID of the SM certificate that you want to configure. The identifier of the certificate. The value is Certificate ID-cn-hangzhou. For example, if the certificate ID is 123, set the value of this parameter to 123-cn-hangzhou.
    // 
    // This parameter is required.
    std::shared_ptr<string> certIdentifier_ = nullptr;
    // The accelerated domain name for which you want to configure the SM certificate.
    // 
    // > The domain name must use HTTPS acceleration.
    // 
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // Specifies whether to enable the SSL certificate. Valid values:
    // 
    // *   **on**
    // *   **off**
    // 
    // This parameter is required.
    std::shared_ptr<string> SSLProtocol_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
