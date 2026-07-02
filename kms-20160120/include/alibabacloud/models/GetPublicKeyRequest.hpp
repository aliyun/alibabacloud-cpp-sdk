// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPUBLICKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPUBLICKEYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class GetPublicKeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPublicKeyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(KeyId, keyId_);
      DARABONBA_PTR_TO_JSON(KeyVersionId, keyVersionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPublicKeyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(KeyId, keyId_);
      DARABONBA_PTR_FROM_JSON(KeyVersionId, keyVersionId_);
    };
    GetPublicKeyRequest() = default ;
    GetPublicKeyRequest(const GetPublicKeyRequest &) = default ;
    GetPublicKeyRequest(GetPublicKeyRequest &&) = default ;
    GetPublicKeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPublicKeyRequest() = default ;
    GetPublicKeyRequest& operator=(const GetPublicKeyRequest &) = default ;
    GetPublicKeyRequest& operator=(GetPublicKeyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dryRun_ == nullptr
        && this->keyId_ == nullptr && this->keyVersionId_ == nullptr; };
    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline string getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, "") };
    inline GetPublicKeyRequest& setDryRun(string dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // keyId Field Functions 
    bool hasKeyId() const { return this->keyId_ != nullptr;};
    void deleteKeyId() { this->keyId_ = nullptr;};
    inline string getKeyId() const { DARABONBA_PTR_GET_DEFAULT(keyId_, "") };
    inline GetPublicKeyRequest& setKeyId(string keyId) { DARABONBA_PTR_SET_VALUE(keyId_, keyId) };


    // keyVersionId Field Functions 
    bool hasKeyVersionId() const { return this->keyVersionId_ != nullptr;};
    void deleteKeyVersionId() { this->keyVersionId_ = nullptr;};
    inline string getKeyVersionId() const { DARABONBA_PTR_GET_DEFAULT(keyVersionId_, "") };
    inline GetPublicKeyRequest& setKeyVersionId(string keyVersionId) { DARABONBA_PTR_SET_VALUE(keyVersionId_, keyVersionId) };


  protected:
    // Specifies whether to enable the DryRun mode.
    // 
    // - true: enables the DryRun mode.
    // 
    // - false (default): disables the DryRun mode.
    // 
    // The DryRun mode is used to test API calls, verify your permissions on resources, and check whether the parameters are valid. If you enable the DryRun mode, KMS always returns a failed response and a failure reason. The failure reasons include the following:
    // 
    // - DryRunOperationError: The request would have succeeded if the DryRun parameter is not specified.
    // 
    // - ValidationError: The specified parameters in the request are invalid.
    // 
    // - AccessDeniedError: You are not authorized to perform the operation on the KMS resource.
    shared_ptr<string> dryRun_ {};
    // The globally unique identifier of the customer master key (CMK). This parameter can also be an alias that is bound to the CMK. For more information, see [Use of aliases](https://help.aliyun.com/document_detail/68522.html).
    // 
    // This parameter is required.
    shared_ptr<string> keyId_ {};
    // The globally unique identifier of the key version.
    // 
    // This parameter is required.
    shared_ptr<string> keyVersionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
