// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEUPLOADFILEPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GENERATEUPLOADFILEPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Companyreg20200306
{
namespace Models
{
  class GenerateUploadFilePolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateUploadFilePolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessId, accessId_);
      DARABONBA_PTR_TO_JSON(EncodedPolicy, encodedPolicy_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(FileDir, fileDir_);
      DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Signature, signature_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateUploadFilePolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessId, accessId_);
      DARABONBA_PTR_FROM_JSON(EncodedPolicy, encodedPolicy_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(FileDir, fileDir_);
      DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Signature, signature_);
    };
    GenerateUploadFilePolicyResponseBody() = default ;
    GenerateUploadFilePolicyResponseBody(const GenerateUploadFilePolicyResponseBody &) = default ;
    GenerateUploadFilePolicyResponseBody(GenerateUploadFilePolicyResponseBody &&) = default ;
    GenerateUploadFilePolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateUploadFilePolicyResponseBody() = default ;
    GenerateUploadFilePolicyResponseBody& operator=(const GenerateUploadFilePolicyResponseBody &) = default ;
    GenerateUploadFilePolicyResponseBody& operator=(GenerateUploadFilePolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessId_ == nullptr
        && this->encodedPolicy_ == nullptr && this->expireTime_ == nullptr && this->fileDir_ == nullptr && this->fileUrl_ == nullptr && this->host_ == nullptr
        && this->requestId_ == nullptr && this->signature_ == nullptr; };
    // accessId Field Functions 
    bool hasAccessId() const { return this->accessId_ != nullptr;};
    void deleteAccessId() { this->accessId_ = nullptr;};
    inline string getAccessId() const { DARABONBA_PTR_GET_DEFAULT(accessId_, "") };
    inline GenerateUploadFilePolicyResponseBody& setAccessId(string accessId) { DARABONBA_PTR_SET_VALUE(accessId_, accessId) };


    // encodedPolicy Field Functions 
    bool hasEncodedPolicy() const { return this->encodedPolicy_ != nullptr;};
    void deleteEncodedPolicy() { this->encodedPolicy_ = nullptr;};
    inline string getEncodedPolicy() const { DARABONBA_PTR_GET_DEFAULT(encodedPolicy_, "") };
    inline GenerateUploadFilePolicyResponseBody& setEncodedPolicy(string encodedPolicy) { DARABONBA_PTR_SET_VALUE(encodedPolicy_, encodedPolicy) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline GenerateUploadFilePolicyResponseBody& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // fileDir Field Functions 
    bool hasFileDir() const { return this->fileDir_ != nullptr;};
    void deleteFileDir() { this->fileDir_ = nullptr;};
    inline string getFileDir() const { DARABONBA_PTR_GET_DEFAULT(fileDir_, "") };
    inline GenerateUploadFilePolicyResponseBody& setFileDir(string fileDir) { DARABONBA_PTR_SET_VALUE(fileDir_, fileDir) };


    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline string getFileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
    inline GenerateUploadFilePolicyResponseBody& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline GenerateUploadFilePolicyResponseBody& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GenerateUploadFilePolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // signature Field Functions 
    bool hasSignature() const { return this->signature_ != nullptr;};
    void deleteSignature() { this->signature_ = nullptr;};
    inline string getSignature() const { DARABONBA_PTR_GET_DEFAULT(signature_, "") };
    inline GenerateUploadFilePolicyResponseBody& setSignature(string signature) { DARABONBA_PTR_SET_VALUE(signature_, signature) };


  protected:
    // OSSAccessKeyId
    shared_ptr<string> accessId_ {};
    shared_ptr<string> encodedPolicy_ {};
    shared_ptr<string> expireTime_ {};
    shared_ptr<string> fileDir_ {};
    shared_ptr<string> fileUrl_ {};
    // OSS Endpoint。
    shared_ptr<string> host_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> signature_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Companyreg20200306
#endif
