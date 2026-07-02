// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPUBLICKEYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPUBLICKEYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class GetPublicKeyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPublicKeyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(KeyId, keyId_);
      DARABONBA_PTR_TO_JSON(KeyVersionId, keyVersionId_);
      DARABONBA_PTR_TO_JSON(PublicKey, publicKey_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPublicKeyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(KeyId, keyId_);
      DARABONBA_PTR_FROM_JSON(KeyVersionId, keyVersionId_);
      DARABONBA_PTR_FROM_JSON(PublicKey, publicKey_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetPublicKeyResponseBody() = default ;
    GetPublicKeyResponseBody(const GetPublicKeyResponseBody &) = default ;
    GetPublicKeyResponseBody(GetPublicKeyResponseBody &&) = default ;
    GetPublicKeyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPublicKeyResponseBody() = default ;
    GetPublicKeyResponseBody& operator=(const GetPublicKeyResponseBody &) = default ;
    GetPublicKeyResponseBody& operator=(GetPublicKeyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keyId_ == nullptr
        && this->keyVersionId_ == nullptr && this->publicKey_ == nullptr && this->requestId_ == nullptr; };
    // keyId Field Functions 
    bool hasKeyId() const { return this->keyId_ != nullptr;};
    void deleteKeyId() { this->keyId_ = nullptr;};
    inline string getKeyId() const { DARABONBA_PTR_GET_DEFAULT(keyId_, "") };
    inline GetPublicKeyResponseBody& setKeyId(string keyId) { DARABONBA_PTR_SET_VALUE(keyId_, keyId) };


    // keyVersionId Field Functions 
    bool hasKeyVersionId() const { return this->keyVersionId_ != nullptr;};
    void deleteKeyVersionId() { this->keyVersionId_ = nullptr;};
    inline string getKeyVersionId() const { DARABONBA_PTR_GET_DEFAULT(keyVersionId_, "") };
    inline GetPublicKeyResponseBody& setKeyVersionId(string keyVersionId) { DARABONBA_PTR_SET_VALUE(keyVersionId_, keyVersionId) };


    // publicKey Field Functions 
    bool hasPublicKey() const { return this->publicKey_ != nullptr;};
    void deletePublicKey() { this->publicKey_ = nullptr;};
    inline string getPublicKey() const { DARABONBA_PTR_GET_DEFAULT(publicKey_, "") };
    inline GetPublicKeyResponseBody& setPublicKey(string publicKey) { DARABONBA_PTR_SET_VALUE(publicKey_, publicKey) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPublicKeyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The globally unique identifier of the CMK.
    // 
    // > If you specify an alias of the CMK for the KeyId parameter in the request, the ID of the CMK to which the alias is bound is returned.
    shared_ptr<string> keyId_ {};
    // The globally unique identifier of the key version.
    shared_ptr<string> keyVersionId_ {};
    // The public key in the PEM format.
    shared_ptr<string> publicKey_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
