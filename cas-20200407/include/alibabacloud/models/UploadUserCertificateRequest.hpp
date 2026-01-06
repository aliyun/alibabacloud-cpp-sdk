// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADUSERCERTIFICATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPLOADUSERCERTIFICATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tags() = default ;
      Tags(const Tags &) = default ;
      Tags(Tags &&) = default ;
      Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tags() = default ;
      Tags& operator=(const Tags &) = default ;
      Tags& operator=(Tags &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key.
      shared_ptr<string> key_ {};
      // The tag value.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->cert_ == nullptr
        && this->encryptCert_ == nullptr && this->encryptPrivateKey_ == nullptr && this->key_ == nullptr && this->name_ == nullptr && this->resourceGroupId_ == nullptr
        && this->signCert_ == nullptr && this->signPrivateKey_ == nullptr && this->tags_ == nullptr; };
    // cert Field Functions 
    bool hasCert() const { return this->cert_ != nullptr;};
    void deleteCert() { this->cert_ = nullptr;};
    inline string getCert() const { DARABONBA_PTR_GET_DEFAULT(cert_, "") };
    inline UploadUserCertificateRequest& setCert(string cert) { DARABONBA_PTR_SET_VALUE(cert_, cert) };


    // encryptCert Field Functions 
    bool hasEncryptCert() const { return this->encryptCert_ != nullptr;};
    void deleteEncryptCert() { this->encryptCert_ = nullptr;};
    inline string getEncryptCert() const { DARABONBA_PTR_GET_DEFAULT(encryptCert_, "") };
    inline UploadUserCertificateRequest& setEncryptCert(string encryptCert) { DARABONBA_PTR_SET_VALUE(encryptCert_, encryptCert) };


    // encryptPrivateKey Field Functions 
    bool hasEncryptPrivateKey() const { return this->encryptPrivateKey_ != nullptr;};
    void deleteEncryptPrivateKey() { this->encryptPrivateKey_ = nullptr;};
    inline string getEncryptPrivateKey() const { DARABONBA_PTR_GET_DEFAULT(encryptPrivateKey_, "") };
    inline UploadUserCertificateRequest& setEncryptPrivateKey(string encryptPrivateKey) { DARABONBA_PTR_SET_VALUE(encryptPrivateKey_, encryptPrivateKey) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline UploadUserCertificateRequest& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UploadUserCertificateRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline UploadUserCertificateRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // signCert Field Functions 
    bool hasSignCert() const { return this->signCert_ != nullptr;};
    void deleteSignCert() { this->signCert_ = nullptr;};
    inline string getSignCert() const { DARABONBA_PTR_GET_DEFAULT(signCert_, "") };
    inline UploadUserCertificateRequest& setSignCert(string signCert) { DARABONBA_PTR_SET_VALUE(signCert_, signCert) };


    // signPrivateKey Field Functions 
    bool hasSignPrivateKey() const { return this->signPrivateKey_ != nullptr;};
    void deleteSignPrivateKey() { this->signPrivateKey_ = nullptr;};
    inline string getSignPrivateKey() const { DARABONBA_PTR_GET_DEFAULT(signPrivateKey_, "") };
    inline UploadUserCertificateRequest& setSignPrivateKey(string signPrivateKey) { DARABONBA_PTR_SET_VALUE(signPrivateKey_, signPrivateKey) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<UploadUserCertificateRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<UploadUserCertificateRequest::Tags>) };
    inline vector<UploadUserCertificateRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<UploadUserCertificateRequest::Tags>) };
    inline UploadUserCertificateRequest& setTags(const vector<UploadUserCertificateRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline UploadUserCertificateRequest& setTags(vector<UploadUserCertificateRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The content of the certificate in the PEM format.
    shared_ptr<string> cert_ {};
    // The content of the encryption certificate in PEM format.
    shared_ptr<string> encryptCert_ {};
    // The private key of the encryption certificate in the PEM format.
    shared_ptr<string> encryptPrivateKey_ {};
    // The private key of the certificate in the PEM format.
    shared_ptr<string> key_ {};
    // The name of the certificate. The name can be up to 64 characters in length, and can contain all types of characters, such as letters, digits, and underscores (_).
    // 
    // >  The name must be unique within an Alibaba Cloud account.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // the resource group id.
    shared_ptr<string> resourceGroupId_ {};
    // The content of the signing certificate in the PEM format.
    shared_ptr<string> signCert_ {};
    // The private key of the signing certificate in the PEM format.
    shared_ptr<string> signPrivateKey_ {};
    // The tags.
    shared_ptr<vector<UploadUserCertificateRequest::Tags>> tags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
