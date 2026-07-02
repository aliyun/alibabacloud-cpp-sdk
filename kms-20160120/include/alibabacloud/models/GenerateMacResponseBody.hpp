// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEMACRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GENERATEMACRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class GenerateMacResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateMacResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_TO_JSON(KeyId, keyId_);
      DARABONBA_PTR_TO_JSON(Mac, mac_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateMacResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_FROM_JSON(KeyId, keyId_);
      DARABONBA_PTR_FROM_JSON(Mac, mac_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GenerateMacResponseBody() = default ;
    GenerateMacResponseBody(const GenerateMacResponseBody &) = default ;
    GenerateMacResponseBody(GenerateMacResponseBody &&) = default ;
    GenerateMacResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateMacResponseBody() = default ;
    GenerateMacResponseBody& operator=(const GenerateMacResponseBody &) = default ;
    GenerateMacResponseBody& operator=(GenerateMacResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->algorithm_ == nullptr
        && this->keyId_ == nullptr && this->mac_ == nullptr && this->requestId_ == nullptr; };
    // algorithm Field Functions 
    bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
    void deleteAlgorithm() { this->algorithm_ = nullptr;};
    inline string getAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(algorithm_, "") };
    inline GenerateMacResponseBody& setAlgorithm(string algorithm) { DARABONBA_PTR_SET_VALUE(algorithm_, algorithm) };


    // keyId Field Functions 
    bool hasKeyId() const { return this->keyId_ != nullptr;};
    void deleteKeyId() { this->keyId_ = nullptr;};
    inline string getKeyId() const { DARABONBA_PTR_GET_DEFAULT(keyId_, "") };
    inline GenerateMacResponseBody& setKeyId(string keyId) { DARABONBA_PTR_SET_VALUE(keyId_, keyId) };


    // mac Field Functions 
    bool hasMac() const { return this->mac_ != nullptr;};
    void deleteMac() { this->mac_ = nullptr;};
    inline string getMac() const { DARABONBA_PTR_GET_DEFAULT(mac_, "") };
    inline GenerateMacResponseBody& setMac(string mac) { DARABONBA_PTR_SET_VALUE(mac_, mac) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GenerateMacResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The algorithm that is used to generate the message authentication code. Valid values vary based on the key specification:  
    // 
    // - HMAC_SM3
    // 
    // - HMAC_SHA_224
    // 
    // - HMAC_SHA_256
    // 
    // - HMAC_SHA_384
    // 
    // - HMAC_SHA_512
    shared_ptr<string> algorithm_ {};
    // The globally unique identifier of the customer master key (CMK).
    // 
    // > If the KeyId parameter in the request uses a CMK alias, the response returns the CMK identifier that corresponds to the alias.
    shared_ptr<string> keyId_ {};
    // The Base64-encoded message authenticate code.
    shared_ptr<string> mac_ {};
    // The ID of the request. Alibaba Cloud generates a unique identifier for each request. You can use this ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
