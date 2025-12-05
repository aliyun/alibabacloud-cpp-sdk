// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TAGRESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TAGRESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class TagResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TagResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CertificateId, certificateId_);
      DARABONBA_PTR_TO_JSON(KeyId, keyId_);
      DARABONBA_PTR_TO_JSON(SecretName, secretName_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, TagResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CertificateId, certificateId_);
      DARABONBA_PTR_FROM_JSON(KeyId, keyId_);
      DARABONBA_PTR_FROM_JSON(SecretName, secretName_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    TagResourceRequest() = default ;
    TagResourceRequest(const TagResourceRequest &) = default ;
    TagResourceRequest(TagResourceRequest &&) = default ;
    TagResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TagResourceRequest() = default ;
    TagResourceRequest& operator=(const TagResourceRequest &) = default ;
    TagResourceRequest& operator=(TagResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certificateId_ == nullptr
        && return this->keyId_ == nullptr && return this->secretName_ == nullptr && return this->tags_ == nullptr; };
    // certificateId Field Functions 
    bool hasCertificateId() const { return this->certificateId_ != nullptr;};
    void deleteCertificateId() { this->certificateId_ = nullptr;};
    inline string certificateId() const { DARABONBA_PTR_GET_DEFAULT(certificateId_, "") };
    inline TagResourceRequest& setCertificateId(string certificateId) { DARABONBA_PTR_SET_VALUE(certificateId_, certificateId) };


    // keyId Field Functions 
    bool hasKeyId() const { return this->keyId_ != nullptr;};
    void deleteKeyId() { this->keyId_ = nullptr;};
    inline string keyId() const { DARABONBA_PTR_GET_DEFAULT(keyId_, "") };
    inline TagResourceRequest& setKeyId(string keyId) { DARABONBA_PTR_SET_VALUE(keyId_, keyId) };


    // secretName Field Functions 
    bool hasSecretName() const { return this->secretName_ != nullptr;};
    void deleteSecretName() { this->secretName_ = nullptr;};
    inline string secretName() const { DARABONBA_PTR_GET_DEFAULT(secretName_, "") };
    inline TagResourceRequest& setSecretName(string secretName) { DARABONBA_PTR_SET_VALUE(secretName_, secretName) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string tags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline TagResourceRequest& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


  protected:
    // The ID of the certificate.
    // 
    // >  You can configure only one of the KeyId, SecretName, and CertificateId parameters.
    std::shared_ptr<string> certificateId_ = nullptr;
    // The ID of the customer master key (CMK). The ID must be globally unique.
    // 
    // >  You can configure only one of the KeyId, SecretName, and CertificateId parameters.
    std::shared_ptr<string> keyId_ = nullptr;
    // The name of the secret.
    // 
    // >  You can configure only one of the KeyId, SecretName, and CertificateId parameters.
    std::shared_ptr<string> secretName_ = nullptr;
    // One or more tags that you want to add. The value is in the array format.
    // 
    // Tag attributes:
    // 
    // *   TagKey: the tag key.
    // *   TagValue: the tag value.
    // 
    // This parameter is required.
    std::shared_ptr<string> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
