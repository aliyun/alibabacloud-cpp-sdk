// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNTAGRESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNTAGRESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class UntagResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UntagResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CertificateId, certificateId_);
      DARABONBA_PTR_TO_JSON(KeyId, keyId_);
      DARABONBA_PTR_TO_JSON(SecretName, secretName_);
      DARABONBA_PTR_TO_JSON(TagKeys, tagKeys_);
    };
    friend void from_json(const Darabonba::Json& j, UntagResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CertificateId, certificateId_);
      DARABONBA_PTR_FROM_JSON(KeyId, keyId_);
      DARABONBA_PTR_FROM_JSON(SecretName, secretName_);
      DARABONBA_PTR_FROM_JSON(TagKeys, tagKeys_);
    };
    UntagResourceRequest() = default ;
    UntagResourceRequest(const UntagResourceRequest &) = default ;
    UntagResourceRequest(UntagResourceRequest &&) = default ;
    UntagResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UntagResourceRequest() = default ;
    UntagResourceRequest& operator=(const UntagResourceRequest &) = default ;
    UntagResourceRequest& operator=(UntagResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certificateId_ == nullptr
        && this->keyId_ == nullptr && this->secretName_ == nullptr && this->tagKeys_ == nullptr; };
    // certificateId Field Functions 
    bool hasCertificateId() const { return this->certificateId_ != nullptr;};
    void deleteCertificateId() { this->certificateId_ = nullptr;};
    inline string getCertificateId() const { DARABONBA_PTR_GET_DEFAULT(certificateId_, "") };
    inline UntagResourceRequest& setCertificateId(string certificateId) { DARABONBA_PTR_SET_VALUE(certificateId_, certificateId) };


    // keyId Field Functions 
    bool hasKeyId() const { return this->keyId_ != nullptr;};
    void deleteKeyId() { this->keyId_ = nullptr;};
    inline string getKeyId() const { DARABONBA_PTR_GET_DEFAULT(keyId_, "") };
    inline UntagResourceRequest& setKeyId(string keyId) { DARABONBA_PTR_SET_VALUE(keyId_, keyId) };


    // secretName Field Functions 
    bool hasSecretName() const { return this->secretName_ != nullptr;};
    void deleteSecretName() { this->secretName_ = nullptr;};
    inline string getSecretName() const { DARABONBA_PTR_GET_DEFAULT(secretName_, "") };
    inline UntagResourceRequest& setSecretName(string secretName) { DARABONBA_PTR_SET_VALUE(secretName_, secretName) };


    // tagKeys Field Functions 
    bool hasTagKeys() const { return this->tagKeys_ != nullptr;};
    void deleteTagKeys() { this->tagKeys_ = nullptr;};
    inline string getTagKeys() const { DARABONBA_PTR_GET_DEFAULT(tagKeys_, "") };
    inline UntagResourceRequest& setTagKeys(string tagKeys) { DARABONBA_PTR_SET_VALUE(tagKeys_, tagKeys) };


  protected:
    // The ID of the certificate.
    // 
    // > You must specify one and only one of the KeyId, SecretName, and CertificateId parameters.
    shared_ptr<string> certificateId_ {};
    // The ID of the key. This is the globally unique identifier (GUID) of the master key (CMK).
    // 
    // > You must specify one and only one of the KeyId, SecretName, and CertificateId parameters.
    shared_ptr<string> keyId_ {};
    // The name of the credential.
    // 
    // > You must specify one and only one of the KeyId, SecretName, and CertificateId parameters.
    shared_ptr<string> secretName_ {};
    // One or more tag keys. Separate multiple tag keys with commas (,).<br> You need to specify only tag keys, not tag values.<br> The tag key can be 1 to 128 bytes in length.<br><br>
    // 
    // This parameter is required.
    shared_ptr<string> tagKeys_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
