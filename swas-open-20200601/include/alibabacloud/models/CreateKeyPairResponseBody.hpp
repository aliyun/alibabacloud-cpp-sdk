// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEKEYPAIRRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEKEYPAIRRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SWASOPEN20200601
{
namespace Models
{
  class CreateKeyPairResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateKeyPairResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_TO_JSON(PrivateKeyBody, privateKeyBody_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateKeyPairResponseBody& obj) { 
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
    virtual bool empty() const override { return this->keyPairName_ == nullptr
        && this->privateKeyBody_ == nullptr && this->requestId_ == nullptr; };
    // keyPairName Field Functions 
    bool hasKeyPairName() const { return this->keyPairName_ != nullptr;};
    void deleteKeyPairName() { this->keyPairName_ = nullptr;};
    inline string getKeyPairName() const { DARABONBA_PTR_GET_DEFAULT(keyPairName_, "") };
    inline CreateKeyPairResponseBody& setKeyPairName(string keyPairName) { DARABONBA_PTR_SET_VALUE(keyPairName_, keyPairName) };


    // privateKeyBody Field Functions 
    bool hasPrivateKeyBody() const { return this->privateKeyBody_ != nullptr;};
    void deletePrivateKeyBody() { this->privateKeyBody_ = nullptr;};
    inline string getPrivateKeyBody() const { DARABONBA_PTR_GET_DEFAULT(privateKeyBody_, "") };
    inline CreateKeyPairResponseBody& setPrivateKeyBody(string privateKeyBody) { DARABONBA_PTR_SET_VALUE(privateKeyBody_, privateKeyBody) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateKeyPairResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The name of the key pair. The name must be 2 to 64 characters in length, and can contain English letters and Chinese characters. It must start with a letter or a Chinese character and cannot start with http:// or https://. It can contain digits, colons (:), underscores (_), and hyphens (-).
    shared_ptr<string> keyPairName_ {};
    // The private key of the key pair. The private key is in the PEM-encoded PKCS#8 format.
    shared_ptr<string> privateKeyBody_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SWASOPEN20200601
#endif
