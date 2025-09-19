// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBATCHUPLOADURLRESPONSEBODYUPLOADURLLISTCONTEXT_HPP_
#define ALIBABACLOUD_MODELS_CREATEBATCHUPLOADURLRESPONSEBODYUPLOADURLLISTCONTEXT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateBatchUploadUrlResponseBodyUploadUrlListContext : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBatchUploadUrlResponseBodyUploadUrlListContext& obj) { 
      DARABONBA_PTR_TO_JSON(AccessId, accessId_);
      DARABONBA_PTR_TO_JSON(OssKey, ossKey_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(Signature, signature_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBatchUploadUrlResponseBodyUploadUrlListContext& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessId, accessId_);
      DARABONBA_PTR_FROM_JSON(OssKey, ossKey_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(Signature, signature_);
    };
    CreateBatchUploadUrlResponseBodyUploadUrlListContext() = default ;
    CreateBatchUploadUrlResponseBodyUploadUrlListContext(const CreateBatchUploadUrlResponseBodyUploadUrlListContext &) = default ;
    CreateBatchUploadUrlResponseBodyUploadUrlListContext(CreateBatchUploadUrlResponseBodyUploadUrlListContext &&) = default ;
    CreateBatchUploadUrlResponseBodyUploadUrlListContext(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBatchUploadUrlResponseBodyUploadUrlListContext() = default ;
    CreateBatchUploadUrlResponseBodyUploadUrlListContext& operator=(const CreateBatchUploadUrlResponseBodyUploadUrlListContext &) = default ;
    CreateBatchUploadUrlResponseBodyUploadUrlListContext& operator=(CreateBatchUploadUrlResponseBodyUploadUrlListContext &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessId_ != nullptr
        && this->ossKey_ != nullptr && this->policy_ != nullptr && this->signature_ != nullptr; };
    // accessId Field Functions 
    bool hasAccessId() const { return this->accessId_ != nullptr;};
    void deleteAccessId() { this->accessId_ = nullptr;};
    inline string accessId() const { DARABONBA_PTR_GET_DEFAULT(accessId_, "") };
    inline CreateBatchUploadUrlResponseBodyUploadUrlListContext& setAccessId(string accessId) { DARABONBA_PTR_SET_VALUE(accessId_, accessId) };


    // ossKey Field Functions 
    bool hasOssKey() const { return this->ossKey_ != nullptr;};
    void deleteOssKey() { this->ossKey_ = nullptr;};
    inline string ossKey() const { DARABONBA_PTR_GET_DEFAULT(ossKey_, "") };
    inline CreateBatchUploadUrlResponseBodyUploadUrlListContext& setOssKey(string ossKey) { DARABONBA_PTR_SET_VALUE(ossKey_, ossKey) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string policy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline CreateBatchUploadUrlResponseBodyUploadUrlListContext& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // signature Field Functions 
    bool hasSignature() const { return this->signature_ != nullptr;};
    void deleteSignature() { this->signature_ = nullptr;};
    inline string signature() const { DARABONBA_PTR_GET_DEFAULT(signature_, "") };
    inline CreateBatchUploadUrlResponseBodyUploadUrlListContext& setSignature(string signature) { DARABONBA_PTR_SET_VALUE(signature_, signature) };


  protected:
    // The AccessKey ID that is used to access the OSS bucket.
    std::shared_ptr<string> accessId_ = nullptr;
    // The key of the file that is used after the file is uploaded to the OSS bucket.
    std::shared_ptr<string> ossKey_ = nullptr;
    // The policy that poses limits on file upload. For example, the policy can limit the size of the file.
    std::shared_ptr<string> policy_ = nullptr;
    // The signature that is used to upload the file.
    std::shared_ptr<string> signature_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
