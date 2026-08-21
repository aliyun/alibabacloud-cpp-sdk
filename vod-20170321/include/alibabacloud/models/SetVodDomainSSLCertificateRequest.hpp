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
    virtual bool empty() const override { return this->certId_ == nullptr
        && this->certName_ == nullptr && this->certRegion_ == nullptr && this->certType_ == nullptr && this->domainName_ == nullptr && this->env_ == nullptr
        && this->ownerId_ == nullptr && this->SSLPri_ == nullptr && this->SSLProtocol_ == nullptr && this->SSLPub_ == nullptr && this->securityToken_ == nullptr; };
    // certId Field Functions 
    bool hasCertId() const { return this->certId_ != nullptr;};
    void deleteCertId() { this->certId_ = nullptr;};
    inline int64_t getCertId() const { DARABONBA_PTR_GET_DEFAULT(certId_, 0L) };
    inline SetVodDomainSSLCertificateRequest& setCertId(int64_t certId) { DARABONBA_PTR_SET_VALUE(certId_, certId) };


    // certName Field Functions 
    bool hasCertName() const { return this->certName_ != nullptr;};
    void deleteCertName() { this->certName_ = nullptr;};
    inline string getCertName() const { DARABONBA_PTR_GET_DEFAULT(certName_, "") };
    inline SetVodDomainSSLCertificateRequest& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


    // certRegion Field Functions 
    bool hasCertRegion() const { return this->certRegion_ != nullptr;};
    void deleteCertRegion() { this->certRegion_ = nullptr;};
    inline string getCertRegion() const { DARABONBA_PTR_GET_DEFAULT(certRegion_, "") };
    inline SetVodDomainSSLCertificateRequest& setCertRegion(string certRegion) { DARABONBA_PTR_SET_VALUE(certRegion_, certRegion) };


    // certType Field Functions 
    bool hasCertType() const { return this->certType_ != nullptr;};
    void deleteCertType() { this->certType_ = nullptr;};
    inline string getCertType() const { DARABONBA_PTR_GET_DEFAULT(certType_, "") };
    inline SetVodDomainSSLCertificateRequest& setCertType(string certType) { DARABONBA_PTR_SET_VALUE(certType_, certType) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline SetVodDomainSSLCertificateRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline SetVodDomainSSLCertificateRequest& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline SetVodDomainSSLCertificateRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // SSLPri Field Functions 
    bool hasSSLPri() const { return this->SSLPri_ != nullptr;};
    void deleteSSLPri() { this->SSLPri_ = nullptr;};
    inline string getSSLPri() const { DARABONBA_PTR_GET_DEFAULT(SSLPri_, "") };
    inline SetVodDomainSSLCertificateRequest& setSSLPri(string SSLPri) { DARABONBA_PTR_SET_VALUE(SSLPri_, SSLPri) };


    // SSLProtocol Field Functions 
    bool hasSSLProtocol() const { return this->SSLProtocol_ != nullptr;};
    void deleteSSLProtocol() { this->SSLProtocol_ = nullptr;};
    inline string getSSLProtocol() const { DARABONBA_PTR_GET_DEFAULT(SSLProtocol_, "") };
    inline SetVodDomainSSLCertificateRequest& setSSLProtocol(string SSLProtocol) { DARABONBA_PTR_SET_VALUE(SSLProtocol_, SSLProtocol) };


    // SSLPub Field Functions 
    bool hasSSLPub() const { return this->SSLPub_ != nullptr;};
    void deleteSSLPub() { this->SSLPub_ = nullptr;};
    inline string getSSLPub() const { DARABONBA_PTR_GET_DEFAULT(SSLPub_, "") };
    inline SetVodDomainSSLCertificateRequest& setSSLPub(string SSLPub) { DARABONBA_PTR_SET_VALUE(SSLPub_, SSLPub) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline SetVodDomainSSLCertificateRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // The certificate ID.
    shared_ptr<int64_t> certId_ {};
    // The certificate name.
    shared_ptr<string> certName_ {};
    // The certificate region. Valid values:
    // - **ap-southeast-1** (Singapore)
    // - **cn-hangzhou** (Hangzhou)
    // 
    // Default value: **cn-hangzhou**.
    shared_ptr<string> certRegion_ {};
    // The certificate type. Valid values:
    // 
    // - **upload**: an uploaded certificate.
    // - **cas**: a certificate from SSL Certificates Service.
    shared_ptr<string> certType_ {};
    // The accelerated domain name for ApsaraVideo VOD.
    // 
    // This parameter is required.
    shared_ptr<string> domainName_ {};
    // Specifies whether to distribute the certificate in a canary release environment. Valid values:
    // 
    // - **staging**: distributes the certificate in a canary release environment.
    // 
    // If this parameter is not specified or set to any other value, the certificate is formally distributed.
    shared_ptr<string> env_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The content of the private key. If you do not enable the certificate, you do not need to specify this parameter. If you configure a certificate, enter the private key content.
    shared_ptr<string> SSLPri_ {};
    // Specifies whether to enable the HTTPS certificate. Valid values:
    // 
    // - **on**: Enabled.
    // - **off**: Disabled.
    // 
    // This parameter is required.
    shared_ptr<string> SSLProtocol_ {};
    // The content of the security certificate. If you do not enable the certificate, you do not need to specify this parameter. If you configure a certificate, enter the certificate content.
    shared_ptr<string> SSLPub_ {};
    shared_ptr<string> securityToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
