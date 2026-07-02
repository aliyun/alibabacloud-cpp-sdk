// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLIENTKEYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCLIENTKEYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class GetClientKeyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClientKeyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AapName, aapName_);
      DARABONBA_PTR_TO_JSON(ClientKeyId, clientKeyId_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(KeyAlgorithm, keyAlgorithm_);
      DARABONBA_PTR_TO_JSON(KeyOrigin, keyOrigin_);
      DARABONBA_PTR_TO_JSON(NotAfter, notAfter_);
      DARABONBA_PTR_TO_JSON(NotBefore, notBefore_);
      DARABONBA_PTR_TO_JSON(PublicKeyData, publicKeyData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetClientKeyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AapName, aapName_);
      DARABONBA_PTR_FROM_JSON(ClientKeyId, clientKeyId_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(KeyAlgorithm, keyAlgorithm_);
      DARABONBA_PTR_FROM_JSON(KeyOrigin, keyOrigin_);
      DARABONBA_PTR_FROM_JSON(NotAfter, notAfter_);
      DARABONBA_PTR_FROM_JSON(NotBefore, notBefore_);
      DARABONBA_PTR_FROM_JSON(PublicKeyData, publicKeyData_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetClientKeyResponseBody() = default ;
    GetClientKeyResponseBody(const GetClientKeyResponseBody &) = default ;
    GetClientKeyResponseBody(GetClientKeyResponseBody &&) = default ;
    GetClientKeyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClientKeyResponseBody() = default ;
    GetClientKeyResponseBody& operator=(const GetClientKeyResponseBody &) = default ;
    GetClientKeyResponseBody& operator=(GetClientKeyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aapName_ == nullptr
        && this->clientKeyId_ == nullptr && this->createTime_ == nullptr && this->keyAlgorithm_ == nullptr && this->keyOrigin_ == nullptr && this->notAfter_ == nullptr
        && this->notBefore_ == nullptr && this->publicKeyData_ == nullptr && this->requestId_ == nullptr; };
    // aapName Field Functions 
    bool hasAapName() const { return this->aapName_ != nullptr;};
    void deleteAapName() { this->aapName_ = nullptr;};
    inline string getAapName() const { DARABONBA_PTR_GET_DEFAULT(aapName_, "") };
    inline GetClientKeyResponseBody& setAapName(string aapName) { DARABONBA_PTR_SET_VALUE(aapName_, aapName) };


    // clientKeyId Field Functions 
    bool hasClientKeyId() const { return this->clientKeyId_ != nullptr;};
    void deleteClientKeyId() { this->clientKeyId_ = nullptr;};
    inline string getClientKeyId() const { DARABONBA_PTR_GET_DEFAULT(clientKeyId_, "") };
    inline GetClientKeyResponseBody& setClientKeyId(string clientKeyId) { DARABONBA_PTR_SET_VALUE(clientKeyId_, clientKeyId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetClientKeyResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // keyAlgorithm Field Functions 
    bool hasKeyAlgorithm() const { return this->keyAlgorithm_ != nullptr;};
    void deleteKeyAlgorithm() { this->keyAlgorithm_ = nullptr;};
    inline string getKeyAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(keyAlgorithm_, "") };
    inline GetClientKeyResponseBody& setKeyAlgorithm(string keyAlgorithm) { DARABONBA_PTR_SET_VALUE(keyAlgorithm_, keyAlgorithm) };


    // keyOrigin Field Functions 
    bool hasKeyOrigin() const { return this->keyOrigin_ != nullptr;};
    void deleteKeyOrigin() { this->keyOrigin_ = nullptr;};
    inline string getKeyOrigin() const { DARABONBA_PTR_GET_DEFAULT(keyOrigin_, "") };
    inline GetClientKeyResponseBody& setKeyOrigin(string keyOrigin) { DARABONBA_PTR_SET_VALUE(keyOrigin_, keyOrigin) };


    // notAfter Field Functions 
    bool hasNotAfter() const { return this->notAfter_ != nullptr;};
    void deleteNotAfter() { this->notAfter_ = nullptr;};
    inline string getNotAfter() const { DARABONBA_PTR_GET_DEFAULT(notAfter_, "") };
    inline GetClientKeyResponseBody& setNotAfter(string notAfter) { DARABONBA_PTR_SET_VALUE(notAfter_, notAfter) };


    // notBefore Field Functions 
    bool hasNotBefore() const { return this->notBefore_ != nullptr;};
    void deleteNotBefore() { this->notBefore_ = nullptr;};
    inline string getNotBefore() const { DARABONBA_PTR_GET_DEFAULT(notBefore_, "") };
    inline GetClientKeyResponseBody& setNotBefore(string notBefore) { DARABONBA_PTR_SET_VALUE(notBefore_, notBefore) };


    // publicKeyData Field Functions 
    bool hasPublicKeyData() const { return this->publicKeyData_ != nullptr;};
    void deletePublicKeyData() { this->publicKeyData_ = nullptr;};
    inline string getPublicKeyData() const { DARABONBA_PTR_GET_DEFAULT(publicKeyData_, "") };
    inline GetClientKeyResponseBody& setPublicKeyData(string publicKeyData) { DARABONBA_PTR_SET_VALUE(publicKeyData_, publicKeyData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetClientKeyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The name of the application access point (AAP).
    shared_ptr<string> aapName_ {};
    // The ID of the client key.
    shared_ptr<string> clientKeyId_ {};
    // The time when the client key was created.
    shared_ptr<string> createTime_ {};
    // The algorithm of the private key for the client key.
    shared_ptr<string> keyAlgorithm_ {};
    // The creator of the client key.
    // 
    // Currently, client keys are generated only by KMS. The value is \\`KMS_PROVIDED\\`.
    shared_ptr<string> keyOrigin_ {};
    // The time when the client key expires.
    shared_ptr<string> notAfter_ {};
    // The time when the validity period of the client key starts.
    shared_ptr<string> notBefore_ {};
    // The content of the public key for the client key.
    shared_ptr<string> publicKeyData_ {};
    // The ID of the request. Alibaba Cloud generates this unique ID for each request. Use this ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
