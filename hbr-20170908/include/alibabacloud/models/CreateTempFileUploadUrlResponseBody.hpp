// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETEMPFILEUPLOADURLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATETEMPFILEUPLOADURLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class CreateTempFileUploadUrlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTempFileUploadUrlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(OssAccessKeyId, ossAccessKeyId_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Signature, signature_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TempFileKey, tempFileKey_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTempFileUploadUrlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(OssAccessKeyId, ossAccessKeyId_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Signature, signature_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TempFileKey, tempFileKey_);
    };
    CreateTempFileUploadUrlResponseBody() = default ;
    CreateTempFileUploadUrlResponseBody(const CreateTempFileUploadUrlResponseBody &) = default ;
    CreateTempFileUploadUrlResponseBody(CreateTempFileUploadUrlResponseBody &&) = default ;
    CreateTempFileUploadUrlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTempFileUploadUrlResponseBody() = default ;
    CreateTempFileUploadUrlResponseBody& operator=(const CreateTempFileUploadUrlResponseBody &) = default ;
    CreateTempFileUploadUrlResponseBody& operator=(CreateTempFileUploadUrlResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bucketName_ == nullptr
        && return this->code_ == nullptr && return this->endpoint_ == nullptr && return this->expireTime_ == nullptr && return this->message_ == nullptr && return this->ossAccessKeyId_ == nullptr
        && return this->policy_ == nullptr && return this->requestId_ == nullptr && return this->signature_ == nullptr && return this->success_ == nullptr && return this->tempFileKey_ == nullptr; };
    // bucketName Field Functions 
    bool hasBucketName() const { return this->bucketName_ != nullptr;};
    void deleteBucketName() { this->bucketName_ = nullptr;};
    inline string bucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
    inline CreateTempFileUploadUrlResponseBody& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateTempFileUploadUrlResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string endpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline CreateTempFileUploadUrlResponseBody& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline int64_t expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
    inline CreateTempFileUploadUrlResponseBody& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateTempFileUploadUrlResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // ossAccessKeyId Field Functions 
    bool hasOssAccessKeyId() const { return this->ossAccessKeyId_ != nullptr;};
    void deleteOssAccessKeyId() { this->ossAccessKeyId_ = nullptr;};
    inline string ossAccessKeyId() const { DARABONBA_PTR_GET_DEFAULT(ossAccessKeyId_, "") };
    inline CreateTempFileUploadUrlResponseBody& setOssAccessKeyId(string ossAccessKeyId) { DARABONBA_PTR_SET_VALUE(ossAccessKeyId_, ossAccessKeyId) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string policy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline CreateTempFileUploadUrlResponseBody& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateTempFileUploadUrlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // signature Field Functions 
    bool hasSignature() const { return this->signature_ != nullptr;};
    void deleteSignature() { this->signature_ = nullptr;};
    inline string signature() const { DARABONBA_PTR_GET_DEFAULT(signature_, "") };
    inline CreateTempFileUploadUrlResponseBody& setSignature(string signature) { DARABONBA_PTR_SET_VALUE(signature_, signature) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateTempFileUploadUrlResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // tempFileKey Field Functions 
    bool hasTempFileKey() const { return this->tempFileKey_ != nullptr;};
    void deleteTempFileKey() { this->tempFileKey_ = nullptr;};
    inline string tempFileKey() const { DARABONBA_PTR_GET_DEFAULT(tempFileKey_, "") };
    inline CreateTempFileUploadUrlResponseBody& setTempFileKey(string tempFileKey) { DARABONBA_PTR_SET_VALUE(tempFileKey_, tempFileKey) };


  protected:
    // The name of the OSS bucket to which the file is uploaded.
    std::shared_ptr<string> bucketName_ = nullptr;
    // The HTTP status code. The status code 200 indicates that the call is successful.
    std::shared_ptr<string> code_ = nullptr;
    // The endpoint that is used to upload the file to OSS.
    std::shared_ptr<string> endpoint_ = nullptr;
    // The expiration time of the signature that is used to upload the file to OSS. This value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int64_t> expireTime_ = nullptr;
    // The message that is returned. If the call is successful, "successful" is returned. If the call fails, an error message is returned.
    std::shared_ptr<string> message_ = nullptr;
    // The AccessKey ID that is used to upload the file to OSS.
    std::shared_ptr<string> ossAccessKeyId_ = nullptr;
    // The policy that is used to upload the file to OSS.
    std::shared_ptr<string> policy_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The signature that is used to upload the file to OSS.
    std::shared_ptr<string> signature_ = nullptr;
    // Indicates whether the call is successful. Valid values:
    // 
    // *   true: The call is successful.
    // *   false: The call fails.
    std::shared_ptr<bool> success_ = nullptr;
    // The key that is used to upload the file to OSS.
    std::shared_ptr<string> tempFileKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
