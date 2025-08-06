// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETVODDOMAINSSLCERTIFICATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETVODDOMAINSSLCERTIFICATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class SetVodDomainSSLCertificateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetVodDomainSSLCertificateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CertId, certId_);
      DARABONBA_PTR_TO_JSON(CertName, certName_);
      DARABONBA_PTR_TO_JSON(CertRegion, certRegion_);
      DARABONBA_PTR_TO_JSON(CertType, certType_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Env, env_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(SSLPri, SSLPri_);
      DARABONBA_PTR_TO_JSON(SSLProtocol, SSLProtocol_);
      DARABONBA_PTR_TO_JSON(SSLPub, SSLPub_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, SetVodDomainSSLCertificateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CertId, certId_);
      DARABONBA_PTR_FROM_JSON(CertName, certName_);
      DARABONBA_PTR_FROM_JSON(CertRegion, certRegion_);
      DARABONBA_PTR_FROM_JSON(CertType, certType_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Env, env_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(SSLPri, SSLPri_);
      DARABONBA_PTR_FROM_JSON(SSLProtocol, SSLProtocol_);
      DARABONBA_PTR_FROM_JSON(SSLPub, SSLPub_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    SetVodDomainSSLCertificateRequest() = default ;
    SetVodDomainSSLCertificateRequest(const SetVodDomainSSLCertificateRequest &) = default ;
    SetVodDomainSSLCertificateRequest(SetVodDomainSSLCertificateRequest &&) = default ;
    SetVodDomainSSLCertificateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetVodDomainSSLCertificateRequest() = default ;
    SetVodDomainSSLCertificateRequest& operator=(const SetVodDomainSSLCertificateRequest &) = default ;
    SetVodDomainSSLCertificateRequest& operator=(SetVodDomainSSLCertificateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certId_ != nullptr
        && this->certName_ != nullptr && this->certRegion_ != nullptr && this->certType_ != nullptr && this->domainName_ != nullptr && this->env_ != nullptr
        && this->ownerId_ != nullptr && this->SSLPri_ != nullptr && this->SSLProtocol_ != nullptr && this->SSLPub_ != nullptr && this->securityToken_ != nullptr; };
    // certId Field Functions 
    bool hasCertId() const { return this->certId_ != nullptr;};
    void deleteCertId() { this->certId_ = nullptr;};
    inline int64_t certId() const { DARABONBA_PTR_GET_DEFAULT(certId_, 0L) };
    inline SetVodDomainSSLCertificateRequest& setCertId(int64_t certId) { DARABONBA_PTR_SET_VALUE(certId_, certId) };


    // certName Field Functions 
    bool hasCertName() const { return this->certName_ != nullptr;};
    void deleteCertName() { this->certName_ = nullptr;};
    inline string certName() const { DARABONBA_PTR_GET_DEFAULT(certName_, "") };
    inline SetVodDomainSSLCertificateRequest& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


    // certRegion Field Functions 
    bool hasCertRegion() const { return this->certRegion_ != nullptr;};
    void deleteCertRegion() { this->certRegion_ = nullptr;};
    inline string certRegion() const { DARABONBA_PTR_GET_DEFAULT(certRegion_, "") };
    inline SetVodDomainSSLCertificateRequest& setCertRegion(string certRegion) { DARABONBA_PTR_SET_VALUE(certRegion_, certRegion) };


    // certType Field Functions 
    bool hasCertType() const { return this->certType_ != nullptr;};
    void deleteCertType() { this->certType_ = nullptr;};
    inline string certType() const { DARABONBA_PTR_GET_DEFAULT(certType_, "") };
    inline SetVodDomainSSLCertificateRequest& setCertType(string certType) { DARABONBA_PTR_SET_VALUE(certType_, certType) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline SetVodDomainSSLCertificateRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string env() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline SetVodDomainSSLCertificateRequest& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline SetVodDomainSSLCertificateRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // SSLPri Field Functions 
    bool hasSSLPri() const { return this->SSLPri_ != nullptr;};
    void deleteSSLPri() { this->SSLPri_ = nullptr;};
    inline string SSLPri() const { DARABONBA_PTR_GET_DEFAULT(SSLPri_, "") };
    inline SetVodDomainSSLCertificateRequest& setSSLPri(string SSLPri) { DARABONBA_PTR_SET_VALUE(SSLPri_, SSLPri) };


    // SSLProtocol Field Functions 
    bool hasSSLProtocol() const { return this->SSLProtocol_ != nullptr;};
    void deleteSSLProtocol() { this->SSLProtocol_ = nullptr;};
    inline string SSLProtocol() const { DARABONBA_PTR_GET_DEFAULT(SSLProtocol_, "") };
    inline SetVodDomainSSLCertificateRequest& setSSLProtocol(string SSLProtocol) { DARABONBA_PTR_SET_VALUE(SSLProtocol_, SSLProtocol) };


    // SSLPub Field Functions 
    bool hasSSLPub() const { return this->SSLPub_ != nullptr;};
    void deleteSSLPub() { this->SSLPub_ = nullptr;};
    inline string SSLPub() const { DARABONBA_PTR_GET_DEFAULT(SSLPub_, "") };
    inline SetVodDomainSSLCertificateRequest& setSSLPub(string SSLPub) { DARABONBA_PTR_SET_VALUE(SSLPub_, SSLPub) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline SetVodDomainSSLCertificateRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // The ID of the certificate.
    std::shared_ptr<int64_t> certId_ = nullptr;
    // The name of the certificate.
    std::shared_ptr<string> certName_ = nullptr;
    // The region of the certificate. Valid values:
    // 
    // *   **ap-southeast-1**: Singapore
    // *   **cn-hangzhou**: China (Hangzhou)
    // 
    // Default value: **cn-hangzhou**
    std::shared_ptr<string> certRegion_ = nullptr;
    // The type of the certificate.
    // 
    // *   **upload**: a user-uploaded SSL certificate.
    // *   **cas**: a certificate that is acquired through Certificate Management Service.
    std::shared_ptr<string> certType_ = nullptr;
    // VOD acceleration domain.
    // 
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    // Specifies whether the certificate is issued in canary releases. If you set this parameter to **staging**, the certificate is issued in canary releases. If you do not specify this parameter or set this parameter to other values, the certificate is officially issued.
    std::shared_ptr<string> env_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The private key. This parameter is required only if you enable the certificate.
    std::shared_ptr<string> SSLPri_ = nullptr;
    // Specifies whether to enable the SSL certificate. Default value: off. Valid values:
    // 
    // *   **on**
    // *   **off**
    // 
    // This parameter is required.
    std::shared_ptr<string> SSLProtocol_ = nullptr;
    // The content of the certificate. This parameter is required only if you enable the SSL certificate.
    std::shared_ptr<string> SSLPub_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
