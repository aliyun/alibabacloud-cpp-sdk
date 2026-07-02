// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEMACREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEMACREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class GenerateMacRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateMacRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(KeyId, keyId_);
      DARABONBA_PTR_TO_JSON(Message, message_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateMacRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(KeyId, keyId_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
    };
    GenerateMacRequest() = default ;
    GenerateMacRequest(const GenerateMacRequest &) = default ;
    GenerateMacRequest(GenerateMacRequest &&) = default ;
    GenerateMacRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateMacRequest() = default ;
    GenerateMacRequest& operator=(const GenerateMacRequest &) = default ;
    GenerateMacRequest& operator=(GenerateMacRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->algorithm_ == nullptr
        && this->dryRun_ == nullptr && this->keyId_ == nullptr && this->message_ == nullptr; };
    // algorithm Field Functions 
    bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
    void deleteAlgorithm() { this->algorithm_ = nullptr;};
    inline string getAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(algorithm_, "") };
    inline GenerateMacRequest& setAlgorithm(string algorithm) { DARABONBA_PTR_SET_VALUE(algorithm_, algorithm) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline string getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, "") };
    inline GenerateMacRequest& setDryRun(string dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // keyId Field Functions 
    bool hasKeyId() const { return this->keyId_ != nullptr;};
    void deleteKeyId() { this->keyId_ = nullptr;};
    inline string getKeyId() const { DARABONBA_PTR_GET_DEFAULT(keyId_, "") };
    inline GenerateMacRequest& setKeyId(string keyId) { DARABONBA_PTR_SET_VALUE(keyId_, keyId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GenerateMacRequest& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


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
    // 
    // This parameter is required.
    shared_ptr<string> algorithm_ {};
    // Specifies whether to enable DryRun mode.
    // 
    // - true: enabled
    // - false (default): disabled
    // 
    // DryRun mode is used to test API calls and verify whether you have the required permissions on the corresponding resources and whether the request parameters are correctly configured. When DryRun mode is enabled, KMS always returns a failure and provides the failure reason. Failure reasons include:
    // 
    // - DryRunOperationError: The request would succeed without the DryRun parameter.
    // - ValidationError: The parameters specified in the request are invalid.
    // - AccessDeniedError: You are not authorized to perform this operation on the KMS resource.
    shared_ptr<string> dryRun_ {};
    // The ID of the key. You can also specify a key alias or a key Amazon Resource Name (ARN). For more information about aliases, refer to [Manage key aliases](https://help.aliyun.com/document_detail/480655.html).
    // >When you access a key that belongs to a different Alibaba Cloud account, you must specify the key ARN. The format of a key ARN is `acs:kms:${region}:${account}:key/${keyid}`.
    // 
    // This parameter is required.
    shared_ptr<string> keyId_ {};
    // The data for which you want to generate a message authentication code.  
    // 
    // The value is Base64-encoded. For example, if the hexadecimal data is `[0x31, 0x32, 0x33, 0x34]`, the corresponding Base64-encoded value is `MTIzNA==`.
    // 
    // This parameter is required.
    shared_ptr<string> message_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
