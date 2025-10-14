// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEKEYPAIRRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEKEYPAIRRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class CreateKeyPairResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateKeyPairResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(KeyPairFingerPrint, keyPairFingerPrint_);
      DARABONBA_PTR_TO_JSON(KeyPairId, keyPairId_);
      DARABONBA_PTR_TO_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_TO_JSON(PrivateKeyBody, privateKeyBody_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateKeyPairResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(KeyPairFingerPrint, keyPairFingerPrint_);
      DARABONBA_PTR_FROM_JSON(KeyPairId, keyPairId_);
      DARABONBA_PTR_FROM_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_FROM_JSON(PrivateKeyBody, privateKeyBody_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateKeyPairResponseBody() = default ;
    CreateKeyPairResponseBody(const CreateKeyPairResponseBody &) = default ;
    CreateKeyPairResponseBody(CreateKeyPairResponseBody &&) = default ;
    CreateKeyPairResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateKeyPairResponseBody() = default ;
    CreateKeyPairResponseBody& operator=(const CreateKeyPairResponseBody &) = default ;
    CreateKeyPairResponseBody& operator=(CreateKeyPairResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keyPairFingerPrint_ == nullptr
        && return this->keyPairId_ == nullptr && return this->keyPairName_ == nullptr && return this->privateKeyBody_ == nullptr && return this->requestId_ == nullptr; };
    // keyPairFingerPrint Field Functions 
    bool hasKeyPairFingerPrint() const { return this->keyPairFingerPrint_ != nullptr;};
    void deleteKeyPairFingerPrint() { this->keyPairFingerPrint_ = nullptr;};
    inline string keyPairFingerPrint() const { DARABONBA_PTR_GET_DEFAULT(keyPairFingerPrint_, "") };
    inline CreateKeyPairResponseBody& setKeyPairFingerPrint(string keyPairFingerPrint) { DARABONBA_PTR_SET_VALUE(keyPairFingerPrint_, keyPairFingerPrint) };


    // keyPairId Field Functions 
    bool hasKeyPairId() const { return this->keyPairId_ != nullptr;};
    void deleteKeyPairId() { this->keyPairId_ = nullptr;};
    inline string keyPairId() const { DARABONBA_PTR_GET_DEFAULT(keyPairId_, "") };
    inline CreateKeyPairResponseBody& setKeyPairId(string keyPairId) { DARABONBA_PTR_SET_VALUE(keyPairId_, keyPairId) };


    // keyPairName Field Functions 
    bool hasKeyPairName() const { return this->keyPairName_ != nullptr;};
    void deleteKeyPairName() { this->keyPairName_ = nullptr;};
    inline string keyPairName() const { DARABONBA_PTR_GET_DEFAULT(keyPairName_, "") };
    inline CreateKeyPairResponseBody& setKeyPairName(string keyPairName) { DARABONBA_PTR_SET_VALUE(keyPairName_, keyPairName) };


    // privateKeyBody Field Functions 
    bool hasPrivateKeyBody() const { return this->privateKeyBody_ != nullptr;};
    void deletePrivateKeyBody() { this->privateKeyBody_ = nullptr;};
    inline string privateKeyBody() const { DARABONBA_PTR_GET_DEFAULT(privateKeyBody_, "") };
    inline CreateKeyPairResponseBody& setPrivateKeyBody(string privateKeyBody) { DARABONBA_PTR_SET_VALUE(privateKeyBody_, privateKeyBody) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateKeyPairResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The fingerprint of the key pair. The message-digest algorithm 5 (MD5) is used based on the public key fingerprint format defined in RFC 4716. For more information, see [RFC 4716](https://tools.ietf.org/html/rfc4716).
    std::shared_ptr<string> keyPairFingerPrint_ = nullptr;
    // The ID of the SSH key pair.
    std::shared_ptr<string> keyPairId_ = nullptr;
    // The name of the key pair.
    std::shared_ptr<string> keyPairName_ = nullptr;
    // The private key of the key pair. The private key is encoded with PEM in the PKCS#8 format.
    std::shared_ptr<string> privateKeyBody_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
