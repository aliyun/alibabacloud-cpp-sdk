// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLIENTKEYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECLIENTKEYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class CreateClientKeyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateClientKeyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClientKeyId, clientKeyId_);
      DARABONBA_PTR_TO_JSON(KeyAlgorithm, keyAlgorithm_);
      DARABONBA_PTR_TO_JSON(NotAfter, notAfter_);
      DARABONBA_PTR_TO_JSON(NotBefore, notBefore_);
      DARABONBA_PTR_TO_JSON(PrivateKeyData, privateKeyData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateClientKeyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientKeyId, clientKeyId_);
      DARABONBA_PTR_FROM_JSON(KeyAlgorithm, keyAlgorithm_);
      DARABONBA_PTR_FROM_JSON(NotAfter, notAfter_);
      DARABONBA_PTR_FROM_JSON(NotBefore, notBefore_);
      DARABONBA_PTR_FROM_JSON(PrivateKeyData, privateKeyData_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateClientKeyResponseBody() = default ;
    CreateClientKeyResponseBody(const CreateClientKeyResponseBody &) = default ;
    CreateClientKeyResponseBody(CreateClientKeyResponseBody &&) = default ;
    CreateClientKeyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateClientKeyResponseBody() = default ;
    CreateClientKeyResponseBody& operator=(const CreateClientKeyResponseBody &) = default ;
    CreateClientKeyResponseBody& operator=(CreateClientKeyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientKeyId_ == nullptr
        && return this->keyAlgorithm_ == nullptr && return this->notAfter_ == nullptr && return this->notBefore_ == nullptr && return this->privateKeyData_ == nullptr && return this->requestId_ == nullptr; };
    // clientKeyId Field Functions 
    bool hasClientKeyId() const { return this->clientKeyId_ != nullptr;};
    void deleteClientKeyId() { this->clientKeyId_ = nullptr;};
    inline string clientKeyId() const { DARABONBA_PTR_GET_DEFAULT(clientKeyId_, "") };
    inline CreateClientKeyResponseBody& setClientKeyId(string clientKeyId) { DARABONBA_PTR_SET_VALUE(clientKeyId_, clientKeyId) };


    // keyAlgorithm Field Functions 
    bool hasKeyAlgorithm() const { return this->keyAlgorithm_ != nullptr;};
    void deleteKeyAlgorithm() { this->keyAlgorithm_ = nullptr;};
    inline string keyAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(keyAlgorithm_, "") };
    inline CreateClientKeyResponseBody& setKeyAlgorithm(string keyAlgorithm) { DARABONBA_PTR_SET_VALUE(keyAlgorithm_, keyAlgorithm) };


    // notAfter Field Functions 
    bool hasNotAfter() const { return this->notAfter_ != nullptr;};
    void deleteNotAfter() { this->notAfter_ = nullptr;};
    inline string notAfter() const { DARABONBA_PTR_GET_DEFAULT(notAfter_, "") };
    inline CreateClientKeyResponseBody& setNotAfter(string notAfter) { DARABONBA_PTR_SET_VALUE(notAfter_, notAfter) };


    // notBefore Field Functions 
    bool hasNotBefore() const { return this->notBefore_ != nullptr;};
    void deleteNotBefore() { this->notBefore_ = nullptr;};
    inline string notBefore() const { DARABONBA_PTR_GET_DEFAULT(notBefore_, "") };
    inline CreateClientKeyResponseBody& setNotBefore(string notBefore) { DARABONBA_PTR_SET_VALUE(notBefore_, notBefore) };


    // privateKeyData Field Functions 
    bool hasPrivateKeyData() const { return this->privateKeyData_ != nullptr;};
    void deletePrivateKeyData() { this->privateKeyData_ = nullptr;};
    inline string privateKeyData() const { DARABONBA_PTR_GET_DEFAULT(privateKeyData_, "") };
    inline CreateClientKeyResponseBody& setPrivateKeyData(string privateKeyData) { DARABONBA_PTR_SET_VALUE(privateKeyData_, privateKeyData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateClientKeyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> clientKeyId_ = nullptr;
    // The ID of the client key.
    std::shared_ptr<string> keyAlgorithm_ = nullptr;
    // The beginning of the validity period of the client key.
    std::shared_ptr<string> notAfter_ = nullptr;
    // The private key of the client key.
    std::shared_ptr<string> notBefore_ = nullptr;
    // The algorithm that is used to encrypt the private key of the client key. Currently, only RSA_2048 is supported.
    std::shared_ptr<string> privateKeyData_ = nullptr;
    // The beginning of the validity period of the client key.
    // 
    // Specify the time in the ISO 8601 standard. The time must be in UTC. The time must be in the yyyy-MM-ddTHH:mm:ssZ format.
    // 
    // > 
    // 
    // *   If you do not configure NotBefore, the default value is the time when the client key was created.
    // *   If you configure NotBefore, you must configure NotAfter.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
