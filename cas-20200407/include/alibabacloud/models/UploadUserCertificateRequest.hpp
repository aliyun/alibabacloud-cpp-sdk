// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADUSERCERTIFICATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPLOADUSERCERTIFICATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UploadUserCertificateRequestTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class UploadUserCertificateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadUserCertificateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Cert, cert_);
      DARABONBA_PTR_TO_JSON(EncryptCert, encryptCert_);
      DARABONBA_PTR_TO_JSON(EncryptPrivateKey, encryptPrivateKey_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SignCert, signCert_);
      DARABONBA_PTR_TO_JSON(SignPrivateKey, signPrivateKey_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, UploadUserCertificateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Cert, cert_);
      DARABONBA_PTR_FROM_JSON(EncryptCert, encryptCert_);
      DARABONBA_PTR_FROM_JSON(EncryptPrivateKey, encryptPrivateKey_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SignCert, signCert_);
      DARABONBA_PTR_FROM_JSON(SignPrivateKey, signPrivateKey_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    UploadUserCertificateRequest() = default ;
    UploadUserCertificateRequest(const UploadUserCertificateRequest &) = default ;
    UploadUserCertificateRequest(UploadUserCertificateRequest &&) = default ;
    UploadUserCertificateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadUserCertificateRequest() = default ;
    UploadUserCertificateRequest& operator=(const UploadUserCertificateRequest &) = default ;
    UploadUserCertificateRequest& operator=(UploadUserCertificateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cert_ == nullptr
        && return this->encryptCert_ == nullptr && return this->encryptPrivateKey_ == nullptr && return this->key_ == nullptr && return this->name_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->signCert_ == nullptr && return this->signPrivateKey_ == nullptr && return this->tags_ == nullptr; };
    // cert Field Functions 
    bool hasCert() const { return this->cert_ != nullptr;};
    void deleteCert() { this->cert_ = nullptr;};
    inline string cert() const { DARABONBA_PTR_GET_DEFAULT(cert_, "") };
    inline UploadUserCertificateRequest& setCert(string cert) { DARABONBA_PTR_SET_VALUE(cert_, cert) };


    // encryptCert Field Functions 
    bool hasEncryptCert() const { return this->encryptCert_ != nullptr;};
    void deleteEncryptCert() { this->encryptCert_ = nullptr;};
    inline string encryptCert() const { DARABONBA_PTR_GET_DEFAULT(encryptCert_, "") };
    inline UploadUserCertificateRequest& setEncryptCert(string encryptCert) { DARABONBA_PTR_SET_VALUE(encryptCert_, encryptCert) };


    // encryptPrivateKey Field Functions 
    bool hasEncryptPrivateKey() const { return this->encryptPrivateKey_ != nullptr;};
    void deleteEncryptPrivateKey() { this->encryptPrivateKey_ = nullptr;};
    inline string encryptPrivateKey() const { DARABONBA_PTR_GET_DEFAULT(encryptPrivateKey_, "") };
    inline UploadUserCertificateRequest& setEncryptPrivateKey(string encryptPrivateKey) { DARABONBA_PTR_SET_VALUE(encryptPrivateKey_, encryptPrivateKey) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline UploadUserCertificateRequest& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UploadUserCertificateRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline UploadUserCertificateRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // signCert Field Functions 
    bool hasSignCert() const { return this->signCert_ != nullptr;};
    void deleteSignCert() { this->signCert_ = nullptr;};
    inline string signCert() const { DARABONBA_PTR_GET_DEFAULT(signCert_, "") };
    inline UploadUserCertificateRequest& setSignCert(string signCert) { DARABONBA_PTR_SET_VALUE(signCert_, signCert) };


    // signPrivateKey Field Functions 
    bool hasSignPrivateKey() const { return this->signPrivateKey_ != nullptr;};
    void deleteSignPrivateKey() { this->signPrivateKey_ = nullptr;};
    inline string signPrivateKey() const { DARABONBA_PTR_GET_DEFAULT(signPrivateKey_, "") };
    inline UploadUserCertificateRequest& setSignPrivateKey(string signPrivateKey) { DARABONBA_PTR_SET_VALUE(signPrivateKey_, signPrivateKey) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<UploadUserCertificateRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<UploadUserCertificateRequestTags>) };
    inline vector<UploadUserCertificateRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<UploadUserCertificateRequestTags>) };
    inline UploadUserCertificateRequest& setTags(const vector<UploadUserCertificateRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline UploadUserCertificateRequest& setTags(vector<UploadUserCertificateRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The content of the certificate in the PEM format.
    std::shared_ptr<string> cert_ = nullptr;
    // The content of the encryption certificate in PEM format.
    std::shared_ptr<string> encryptCert_ = nullptr;
    // The private key of the encryption certificate in the PEM format.
    std::shared_ptr<string> encryptPrivateKey_ = nullptr;
    // The private key of the certificate in the PEM format.
    std::shared_ptr<string> key_ = nullptr;
    // The name of the certificate. The name can be up to 64 characters in length, and can contain all types of characters, such as letters, digits, and underscores (_).
    // 
    // >  The name must be unique within an Alibaba Cloud account.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // the resource group id.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The content of the signing certificate in the PEM format.
    std::shared_ptr<string> signCert_ = nullptr;
    // The private key of the signing certificate in the PEM format.
    std::shared_ptr<string> signPrivateKey_ = nullptr;
    // The tags.
    std::shared_ptr<vector<UploadUserCertificateRequestTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
