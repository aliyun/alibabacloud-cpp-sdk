// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFEDERATEDCREDENTIALPROVIDERRESPONSEBODYFEDERATEDCREDENTIALPROVIDERPKCS7PROVIDERCONFIGCERTIFICATES_HPP_
#define ALIBABACLOUD_MODELS_GETFEDERATEDCREDENTIALPROVIDERRESPONSEBODYFEDERATEDCREDENTIALPROVIDERPKCS7PROVIDERCONFIGCERTIFICATES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetFederatedCredentialProviderResponseBodyFederatedCredentialProviderPkcs7ProviderConfigCertificatesCertificateMetadata.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetFederatedCredentialProviderResponseBodyFederatedCredentialProviderPkcs7ProviderConfigCertificates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFederatedCredentialProviderResponseBodyFederatedCredentialProviderPkcs7ProviderConfigCertificates& obj) { 
      DARABONBA_PTR_TO_JSON(CertificateMetadata, certificateMetadata_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Fingerprint, fingerprint_);
    };
    friend void from_json(const Darabonba::Json& j, GetFederatedCredentialProviderResponseBodyFederatedCredentialProviderPkcs7ProviderConfigCertificates& obj) { 
      DARABONBA_PTR_FROM_JSON(CertificateMetadata, certificateMetadata_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Fingerprint, fingerprint_);
    };
    GetFederatedCredentialProviderResponseBodyFederatedCredentialProviderPkcs7ProviderConfigCertificates() = default ;
    GetFederatedCredentialProviderResponseBodyFederatedCredentialProviderPkcs7ProviderConfigCertificates(const GetFederatedCredentialProviderResponseBodyFederatedCredentialProviderPkcs7ProviderConfigCertificates &) = default ;
    GetFederatedCredentialProviderResponseBodyFederatedCredentialProviderPkcs7ProviderConfigCertificates(GetFederatedCredentialProviderResponseBodyFederatedCredentialProviderPkcs7ProviderConfigCertificates &&) = default ;
    GetFederatedCredentialProviderResponseBodyFederatedCredentialProviderPkcs7ProviderConfigCertificates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFederatedCredentialProviderResponseBodyFederatedCredentialProviderPkcs7ProviderConfigCertificates() = default ;
    GetFederatedCredentialProviderResponseBodyFederatedCredentialProviderPkcs7ProviderConfigCertificates& operator=(const GetFederatedCredentialProviderResponseBodyFederatedCredentialProviderPkcs7ProviderConfigCertificates &) = default ;
    GetFederatedCredentialProviderResponseBodyFederatedCredentialProviderPkcs7ProviderConfigCertificates& operator=(GetFederatedCredentialProviderResponseBodyFederatedCredentialProviderPkcs7ProviderConfigCertificates &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certificateMetadata_ == nullptr
        && return this->content_ == nullptr && return this->fingerprint_ == nullptr; };
    // certificateMetadata Field Functions 
    bool hasCertificateMetadata() const { return this->certificateMetadata_ != nullptr;};
    void deleteCertificateMetadata() { this->certificateMetadata_ = nullptr;};
    inline const Models::GetFederatedCredentialProviderResponseBodyFederatedCredentialProviderPkcs7ProviderConfigCertificatesCertificateMetadata & certificateMetadata() const { DARABONBA_PTR_GET_CONST(certificateMetadata_, Models::GetFederatedCredentialProviderResponseBodyFederatedCredentialProviderPkcs7ProviderConfigCertificatesCertificateMetadata) };
    inline Models::GetFederatedCredentialProviderResponseBodyFederatedCredentialProviderPkcs7ProviderConfigCertificatesCertificateMetadata certificateMetadata() { DARABONBA_PTR_GET(certificateMetadata_, Models::GetFederatedCredentialProviderResponseBodyFederatedCredentialProviderPkcs7ProviderConfigCertificatesCertificateMetadata) };
    inline GetFederatedCredentialProviderResponseBodyFederatedCredentialProviderPkcs7ProviderConfigCertificates& setCertificateMetadata(const Models::GetFederatedCredentialProviderResponseBodyFederatedCredentialProviderPkcs7ProviderConfigCertificatesCertificateMetadata & certificateMetadata) { DARABONBA_PTR_SET_VALUE(certificateMetadata_, certificateMetadata) };
    inline GetFederatedCredentialProviderResponseBodyFederatedCredentialProviderPkcs7ProviderConfigCertificates& setCertificateMetadata(Models::GetFederatedCredentialProviderResponseBodyFederatedCredentialProviderPkcs7ProviderConfigCertificatesCertificateMetadata && certificateMetadata) { DARABONBA_PTR_SET_RVALUE(certificateMetadata_, certificateMetadata) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline GetFederatedCredentialProviderResponseBodyFederatedCredentialProviderPkcs7ProviderConfigCertificates& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // fingerprint Field Functions 
    bool hasFingerprint() const { return this->fingerprint_ != nullptr;};
    void deleteFingerprint() { this->fingerprint_ = nullptr;};
    inline string fingerprint() const { DARABONBA_PTR_GET_DEFAULT(fingerprint_, "") };
    inline GetFederatedCredentialProviderResponseBodyFederatedCredentialProviderPkcs7ProviderConfigCertificates& setFingerprint(string fingerprint) { DARABONBA_PTR_SET_VALUE(fingerprint_, fingerprint) };


  protected:
    // 证书元数据
    std::shared_ptr<Models::GetFederatedCredentialProviderResponseBodyFederatedCredentialProviderPkcs7ProviderConfigCertificatesCertificateMetadata> certificateMetadata_ = nullptr;
    // Root证书内容
    std::shared_ptr<string> content_ = nullptr;
    // Root证书指纹
    std::shared_ptr<string> fingerprint_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
