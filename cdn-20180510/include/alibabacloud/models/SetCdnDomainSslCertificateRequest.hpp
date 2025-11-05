// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETCDNDOMAINSSLCERTIFICATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETCDNDOMAINSSLCERTIFICATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class SetCdnDomainSSLCertificateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetCdnDomainSSLCertificateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CertId, certId_);
      DARABONBA_PTR_TO_JSON(CertName, certName_);
      DARABONBA_PTR_TO_JSON(CertRegion, certRegion_);
      DARABONBA_PTR_TO_JSON(CertType, certType_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(SSLPri, SSLPri_);
      DARABONBA_PTR_TO_JSON(SSLProtocol, SSLProtocol_);
      DARABONBA_PTR_TO_JSON(SSLPub, SSLPub_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, SetCdnDomainSSLCertificateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CertId, certId_);
      DARABONBA_PTR_FROM_JSON(CertName, certName_);
      DARABONBA_PTR_FROM_JSON(CertRegion, certRegion_);
      DARABONBA_PTR_FROM_JSON(CertType, certType_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(SSLPri, SSLPri_);
      DARABONBA_PTR_FROM_JSON(SSLProtocol, SSLProtocol_);
      DARABONBA_PTR_FROM_JSON(SSLPub, SSLPub_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    SetCdnDomainSSLCertificateRequest() = default ;
    SetCdnDomainSSLCertificateRequest(const SetCdnDomainSSLCertificateRequest &) = default ;
    SetCdnDomainSSLCertificateRequest(SetCdnDomainSSLCertificateRequest &&) = default ;
    SetCdnDomainSSLCertificateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetCdnDomainSSLCertificateRequest() = default ;
    SetCdnDomainSSLCertificateRequest& operator=(const SetCdnDomainSSLCertificateRequest &) = default ;
    SetCdnDomainSSLCertificateRequest& operator=(SetCdnDomainSSLCertificateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certId_ == nullptr
        && return this->certName_ == nullptr && return this->certRegion_ == nullptr && return this->certType_ == nullptr && return this->domainName_ == nullptr && return this->ownerId_ == nullptr
        && return this->SSLPri_ == nullptr && return this->SSLProtocol_ == nullptr && return this->SSLPub_ == nullptr && return this->securityToken_ == nullptr; };
    // certId Field Functions 
    bool hasCertId() const { return this->certId_ != nullptr;};
    void deleteCertId() { this->certId_ = nullptr;};
    inline int64_t certId() const { DARABONBA_PTR_GET_DEFAULT(certId_, 0L) };
    inline SetCdnDomainSSLCertificateRequest& setCertId(int64_t certId) { DARABONBA_PTR_SET_VALUE(certId_, certId) };


    // certName Field Functions 
    bool hasCertName() const { return this->certName_ != nullptr;};
    void deleteCertName() { this->certName_ = nullptr;};
    inline string certName() const { DARABONBA_PTR_GET_DEFAULT(certName_, "") };
    inline SetCdnDomainSSLCertificateRequest& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


    // certRegion Field Functions 
    bool hasCertRegion() const { return this->certRegion_ != nullptr;};
    void deleteCertRegion() { this->certRegion_ = nullptr;};
    inline string certRegion() const { DARABONBA_PTR_GET_DEFAULT(certRegion_, "") };
    inline SetCdnDomainSSLCertificateRequest& setCertRegion(string certRegion) { DARABONBA_PTR_SET_VALUE(certRegion_, certRegion) };


    // certType Field Functions 
    bool hasCertType() const { return this->certType_ != nullptr;};
    void deleteCertType() { this->certType_ = nullptr;};
    inline string certType() const { DARABONBA_PTR_GET_DEFAULT(certType_, "") };
    inline SetCdnDomainSSLCertificateRequest& setCertType(string certType) { DARABONBA_PTR_SET_VALUE(certType_, certType) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline SetCdnDomainSSLCertificateRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline SetCdnDomainSSLCertificateRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // SSLPri Field Functions 
    bool hasSSLPri() const { return this->SSLPri_ != nullptr;};
    void deleteSSLPri() { this->SSLPri_ = nullptr;};
    inline string SSLPri() const { DARABONBA_PTR_GET_DEFAULT(SSLPri_, "") };
    inline SetCdnDomainSSLCertificateRequest& setSSLPri(string SSLPri) { DARABONBA_PTR_SET_VALUE(SSLPri_, SSLPri) };


    // SSLProtocol Field Functions 
    bool hasSSLProtocol() const { return this->SSLProtocol_ != nullptr;};
    void deleteSSLProtocol() { this->SSLProtocol_ = nullptr;};
    inline string SSLProtocol() const { DARABONBA_PTR_GET_DEFAULT(SSLProtocol_, "") };
    inline SetCdnDomainSSLCertificateRequest& setSSLProtocol(string SSLProtocol) { DARABONBA_PTR_SET_VALUE(SSLProtocol_, SSLProtocol) };


    // SSLPub Field Functions 
    bool hasSSLPub() const { return this->SSLPub_ != nullptr;};
    void deleteSSLPub() { this->SSLPub_ = nullptr;};
    inline string SSLPub() const { DARABONBA_PTR_GET_DEFAULT(SSLPub_, "") };
    inline SetCdnDomainSSLCertificateRequest& setSSLPub(string SSLPub) { DARABONBA_PTR_SET_VALUE(SSLPub_, SSLPub) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline SetCdnDomainSSLCertificateRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // The ID of the certificate.
    std::shared_ptr<int64_t> certId_ = nullptr;
    // The name of the SSL certificate. You can specify only one certificate name.
    std::shared_ptr<string> certName_ = nullptr;
    // The region ID of the certificate. Valid values: **cn-hangzhou** and **ap-southeast-1**. Default value: **cn-hangzhou**.
    std::shared_ptr<string> certRegion_ = nullptr;
    // The type of the certificate.
    // 
    // *   **upload**: a user-uploaded SSL certificate.
    // *   **cas**: a certificate that is acquired through Certificate Management Service.
    std::shared_ptr<string> certType_ = nullptr;
    // The accelerated domain name for which you want to configure the SSL certificate. The type of request supported by the domain name must be HTTPS. You can specify only one domain name in each request.
    // 
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The private key. Specify the private key only if you want to enable the SSL certificate.
    std::shared_ptr<string> SSLPri_ = nullptr;
    // Specifies whether to enable the SSL certificate.
    // 
    // *   **on**
    // *   **off**
    // 
    // This parameter is required.
    std::shared_ptr<string> SSLProtocol_ = nullptr;
    // The content of the SSL certificate. Specify the content of the SSL certificate only if you want to enable the SSL certificate.
    std::shared_ptr<string> SSLPub_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
