// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETDOMAINCERTIFICATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETDOMAINCERTIFICATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class SetDomainCertificateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetDomainCertificateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CaCertificateBody, caCertificateBody_);
      DARABONBA_PTR_TO_JSON(CertificateBody, certificateBody_);
      DARABONBA_PTR_TO_JSON(CertificateName, certificateName_);
      DARABONBA_PTR_TO_JSON(CertificatePrivateKey, certificatePrivateKey_);
      DARABONBA_PTR_TO_JSON(ClientCertSDnPassThrough, clientCertSDnPassThrough_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(SslOcspCacheEnable, sslOcspCacheEnable_);
      DARABONBA_PTR_TO_JSON(SslOcspEnable, sslOcspEnable_);
      DARABONBA_PTR_TO_JSON(SslVerifyDepth, sslVerifyDepth_);
    };
    friend void from_json(const Darabonba::Json& j, SetDomainCertificateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CaCertificateBody, caCertificateBody_);
      DARABONBA_PTR_FROM_JSON(CertificateBody, certificateBody_);
      DARABONBA_PTR_FROM_JSON(CertificateName, certificateName_);
      DARABONBA_PTR_FROM_JSON(CertificatePrivateKey, certificatePrivateKey_);
      DARABONBA_PTR_FROM_JSON(ClientCertSDnPassThrough, clientCertSDnPassThrough_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(SslOcspCacheEnable, sslOcspCacheEnable_);
      DARABONBA_PTR_FROM_JSON(SslOcspEnable, sslOcspEnable_);
      DARABONBA_PTR_FROM_JSON(SslVerifyDepth, sslVerifyDepth_);
    };
    SetDomainCertificateRequest() = default ;
    SetDomainCertificateRequest(const SetDomainCertificateRequest &) = default ;
    SetDomainCertificateRequest(SetDomainCertificateRequest &&) = default ;
    SetDomainCertificateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetDomainCertificateRequest() = default ;
    SetDomainCertificateRequest& operator=(const SetDomainCertificateRequest &) = default ;
    SetDomainCertificateRequest& operator=(SetDomainCertificateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->caCertificateBody_ == nullptr
        && return this->certificateBody_ == nullptr && return this->certificateName_ == nullptr && return this->certificatePrivateKey_ == nullptr && return this->clientCertSDnPassThrough_ == nullptr && return this->domainName_ == nullptr
        && return this->groupId_ == nullptr && return this->securityToken_ == nullptr && return this->sslOcspCacheEnable_ == nullptr && return this->sslOcspEnable_ == nullptr && return this->sslVerifyDepth_ == nullptr; };
    // caCertificateBody Field Functions 
    bool hasCaCertificateBody() const { return this->caCertificateBody_ != nullptr;};
    void deleteCaCertificateBody() { this->caCertificateBody_ = nullptr;};
    inline string caCertificateBody() const { DARABONBA_PTR_GET_DEFAULT(caCertificateBody_, "") };
    inline SetDomainCertificateRequest& setCaCertificateBody(string caCertificateBody) { DARABONBA_PTR_SET_VALUE(caCertificateBody_, caCertificateBody) };


    // certificateBody Field Functions 
    bool hasCertificateBody() const { return this->certificateBody_ != nullptr;};
    void deleteCertificateBody() { this->certificateBody_ = nullptr;};
    inline string certificateBody() const { DARABONBA_PTR_GET_DEFAULT(certificateBody_, "") };
    inline SetDomainCertificateRequest& setCertificateBody(string certificateBody) { DARABONBA_PTR_SET_VALUE(certificateBody_, certificateBody) };


    // certificateName Field Functions 
    bool hasCertificateName() const { return this->certificateName_ != nullptr;};
    void deleteCertificateName() { this->certificateName_ = nullptr;};
    inline string certificateName() const { DARABONBA_PTR_GET_DEFAULT(certificateName_, "") };
    inline SetDomainCertificateRequest& setCertificateName(string certificateName) { DARABONBA_PTR_SET_VALUE(certificateName_, certificateName) };


    // certificatePrivateKey Field Functions 
    bool hasCertificatePrivateKey() const { return this->certificatePrivateKey_ != nullptr;};
    void deleteCertificatePrivateKey() { this->certificatePrivateKey_ = nullptr;};
    inline string certificatePrivateKey() const { DARABONBA_PTR_GET_DEFAULT(certificatePrivateKey_, "") };
    inline SetDomainCertificateRequest& setCertificatePrivateKey(string certificatePrivateKey) { DARABONBA_PTR_SET_VALUE(certificatePrivateKey_, certificatePrivateKey) };


    // clientCertSDnPassThrough Field Functions 
    bool hasClientCertSDnPassThrough() const { return this->clientCertSDnPassThrough_ != nullptr;};
    void deleteClientCertSDnPassThrough() { this->clientCertSDnPassThrough_ = nullptr;};
    inline bool clientCertSDnPassThrough() const { DARABONBA_PTR_GET_DEFAULT(clientCertSDnPassThrough_, false) };
    inline SetDomainCertificateRequest& setClientCertSDnPassThrough(bool clientCertSDnPassThrough) { DARABONBA_PTR_SET_VALUE(clientCertSDnPassThrough_, clientCertSDnPassThrough) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline SetDomainCertificateRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline SetDomainCertificateRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline SetDomainCertificateRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // sslOcspCacheEnable Field Functions 
    bool hasSslOcspCacheEnable() const { return this->sslOcspCacheEnable_ != nullptr;};
    void deleteSslOcspCacheEnable() { this->sslOcspCacheEnable_ = nullptr;};
    inline bool sslOcspCacheEnable() const { DARABONBA_PTR_GET_DEFAULT(sslOcspCacheEnable_, false) };
    inline SetDomainCertificateRequest& setSslOcspCacheEnable(bool sslOcspCacheEnable) { DARABONBA_PTR_SET_VALUE(sslOcspCacheEnable_, sslOcspCacheEnable) };


    // sslOcspEnable Field Functions 
    bool hasSslOcspEnable() const { return this->sslOcspEnable_ != nullptr;};
    void deleteSslOcspEnable() { this->sslOcspEnable_ = nullptr;};
    inline bool sslOcspEnable() const { DARABONBA_PTR_GET_DEFAULT(sslOcspEnable_, false) };
    inline SetDomainCertificateRequest& setSslOcspEnable(bool sslOcspEnable) { DARABONBA_PTR_SET_VALUE(sslOcspEnable_, sslOcspEnable) };


    // sslVerifyDepth Field Functions 
    bool hasSslVerifyDepth() const { return this->sslVerifyDepth_ != nullptr;};
    void deleteSslVerifyDepth() { this->sslVerifyDepth_ = nullptr;};
    inline string sslVerifyDepth() const { DARABONBA_PTR_GET_DEFAULT(sslVerifyDepth_, "") };
    inline SetDomainCertificateRequest& setSslVerifyDepth(string sslVerifyDepth) { DARABONBA_PTR_SET_VALUE(sslVerifyDepth_, sslVerifyDepth) };


  protected:
    // The content of the CA certificate.
    std::shared_ptr<string> caCertificateBody_ = nullptr;
    // The content of the certificate.
    std::shared_ptr<string> certificateBody_ = nullptr;
    // The name of the SSL certificate.
    // 
    // This parameter is required.
    std::shared_ptr<string> certificateName_ = nullptr;
    // The private key of the SSL certificate.
    std::shared_ptr<string> certificatePrivateKey_ = nullptr;
    // If pass ssl_client_s_dn of the cert to backend header \\"X-Client-S-Dn\\".
    std::shared_ptr<bool> clientCertSDnPassThrough_ = nullptr;
    // The custom domain name.
    // 
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    // The ID of the API group. This ID is generated by the system and globally unique.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupId_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
    // If enable ssl OCSP cache.
    std::shared_ptr<bool> sslOcspCacheEnable_ = nullptr;
    // If enable ssl OCSP.
    std::shared_ptr<bool> sslOcspEnable_ = nullptr;
    // The certificate verification depth.
    std::shared_ptr<string> sslVerifyDepth_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
