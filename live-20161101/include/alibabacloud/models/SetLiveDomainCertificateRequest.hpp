// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETLIVEDOMAINCERTIFICATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETLIVEDOMAINCERTIFICATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class SetLiveDomainCertificateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetLiveDomainCertificateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CertName, certName_);
      DARABONBA_PTR_TO_JSON(CertType, certType_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(ForceSet, forceSet_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(SSLPri, SSLPri_);
      DARABONBA_PTR_TO_JSON(SSLProtocol, SSLProtocol_);
      DARABONBA_PTR_TO_JSON(SSLPub, SSLPub_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, SetLiveDomainCertificateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CertName, certName_);
      DARABONBA_PTR_FROM_JSON(CertType, certType_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(ForceSet, forceSet_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(SSLPri, SSLPri_);
      DARABONBA_PTR_FROM_JSON(SSLProtocol, SSLProtocol_);
      DARABONBA_PTR_FROM_JSON(SSLPub, SSLPub_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    SetLiveDomainCertificateRequest() = default ;
    SetLiveDomainCertificateRequest(const SetLiveDomainCertificateRequest &) = default ;
    SetLiveDomainCertificateRequest(SetLiveDomainCertificateRequest &&) = default ;
    SetLiveDomainCertificateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetLiveDomainCertificateRequest() = default ;
    SetLiveDomainCertificateRequest& operator=(const SetLiveDomainCertificateRequest &) = default ;
    SetLiveDomainCertificateRequest& operator=(SetLiveDomainCertificateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certName_ == nullptr
        && this->certType_ == nullptr && this->domainName_ == nullptr && this->forceSet_ == nullptr && this->ownerId_ == nullptr && this->SSLPri_ == nullptr
        && this->SSLProtocol_ == nullptr && this->SSLPub_ == nullptr && this->securityToken_ == nullptr; };
    // certName Field Functions 
    bool hasCertName() const { return this->certName_ != nullptr;};
    void deleteCertName() { this->certName_ = nullptr;};
    inline string getCertName() const { DARABONBA_PTR_GET_DEFAULT(certName_, "") };
    inline SetLiveDomainCertificateRequest& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


    // certType Field Functions 
    bool hasCertType() const { return this->certType_ != nullptr;};
    void deleteCertType() { this->certType_ = nullptr;};
    inline string getCertType() const { DARABONBA_PTR_GET_DEFAULT(certType_, "") };
    inline SetLiveDomainCertificateRequest& setCertType(string certType) { DARABONBA_PTR_SET_VALUE(certType_, certType) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline SetLiveDomainCertificateRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // forceSet Field Functions 
    bool hasForceSet() const { return this->forceSet_ != nullptr;};
    void deleteForceSet() { this->forceSet_ = nullptr;};
    inline string getForceSet() const { DARABONBA_PTR_GET_DEFAULT(forceSet_, "") };
    inline SetLiveDomainCertificateRequest& setForceSet(string forceSet) { DARABONBA_PTR_SET_VALUE(forceSet_, forceSet) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline SetLiveDomainCertificateRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // SSLPri Field Functions 
    bool hasSSLPri() const { return this->SSLPri_ != nullptr;};
    void deleteSSLPri() { this->SSLPri_ = nullptr;};
    inline string getSSLPri() const { DARABONBA_PTR_GET_DEFAULT(SSLPri_, "") };
    inline SetLiveDomainCertificateRequest& setSSLPri(string SSLPri) { DARABONBA_PTR_SET_VALUE(SSLPri_, SSLPri) };


    // SSLProtocol Field Functions 
    bool hasSSLProtocol() const { return this->SSLProtocol_ != nullptr;};
    void deleteSSLProtocol() { this->SSLProtocol_ = nullptr;};
    inline string getSSLProtocol() const { DARABONBA_PTR_GET_DEFAULT(SSLProtocol_, "") };
    inline SetLiveDomainCertificateRequest& setSSLProtocol(string SSLProtocol) { DARABONBA_PTR_SET_VALUE(SSLProtocol_, SSLProtocol) };


    // SSLPub Field Functions 
    bool hasSSLPub() const { return this->SSLPub_ != nullptr;};
    void deleteSSLPub() { this->SSLPub_ = nullptr;};
    inline string getSSLPub() const { DARABONBA_PTR_GET_DEFAULT(SSLPub_, "") };
    inline SetLiveDomainCertificateRequest& setSSLPub(string SSLPub) { DARABONBA_PTR_SET_VALUE(SSLPub_, SSLPub) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline SetLiveDomainCertificateRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // The certificate name.
    shared_ptr<string> certName_ {};
    // The certificate type. Valid values:
    // 
    // *   **upload**: a custom certificate
    // *   **cas**: a certificate that is purchased from Certificate Management Service
    // *   **free**: a free certificate (for testing)
    shared_ptr<string> certType_ {};
    // The domain name that is secured by the certificate. The domain name uses `HTTPS`-based acceleration.
    // 
    // This parameter is required.
    shared_ptr<string> domainName_ {};
    // Specifies whether to check the certificate name for duplicates. A value of 1 indicates that the system does not perform the check and overwrites the information about the certificate that has the same name. Set the value to **1**.
    shared_ptr<string> forceSet_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The private key.
    // 
    // >  This parameter is required only if you set the SSLProtocol parameter to on.
    shared_ptr<string> SSLPri_ {};
    // Specifies whether to enable the HTTPS certificate. Valid values:
    // 
    // *   **on**. If you set this parameter to **on**, you must also specify the SSLPub and SSLPri parameters.
    // *   **off**. This is the default value.
    // 
    // This parameter is required.
    shared_ptr<string> SSLProtocol_ {};
    // The public key.
    // 
    // >  This parameter is required only if you set the SSLProtocol parameter to on.
    shared_ptr<string> SSLPub_ {};
    shared_ptr<string> securityToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
