// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETDCDNDOMAINSSLCERTIFICATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETDCDNDOMAINSSLCERTIFICATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class SetDcdnDomainSSLCertificateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetDcdnDomainSSLCertificateRequest& obj) { 
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
    friend void from_json(const Darabonba::Json& j, SetDcdnDomainSSLCertificateRequest& obj) { 
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
    SetDcdnDomainSSLCertificateRequest() = default ;
    SetDcdnDomainSSLCertificateRequest(const SetDcdnDomainSSLCertificateRequest &) = default ;
    SetDcdnDomainSSLCertificateRequest(SetDcdnDomainSSLCertificateRequest &&) = default ;
    SetDcdnDomainSSLCertificateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetDcdnDomainSSLCertificateRequest() = default ;
    SetDcdnDomainSSLCertificateRequest& operator=(const SetDcdnDomainSSLCertificateRequest &) = default ;
    SetDcdnDomainSSLCertificateRequest& operator=(SetDcdnDomainSSLCertificateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certId_ == nullptr
        && this->certName_ == nullptr && this->certRegion_ == nullptr && this->certType_ == nullptr && this->domainName_ == nullptr && this->ownerId_ == nullptr
        && this->SSLPri_ == nullptr && this->SSLProtocol_ == nullptr && this->SSLPub_ == nullptr && this->securityToken_ == nullptr; };
    // certId Field Functions 
    bool hasCertId() const { return this->certId_ != nullptr;};
    void deleteCertId() { this->certId_ = nullptr;};
    inline int64_t getCertId() const { DARABONBA_PTR_GET_DEFAULT(certId_, 0L) };
    inline SetDcdnDomainSSLCertificateRequest& setCertId(int64_t certId) { DARABONBA_PTR_SET_VALUE(certId_, certId) };


    // certName Field Functions 
    bool hasCertName() const { return this->certName_ != nullptr;};
    void deleteCertName() { this->certName_ = nullptr;};
    inline string getCertName() const { DARABONBA_PTR_GET_DEFAULT(certName_, "") };
    inline SetDcdnDomainSSLCertificateRequest& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


    // certRegion Field Functions 
    bool hasCertRegion() const { return this->certRegion_ != nullptr;};
    void deleteCertRegion() { this->certRegion_ = nullptr;};
    inline string getCertRegion() const { DARABONBA_PTR_GET_DEFAULT(certRegion_, "") };
    inline SetDcdnDomainSSLCertificateRequest& setCertRegion(string certRegion) { DARABONBA_PTR_SET_VALUE(certRegion_, certRegion) };


    // certType Field Functions 
    bool hasCertType() const { return this->certType_ != nullptr;};
    void deleteCertType() { this->certType_ = nullptr;};
    inline string getCertType() const { DARABONBA_PTR_GET_DEFAULT(certType_, "") };
    inline SetDcdnDomainSSLCertificateRequest& setCertType(string certType) { DARABONBA_PTR_SET_VALUE(certType_, certType) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline SetDcdnDomainSSLCertificateRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline SetDcdnDomainSSLCertificateRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // SSLPri Field Functions 
    bool hasSSLPri() const { return this->SSLPri_ != nullptr;};
    void deleteSSLPri() { this->SSLPri_ = nullptr;};
    inline string getSSLPri() const { DARABONBA_PTR_GET_DEFAULT(SSLPri_, "") };
    inline SetDcdnDomainSSLCertificateRequest& setSSLPri(string SSLPri) { DARABONBA_PTR_SET_VALUE(SSLPri_, SSLPri) };


    // SSLProtocol Field Functions 
    bool hasSSLProtocol() const { return this->SSLProtocol_ != nullptr;};
    void deleteSSLProtocol() { this->SSLProtocol_ = nullptr;};
    inline string getSSLProtocol() const { DARABONBA_PTR_GET_DEFAULT(SSLProtocol_, "") };
    inline SetDcdnDomainSSLCertificateRequest& setSSLProtocol(string SSLProtocol) { DARABONBA_PTR_SET_VALUE(SSLProtocol_, SSLProtocol) };


    // SSLPub Field Functions 
    bool hasSSLPub() const { return this->SSLPub_ != nullptr;};
    void deleteSSLPub() { this->SSLPub_ = nullptr;};
    inline string getSSLPub() const { DARABONBA_PTR_GET_DEFAULT(SSLPub_, "") };
    inline SetDcdnDomainSSLCertificateRequest& setSSLPub(string SSLPub) { DARABONBA_PTR_SET_VALUE(SSLPub_, SSLPub) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline SetDcdnDomainSSLCertificateRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // The certificate ID. This parameter is required and valid only when **CertType** is set to **cas**. If you specify this parameter, an existing certificate is used.
    shared_ptr<int64_t> certId_ {};
    // The name of the new certificate. You can specify only one certificate name. This parameter is optional and valid only when **CertType** is set to **upload**.
    shared_ptr<string> certName_ {};
    // The region of the SSL certificate. This parameter takes effect only when **CertType** is set to **cas**. Default value: **cn-hangzhou**. Valid values: **cn-hangzhou** and **ap-southeast-1**.
    shared_ptr<string> certRegion_ {};
    // The type of the certificate. Valid values:
    // 
    // *   **upload**: a user-uploaded SSL certificate.
    // *   **cas**: a certificate that is acquired through Certificate Management Service.
    shared_ptr<string> certType_ {};
    // The domain name that is secured by the SSL certificate.
    // 
    // This parameter is required.
    shared_ptr<string> domainName_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The private key. Specify the private key only if you want to enable the SSL certificate.
    shared_ptr<string> SSLPri_ {};
    // Specifies whether to enable the SSL certificate. Valid values:
    // 
    // *   **on**
    // *   **off**
    // 
    // This parameter is required.
    shared_ptr<string> SSLProtocol_ {};
    // The content of the SSL certificate. Specify the content of the SSL certificate only if you want to enable the SSL certificate.
    shared_ptr<string> SSLPub_ {};
    shared_ptr<string> securityToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
