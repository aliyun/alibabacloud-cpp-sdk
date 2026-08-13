// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSOURCEUPLOADSIGNATURERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSOURCEUPLOADSIGNATURERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class GetSourceUploadSignatureResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSourceUploadSignatureResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(contentType, contentType_);
      DARABONBA_PTR_TO_JSON(expiresIn, expiresIn_);
      DARABONBA_PTR_TO_JSON(filePublicUrl, filePublicUrl_);
      DARABONBA_PTR_TO_JSON(fileRecordId, fileRecordId_);
      DARABONBA_PTR_TO_JSON(fileUrl, fileUrl_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(method, method_);
      DARABONBA_PTR_TO_JSON(objectName, objectName_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(uploadSignatureUrl, uploadSignatureUrl_);
    };
    friend void from_json(const Darabonba::Json& j, GetSourceUploadSignatureResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(contentType, contentType_);
      DARABONBA_PTR_FROM_JSON(expiresIn, expiresIn_);
      DARABONBA_PTR_FROM_JSON(filePublicUrl, filePublicUrl_);
      DARABONBA_PTR_FROM_JSON(fileRecordId, fileRecordId_);
      DARABONBA_PTR_FROM_JSON(fileUrl, fileUrl_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(method, method_);
      DARABONBA_PTR_FROM_JSON(objectName, objectName_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(uploadSignatureUrl, uploadSignatureUrl_);
    };
    GetSourceUploadSignatureResponseBody() = default ;
    GetSourceUploadSignatureResponseBody(const GetSourceUploadSignatureResponseBody &) = default ;
    GetSourceUploadSignatureResponseBody(GetSourceUploadSignatureResponseBody &&) = default ;
    GetSourceUploadSignatureResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSourceUploadSignatureResponseBody() = default ;
    GetSourceUploadSignatureResponseBody& operator=(const GetSourceUploadSignatureResponseBody &) = default ;
    GetSourceUploadSignatureResponseBody& operator=(GetSourceUploadSignatureResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->contentType_ == nullptr && this->expiresIn_ == nullptr && this->filePublicUrl_ == nullptr && this->fileRecordId_ == nullptr && this->fileUrl_ == nullptr
        && this->message_ == nullptr && this->method_ == nullptr && this->objectName_ == nullptr && this->requestId_ == nullptr && this->uploadSignatureUrl_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetSourceUploadSignatureResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline string getContentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
    inline GetSourceUploadSignatureResponseBody& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


    // expiresIn Field Functions 
    bool hasExpiresIn() const { return this->expiresIn_ != nullptr;};
    void deleteExpiresIn() { this->expiresIn_ = nullptr;};
    inline int64_t getExpiresIn() const { DARABONBA_PTR_GET_DEFAULT(expiresIn_, 0L) };
    inline GetSourceUploadSignatureResponseBody& setExpiresIn(int64_t expiresIn) { DARABONBA_PTR_SET_VALUE(expiresIn_, expiresIn) };


    // filePublicUrl Field Functions 
    bool hasFilePublicUrl() const { return this->filePublicUrl_ != nullptr;};
    void deleteFilePublicUrl() { this->filePublicUrl_ = nullptr;};
    inline string getFilePublicUrl() const { DARABONBA_PTR_GET_DEFAULT(filePublicUrl_, "") };
    inline GetSourceUploadSignatureResponseBody& setFilePublicUrl(string filePublicUrl) { DARABONBA_PTR_SET_VALUE(filePublicUrl_, filePublicUrl) };


    // fileRecordId Field Functions 
    bool hasFileRecordId() const { return this->fileRecordId_ != nullptr;};
    void deleteFileRecordId() { this->fileRecordId_ = nullptr;};
    inline string getFileRecordId() const { DARABONBA_PTR_GET_DEFAULT(fileRecordId_, "") };
    inline GetSourceUploadSignatureResponseBody& setFileRecordId(string fileRecordId) { DARABONBA_PTR_SET_VALUE(fileRecordId_, fileRecordId) };


    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline string getFileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
    inline GetSourceUploadSignatureResponseBody& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetSourceUploadSignatureResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // method Field Functions 
    bool hasMethod() const { return this->method_ != nullptr;};
    void deleteMethod() { this->method_ = nullptr;};
    inline string getMethod() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
    inline GetSourceUploadSignatureResponseBody& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


    // objectName Field Functions 
    bool hasObjectName() const { return this->objectName_ != nullptr;};
    void deleteObjectName() { this->objectName_ = nullptr;};
    inline string getObjectName() const { DARABONBA_PTR_GET_DEFAULT(objectName_, "") };
    inline GetSourceUploadSignatureResponseBody& setObjectName(string objectName) { DARABONBA_PTR_SET_VALUE(objectName_, objectName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSourceUploadSignatureResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // uploadSignatureUrl Field Functions 
    bool hasUploadSignatureUrl() const { return this->uploadSignatureUrl_ != nullptr;};
    void deleteUploadSignatureUrl() { this->uploadSignatureUrl_ = nullptr;};
    inline string getUploadSignatureUrl() const { DARABONBA_PTR_GET_DEFAULT(uploadSignatureUrl_, "") };
    inline GetSourceUploadSignatureResponseBody& setUploadSignatureUrl(string uploadSignatureUrl) { DARABONBA_PTR_SET_VALUE(uploadSignatureUrl_, uploadSignatureUrl) };


  protected:
    // 业务状态码：成功为 200，失败为后端错误码（ERR.* / InvalidParameter.*）
    shared_ptr<string> code_ {};
    // 文件 Content-Type
    shared_ptr<string> contentType_ {};
    // 签名 URL 有效时长（秒）
    shared_ptr<int64_t> expiresIn_ {};
    // 文件公开访问 URL
    shared_ptr<string> filePublicUrl_ {};
    // 文件记录 ID
    shared_ptr<string> fileRecordId_ {};
    // 文件 OSS 内部 URL
    shared_ptr<string> fileUrl_ {};
    // 错误描述，成功时为空
    shared_ptr<string> message_ {};
    // 上传 HTTP 方法（固定为 PUT）
    shared_ptr<string> method_ {};
    // OSS 对象名
    shared_ptr<string> objectName_ {};
    // 请求追踪 ID
    shared_ptr<string> requestId_ {};
    // 签名上传 URL（PUT 方式）
    shared_ptr<string> uploadSignatureUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
