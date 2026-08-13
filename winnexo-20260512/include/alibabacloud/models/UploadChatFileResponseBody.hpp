// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADCHATFILERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPLOADCHATFILERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class UploadChatFileResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadChatFileResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(contentType, contentType_);
      DARABONBA_PTR_TO_JSON(fileName, fileName_);
      DARABONBA_PTR_TO_JSON(filePublicUrl, filePublicUrl_);
      DARABONBA_PTR_TO_JSON(fileRecordId, fileRecordId_);
      DARABONBA_PTR_TO_JSON(fileUrl, fileUrl_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(objectName, objectName_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(uploadSignatureUrl, uploadSignatureUrl_);
    };
    friend void from_json(const Darabonba::Json& j, UploadChatFileResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(contentType, contentType_);
      DARABONBA_PTR_FROM_JSON(fileName, fileName_);
      DARABONBA_PTR_FROM_JSON(filePublicUrl, filePublicUrl_);
      DARABONBA_PTR_FROM_JSON(fileRecordId, fileRecordId_);
      DARABONBA_PTR_FROM_JSON(fileUrl, fileUrl_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(objectName, objectName_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(uploadSignatureUrl, uploadSignatureUrl_);
    };
    UploadChatFileResponseBody() = default ;
    UploadChatFileResponseBody(const UploadChatFileResponseBody &) = default ;
    UploadChatFileResponseBody(UploadChatFileResponseBody &&) = default ;
    UploadChatFileResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadChatFileResponseBody() = default ;
    UploadChatFileResponseBody& operator=(const UploadChatFileResponseBody &) = default ;
    UploadChatFileResponseBody& operator=(UploadChatFileResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->contentType_ == nullptr && this->fileName_ == nullptr && this->filePublicUrl_ == nullptr && this->fileRecordId_ == nullptr && this->fileUrl_ == nullptr
        && this->message_ == nullptr && this->objectName_ == nullptr && this->requestId_ == nullptr && this->uploadSignatureUrl_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline UploadChatFileResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline string getContentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
    inline UploadChatFileResponseBody& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline UploadChatFileResponseBody& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // filePublicUrl Field Functions 
    bool hasFilePublicUrl() const { return this->filePublicUrl_ != nullptr;};
    void deleteFilePublicUrl() { this->filePublicUrl_ = nullptr;};
    inline string getFilePublicUrl() const { DARABONBA_PTR_GET_DEFAULT(filePublicUrl_, "") };
    inline UploadChatFileResponseBody& setFilePublicUrl(string filePublicUrl) { DARABONBA_PTR_SET_VALUE(filePublicUrl_, filePublicUrl) };


    // fileRecordId Field Functions 
    bool hasFileRecordId() const { return this->fileRecordId_ != nullptr;};
    void deleteFileRecordId() { this->fileRecordId_ = nullptr;};
    inline string getFileRecordId() const { DARABONBA_PTR_GET_DEFAULT(fileRecordId_, "") };
    inline UploadChatFileResponseBody& setFileRecordId(string fileRecordId) { DARABONBA_PTR_SET_VALUE(fileRecordId_, fileRecordId) };


    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline string getFileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
    inline UploadChatFileResponseBody& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UploadChatFileResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // objectName Field Functions 
    bool hasObjectName() const { return this->objectName_ != nullptr;};
    void deleteObjectName() { this->objectName_ = nullptr;};
    inline string getObjectName() const { DARABONBA_PTR_GET_DEFAULT(objectName_, "") };
    inline UploadChatFileResponseBody& setObjectName(string objectName) { DARABONBA_PTR_SET_VALUE(objectName_, objectName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UploadChatFileResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // uploadSignatureUrl Field Functions 
    bool hasUploadSignatureUrl() const { return this->uploadSignatureUrl_ != nullptr;};
    void deleteUploadSignatureUrl() { this->uploadSignatureUrl_ = nullptr;};
    inline string getUploadSignatureUrl() const { DARABONBA_PTR_GET_DEFAULT(uploadSignatureUrl_, "") };
    inline UploadChatFileResponseBody& setUploadSignatureUrl(string uploadSignatureUrl) { DARABONBA_PTR_SET_VALUE(uploadSignatureUrl_, uploadSignatureUrl) };


  protected:
    // 业务状态码：成功为 200，失败为后端错误码（ERR.* / InvalidParameter.*）
    shared_ptr<string> code_ {};
    // 文件 MIME 类型
    shared_ptr<string> contentType_ {};
    // 文件名
    shared_ptr<string> fileName_ {};
    // 文件公开访问 URL（有效期 1 小时）
    shared_ptr<string> filePublicUrl_ {};
    // 文件记录 ID
    shared_ptr<string> fileRecordId_ {};
    // 文件 remote_url（入库路径）
    shared_ptr<string> fileUrl_ {};
    // 错误描述，成功时为空
    shared_ptr<string> message_ {};
    // OSS 对象路径
    shared_ptr<string> objectName_ {};
    // 请求追踪 ID
    shared_ptr<string> requestId_ {};
    // 签名上传 URL（本接口为后端直传，该字段为空）
    shared_ptr<string> uploadSignatureUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
