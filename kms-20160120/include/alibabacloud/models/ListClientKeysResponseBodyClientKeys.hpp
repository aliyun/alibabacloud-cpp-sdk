// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLIENTKEYSRESPONSEBODYCLIENTKEYS_HPP_
#define ALIBABACLOUD_MODELS_LISTCLIENTKEYSRESPONSEBODYCLIENTKEYS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class ListClientKeysResponseBodyClientKeys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClientKeysResponseBodyClientKeys& obj) { 
      DARABONBA_PTR_TO_JSON(AapName, aapName_);
      DARABONBA_PTR_TO_JSON(ClientKeyId, clientKeyId_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(KeyAlgorithm, keyAlgorithm_);
      DARABONBA_PTR_TO_JSON(KeyOrigin, keyOrigin_);
      DARABONBA_PTR_TO_JSON(NotAfter, notAfter_);
      DARABONBA_PTR_TO_JSON(NotBefore, notBefore_);
      DARABONBA_PTR_TO_JSON(PublicKeyData, publicKeyData_);
    };
    friend void from_json(const Darabonba::Json& j, ListClientKeysResponseBodyClientKeys& obj) { 
      DARABONBA_PTR_FROM_JSON(AapName, aapName_);
      DARABONBA_PTR_FROM_JSON(ClientKeyId, clientKeyId_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(KeyAlgorithm, keyAlgorithm_);
      DARABONBA_PTR_FROM_JSON(KeyOrigin, keyOrigin_);
      DARABONBA_PTR_FROM_JSON(NotAfter, notAfter_);
      DARABONBA_PTR_FROM_JSON(NotBefore, notBefore_);
      DARABONBA_PTR_FROM_JSON(PublicKeyData, publicKeyData_);
    };
    ListClientKeysResponseBodyClientKeys() = default ;
    ListClientKeysResponseBodyClientKeys(const ListClientKeysResponseBodyClientKeys &) = default ;
    ListClientKeysResponseBodyClientKeys(ListClientKeysResponseBodyClientKeys &&) = default ;
    ListClientKeysResponseBodyClientKeys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClientKeysResponseBodyClientKeys() = default ;
    ListClientKeysResponseBodyClientKeys& operator=(const ListClientKeysResponseBodyClientKeys &) = default ;
    ListClientKeysResponseBodyClientKeys& operator=(ListClientKeysResponseBodyClientKeys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aapName_ == nullptr
        && return this->clientKeyId_ == nullptr && return this->createTime_ == nullptr && return this->keyAlgorithm_ == nullptr && return this->keyOrigin_ == nullptr && return this->notAfter_ == nullptr
        && return this->notBefore_ == nullptr && return this->publicKeyData_ == nullptr; };
    // aapName Field Functions 
    bool hasAapName() const { return this->aapName_ != nullptr;};
    void deleteAapName() { this->aapName_ = nullptr;};
    inline string aapName() const { DARABONBA_PTR_GET_DEFAULT(aapName_, "") };
    inline ListClientKeysResponseBodyClientKeys& setAapName(string aapName) { DARABONBA_PTR_SET_VALUE(aapName_, aapName) };


    // clientKeyId Field Functions 
    bool hasClientKeyId() const { return this->clientKeyId_ != nullptr;};
    void deleteClientKeyId() { this->clientKeyId_ = nullptr;};
    inline string clientKeyId() const { DARABONBA_PTR_GET_DEFAULT(clientKeyId_, "") };
    inline ListClientKeysResponseBodyClientKeys& setClientKeyId(string clientKeyId) { DARABONBA_PTR_SET_VALUE(clientKeyId_, clientKeyId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListClientKeysResponseBodyClientKeys& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // keyAlgorithm Field Functions 
    bool hasKeyAlgorithm() const { return this->keyAlgorithm_ != nullptr;};
    void deleteKeyAlgorithm() { this->keyAlgorithm_ = nullptr;};
    inline string keyAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(keyAlgorithm_, "") };
    inline ListClientKeysResponseBodyClientKeys& setKeyAlgorithm(string keyAlgorithm) { DARABONBA_PTR_SET_VALUE(keyAlgorithm_, keyAlgorithm) };


    // keyOrigin Field Functions 
    bool hasKeyOrigin() const { return this->keyOrigin_ != nullptr;};
    void deleteKeyOrigin() { this->keyOrigin_ = nullptr;};
    inline string keyOrigin() const { DARABONBA_PTR_GET_DEFAULT(keyOrigin_, "") };
    inline ListClientKeysResponseBodyClientKeys& setKeyOrigin(string keyOrigin) { DARABONBA_PTR_SET_VALUE(keyOrigin_, keyOrigin) };


    // notAfter Field Functions 
    bool hasNotAfter() const { return this->notAfter_ != nullptr;};
    void deleteNotAfter() { this->notAfter_ = nullptr;};
    inline string notAfter() const { DARABONBA_PTR_GET_DEFAULT(notAfter_, "") };
    inline ListClientKeysResponseBodyClientKeys& setNotAfter(string notAfter) { DARABONBA_PTR_SET_VALUE(notAfter_, notAfter) };


    // notBefore Field Functions 
    bool hasNotBefore() const { return this->notBefore_ != nullptr;};
    void deleteNotBefore() { this->notBefore_ = nullptr;};
    inline string notBefore() const { DARABONBA_PTR_GET_DEFAULT(notBefore_, "") };
    inline ListClientKeysResponseBodyClientKeys& setNotBefore(string notBefore) { DARABONBA_PTR_SET_VALUE(notBefore_, notBefore) };


    // publicKeyData Field Functions 
    bool hasPublicKeyData() const { return this->publicKeyData_ != nullptr;};
    void deletePublicKeyData() { this->publicKeyData_ = nullptr;};
    inline string publicKeyData() const { DARABONBA_PTR_GET_DEFAULT(publicKeyData_, "") };
    inline ListClientKeysResponseBodyClientKeys& setPublicKeyData(string publicKeyData) { DARABONBA_PTR_SET_VALUE(publicKeyData_, publicKeyData) };


  protected:
    // The name of the AAP.
    std::shared_ptr<string> aapName_ = nullptr;
    // The ID of the client key.
    std::shared_ptr<string> clientKeyId_ = nullptr;
    // The time when the client key was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The private key algorithm of the client key.
    std::shared_ptr<string> keyAlgorithm_ = nullptr;
    // The provider of the client key.
    // 
    // Currently, only KMS is supported. The value is fixed as KMS_PROVIDED.
    std::shared_ptr<string> keyOrigin_ = nullptr;
    // The end of the validity period of the client key.
    std::shared_ptr<string> notAfter_ = nullptr;
    // The beginning of the validity period of the client key.
    std::shared_ptr<string> notBefore_ = nullptr;
    // The public key of the client key.
    std::shared_ptr<string> publicKeyData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
