// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFEDERATEDCREDENTIALPROVIDERRESPONSEBODYFEDERATEDCREDENTIALPROVIDERPRIVATECAPROVIDERCONFIGCERTIFICATES_HPP_
#define ALIBABACLOUD_MODELS_GETFEDERATEDCREDENTIALPROVIDERRESPONSEBODYFEDERATEDCREDENTIALPROVIDERPRIVATECAPROVIDERCONFIGCERTIFICATES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetFederatedCredentialProviderResponseBodyFederatedCredentialProviderPrivateCaProviderConfigCertificatesCertificateMetadata.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetFederatedCredentialProviderResponseBodyFederatedCredentialProviderPrivateCaProviderConfigCertificates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFederatedCredentialProviderResponseBodyFederatedCredentialProviderPrivateCaProviderConfigCertificates& obj) { 
      DARABONBA_PTR_TO_JSON(CertificateMetadata, certificateMetadata_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Fingerprint, fingerprint_);
    };
    friend void from_json(const Darabonba::Json& j, GetFederatedCredentialProviderResponseBodyFederatedCredentialProviderPrivateCaProviderConfigCertificates& obj) { 
      DARABONBA_PTR_FROM_JSON(CertificateMetadata, certificateMetadata_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Fingerprint, fingerprint_);
    };
    GetFederatedCredentialProviderResponseBodyFederatedCredentialProviderPrivateCaProviderConfigCertificates() = default ;
    GetFederatedCredentialProviderResponseBodyFederatedCredentialProviderPrivateCaProviderConfigCertificates(const GetFederatedCredentialProviderResponseBodyFederatedCredentialProviderPrivateCaProviderConfigCertificates &) = default ;
    GetFederatedCredentialProviderResponseBodyFederatedCredentialProviderPrivateCaProviderConfigCertificates(GetFederatedCredentialProviderResponseBodyFederatedCredentialProviderPrivateCaProviderConfigCertificates &&) = default ;
    GetFederatedCredentialProviderResponseBodyFederatedCredentialProviderPrivateCaProviderConfigCertificates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFederatedCredentialProviderResponseBodyFederatedCredentialProviderPrivateCaProviderConfigCertificates() = default ;
    GetFederatedCredentialProviderResponseBodyFederatedCredentialProviderPrivateCaProviderConfigCertificates& operator=(const GetFederatedCredentialProviderResponseBodyFederatedCredentialProviderPrivateCaProviderConfigCertificates &) = default ;
    GetFederatedCredentialProviderResponseBodyFederatedCredentialProviderPrivateCaProviderConfigCertificates& operator=(GetFederatedCredentialProviderResponseBodyFederatedCredentialProviderPrivateCaProviderConfigCertificates &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certificateMetadata_ == nullptr
        && return this->content_ == nullptr && return this->fingerprint_ == nullptr; };
    // certificateMetadata Field Functions 
    bool hasCertificateMetadata() const { return this->certificateMetadata_ != nullptr;};
    void deleteCertificateMetadata() { this->certificateMetadata_ = nullptr;};
    inline const Models::GetFederatedCredentialProviderResponseBodyFederatedCredentialProviderPrivateCaProviderConfigCertificatesCertificateMetadata & certificateMetadata() const { DARABONBA_PTR_GET_CONST(certificateMetadata_, Models::GetFederatedCredentialProviderResponseBodyFederatedCredentialProviderPrivateCaProviderConfigCertificatesCertificateMetadata) };
    inline Models::GetFederatedCredentialProviderResponseBodyFederatedCredentialProviderPrivateCaProviderConfigCertificatesCertificateMetadata certificateMetadata() { DARABONBA_PTR_GET(certificateMetadata_, Models::GetFederatedCredentialProviderResponseBodyFederatedCredentialProviderPrivateCaProviderConfigCertificatesCertificateMetadata) };
    inline GetFederatedCredentialProviderResponseBodyFederatedCredentialProviderPrivateCaProviderConfigCertificates& setCertificateMetadata(const Models::GetFederatedCredentialProviderResponseBodyFederatedCredentialProviderPrivateCaProviderConfigCertificatesCertificateMetadata & certificateMetadata) { DARABONBA_PTR_SET_VALUE(certificateMetadata_, certificateMetadata) };
    inline GetFederatedCredentialProviderResponseBodyFederatedCredentialProviderPrivateCaProviderConfigCertificates& setCertificateMetadata(Models::GetFederatedCredentialProviderResponseBodyFederatedCredentialProviderPrivateCaProviderConfigCertificatesCertificateMetadata && certificateMetadata) { DARABONBA_PTR_SET_RVALUE(certificateMetadata_, certificateMetadata) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline GetFederatedCredentialProviderResponseBodyFederatedCredentialProviderPrivateCaProviderConfigCertificates& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // fingerprint Field Functions 
    bool hasFingerprint() const { return this->fingerprint_ != nullptr;};
    void deleteFingerprint() { this->fingerprint_ = nullptr;};
    inline string fingerprint() const { DARABONBA_PTR_GET_DEFAULT(fingerprint_, "") };
    inline GetFederatedCredentialProviderResponseBodyFederatedCredentialProviderPrivateCaProviderConfigCertificates& setFingerprint(string fingerprint) { DARABONBA_PTR_SET_VALUE(fingerprint_, fingerprint) };


  protected:
    // 证书元数据
    std::shared_ptr<Models::GetFederatedCredentialProviderResponseBodyFederatedCredentialProviderPrivateCaProviderConfigCertificatesCertificateMetadata> certificateMetadata_ = nullptr;
    // Root证书内容
    std::shared_ptr<string> content_ = nullptr;
    // Root证书指纹
    std::shared_ptr<string> fingerprint_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
