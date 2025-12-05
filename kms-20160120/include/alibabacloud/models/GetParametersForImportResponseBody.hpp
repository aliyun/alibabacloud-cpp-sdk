// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPARAMETERSFORIMPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPARAMETERSFORIMPORTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class GetParametersForImportResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetParametersForImportResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ImportToken, importToken_);
      DARABONBA_PTR_TO_JSON(KeyId, keyId_);
      DARABONBA_PTR_TO_JSON(PublicKey, publicKey_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TokenExpireTime, tokenExpireTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetParametersForImportResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ImportToken, importToken_);
      DARABONBA_PTR_FROM_JSON(KeyId, keyId_);
      DARABONBA_PTR_FROM_JSON(PublicKey, publicKey_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TokenExpireTime, tokenExpireTime_);
    };
    GetParametersForImportResponseBody() = default ;
    GetParametersForImportResponseBody(const GetParametersForImportResponseBody &) = default ;
    GetParametersForImportResponseBody(GetParametersForImportResponseBody &&) = default ;
    GetParametersForImportResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetParametersForImportResponseBody() = default ;
    GetParametersForImportResponseBody& operator=(const GetParametersForImportResponseBody &) = default ;
    GetParametersForImportResponseBody& operator=(GetParametersForImportResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->importToken_ == nullptr
        && return this->keyId_ == nullptr && return this->publicKey_ == nullptr && return this->requestId_ == nullptr && return this->tokenExpireTime_ == nullptr; };
    // importToken Field Functions 
    bool hasImportToken() const { return this->importToken_ != nullptr;};
    void deleteImportToken() { this->importToken_ = nullptr;};
    inline string importToken() const { DARABONBA_PTR_GET_DEFAULT(importToken_, "") };
    inline GetParametersForImportResponseBody& setImportToken(string importToken) { DARABONBA_PTR_SET_VALUE(importToken_, importToken) };


    // keyId Field Functions 
    bool hasKeyId() const { return this->keyId_ != nullptr;};
    void deleteKeyId() { this->keyId_ = nullptr;};
    inline string keyId() const { DARABONBA_PTR_GET_DEFAULT(keyId_, "") };
    inline GetParametersForImportResponseBody& setKeyId(string keyId) { DARABONBA_PTR_SET_VALUE(keyId_, keyId) };


    // publicKey Field Functions 
    bool hasPublicKey() const { return this->publicKey_ != nullptr;};
    void deletePublicKey() { this->publicKey_ = nullptr;};
    inline string publicKey() const { DARABONBA_PTR_GET_DEFAULT(publicKey_, "") };
    inline GetParametersForImportResponseBody& setPublicKey(string publicKey) { DARABONBA_PTR_SET_VALUE(publicKey_, publicKey) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetParametersForImportResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tokenExpireTime Field Functions 
    bool hasTokenExpireTime() const { return this->tokenExpireTime_ != nullptr;};
    void deleteTokenExpireTime() { this->tokenExpireTime_ = nullptr;};
    inline string tokenExpireTime() const { DARABONBA_PTR_GET_DEFAULT(tokenExpireTime_, "") };
    inline GetParametersForImportResponseBody& setTokenExpireTime(string tokenExpireTime) { DARABONBA_PTR_SET_VALUE(tokenExpireTime_, tokenExpireTime) };


  protected:
    // The token that is used to import key material.
    // 
    // The token is valid for 24 hours. The value of this parameter is required when you call the [ImportKeyMaterial](https://help.aliyun.com/document_detail/68622.html) operation.
    std::shared_ptr<string> importToken_ = nullptr;
    // The globally unique ID of the CMK.
    // 
    // The value of this parameter is required when you call the [ImportKeyMaterial](https://help.aliyun.com/document_detail/68622.html) operation.
    std::shared_ptr<string> keyId_ = nullptr;
    // The public key that is used to encrypt key material.
    // 
    // The public key is Base64-encoded.
    std::shared_ptr<string> publicKey_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The time when the token expires.
    std::shared_ptr<string> tokenExpireTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
