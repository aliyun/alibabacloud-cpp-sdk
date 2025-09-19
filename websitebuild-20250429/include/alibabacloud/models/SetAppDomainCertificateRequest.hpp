// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETAPPDOMAINCERTIFICATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETAPPDOMAINCERTIFICATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class SetAppDomainCertificateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetAppDomainCertificateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(CertificateName, certificateName_);
      DARABONBA_PTR_TO_JSON(CertificateType, certificateType_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(PrivateKey, privateKey_);
      DARABONBA_PTR_TO_JSON(PublicKey, publicKey_);
    };
    friend void from_json(const Darabonba::Json& j, SetAppDomainCertificateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(CertificateName, certificateName_);
      DARABONBA_PTR_FROM_JSON(CertificateType, certificateType_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(PrivateKey, privateKey_);
      DARABONBA_PTR_FROM_JSON(PublicKey, publicKey_);
    };
    SetAppDomainCertificateRequest() = default ;
    SetAppDomainCertificateRequest(const SetAppDomainCertificateRequest &) = default ;
    SetAppDomainCertificateRequest(SetAppDomainCertificateRequest &&) = default ;
    SetAppDomainCertificateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetAppDomainCertificateRequest() = default ;
    SetAppDomainCertificateRequest& operator=(const SetAppDomainCertificateRequest &) = default ;
    SetAppDomainCertificateRequest& operator=(SetAppDomainCertificateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizId_ != nullptr
        && this->certificateName_ != nullptr && this->certificateType_ != nullptr && this->domainName_ != nullptr && this->privateKey_ != nullptr && this->publicKey_ != nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string bizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline SetAppDomainCertificateRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // certificateName Field Functions 
    bool hasCertificateName() const { return this->certificateName_ != nullptr;};
    void deleteCertificateName() { this->certificateName_ = nullptr;};
    inline string certificateName() const { DARABONBA_PTR_GET_DEFAULT(certificateName_, "") };
    inline SetAppDomainCertificateRequest& setCertificateName(string certificateName) { DARABONBA_PTR_SET_VALUE(certificateName_, certificateName) };


    // certificateType Field Functions 
    bool hasCertificateType() const { return this->certificateType_ != nullptr;};
    void deleteCertificateType() { this->certificateType_ = nullptr;};
    inline string certificateType() const { DARABONBA_PTR_GET_DEFAULT(certificateType_, "") };
    inline SetAppDomainCertificateRequest& setCertificateType(string certificateType) { DARABONBA_PTR_SET_VALUE(certificateType_, certificateType) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline SetAppDomainCertificateRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // privateKey Field Functions 
    bool hasPrivateKey() const { return this->privateKey_ != nullptr;};
    void deletePrivateKey() { this->privateKey_ = nullptr;};
    inline string privateKey() const { DARABONBA_PTR_GET_DEFAULT(privateKey_, "") };
    inline SetAppDomainCertificateRequest& setPrivateKey(string privateKey) { DARABONBA_PTR_SET_VALUE(privateKey_, privateKey) };


    // publicKey Field Functions 
    bool hasPublicKey() const { return this->publicKey_ != nullptr;};
    void deletePublicKey() { this->publicKey_ = nullptr;};
    inline string publicKey() const { DARABONBA_PTR_GET_DEFAULT(publicKey_, "") };
    inline SetAppDomainCertificateRequest& setPublicKey(string publicKey) { DARABONBA_PTR_SET_VALUE(publicKey_, publicKey) };


  protected:
    std::shared_ptr<string> bizId_ = nullptr;
    std::shared_ptr<string> certificateName_ = nullptr;
    std::shared_ptr<string> certificateType_ = nullptr;
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<string> privateKey_ = nullptr;
    std::shared_ptr<string> publicKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
